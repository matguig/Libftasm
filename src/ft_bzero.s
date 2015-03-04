; **************************************************************************** ;
;                                                                              ;
;                                                        :::      ::::::::     ;
;   ft_bzero.s                                         :+:      :+:    :+:     ;
;                                                    +:+ +:+         +:+       ;
;   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+          ;
;                                                +#+#+#+#+#+   +#+             ;
;   Created: 2015/02/25 18:24:27 by matguig           #+#    #+#               ;
;   Updated: 2015/02/26 11:05:58 by matguig          ###   ########.fr         ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	_ft_bzero
	extern	_ft_memset
	extern	_printf

_ft_bzero:
	enter 16, 0
	mov rdx, rsi
	mov rsi, 0
	mov r15, rdi
	call _ft_memset
	mov rax, r15

	leave
	ret

