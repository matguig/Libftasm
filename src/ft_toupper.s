; **************************************************************************** ;
;                                                                              ;
;                                                        :::      ::::::::     ;
;   ft_toupper.s                                       :+:      :+:    :+:     ;
;                                                    +:+ +:+         +:+       ;
;   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+          ;
;                                                +#+#+#+#+#+   +#+             ;
;   Created: 2015/02/19 00:43:32 by matguig           #+#    #+#               ;
;   Updated: 2015/02/26 11:17:10 by matguig          ###   ########.fr         ;
;                                                                              ;
; **************************************************************************** ;

section .text
	global	_ft_toupper

_ft_toupper:
	enter 16, 0
	pushf

	cmp rdi, 'a'
	jl end
	cmp rdi, 'z'
	jg end
	sub rdi, 32
	jmp end

	end:
		mov rax, rdi

		popf
		leave
		ret


