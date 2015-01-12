typedef enum
{
	REDIRECT_GLACTIVETEXTURE	=	0	,
	REDIRECT_GLATTACHSHADER	=	1	,
	REDIRECT_GLBINDATTRIBLOCATION	=	2	,
	REDIRECT_GLBINDBUFFER	=	3	,
	REDIRECT_GLBINDFRAMEBUFFER	=	4	,
	REDIRECT_GLBINDRENDERBUFFER	=	5	,
	REDIRECT_GLBINDTEXTURE	=	6	,
	REDIRECT_GLBLENDCOLOR	=	7	,
	REDIRECT_GLBLENDEQUATION	=	8	,
	REDIRECT_GLBLENDEQUATIONSEPARATE	=	9	,
	REDIRECT_GLBLENDFUNC	=	10	,
	REDIRECT_GLBLENDFUNCSEPARATE	=	11	,
	REDIRECT_GLBUFFERDATA	=	12	,
	REDIRECT_GLBUFFERSUBDATA	=	13	,
	REDIRECT_GLCHECKFRAMEBUFFERSTATUS	=	14	,
	REDIRECT_GLCLEAR	=	15	,
	REDIRECT_GLCLEARCOLOR	=	16	,
	REDIRECT_GLCLEARDEPTHF	=	17	,
	REDIRECT_GLCLEARSTENCIL	=	18	,
	REDIRECT_GLCOLORMASK	=	19	,
	REDIRECT_GLCOMPILESHADER	=	20	,
	REDIRECT_GLCOMPRESSEDTEXIMAGE2D	=	21	,
	REDIRECT_GLCOMPRESSEDTEXSUBIMAGE2D	=	22	,
	REDIRECT_GLCOPYTEXIMAGE2D	=	23	,
	REDIRECT_GLCOPYTEXSUBIMAGE2D	=	24	,
	REDIRECT_GLCREATEPROGRAM	=	25	,
	REDIRECT_GLCREATESHADER	=	26	,
	REDIRECT_GLCULLFACE	=	27	,
	REDIRECT_GLDELETEBUFFERS	=	28	,
	REDIRECT_GLDELETEFRAMEBUFFERS	=	29	,
	REDIRECT_GLDELETEPROGRAM	=	30	,
	REDIRECT_GLDELETERENDERBUFFERS	=	31	,
	REDIRECT_GLDELETESHADER	=	32	,
	REDIRECT_GLDELETETEXTURES	=	33	,
	REDIRECT_GLDEPTHFUNC	=	34	,
	REDIRECT_GLDEPTHMASK	=	35	,
	REDIRECT_GLDEPTHRANGEF	=	36	,
	REDIRECT_GLDETACHSHADER	=	37	,
	REDIRECT_GLDISABLE	=	38	,
	REDIRECT_GLDISABLEVERTEXATTRIBARRAY	=	39	,
	REDIRECT_GLDRAWARRAYS	=	40	,
	REDIRECT_GLDRAWELEMENTS	=	41	,
	REDIRECT_GLENABLE	=	42	,
	REDIRECT_GLENABLEVERTEXATTRIBARRAY	=	43	,
	REDIRECT_GLFINISH	=	44	,
	REDIRECT_GLFLUSH	=	45	,
	REDIRECT_GLFRAMEBUFFERRENDERBUFFER	=	46	,
	REDIRECT_GLFRAMEBUFFERTEXTURE2D	=	47	,
	REDIRECT_GLFRONTFACE	=	48	,
	REDIRECT_GLGENBUFFERS	=	49	,
	REDIRECT_GLGENERATEMIPMAP	=	50	,
	REDIRECT_GLGENFRAMEBUFFERS	=	51	,
	REDIRECT_GLGENRENDERBUFFERS	=	52	,
	REDIRECT_GLGENTEXTURES	=	53	,
	REDIRECT_GLGETACTIVEATTRIB	=	54	,
	REDIRECT_GLGETACTIVEUNIFORM	=	55	,
	REDIRECT_GLGETATTACHEDSHADERS	=	56	,
	REDIRECT_GLGETATTRIBLOCATION	=	57	,
	REDIRECT_GLGETBOOLEANV	=	58	,
	REDIRECT_GLGETBUFFERPARAMETERIV	=	59	,
	REDIRECT_GLGETERROR	=	60	,
	REDIRECT_GLGETFLOATV	=	61	,
	REDIRECT_GLGETFRAMEBUFFERATTACHMENTPARAMETERIV	=	62	,
	REDIRECT_GLGETINTEGERV	=	63	,
	REDIRECT_GLGETPROGRAMIV	=	64	,
	REDIRECT_GLGETPROGRAMINFOLOG	=	65	,
	REDIRECT_GLGETRENDERBUFFERPARAMETERIV	=	66	,
	REDIRECT_GLGETSHADERIV	=	67	,
	REDIRECT_GLGETSHADERINFOLOG	=	68	,
	REDIRECT_GLGETSHADERPRECISIONFORMAT	=	69	,
	REDIRECT_GLGETSHADERSOURCE	=	70	,
	REDIRECT_GLGETSTRING	=	71	,
	REDIRECT_GLGETTEXPARAMETERFV	=	72	,
	REDIRECT_GLGETTEXPARAMETERIV	=	73	,
	REDIRECT_GLGETUNIFORMFV	=	74	,
	REDIRECT_GLGETUNIFORMIV	=	75	,
	REDIRECT_GLGETUNIFORMLOCATION	=	76	,
	REDIRECT_GLGETVERTEXATTRIBFV	=	77	,
	REDIRECT_GLGETVERTEXATTRIBIV	=	78	,
	REDIRECT_GLGETVERTEXATTRIBPOINTERV	=	79	,
	REDIRECT_GLHINT	=	80	,
	REDIRECT_GLISBUFFER	=	81	,
	REDIRECT_GLISENABLED	=	82	,
	REDIRECT_GLISFRAMEBUFFER	=	83	,
	REDIRECT_GLISPROGRAM	=	84	,
	REDIRECT_GLISRENDERBUFFER	=	85	,
	REDIRECT_GLISSHADER	=	86	,
	REDIRECT_GLISTEXTURE	=	87	,
	REDIRECT_GLLINEWIDTH	=	88	,
	REDIRECT_GLLINKPROGRAM	=	89	,
	REDIRECT_GLPIXELSTOREI	=	90	,
	REDIRECT_GLPOLYGONOFFSET	=	91	,
	REDIRECT_GLREADPIXELS	=	92	,
	REDIRECT_GLRELEASESHADERCOMPILER	=	93	,
	REDIRECT_GLRENDERBUFFERSTORAGE	=	94	,
	REDIRECT_GLSAMPLECOVERAGE	=	95	,
	REDIRECT_GLSCISSOR	=	96	,
	REDIRECT_GLSHADERBINARY	=	97	,
	REDIRECT_GLSHADERSOURCE	=	98	,
	REDIRECT_GLSTENCILFUNC	=	99	,
	REDIRECT_GLSTENCILFUNCSEPARATE	=	100	,
	REDIRECT_GLSTENCILMASK	=	101	,
	REDIRECT_GLSTENCILMASKSEPARATE	=	102	,
	REDIRECT_GLSTENCILOP	=	103	,
	REDIRECT_GLSTENCILOPSEPARATE	=	104	,
	REDIRECT_GLTEXIMAGE2D	=	105	,
	REDIRECT_GLTEXPARAMETERF	=	106	,
	REDIRECT_GLTEXPARAMETERFV	=	107	,
	REDIRECT_GLTEXPARAMETERI	=	108	,
	REDIRECT_GLTEXPARAMETERIV	=	109	,
	REDIRECT_GLTEXSUBIMAGE2D	=	110	,
	REDIRECT_GLUNIFORM1F	=	111	,
	REDIRECT_GLUNIFORM1FV	=	112	,
	REDIRECT_GLUNIFORM1I	=	113	,
	REDIRECT_GLUNIFORM1IV	=	114	,
	REDIRECT_GLUNIFORM2F	=	115	,
	REDIRECT_GLUNIFORM2FV	=	116	,
	REDIRECT_GLUNIFORM2I	=	117	,
	REDIRECT_GLUNIFORM2IV	=	118	,
	REDIRECT_GLUNIFORM3F	=	119	,
	REDIRECT_GLUNIFORM3FV	=	120	,
	REDIRECT_GLUNIFORM3I	=	121	,
	REDIRECT_GLUNIFORM3IV	=	122	,
	REDIRECT_GLUNIFORM4F	=	123	,
	REDIRECT_GLUNIFORM4FV	=	124	,
	REDIRECT_GLUNIFORM4I	=	125	,
	REDIRECT_GLUNIFORM4IV	=	126	,
	REDIRECT_GLUNIFORMMATRIX2FV	=	127	,
	REDIRECT_GLUNIFORMMATRIX3FV	=	128	,
	REDIRECT_GLUNIFORMMATRIX4FV	=	129	,
	REDIRECT_GLUSEPROGRAM	=	130	,
	REDIRECT_GLVALIDATEPROGRAM	=	131	,
	REDIRECT_GLVERTEXATTRIB1F	=	132	,
	REDIRECT_GLVERTEXATTRIB1FV	=	133	,
	REDIRECT_GLVERTEXATTRIB2F	=	134	,
	REDIRECT_GLVERTEXATTRIB2FV	=	135	,
	REDIRECT_GLVERTEXATTRIB3F	=	136	,
	REDIRECT_GLVERTEXATTRIB3FV	=	137	,
	REDIRECT_GLVERTEXATTRIB4F	=	138	,
	REDIRECT_GLVERTEXATTRIB4FV	=	139	,
	REDIRECT_GLVERTEXATTRIBPOINTER	=	140	,
	REDIRECT_GLVIEWPORT	=	141	,
	REDIRECT_GLREADBUFFER	=	142	,
	REDIRECT_GLDRAWRANGEELEMENTS	=	143	,
	REDIRECT_GLTEXIMAGE3D	=	144	,
	REDIRECT_GLTEXSUBIMAGE3D	=	145	,
	REDIRECT_GLCOPYTEXSUBIMAGE3D	=	146	,
	REDIRECT_GLCOMPRESSEDTEXIMAGE3D	=	147	,
	REDIRECT_GLCOMPRESSEDTEXSUBIMAGE3D	=	148	,
	REDIRECT_GLGENQUERIES	=	149	,
	REDIRECT_GLDELETEQUERIES	=	150	,
	REDIRECT_GLISQUERY	=	151	,
	REDIRECT_GLBEGINQUERY	=	152	,
	REDIRECT_GLENDQUERY	=	153	,
	REDIRECT_GLGETQUERYIV	=	154	,
	REDIRECT_GLGETQUERYOBJECTUIV	=	155	,
	REDIRECT_GLUNMAPBUFFER	=	156	,
	REDIRECT_GLGETBUFFERPOINTERV	=	157	,
	REDIRECT_GLDRAWBUFFERS	=	158	,
	REDIRECT_GLUNIFORMMATRIX2X3FV	=	159	,
	REDIRECT_GLUNIFORMMATRIX3X2FV	=	160	,
	REDIRECT_GLUNIFORMMATRIX2X4FV	=	161	,
	REDIRECT_GLUNIFORMMATRIX4X2FV	=	162	,
	REDIRECT_GLUNIFORMMATRIX3X4FV	=	163	,
	REDIRECT_GLUNIFORMMATRIX4X3FV	=	164	,
	REDIRECT_GLBLITFRAMEBUFFER	=	165	,
	REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLE	=	166	,
	REDIRECT_GLFRAMEBUFFERTEXTURELAYER	=	167	,
	REDIRECT_GLMAPBUFFERRANGE	=	168	,
	REDIRECT_GLFLUSHMAPPEDBUFFERRANGE	=	169	,
	REDIRECT_GLBINDVERTEXARRAY	=	170	,
	REDIRECT_GLDELETEVERTEXARRAYS	=	171	,
	REDIRECT_GLGENVERTEXARRAYS	=	172	,
	REDIRECT_GLISVERTEXARRAY	=	173	,
	REDIRECT_GLGETINTEGERI_V	=	174	,
	REDIRECT_GLBEGINTRANSFORMFEEDBACK	=	175	,
	REDIRECT_GLENDTRANSFORMFEEDBACK	=	176	,
	REDIRECT_GLBINDBUFFERRANGE	=	177	,
	REDIRECT_GLBINDBUFFERBASE	=	178	,
	REDIRECT_GLTRANSFORMFEEDBACKVARYINGS	=	179	,
	REDIRECT_GLGETTRANSFORMFEEDBACKVARYING	=	180	,
	REDIRECT_GLVERTEXATTRIBIPOINTER	=	181	,
	REDIRECT_GLGETVERTEXATTRIBIIV	=	182	,
	REDIRECT_GLGETVERTEXATTRIBIUIV	=	183	,
	REDIRECT_GLVERTEXATTRIBI4I	=	184	,
	REDIRECT_GLVERTEXATTRIBI4UI	=	185	,
	REDIRECT_GLVERTEXATTRIBI4IV	=	186	,
	REDIRECT_GLVERTEXATTRIBI4UIV	=	187	,
	REDIRECT_GLGETUNIFORMUIV	=	188	,
	REDIRECT_GLGETFRAGDATALOCATION	=	189	,
	REDIRECT_GLUNIFORM1UI	=	190	,
	REDIRECT_GLUNIFORM2UI	=	191	,
	REDIRECT_GLUNIFORM3UI	=	192	,
	REDIRECT_GLUNIFORM4UI	=	193	,
	REDIRECT_GLUNIFORM1UIV	=	194	,
	REDIRECT_GLUNIFORM2UIV	=	195	,
	REDIRECT_GLUNIFORM3UIV	=	196	,
	REDIRECT_GLUNIFORM4UIV	=	197	,
	REDIRECT_GLCLEARBUFFERIV	=	198	,
	REDIRECT_GLCLEARBUFFERUIV	=	199	,
	REDIRECT_GLCLEARBUFFERFV	=	200	,
	REDIRECT_GLCLEARBUFFERFI	=	201	,
	REDIRECT_GLGETSTRINGI	=	202	,
	REDIRECT_GLCOPYBUFFERSUBDATA	=	203	,
	REDIRECT_GLGETUNIFORMINDICES	=	204	,
	REDIRECT_GLGETACTIVEUNIFORMSIV	=	205	,
	REDIRECT_GLGETUNIFORMBLOCKINDEX	=	206	,
	REDIRECT_GLGETACTIVEUNIFORMBLOCKIV	=	207	,
	REDIRECT_GLGETACTIVEUNIFORMBLOCKNAME	=	208	,
	REDIRECT_GLUNIFORMBLOCKBINDING	=	209	,
	REDIRECT_GLDRAWARRAYSINSTANCED	=	210	,
	REDIRECT_GLDRAWELEMENTSINSTANCED	=	211	,
	REDIRECT_GLFENCESYNC	=	212	,
	REDIRECT_GLISSYNC	=	213	,
	REDIRECT_GLDELETESYNC	=	214	,
	REDIRECT_GLCLIENTWAITSYNC	=	215	,
	REDIRECT_GLWAITSYNC	=	216	,
	REDIRECT_GLGETINTEGER64V	=	217	,
	REDIRECT_GLGETSYNCIV	=	218	,
	REDIRECT_GLGETINTEGER64I_V	=	219	,
	REDIRECT_GLGETBUFFERPARAMETERI64V	=	220	,
	REDIRECT_GLGENSAMPLERS	=	221	,
	REDIRECT_GLDELETESAMPLERS	=	222	,
	REDIRECT_GLISSAMPLER	=	223	,
	REDIRECT_GLBINDSAMPLER	=	224	,
	REDIRECT_GLSAMPLERPARAMETERI	=	225	,
	REDIRECT_GLSAMPLERPARAMETERIV	=	226	,
	REDIRECT_GLSAMPLERPARAMETERF	=	227	,
	REDIRECT_GLSAMPLERPARAMETERFV	=	228	,
	REDIRECT_GLGETSAMPLERPARAMETERIV	=	229	,
	REDIRECT_GLGETSAMPLERPARAMETERFV	=	230	,
	REDIRECT_GLVERTEXATTRIBDIVISOR	=	231	,
	REDIRECT_GLBINDTRANSFORMFEEDBACK	=	232	,
	REDIRECT_GLDELETETRANSFORMFEEDBACKS	=	233	,
	REDIRECT_GLGENTRANSFORMFEEDBACKS	=	234	,
	REDIRECT_GLISTRANSFORMFEEDBACK	=	235	,
	REDIRECT_GLPAUSETRANSFORMFEEDBACK	=	236	,
	REDIRECT_GLRESUMETRANSFORMFEEDBACK	=	237	,
	REDIRECT_GLGETPROGRAMBINARY	=	238	,
	REDIRECT_GLPROGRAMBINARY	=	239	,
	REDIRECT_GLPROGRAMPARAMETERI	=	240	,
	REDIRECT_GLINVALIDATEFRAMEBUFFER	=	241	,
	REDIRECT_GLINVALIDATESUBFRAMEBUFFER	=	242	,
	REDIRECT_GLTEXSTORAGE2D	=	243	,
	REDIRECT_GLTEXSTORAGE3D	=	244	,
	REDIRECT_GLGETINTERNALFORMATIV	=	245	,
	REDIRECT_GLEGLIMAGETARGETTEXTURE2DOES	=	246	,
	REDIRECT_GLEGLIMAGETARGETRENDERBUFFERSTORAGEOES	=	247	,
	REDIRECT_GLGETPROGRAMBINARYOES	=	248	,
	REDIRECT_GLPROGRAMBINARYOES	=	249	,
	REDIRECT_GLMAPBUFFEROES	=	250	,
	REDIRECT_GLUNMAPBUFFEROES	=	251	,
	REDIRECT_GLGETBUFFERPOINTERVOES	=	252	,
	REDIRECT_GLTEXIMAGE3DOES	=	253	,
	REDIRECT_GLTEXSUBIMAGE3DOES	=	254	,
	REDIRECT_GLCOPYTEXSUBIMAGE3DOES	=	255	,
	REDIRECT_GLCOMPRESSEDTEXIMAGE3DOES	=	256	,
	REDIRECT_GLCOMPRESSEDTEXSUBIMAGE3DOES	=	257	,
	REDIRECT_GLFRAMEBUFFERTEXTURE3DOES	=	258	,
	REDIRECT_GLBINDVERTEXARRAYOES	=	259	,
	REDIRECT_GLDELETEVERTEXARRAYSOES	=	260	,
	REDIRECT_GLGENVERTEXARRAYSOES	=	261	,
	REDIRECT_GLISVERTEXARRAYOES	=	262	,
	REDIRECT_GLGETPERFMONITORGROUPSAMD	=	263	,
	REDIRECT_GLGETPERFMONITORCOUNTERSAMD	=	264	,
	REDIRECT_GLGETPERFMONITORGROUPSTRINGAMD	=	265	,
	REDIRECT_GLGETPERFMONITORCOUNTERSTRINGAMD	=	266	,
	REDIRECT_GLGETPERFMONITORCOUNTERINFOAMD	=	267	,
	REDIRECT_GLGENPERFMONITORSAMD	=	268	,
	REDIRECT_GLDELETEPERFMONITORSAMD	=	269	,
	REDIRECT_GLSELECTPERFMONITORCOUNTERSAMD	=	270	,
	REDIRECT_GLBEGINPERFMONITORAMD	=	271	,
	REDIRECT_GLENDPERFMONITORAMD	=	272	,
	REDIRECT_GLGETPERFMONITORCOUNTERDATAAMD	=	273	,
	REDIRECT_GLBLITFRAMEBUFFERANGLE	=	274	,
	REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEANGLE	=	275	,
	REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEAPPLE	=	276	,
	REDIRECT_GLRESOLVEMULTISAMPLEFRAMEBUFFERAPPLE	=	277	,
	REDIRECT_GLLABELOBJECTEXT	=	278	,
	REDIRECT_GLGETOBJECTLABELEXT	=	279	,
	REDIRECT_GLINSERTEVENTMARKEREXT	=	280	,
	REDIRECT_GLPUSHGROUPMARKEREXT	=	281	,
	REDIRECT_GLPOPGROUPMARKEREXT	=	282	,
	REDIRECT_GLDISCARDFRAMEBUFFEREXT	=	283	,
	REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEEXT	=	284	,
	REDIRECT_GLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXT	=	285	,
	REDIRECT_GLMULTIDRAWARRAYSEXT	=	286	,
	REDIRECT_GLMULTIDRAWELEMENTSEXT	=	287	,
	REDIRECT_GLGENQUERIESEXT	=	288	,
	REDIRECT_GLDELETEQUERIESEXT	=	289	,
	REDIRECT_GLISQUERYEXT	=	290	,
	REDIRECT_GLBEGINQUERYEXT	=	291	,
	REDIRECT_GLENDQUERYEXT	=	292	,
	REDIRECT_GLGETQUERYIVEXT	=	293	,
	REDIRECT_GLGETQUERYOBJECTUIVEXT	=	294	,
	REDIRECT_GLGETGRAPHICSRESETSTATUSEXT	=	295	,
	REDIRECT_GLREADNPIXELSEXT	=	296	,
	REDIRECT_GLGETNUNIFORMFVEXT	=	297	,
	REDIRECT_GLGETNUNIFORMIVEXT	=	298	,
	REDIRECT_GLUSEPROGRAMSTAGESEXT	=	299	,
	REDIRECT_GLACTIVESHADERPROGRAMEXT	=	300	,
	REDIRECT_GLCREATESHADERPROGRAMVEXT	=	301	,
	REDIRECT_GLBINDPROGRAMPIPELINEEXT	=	302	,
	REDIRECT_GLDELETEPROGRAMPIPELINESEXT	=	303	,
	REDIRECT_GLGENPROGRAMPIPELINESEXT	=	304	,
	REDIRECT_GLISPROGRAMPIPELINEEXT	=	305	,
	REDIRECT_GLPROGRAMPARAMETERIEXT	=	306	,
	REDIRECT_GLGETPROGRAMPIPELINEIVEXT	=	307	,
	REDIRECT_GLPROGRAMUNIFORM1IEXT	=	308	,
	REDIRECT_GLPROGRAMUNIFORM2IEXT	=	309	,
	REDIRECT_GLPROGRAMUNIFORM3IEXT	=	310	,
	REDIRECT_GLPROGRAMUNIFORM4IEXT	=	311	,
	REDIRECT_GLPROGRAMUNIFORM1FEXT	=	312	,
	REDIRECT_GLPROGRAMUNIFORM2FEXT	=	313	,
	REDIRECT_GLPROGRAMUNIFORM3FEXT	=	314	,
	REDIRECT_GLPROGRAMUNIFORM4FEXT	=	315	,
	REDIRECT_GLPROGRAMUNIFORM1IVEXT	=	316	,
	REDIRECT_GLPROGRAMUNIFORM2IVEXT	=	317	,
	REDIRECT_GLPROGRAMUNIFORM3IVEXT	=	318	,
	REDIRECT_GLPROGRAMUNIFORM4IVEXT	=	319	,
	REDIRECT_GLPROGRAMUNIFORM1FVEXT	=	320	,
	REDIRECT_GLPROGRAMUNIFORM2FVEXT	=	321	,
	REDIRECT_GLPROGRAMUNIFORM3FVEXT	=	322	,
	REDIRECT_GLPROGRAMUNIFORM4FVEXT	=	323	,
	REDIRECT_GLPROGRAMUNIFORMMATRIX2FVEXT	=	324	,
	REDIRECT_GLPROGRAMUNIFORMMATRIX3FVEXT	=	325	,
	REDIRECT_GLPROGRAMUNIFORMMATRIX4FVEXT	=	326	,
	REDIRECT_GLVALIDATEPROGRAMPIPELINEEXT	=	327	,
	REDIRECT_GLGETPROGRAMPIPELINEINFOLOGEXT	=	328	,
	REDIRECT_GLTEXSTORAGE1DEXT	=	329	,
	REDIRECT_GLTEXSTORAGE2DEXT	=	330	,
	REDIRECT_GLTEXSTORAGE3DEXT	=	331	,
	REDIRECT_GLTEXTURESTORAGE1DEXT	=	332	,
	REDIRECT_GLTEXTURESTORAGE2DEXT	=	333	,
	REDIRECT_GLTEXTURESTORAGE3DEXT	=	334	,
	REDIRECT_GLRENDERBUFFERSTORAGEMULTISAMPLEIMG	=	335	,
	REDIRECT_GLFRAMEBUFFERTEXTURE2DMULTISAMPLEIMG	=	336	,
	REDIRECT_GLCOVERAGEMASKNV	=	337	,
	REDIRECT_GLCOVERAGEOPERATIONNV	=	338	,
	REDIRECT_GLDRAWBUFFERSNV	=	339	,
	REDIRECT_GLDELETEFENCESNV	=	340	,
	REDIRECT_GLGENFENCESNV	=	341	,
	REDIRECT_GLISFENCENV	=	342	,
	REDIRECT_GLTESTFENCENV	=	343	,
	REDIRECT_GLGETFENCEIVNV	=	344	,
	REDIRECT_GLFINISHFENCENV	=	345	,
	REDIRECT_GLSETFENCENV	=	346	,
	REDIRECT_GLREADBUFFERNV	=	347	,
	REDIRECT_GLALPHAFUNCQCOM	=	348	,
	REDIRECT_GLGETDRIVERCONTROLSQCOM	=	349	,
	REDIRECT_GLGETDRIVERCONTROLSTRINGQCOM	=	350	,
	REDIRECT_GLENABLEDRIVERCONTROLQCOM	=	351	,
	REDIRECT_GLDISABLEDRIVERCONTROLQCOM	=	352	,
	REDIRECT_GLEXTGETTEXTURESQCOM	=	353	,
	REDIRECT_GLEXTGETBUFFERSQCOM	=	354	,
	REDIRECT_GLEXTGETRENDERBUFFERSQCOM	=	355	,
	REDIRECT_GLEXTGETFRAMEBUFFERSQCOM	=	356	,
	REDIRECT_GLEXTGETTEXLEVELPARAMETERIVQCOM	=	357	,
	REDIRECT_GLEXTTEXOBJECTSTATEOVERRIDEIQCOM	=	358	,
	REDIRECT_GLEXTGETTEXSUBIMAGEQCOM	=	359	,
	REDIRECT_GLEXTGETBUFFERPOINTERVQCOM	=	360	,
	REDIRECT_GLEXTGETSHADERSQCOM	=	361	,
	REDIRECT_GLEXTGETPROGRAMSQCOM	=	362	,
	REDIRECT_GLEXTISPROGRAMBINARYQCOM	=	363	,
	REDIRECT_GLEXTGETPROGRAMBINARYSOURCEQCOM	=	364	,
	REDIRECT_GLSTARTTILINGQCOM	=	365	,
	REDIRECT_GLENDTILINGQCOM	=	366	,
	REDIRECT_EGLGETERROR	=	367	,
	REDIRECT_EGLGETDISPLAY	=	368	,
	REDIRECT_EGLINITIALIZE	=	369	,
	REDIRECT_EGLTERMINATE	=	370	,
	REDIRECT_EGLQUERYSTRING	=	371	,
	REDIRECT_EGLGETCONFIGS	=	372	,
	REDIRECT_EGLCHOOSECONFIG	=	373	,
	REDIRECT_EGLGETCONFIGATTRIB	=	374	,
	REDIRECT_EGLCREATEWINDOWSURFACE	=	375	,
	REDIRECT_EGLCREATEPBUFFERSURFACE	=	376	,
	REDIRECT_EGLCREATEPIXMAPSURFACE	=	377	,
	REDIRECT_EGLDESTROYSURFACE	=	378	,
	REDIRECT_EGLQUERYSURFACE	=	379	,
	REDIRECT_EGLBINDAPI	=	380	,
	REDIRECT_EGLQUERYAPI	=	381	,
	REDIRECT_EGLWAITCLIENT	=	382	,
	REDIRECT_EGLRELEASETHREAD	=	383	,
	REDIRECT_EGLCREATEPBUFFERFROMCLIENTBUFFER	=	384	,
	REDIRECT_EGLSURFACEATTRIB	=	385	,
	REDIRECT_EGLBINDTEXIMAGE	=	386	,
	REDIRECT_EGLRELEASETEXIMAGE	=	387	,
	REDIRECT_EGLSWAPINTERVAL	=	388	,
	REDIRECT_EGLCREATECONTEXT	=	389	,
	REDIRECT_EGLDESTROYCONTEXT	=	390	,
	REDIRECT_EGLMAKECURRENT	=	391	,
	REDIRECT_EGLGETCURRENTCONTEXT	=	392	,
	REDIRECT_EGLGETCURRENTSURFACE	=	393	,
	REDIRECT_EGLGETCURRENTDISPLAY	=	394	,
	REDIRECT_EGLQUERYCONTEXT	=	395	,
	REDIRECT_EGLWAITGL	=	396	,
	REDIRECT_EGLWAITNATIVE	=	397	,
	REDIRECT_EGLSWAPBUFFERS	=	398	,
	REDIRECT_EGLCOPYBUFFERS	=	399	,
	REDIRECT_EGLGETPROCADDRESS	=	400	,
	REDIRECT_EGLLOCKSURFACEKHR	=	401	,
	REDIRECT_EGLUNLOCKSURFACEKHR	=	402	,
	REDIRECT_EGLCREATEIMAGEKHR	=	403	,
	REDIRECT_EGLDESTROYIMAGEKHR	=	404	,
	REDIRECT_EGLCREATESYNCKHR	=	405	,
	REDIRECT_EGLDESTROYSYNCKHR	=	406	,
	REDIRECT_EGLCLIENTWAITSYNCKHR	=	407	,
	REDIRECT_EGLSIGNALSYNCKHR	=	408	,
	REDIRECT_EGLGETSYNCATTRIBKHR	=	409	,
	REDIRECT_EGLCREATEFENCESYNCNV	=	410	,
	REDIRECT_EGLDESTROYSYNCNV	=	411	,
	REDIRECT_EGLFENCENV	=	412	,
	REDIRECT_EGLCLIENTWAITSYNCNV	=	413	,
	REDIRECT_EGLSIGNALSYNCNV	=	414	,
	REDIRECT_EGLGETSYNCATTRIBNV	=	415	,
	REDIRECT_EGLCREATEPIXMAPSURFACEHI	=	416	,
	REDIRECT_EGLCREATEDRMIMAGEMESA	=	417	,
	REDIRECT_EGLEXPORTDRMIMAGEMESA	=	418	,
	REDIRECT_EGLPOSTSUBBUFFERNV	=	419	,
	REDIRECT_EGLQUERYSURFACEPOINTERANGLE	=	420	,
	REDIRECT_EGLGETSYSTEMTIMEFREQUENCYNV	=	421	,
	REDIRECT_EGLGETSYSTEMTIMENV	=	422	,
	REDIRECT_EGLCREATESTREAMKHR	=	423	,
	REDIRECT_EGLDESTROYSTREAMKHR	=	424	,
	REDIRECT_EGLSTREAMATTRIBKHR	=	425	,
	REDIRECT_EGLQUERYSTREAMKHR	=	426	,
	REDIRECT_EGLQUERYSTREAMU64KHR	=	427	,
	REDIRECT_EGLSTREAMCONSUMERGLTEXTUREEXTERNALKHR	=	428	,
	REDIRECT_EGLSTREAMCONSUMERACQUIREKHR	=	429	,
	REDIRECT_EGLSTREAMCONSUMERRELEASEKHR	=	430	,
	REDIRECT_EGLCREATESTREAMPRODUCERSURFACEKHR	=	431	,
	REDIRECT_EGLQUERYSTREAMTIMEKHR	=	432	,
	REDIRECT_EGLGETSTREAMFILEDESCRIPTORKHR	=	433	,
	REDIRECT_EGLCREATESTREAMFROMFILEDESCRIPTORKHR	=	434	,
	REDIRECT_EGLWAITSYNCKHR	=	435	,
	REDIRECT_EGLQUERYNATIVEDISPLAYNV	=	436	,
	REDIRECT_EGLQUERYNATIVEWINDOWNV	=	437	,
	REDIRECT_EGLQUERYNATIVEPIXMAPNV	=	438	,
	REDIRECT_EGLSETBLOBCACHEFUNCSANDROID	=	439	,
	REDIRECT_EGLDUPNATIVEFENCEFDANDROID	=	440	,
	REDIRECT_EGLPRESENTATIONTIMEANDROID	=	441	,