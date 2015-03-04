; **************************************************************************** ;
;                                                                              ;
;                                                        :::      ::::::::     ;
;   ft_strcpy.s                                        :+:      :+:    :+:     ;
;                                                    +:+ +:+         +:+       ;
;   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+          ;
;                                                +#+#+#+#+#+   +#+             ;
;   Created: 2015/02/20 16:45:30 by matguig           #+#    #+#               ;
;   Updated: 2015/02/26 11:12:49 by matguig          ###   ########.fr         ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	_ft_strcpy

_ft_strcpy:
	enter 16, 0
	pushf

	mov rax, rdi
	beginloop:
		mov rcx,[rsi]
		mov [rdi],rcx
		cmp cl, 0
		je end
		inc rsi
		inc rdi
		jmp beginloop
	end:
		popf
		leave
		ret

