; **************************************************************************** ;
;                                                                              ;
;                                                        :::      ::::::::     ;
;   ft_memcpy.s                                        :+:      :+:    :+:     ;
;                                                    +:+ +:+         +:+       ;
;   By: matguig <matguig@student.42.fr>            +#+  +:+       +#+          ;
;                                                +#+#+#+#+#+   +#+             ;
;   Created: 2015/02/22 14:42:15 by matguig           #+#    #+#               ;
;   Updated: 2015/03/04 16:53:28 by matguig          ###   ########.fr         ;
;                                                                              ;
; **************************************************************************** ;

section        .text
		global		_ft_memcpy

	_ft_memcpy:
		enter 16, 0
		pushf

		mov rax, rdi
		mov rcx, rdx
		cld
		rep movsb

		popf
		leave
		ret
