/*
 RTF ANSI character set (\ansi) general map
 These are taken from the ISO-Latin-1 (ISO-8859-1) encodings, with
 a few additions

 Field 1 is the standard character name which the character value in
 field 2 maps onto.  (It doesn't mean "to produce the character in field 1,
 use the value in field 2.)

 The character value may be given either as a single character (which will be
 converted to the ASCII value of the character), or in numeric format, either
 in decimal or 0xyy as hex yy.  Single or double quotes may be used to quote
 characters.*/

int ansi_gen[] =
{
  rtfSC_formula 	 ,0x06,
  rtfSC_nobrkhyphen	 ,0x1e,
  rtfSC_opthyphen	 ,0x1f,
  rtfSC_space		 ,' ',
  rtfSC_exclam  	 ,'!',
  rtfSC_quotedbl	 ,'"',
  rtfSC_numbersign	 ,'#',
  rtfSC_dollar  	 ,'$',
  rtfSC_percent 	 ,'%',
  rtfSC_ampersand	 ,'&',
  rtfSC_quoteright	 ,'\\',
  rtfSC_parenleft	 ,'(',
  rtfSC_parenright	 ,')',
  rtfSC_asterisk	 ,'*',
  rtfSC_plus		 ,'+',
  rtfSC_comma		 ,',',
  rtfSC_hyphen  	 ,'-',
  rtfSC_period  	 ,'.',
  rtfSC_slash		 ,'/',
  rtfSC_zero		 ,'0',
  rtfSC_one		 ,'1',
  rtfSC_two		 ,'2',
  rtfSC_three		 ,'3',
  rtfSC_four		 ,'4',
  rtfSC_five		 ,'5',
  rtfSC_six		 ,'6',
  rtfSC_seven		 ,'7',
  rtfSC_eight		 ,'8',
  rtfSC_nine		 ,'9',
  rtfSC_colon		 ,':',
  rtfSC_semicolon	 ,';',
  rtfSC_less		 ,'<',
  rtfSC_equal		 ,'=',
  rtfSC_greater 	 ,'>',
  rtfSC_question	 ,'?',
  rtfSC_at		 ,'@',
  rtfSC_A		 ,'A',
  rtfSC_B		 ,'B',
  rtfSC_C		 ,'C',
  rtfSC_D		 ,'D',
  rtfSC_E		 ,'E',
  rtfSC_F		 ,'F',
  rtfSC_G		 ,'G',
  rtfSC_H		 ,'H',
  rtfSC_I		 ,'I',
  rtfSC_J		 ,'J',
  rtfSC_K		 ,'K',
  rtfSC_L		 ,'L',
  rtfSC_M		 ,'M',
  rtfSC_N		 ,'N',
  rtfSC_O		 ,'O',
  rtfSC_P		 ,'P',
  rtfSC_Q		 ,'Q',
  rtfSC_R		 ,'R',
  rtfSC_S		 ,'S',
  rtfSC_T		 ,'T',
  rtfSC_U		 ,'U',
  rtfSC_V		 ,'V',
  rtfSC_W		 ,'W',
  rtfSC_X		 ,'X',
  rtfSC_Y		 ,'Y',
  rtfSC_Z		 ,'Z',
  rtfSC_bracketleft	 ,'[',
  rtfSC_backslash	 ,'\\',
  rtfSC_bracketright	 ,']',
  rtfSC_asciicircum	 ,'^',
  rtfSC_underscore	 ,'_',
  rtfSC_quoteleft	 ,'`',
  rtfSC_a		 ,'a',
  rtfSC_b		 ,'b',
  rtfSC_c		 ,'c',
  rtfSC_d		 ,'d',
  rtfSC_e		 ,'e',
  rtfSC_f		 ,'f',
  rtfSC_g		 ,'g',
  rtfSC_h		 ,'h',
  rtfSC_i		 ,'i',
  rtfSC_j		 ,'j',
  rtfSC_k		 ,'k',
  rtfSC_l		 ,'l',
  rtfSC_m		 ,'m',
  rtfSC_n		 ,'n',
  rtfSC_o		 ,'o',
  rtfSC_p		 ,'p',
  rtfSC_q		 ,'q',
  rtfSC_r		 ,'r',
  rtfSC_s		 ,'s',
  rtfSC_t		 ,'t',
  rtfSC_u		 ,'u',
  rtfSC_v		 ,'v',
  rtfSC_w		 ,'w',
  rtfSC_x		 ,'x',
  rtfSC_y		 ,'y',
  rtfSC_z		 ,'z',
  rtfSC_braceleft	 ,'{',
  rtfSC_bar		 ,'|',
  rtfSC_braceright	 ,'}',
  rtfSC_asciitilde	 ,'~',
  rtfSC_nobrkspace	 ,0xa0,
  rtfSC_exclamdown	 ,0xa1,
  rtfSC_cent		 ,0xa2,
  rtfSC_sterling	 ,0xa3,
  rtfSC_currency	 ,0xa4,
  rtfSC_yen		 ,0xa5,
  rtfSC_brokenbar	 ,0xa6,
  rtfSC_section 	 ,0xa7,
  rtfSC_dieresis	 ,0xa8,
  rtfSC_copyright	 ,0xa9,
  rtfSC_ordfeminine	 ,0xaa,
  rtfSC_guillemotleft	 ,0xab,
  rtfSC_logicalnot	 ,0xac,
  rtfSC_opthyphen	 ,0xad,
  rtfSC_registered	 ,0xae,
  rtfSC_macron  	 ,0xaf,
  rtfSC_degree  	 ,0xb0,
  rtfSC_plusminus	 ,0xb1,
  rtfSC_twosuperior	 ,0xb2,
  rtfSC_threesuperior	 ,0xb3,
  rtfSC_acute		 ,0xb4,
  rtfSC_mu		 ,0xb5,
  rtfSC_paragraph	 ,0xb6,
  rtfSC_periodcentered   ,0xb7,
  rtfSC_cedilla 	 ,0xb8,
  rtfSC_onesuperior	 ,0xb9,
  rtfSC_ordmasculine	 ,0xba,
  rtfSC_guillemotright   ,0xbb,
  rtfSC_onequarter	 ,0xbc,
  rtfSC_onehalf 	 ,0xbd,
  rtfSC_threequarters	 ,0xbe,
  rtfSC_questiondown	 ,0xbf,
  rtfSC_Agrave  	 ,0xc0,
  rtfSC_Aacute  	 ,0xc1,
  rtfSC_Acircumflex	 ,0xc2,
  rtfSC_Atilde  	 ,0xc3,
  rtfSC_Adieresis	 ,0xc4,
  rtfSC_Aring		 ,0xc5,
  rtfSC_AE		 ,0xc6,
  rtfSC_Ccedilla	 ,0xc7,
  rtfSC_Egrave  	 ,0xc8,
  rtfSC_Eacute  	 ,0xc9,
  rtfSC_Ecircumflex	 ,0xca,
  rtfSC_Edieresis	 ,0xcb,
  rtfSC_Igrave  	 ,0xcc,
  rtfSC_Iacute  	 ,0xcd,
  rtfSC_Icircumflex	 ,0xce,
  rtfSC_Idieresis	 ,0xcf,
  rtfSC_Eth		 ,0xd0,
  rtfSC_Ntilde  	 ,0xd1,
  rtfSC_Ograve  	 ,0xd2,
  rtfSC_Oacute  	 ,0xd3,
  rtfSC_Ocircumflex	 ,0xd4,
  rtfSC_Otilde  	 ,0xd5,
  rtfSC_Odieresis	 ,0xd6,
  rtfSC_multiply	 ,0xd7,
  rtfSC_Oslash  	 ,0xd8,
  rtfSC_Ugrave  	 ,0xd9,
  rtfSC_Uacute  	 ,0xda,
  rtfSC_Ucircumflex	 ,0xdb,
  rtfSC_Udieresis	 ,0xdc,
  rtfSC_Yacute  	 ,0xdd,
  rtfSC_Thorn		 ,0xde,
  rtfSC_germandbls	 ,0xdf,
  rtfSC_agrave  	 ,0xe0,
  rtfSC_aacute  	 ,0xe1,
  rtfSC_acircumflex	 ,0xe2,
  rtfSC_atilde  	 ,0xe3,
  rtfSC_adieresis	 ,0xe4,
  rtfSC_aring		 ,0xe5,
  rtfSC_ae		 ,0xe6,
  rtfSC_ccedilla	 ,0xe7,
  rtfSC_egrave  	 ,0xe8,
  rtfSC_eacute  	 ,0xe9,
  rtfSC_ecircumflex	 ,0xea,
  rtfSC_edieresis	 ,0xeb,
  rtfSC_igrave  	 ,0xec,
  rtfSC_iacute  	 ,0xed,
  rtfSC_icircumflex	 ,0xee,
  rtfSC_idieresis	 ,0xef,
  rtfSC_eth		 ,0xf0,
  rtfSC_ntilde  	 ,0xf1,
  rtfSC_ograve  	 ,0xf2,
  rtfSC_oacute  	 ,0xf3,
  rtfSC_ocircumflex	 ,0xf4,
  rtfSC_otilde  	 ,0xf5,
  rtfSC_odieresis	 ,0xf6,
  rtfSC_divide  	 ,0xf7,
  rtfSC_oslash  	 ,0xf8,
  rtfSC_ugrave  	 ,0xf9,
  rtfSC_uacute  	 ,0xfa,
  rtfSC_ucircumflex	 ,0xfb,
  rtfSC_udieresis	 ,0xfc,
  rtfSC_yacute  	 ,0xfd,
  rtfSC_thorn		 ,0xfe,
  rtfSC_ydieresis	 ,0xff
};
