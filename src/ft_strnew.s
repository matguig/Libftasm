; **************************************************************************** ;
;                                                                              ;
;                                                        :::      ::::::::     ;
;   ft_strnew.s                                        :+:      :+:    :+:     ;
;                                                    +:+ +:+         +:+       ;
;   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+          ;
;                                                +#+#+#+#+#+   +#+             ;
;   Created: 2015/02/27 17:23:26 by matguig           #+#    #+#               ;
;   Updated: 2015/02/27 17:23:43 by matguig          ###   ########.fr         ;
;                                                                              ;
; **************************************************************************** ;

%define SIZEOFCHAR		8

section .text
	global _ft_strnew
	extern _malloc
	extern _ft_bzero

_ft_strnew:
	enter 16, 0
	pushf

	inc rdi
	lea r12, [rdi * SIZEOFCHAR]
	mov rdi, r12
	call _malloc

	mov rdi, rax
	mov rsi, r12
	call _ft_bzero

	popf
	leave
	ret
