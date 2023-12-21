#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void POpusCodec.OpusDecoder`1::.ctor(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
// 0x00000002 T[] POpusCodec.OpusDecoder`1::DecodePacket(Photon.Voice.FrameBuffer&)
// 0x00000003 T[] POpusCodec.OpusDecoder`1::DecodeEndOfStream()
// 0x00000004 System.Void POpusCodec.OpusDecoder`1::Dispose()
// 0x00000005 System.Void POpusCodec.OpusDecoder`1::.cctor()
// 0x00000006 System.String POpusCodec.OpusLib::get_Version()
extern void OpusLib_get_Version_m1A79C7D0CA41F837FA240628A0B5A4BB22BD5655 (void);
// 0x00000007 System.Void POpusCodec.OpusEncoder::set_EncoderDelay(POpusCodec.Enums.Delay)
extern void OpusEncoder_set_EncoderDelay_mE4FE0FDD205A223B2CB3885F97936FAC8E7454B1 (void);
// 0x00000008 POpusCodec.Enums.Delay POpusCodec.OpusEncoder::get_EncoderDelay()
extern void OpusEncoder_get_EncoderDelay_mDA660B10BCEAA5EBDD1BF746CE78F2DC059D7622 (void);
// 0x00000009 System.Int32 POpusCodec.OpusEncoder::get_Bitrate()
extern void OpusEncoder_get_Bitrate_m747FF675E77777295BCAF84851C98DC256F9205D (void);
// 0x0000000A System.Void POpusCodec.OpusEncoder::set_Bitrate(System.Int32)
extern void OpusEncoder_set_Bitrate_mC5DD3C897C5008667846B4937E3CD72BA8E7B1CA (void);
// 0x0000000B System.Void POpusCodec.OpusEncoder::set_UseInbandFEC(System.Boolean)
extern void OpusEncoder_set_UseInbandFEC_m83C3A32495B59E54F133B724C5D94993C40CB1F2 (void);
// 0x0000000C System.Void POpusCodec.OpusEncoder::set_PacketLossPercentage(System.Int32)
extern void OpusEncoder_set_PacketLossPercentage_m5D3A2EBEB66D2D4C6F40ABBC639F7F52B5331A6E (void);
// 0x0000000D System.Void POpusCodec.OpusEncoder::.ctor(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,System.Int32,POpusCodec.Enums.OpusApplicationType,POpusCodec.Enums.Delay)
extern void OpusEncoder__ctor_m32A64140184D7DD002BDC6D8F508A50D732CE413 (void);
// 0x0000000E System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Single[])
extern void OpusEncoder_Encode_m0B5F49BCE218DFF1F5A1FB555D03E74F0B3AF487 (void);
// 0x0000000F System.ArraySegment`1<System.Byte> POpusCodec.OpusEncoder::Encode(System.Int16[])
extern void OpusEncoder_Encode_m2273A0992EA1E5207015BD406748B5A6E198BB95 (void);
// 0x00000010 System.Void POpusCodec.OpusEncoder::Dispose()
extern void OpusEncoder_Dispose_m7F077E1955C9CFA62CA995F486A24C7DDEA661B8 (void);
// 0x00000011 System.Void POpusCodec.OpusEncoder::.cctor()
extern void OpusEncoder__cctor_m88A202EB024BB9C556D451353A9AD818445ABF8A (void);
// 0x00000012 System.Void POpusCodec.OpusException::.ctor(POpusCodec.Enums.OpusStatusCode,System.String)
extern void OpusException__ctor_m1705E7FFAEB6F8EF41F212F5B568B24E5F8F6D1B (void);
// 0x00000013 System.Int32 POpusCodec.Wrapper::opus_encoder_get_size(POpusCodec.Enums.Channels)
extern void Wrapper_opus_encoder_get_size_m7893FB71D82FFEAAF1BD9CD5679A6FA27F534496 (void);
// 0x00000014 POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_encoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
extern void Wrapper_opus_encoder_init_mEE085D640D02C380608E35AE3D417621D0A04896 (void);
// 0x00000015 System.IntPtr POpusCodec.Wrapper::opus_get_version_string()
extern void Wrapper_opus_get_version_string_mF95D4EAC6118B15634187C9C30A1365C76C9153D (void);
// 0x00000016 System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[],System.Int32)
extern void Wrapper_opus_encode_m9278B43E3093634686166CD9864FBCDB9866BAD1 (void);
// 0x00000017 System.Int32 POpusCodec.Wrapper::opus_encode_float(System.IntPtr,System.Single[],System.Int32,System.Byte[],System.Int32)
extern void Wrapper_opus_encode_float_m7E0A1A5FA82E813C8E5EB74D555E0FFB50EA5D1D (void);
// 0x00000018 System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_set(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern void Wrapper_opus_encoder_ctl_set_m7CC9B669B6B619024F2E9EEA9DA70F20579CD876 (void);
// 0x00000019 System.Int32 POpusCodec.Wrapper::opus_encoder_ctl_get(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest,System.Int32&)
extern void Wrapper_opus_encoder_ctl_get_mFF9CE457AF53530890A3E33EA80CCEEC69BF98E2 (void);
// 0x0000001A System.Int32 POpusCodec.Wrapper::opus_decoder_get_size(POpusCodec.Enums.Channels)
extern void Wrapper_opus_decoder_get_size_m9F89F5A30C03703571A85D33CD8E214F9CBB7298 (void);
// 0x0000001B POpusCodec.Enums.OpusStatusCode POpusCodec.Wrapper::opus_decoder_init(System.IntPtr,POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
extern void Wrapper_opus_decoder_init_m35A5A8D8A1647D712FCE29E394ECB6CD78EB8448 (void);
// 0x0000001C System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,System.IntPtr,System.Int32,System.Int16[],System.Int32,System.Int32)
extern void Wrapper_opus_decode_m0245172355BD7636AAF0AC87441DACBC615652C2 (void);
// 0x0000001D System.Int32 POpusCodec.Wrapper::opus_decode_float(System.IntPtr,System.IntPtr,System.Int32,System.Single[],System.Int32,System.Int32)
extern void Wrapper_opus_decode_float_m902402D35F68B745F117C423DA733DA0CA82FC4D (void);
// 0x0000001E System.Int32 POpusCodec.Wrapper::opus_packet_get_bandwidth(System.IntPtr)
extern void Wrapper_opus_packet_get_bandwidth_m24BE628F3F59872BF13F4D90817120F81A9CAD5C (void);
// 0x0000001F System.IntPtr POpusCodec.Wrapper::opus_strerror(POpusCodec.Enums.OpusStatusCode)
extern void Wrapper_opus_strerror_mBC12B8DCA81178B1445809EECF8451C92E122429 (void);
// 0x00000020 System.IntPtr POpusCodec.Wrapper::opus_encoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels,POpusCodec.Enums.OpusApplicationType)
extern void Wrapper_opus_encoder_create_m9F07A8604A4247888FF2A7D15671B2DD1A46508A (void);
// 0x00000021 System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Int16[],System.Int32,System.Byte[])
extern void Wrapper_opus_encode_m7C4F9B92756053CD3FE12880C3C990DDE723651A (void);
// 0x00000022 System.Int32 POpusCodec.Wrapper::opus_encode(System.IntPtr,System.Single[],System.Int32,System.Byte[])
extern void Wrapper_opus_encode_m9835EFDE2D18F5AEECA65B99A7DFE8430A342576 (void);
// 0x00000023 System.Void POpusCodec.Wrapper::opus_encoder_destroy(System.IntPtr)
extern void Wrapper_opus_encoder_destroy_m24360871EE0997656B6E10C3FF3D3D9060AAD1D5 (void);
// 0x00000024 System.Int32 POpusCodec.Wrapper::get_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlGetRequest)
extern void Wrapper_get_opus_encoder_ctl_mBAEC1384A74E7A0F3872D6FA6C5FC417EB949DDC (void);
// 0x00000025 System.Void POpusCodec.Wrapper::set_opus_encoder_ctl(System.IntPtr,POpusCodec.Enums.OpusCtlSetRequest,System.Int32)
extern void Wrapper_set_opus_encoder_ctl_m9C67EDA0D9F8282490CCC4586BEBA36C3749DDFE (void);
// 0x00000026 System.IntPtr POpusCodec.Wrapper::opus_decoder_create(POpusCodec.Enums.SamplingRate,POpusCodec.Enums.Channels)
extern void Wrapper_opus_decoder_create_m2C9439D91CA04BD719933E14374B6E2968B74E91 (void);
// 0x00000027 System.Void POpusCodec.Wrapper::opus_decoder_destroy(System.IntPtr)
extern void Wrapper_opus_decoder_destroy_mC5950248386996DFAEB69F4B17BC709D81647E4B (void);
// 0x00000028 System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,Photon.Voice.FrameBuffer,System.Int16[],System.Int32,System.Int32)
extern void Wrapper_opus_decode_mFC6B90330C5DFEE5D375D0361A7F1A6C26C8FD9F (void);
// 0x00000029 System.Int32 POpusCodec.Wrapper::opus_decode(System.IntPtr,Photon.Voice.FrameBuffer,System.Single[],System.Int32,System.Int32)
extern void Wrapper_opus_decode_m875FCB70DD0EFD5669E8C404DB2BA265E58EFB4E (void);
// 0x0000002A System.Void POpusCodec.Wrapper::HandleStatusCode(POpusCodec.Enums.OpusStatusCode)
extern void Wrapper_HandleStatusCode_mC2703EBE709E2BF8D2B5D0FA6B06EC4423B66C3E (void);
// 0x0000002B System.Void Photon.Voice.AudioUtil::Resample(T[],T[],System.Int32,System.Int32)
// 0x0000002C System.Void Photon.Voice.AudioUtil::ResampleAndConvert(System.Single[],System.Int16[],System.Int32,System.Int32)
extern void AudioUtil_ResampleAndConvert_m49ED11F3FF92BE094E5013FD27D43588299B7A92 (void);
// 0x0000002D System.Void Photon.Voice.AudioUtil::Convert(System.Single[],System.Int16[],System.Int32)
extern void AudioUtil_Convert_mFD94A7276A0D0AF96A0BB7A94327668E738CF1CC (void);
// 0x0000002E System.Void Photon.Voice.AudioUtil::Convert(System.Int16[],System.Single[],System.Int32)
extern void AudioUtil_Convert_mD75A46A4751D793107EFC13EB5A310899A9E18DE (void);
// 0x0000002F System.Void Photon.Voice.AudioUtil/TempoUp`1::Begin(System.Int32,System.Int32,System.Int32)
// 0x00000030 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::Process(T[],T[])
// 0x00000031 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::End(T[])
// 0x00000032 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::processFloat(System.Single[],System.Single[])
// 0x00000033 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::endFloat(System.Single[])
// 0x00000034 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::processShort(System.Int16[],System.Int16[])
// 0x00000035 System.Int32 Photon.Voice.AudioUtil/TempoUp`1::endShort(System.Int16[])
// 0x00000036 System.Void Photon.Voice.AudioUtil/TempoUp`1::.ctor()
// 0x00000037 System.Void Photon.Voice.AudioUtil/Resampler`1::.ctor(System.Int32,System.Int32)
// 0x00000038 T[] Photon.Voice.AudioUtil/Resampler`1::Process(T[])
// 0x00000039 System.Void Photon.Voice.AudioUtil/Resampler`1::Dispose()
// 0x0000003A System.Single Photon.Voice.AudioUtil/ILevelMeter::get_AccumAvgPeakAmp()
// 0x0000003B System.Void Photon.Voice.AudioUtil/ILevelMeter::ResetAccumAvgPeakAmp()
// 0x0000003C System.Single Photon.Voice.AudioUtil/LevelMeterDummy::get_AccumAvgPeakAmp()
extern void LevelMeterDummy_get_AccumAvgPeakAmp_m3287F0881EDAB941670783E05F4C1E628355D428 (void);
// 0x0000003D System.Void Photon.Voice.AudioUtil/LevelMeterDummy::ResetAccumAvgPeakAmp()
extern void LevelMeterDummy_ResetAccumAvgPeakAmp_m90A3A188F3DF4B052AAF7F1D32D7866783FF9A99 (void);
// 0x0000003E System.Void Photon.Voice.AudioUtil/LevelMeterDummy::.ctor()
extern void LevelMeterDummy__ctor_m558F4620D936B6FBBA1C3D7E8FFFD769C070E02D (void);
// 0x0000003F System.Void Photon.Voice.AudioUtil/LevelMeter`1::.ctor(System.Int32,System.Int32)
// 0x00000040 System.Single Photon.Voice.AudioUtil/LevelMeter`1::get_AccumAvgPeakAmp()
// 0x00000041 System.Void Photon.Voice.AudioUtil/LevelMeter`1::ResetAccumAvgPeakAmp()
// 0x00000042 T[] Photon.Voice.AudioUtil/LevelMeter`1::Process(T[])
// 0x00000043 System.Void Photon.Voice.AudioUtil/LevelMeter`1::Dispose()
// 0x00000044 System.Void Photon.Voice.AudioUtil/LevelMeterFloat::.ctor(System.Int32,System.Int32)
extern void LevelMeterFloat__ctor_mE0A584CF788DCB5BD4713D50EE9923F52D8B9409 (void);
// 0x00000045 System.Single[] Photon.Voice.AudioUtil/LevelMeterFloat::Process(System.Single[])
extern void LevelMeterFloat_Process_mB571DD0E5E3DFC46ABA36F8A0FC124F31A93B077 (void);
// 0x00000046 System.Void Photon.Voice.AudioUtil/LevelMeterShort::.ctor(System.Int32,System.Int32)
extern void LevelMeterShort__ctor_m052D37BD55E12C250D8B996312CD0F93F4622976 (void);
// 0x00000047 System.Int16[] Photon.Voice.AudioUtil/LevelMeterShort::Process(System.Int16[])
extern void LevelMeterShort_Process_m2E29A58E6FDE53392314140C700A80AC18142EB1 (void);
// 0x00000048 System.Boolean Photon.Voice.AudioUtil/IVoiceDetector::get_On()
// 0x00000049 System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_On(System.Boolean)
// 0x0000004A System.Single Photon.Voice.AudioUtil/IVoiceDetector::get_Threshold()
// 0x0000004B System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_Threshold(System.Single)
// 0x0000004C System.Int32 Photon.Voice.AudioUtil/IVoiceDetector::get_ActivityDelayMs()
// 0x0000004D System.Void Photon.Voice.AudioUtil/IVoiceDetector::set_ActivityDelayMs(System.Int32)
// 0x0000004E System.Boolean Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::get_IsCalibrating()
// 0x0000004F System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::.ctor(Photon.Voice.AudioUtil/IVoiceDetector,Photon.Voice.AudioUtil/ILevelMeter,System.Int32,System.Int32)
// 0x00000050 System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::Calibrate(System.Int32,System.Action`1<System.Single>)
// 0x00000051 T[] Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::Process(T[])
// 0x00000052 System.Void Photon.Voice.AudioUtil/VoiceDetectorCalibration`1::Dispose()
// 0x00000053 System.Boolean Photon.Voice.AudioUtil/VoiceDetectorDummy::get_On()
extern void VoiceDetectorDummy_get_On_mD6C1D2DD9818F35A49990405F990AEB3E6EDC0B0 (void);
// 0x00000054 System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_On(System.Boolean)
extern void VoiceDetectorDummy_set_On_m8F60EBFBC1AF288B5173FA13BD9F5A99006744EF (void);
// 0x00000055 System.Single Photon.Voice.AudioUtil/VoiceDetectorDummy::get_Threshold()
extern void VoiceDetectorDummy_get_Threshold_mAA4FDE6C1E3859382966D3A09649482D26EE3FB1 (void);
// 0x00000056 System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_Threshold(System.Single)
extern void VoiceDetectorDummy_set_Threshold_m1165DBF8A743017ACE185F1D3EE3050F79A952D6 (void);
// 0x00000057 System.Int32 Photon.Voice.AudioUtil/VoiceDetectorDummy::get_ActivityDelayMs()
extern void VoiceDetectorDummy_get_ActivityDelayMs_m5D30D1548EBEE935A28C351FB5D904A2EFD1AA5A (void);
// 0x00000058 System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::set_ActivityDelayMs(System.Int32)
extern void VoiceDetectorDummy_set_ActivityDelayMs_mBB7F92B3A99A3C87ED2BB51DAB57BBF58E5B44A4 (void);
// 0x00000059 System.Void Photon.Voice.AudioUtil/VoiceDetectorDummy::.ctor()
extern void VoiceDetectorDummy__ctor_m5A39825C35A674D8A1FD8386619730554FE20D6F (void);
// 0x0000005A System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::get_On()
// 0x0000005B System.Void Photon.Voice.AudioUtil/VoiceDetector`1::set_On(System.Boolean)
// 0x0000005C System.Single Photon.Voice.AudioUtil/VoiceDetector`1::get_Threshold()
// 0x0000005D System.Void Photon.Voice.AudioUtil/VoiceDetector`1::set_Threshold(System.Single)
// 0x0000005E System.Boolean Photon.Voice.AudioUtil/VoiceDetector`1::get_Detected()
// 0x0000005F System.Void Photon.Voice.AudioUtil/VoiceDetector`1::set_Detected(System.Boolean)
// 0x00000060 System.Void Photon.Voice.AudioUtil/VoiceDetector`1::set_DetectedTime(System.DateTime)
// 0x00000061 System.Int32 Photon.Voice.AudioUtil/VoiceDetector`1::get_ActivityDelayMs()
// 0x00000062 System.Void Photon.Voice.AudioUtil/VoiceDetector`1::set_ActivityDelayMs(System.Int32)
// 0x00000063 System.Void Photon.Voice.AudioUtil/VoiceDetector`1::.ctor(System.Int32,System.Int32)
// 0x00000064 T[] Photon.Voice.AudioUtil/VoiceDetector`1::Process(T[])
// 0x00000065 System.Void Photon.Voice.AudioUtil/VoiceDetector`1::Dispose()
// 0x00000066 System.Void Photon.Voice.AudioUtil/VoiceDetectorFloat::.ctor(System.Int32,System.Int32)
extern void VoiceDetectorFloat__ctor_m001D2033EEC8BF5CE55619A8A2195498F1D3E9E6 (void);
// 0x00000067 System.Single[] Photon.Voice.AudioUtil/VoiceDetectorFloat::Process(System.Single[])
extern void VoiceDetectorFloat_Process_m4F93C37AFD695205C7DA5D1EBE0D4C2A5E49D446 (void);
// 0x00000068 System.Void Photon.Voice.AudioUtil/VoiceDetectorShort::.ctor(System.Int32,System.Int32)
extern void VoiceDetectorShort__ctor_m56318C396C1C50EEBAA08946E31FCCC7D2F3B9E2 (void);
// 0x00000069 System.Int16[] Photon.Voice.AudioUtil/VoiceDetectorShort::Process(System.Int16[])
extern void VoiceDetectorShort_Process_m8FB59C6696F94A1AC4635FFA4A990C2742C5C666 (void);
// 0x0000006A System.Boolean Photon.Voice.IAudioOut`1::get_IsPlaying()
// 0x0000006B System.Void Photon.Voice.IAudioOut`1::Start(System.Int32,System.Int32,System.Int32)
// 0x0000006C System.Void Photon.Voice.IAudioOut`1::Flush()
// 0x0000006D System.Void Photon.Voice.IAudioOut`1::Stop()
// 0x0000006E System.Void Photon.Voice.IAudioOut`1::Push(T[])
// 0x0000006F System.Void Photon.Voice.IAudioOut`1::Service()
// 0x00000070 System.Int32 Photon.Voice.IAudioOut`1::get_Lag()
// 0x00000071 System.Void Photon.Voice.AudioOutDelayControl::.ctor()
extern void AudioOutDelayControl__ctor_mA8715AF7479E275CE5EE57CFFE4ADB949BA5593F (void);
// 0x00000072 System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::.ctor()
extern void PlayDelayConfig__ctor_m09B8A8AF1B11B5A25AE72D6F6B3FA5C39D9EC019 (void);
// 0x00000073 System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Low()
extern void PlayDelayConfig_get_Low_m4E1FB56CF693205A74A7AF170385703E47EFCF39 (void);
// 0x00000074 System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Low(System.Int32)
extern void PlayDelayConfig_set_Low_mDE42627955A5190654C9FE796E19FCD70700858B (void);
// 0x00000075 System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_High()
extern void PlayDelayConfig_get_High_m7B5AD1D474489A8CE5E8B8AD8F8C3677720671FD (void);
// 0x00000076 System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_High(System.Int32)
extern void PlayDelayConfig_set_High_m6E870865B972E6A9BCA9572077ECF443A6330425 (void);
// 0x00000077 System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_Max()
extern void PlayDelayConfig_get_Max_mA846AA0A1597AACB2E830A85100F09FB387E157D (void);
// 0x00000078 System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_Max(System.Int32)
extern void PlayDelayConfig_set_Max_m83552A14AC33B8B0E4A945EE85F361E82D4B8828 (void);
// 0x00000079 System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::get_SpeedUpPerc()
extern void PlayDelayConfig_get_SpeedUpPerc_mA84945452E49F62F36A8857A151CCD175E231FC0 (void);
// 0x0000007A System.Void Photon.Voice.AudioOutDelayControl/PlayDelayConfig::set_SpeedUpPerc(System.Int32)
extern void PlayDelayConfig_set_SpeedUpPerc_m45708D62157C41E2DD7BC43D6FE78AE71F04E0EC (void);
// 0x0000007B Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Clone()
extern void PlayDelayConfig_Clone_mD814CF689EDC070E6CDD55B09DD4FB4CC9EDD08D (void);
// 0x0000007C System.Int32 Photon.Voice.AudioOutDelayControl`1::get_OutPos()
// 0x0000007D System.Void Photon.Voice.AudioOutDelayControl`1::OutCreate(System.Int32,System.Int32,System.Int32)
// 0x0000007E System.Void Photon.Voice.AudioOutDelayControl`1::OutStart()
// 0x0000007F System.Void Photon.Voice.AudioOutDelayControl`1::OutWrite(T[],System.Int32)
// 0x00000080 System.Void Photon.Voice.AudioOutDelayControl`1::.ctor(System.Boolean,Photon.Voice.AudioOutDelayControl/PlayDelayConfig,Photon.Voice.ILogger,System.String,System.Boolean)
// 0x00000081 System.Int32 Photon.Voice.AudioOutDelayControl`1::get_Lag()
// 0x00000082 System.Boolean Photon.Voice.AudioOutDelayControl`1::get_IsFlushed()
// 0x00000083 System.Boolean Photon.Voice.AudioOutDelayControl`1::get_IsPlaying()
// 0x00000084 System.Void Photon.Voice.AudioOutDelayControl`1::Start(System.Int32,System.Int32,System.Int32)
// 0x00000085 System.Boolean Photon.Voice.AudioOutDelayControl`1::processFrame(T[],System.Int32)
// 0x00000086 System.Void Photon.Voice.AudioOutDelayControl`1::Service()
// 0x00000087 System.Int32 Photon.Voice.AudioOutDelayControl`1::writeResampled(T[],System.Int32)
// 0x00000088 System.Void Photon.Voice.AudioOutDelayControl`1::Push(T[])
// 0x00000089 System.Void Photon.Voice.AudioOutDelayControl`1::Flush()
// 0x0000008A System.Void Photon.Voice.AudioOutDelayControl`1::Stop()
// 0x0000008B System.Void Photon.Voice.DeviceInfo::.ctor(System.Boolean,System.Int32,System.String,System.String)
extern void DeviceInfo__ctor_m96173DA61BDF3BD1456C5372309CA4B401883895 (void);
// 0x0000008C System.Void Photon.Voice.DeviceInfo::.ctor(System.String)
extern void DeviceInfo__ctor_m8635D2EAEDFC320C1D80BD2B053B584D058F7BC6 (void);
// 0x0000008D System.Void Photon.Voice.DeviceInfo::set_IsDefault(System.Boolean)
extern void DeviceInfo_set_IsDefault_m501D5F69C9B4CCCE9AB649094DF7E811F4FAB43A (void);
// 0x0000008E System.Int32 Photon.Voice.DeviceInfo::get_IDInt()
extern void DeviceInfo_get_IDInt_m26B46F8B9F8267BCA710CB3634D8E62928B96954 (void);
// 0x0000008F System.Void Photon.Voice.DeviceInfo::set_IDInt(System.Int32)
extern void DeviceInfo_set_IDInt_mFF41782CC6BCDD559B4C4125CC865A8CB1FBA9AC (void);
// 0x00000090 System.String Photon.Voice.DeviceInfo::get_IDString()
extern void DeviceInfo_get_IDString_mCEA67E532D1957B1EE0E4528A30C0FB130752E6D (void);
// 0x00000091 System.Void Photon.Voice.DeviceInfo::set_IDString(System.String)
extern void DeviceInfo_set_IDString_m92E767D2C8B050FBDC6FEA08B9C09D453444B024 (void);
// 0x00000092 System.String Photon.Voice.DeviceInfo::get_Name()
extern void DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53 (void);
// 0x00000093 System.Void Photon.Voice.DeviceInfo::set_Name(System.String)
extern void DeviceInfo_set_Name_m8D6019A448A977493BD7A2564E1FC92FDE1BB1F1 (void);
// 0x00000094 System.Boolean Photon.Voice.DeviceInfo::Equals(System.Object)
extern void DeviceInfo_Equals_m59BEFBB70BBD0F425EC8908A68E2ECE0918CA04B (void);
// 0x00000095 System.Int32 Photon.Voice.DeviceInfo::GetHashCode()
extern void DeviceInfo_GetHashCode_mF7E8C7FD032FDC98F715A18514A4F48E793F24CD (void);
// 0x00000096 System.String Photon.Voice.DeviceInfo::ToString()
extern void DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17 (void);
// 0x00000097 System.Void Photon.Voice.DeviceInfo::.cctor()
extern void DeviceInfo__cctor_m3C1C0C3053248D748AA6AD3A0CE5BC1F4009BAF5 (void);
// 0x00000098 System.Boolean Photon.Voice.IDeviceEnumerator::get_IsSupported()
// 0x00000099 System.String Photon.Voice.IDeviceEnumerator::get_Error()
// 0x0000009A System.Void Photon.Voice.DeviceEnumeratorBase::.ctor(Photon.Voice.ILogger)
extern void DeviceEnumeratorBase__ctor_mB199669E30C7BADB1FA450D74DB2C892C65379D9 (void);
// 0x0000009B System.Boolean Photon.Voice.DeviceEnumeratorBase::get_IsSupported()
extern void DeviceEnumeratorBase_get_IsSupported_m12714BF353A4218CB150217B69AAFFEAB4298969 (void);
// 0x0000009C System.String Photon.Voice.DeviceEnumeratorBase::get_Error()
extern void DeviceEnumeratorBase_get_Error_mCC842DB04138D4AE8D241CA7743B0104E367B39A (void);
// 0x0000009D System.Collections.Generic.IEnumerator`1<Photon.Voice.DeviceInfo> Photon.Voice.DeviceEnumeratorBase::GetEnumerator()
extern void DeviceEnumeratorBase_GetEnumerator_mDE5B5A19C1202CBA0E9D4DE55AFB4A8A67C925B7 (void);
// 0x0000009E System.Void Photon.Voice.DeviceEnumeratorBase::Refresh()
// 0x0000009F System.Collections.IEnumerator Photon.Voice.DeviceEnumeratorBase::System.Collections.IEnumerable.GetEnumerator()
extern void DeviceEnumeratorBase_System_Collections_IEnumerable_GetEnumerator_m317B2D4499CB6DA6F4BAEB07C67093EE12D3E1DE (void);
// 0x000000A0 System.Void Photon.Voice.DeviceEnumeratorBase::Dispose()
// 0x000000A1 System.Boolean Photon.Voice.DeviceEnumeratorNotSupported::get_IsSupported()
extern void DeviceEnumeratorNotSupported_get_IsSupported_m53026DA5BF15C74C98558A11FD606A857F0B8B16 (void);
// 0x000000A2 System.Void Photon.Voice.DeviceEnumeratorNotSupported::.ctor(Photon.Voice.ILogger,System.String)
extern void DeviceEnumeratorNotSupported__ctor_mC977B08827779EDF041C293962F0619C3C87AA6D (void);
// 0x000000A3 System.Void Photon.Voice.DeviceEnumeratorNotSupported::Refresh()
extern void DeviceEnumeratorNotSupported_Refresh_mDA78A2FF56AF404DC4038C4EBC4889C7BC87A791 (void);
// 0x000000A4 System.String Photon.Voice.DeviceEnumeratorNotSupported::get_Error()
extern void DeviceEnumeratorNotSupported_get_Error_mAE312E35A872E2458C0E3D08488601938D2A3A90 (void);
// 0x000000A5 System.Void Photon.Voice.DeviceEnumeratorNotSupported::Dispose()
extern void DeviceEnumeratorNotSupported_Dispose_m009CE1A40EE3325E4522273FFBCF98930311FCAD (void);
// 0x000000A6 System.Void Photon.Voice.AudioInEnumeratorNotSupported::.ctor(Photon.Voice.ILogger)
extern void AudioInEnumeratorNotSupported__ctor_m5F849A0A30419000B1D5838CA7E64519411DB996 (void);
// 0x000000A7 System.Boolean Photon.Voice.IAudioInChangeNotifier::get_IsSupported()
// 0x000000A8 System.String Photon.Voice.IAudioInChangeNotifier::get_Error()
// 0x000000A9 System.Boolean Photon.Voice.AudioInChangeNotifierNotSupported::get_IsSupported()
extern void AudioInChangeNotifierNotSupported_get_IsSupported_mE4DC52F980C4AACB2EB3E3B2C0B0ED2F6F282C21 (void);
// 0x000000AA System.Void Photon.Voice.AudioInChangeNotifierNotSupported::.ctor(System.Action,Photon.Voice.ILogger)
extern void AudioInChangeNotifierNotSupported__ctor_mC97E12C9FA96BF2886E5CDAE3A2B42DBDB519BCA (void);
// 0x000000AB System.String Photon.Voice.AudioInChangeNotifierNotSupported::get_Error()
extern void AudioInChangeNotifierNotSupported_get_Error_mFE548DBC1EE5BB2E690E68570B024DD6FF3BD2FE (void);
// 0x000000AC System.Void Photon.Voice.AudioInChangeNotifierNotSupported::Dispose()
extern void AudioInChangeNotifierNotSupported_Dispose_m12D0D7CAC39A6B8C21E011A59DF40998931C25CB (void);
// 0x000000AD System.Void Photon.Voice.FrameBuffer::.ctor(System.Byte[],System.Int32,System.Int32,Photon.Voice.FrameFlags,System.IDisposable)
extern void FrameBuffer__ctor_m251C0C8AB214C4E826964391519565A2C79DD080 (void);
// 0x000000AE System.Void Photon.Voice.FrameBuffer::.ctor(System.Byte[],Photon.Voice.FrameFlags)
extern void FrameBuffer__ctor_m9082AB45997EE91BF42B6DC22CF37BB2B1404651 (void);
// 0x000000AF System.IntPtr Photon.Voice.FrameBuffer::get_Ptr()
extern void FrameBuffer_get_Ptr_m7B8D7F4CD65BE84DE95E48609890CBBA87ACFB15 (void);
// 0x000000B0 System.Void Photon.Voice.FrameBuffer::Retain()
extern void FrameBuffer_Retain_m8C2CE0F03537553A809D3A49E71EBF00920E4B72 (void);
// 0x000000B1 System.Void Photon.Voice.FrameBuffer::Release()
extern void FrameBuffer_Release_m8EEF2FAF12E3ACFAE456CC3CA5C04C3B968BBFD2 (void);
// 0x000000B2 System.Void Photon.Voice.FrameBuffer::Dispose()
extern void FrameBuffer_Dispose_mA6053144FE2D0F804FD8B3D9E33224F7BF1690A6 (void);
// 0x000000B3 System.Byte[] Photon.Voice.FrameBuffer::get_Array()
extern void FrameBuffer_get_Array_m33555AC9413B61F9B142C0A9704D277ECBEBD1F5 (void);
// 0x000000B4 System.Int32 Photon.Voice.FrameBuffer::get_Length()
extern void FrameBuffer_get_Length_m99F73FA338DDB97D9228FD206D131E3DB1349201 (void);
// 0x000000B5 System.Int32 Photon.Voice.FrameBuffer::get_Offset()
extern void FrameBuffer_get_Offset_m1B1687E7965E3452A09543519DA3617A19F664F0 (void);
// 0x000000B6 Photon.Voice.FrameFlags Photon.Voice.FrameBuffer::get_Flags()
extern void FrameBuffer_get_Flags_mC466B9947228B6EC6A14AF461E2F35E14D8492D4 (void);
// 0x000000B7 TInfo Photon.Voice.ObjectFactory`2::get_Info()
// 0x000000B8 System.Void Photon.Voice.FactoryReusableArray`1::.ctor(System.Int32)
// 0x000000B9 System.Int32 Photon.Voice.FactoryReusableArray`1::get_Info()
// 0x000000BA System.Void Photon.Voice.FactoryReusableArray`1::Dispose()
// 0x000000BB System.Void Photon.Voice.FactoryPrimitiveArrayPool`1::.ctor(System.Int32,System.String,System.Int32)
// 0x000000BC System.Int32 Photon.Voice.FactoryPrimitiveArrayPool`1::get_Info()
// 0x000000BD T[] Photon.Voice.FactoryPrimitiveArrayPool`1::New()
// 0x000000BE T[] Photon.Voice.FactoryPrimitiveArrayPool`1::New(System.Int32)
// 0x000000BF System.Void Photon.Voice.FactoryPrimitiveArrayPool`1::Free(T[])
// 0x000000C0 System.Void Photon.Voice.FactoryPrimitiveArrayPool`1::Free(T[],System.Int32)
// 0x000000C1 System.Void Photon.Voice.FactoryPrimitiveArrayPool`1::Dispose()
// 0x000000C2 TType Photon.Voice.ObjectPool`2::createObject(TInfo)
// 0x000000C3 System.Void Photon.Voice.ObjectPool`2::destroyObject(TType)
// 0x000000C4 System.Boolean Photon.Voice.ObjectPool`2::infosMatch(TInfo,TInfo)
// 0x000000C5 System.String Photon.Voice.ObjectPool`2::get_LogPrefix()
// 0x000000C6 System.Void Photon.Voice.ObjectPool`2::.ctor(System.Int32,System.String)
// 0x000000C7 System.Void Photon.Voice.ObjectPool`2::.ctor(System.Int32,System.String,TInfo)
// 0x000000C8 System.Void Photon.Voice.ObjectPool`2::Init(TInfo)
// 0x000000C9 TInfo Photon.Voice.ObjectPool`2::get_Info()
// 0x000000CA TType Photon.Voice.ObjectPool`2::AcquireOrCreate()
// 0x000000CB TType Photon.Voice.ObjectPool`2::AcquireOrCreate(TInfo)
// 0x000000CC System.Boolean Photon.Voice.ObjectPool`2::Release(TType,TInfo)
// 0x000000CD System.Boolean Photon.Voice.ObjectPool`2::Release(TType)
// 0x000000CE System.Void Photon.Voice.ObjectPool`2::Dispose()
// 0x000000CF System.Void Photon.Voice.PrimitiveArrayPool`1::.ctor(System.Int32,System.String)
// 0x000000D0 System.Void Photon.Voice.PrimitiveArrayPool`1::.ctor(System.Int32,System.String,System.Int32)
// 0x000000D1 T[] Photon.Voice.PrimitiveArrayPool`1::createObject(System.Int32)
// 0x000000D2 System.Void Photon.Voice.PrimitiveArrayPool`1::destroyObject(T[])
// 0x000000D3 System.Boolean Photon.Voice.PrimitiveArrayPool`1::infosMatch(System.Int32,System.Int32)
// 0x000000D4 System.String Photon.Voice.OpusCodec::get_Version()
extern void OpusCodec_get_Version_m008921D2C85E418116F03DC7B31495021D0A549B (void);
// 0x000000D5 Photon.Voice.IEncoder Photon.Voice.OpusCodec/Factory::CreateEncoder(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
// 0x000000D6 System.Void Photon.Voice.OpusCodec/Encoder`1::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
// 0x000000D7 System.String Photon.Voice.OpusCodec/Encoder`1::get_Error()
// 0x000000D8 System.Void Photon.Voice.OpusCodec/Encoder`1::set_Error(System.String)
// 0x000000D9 System.Void Photon.Voice.OpusCodec/Encoder`1::set_Output(System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags>)
// 0x000000DA System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::get_Output()
// 0x000000DB System.Void Photon.Voice.OpusCodec/Encoder`1::Input(T[])
// 0x000000DC System.Void Photon.Voice.OpusCodec/Encoder`1::EndOfStream()
// 0x000000DD System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::DequeueOutput(Photon.Voice.FrameFlags&)
// 0x000000DE System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::encodeTyped(T[])
// 0x000000DF System.Void Photon.Voice.OpusCodec/Encoder`1::Dispose()
// 0x000000E0 System.Void Photon.Voice.OpusCodec/Encoder`1::.cctor()
// 0x000000E1 System.Void Photon.Voice.OpusCodec/EncoderFloat::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
extern void EncoderFloat__ctor_m0991241DD1FE17E2F3746983B476AD2A0140A918 (void);
// 0x000000E2 System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderFloat::encodeTyped(System.Single[])
extern void EncoderFloat_encodeTyped_m243369A5911C9571E417E78E404E5A8FA942A30B (void);
// 0x000000E3 System.Void Photon.Voice.OpusCodec/EncoderShort::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
extern void EncoderShort__ctor_m8EF1D2500A53BCBFD9307669E3663E960A34DEF6 (void);
// 0x000000E4 System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/EncoderShort::encodeTyped(System.Int16[])
extern void EncoderShort_encodeTyped_mA436895757B785A2639D882355B4911F16218AD3 (void);
// 0x000000E5 System.Void Photon.Voice.OpusCodec/Decoder`1::.ctor(System.Action`1<Photon.Voice.FrameOut`1<T>>,Photon.Voice.ILogger)
// 0x000000E6 System.Void Photon.Voice.OpusCodec/Decoder`1::Open(Photon.Voice.VoiceInfo)
// 0x000000E7 System.String Photon.Voice.OpusCodec/Decoder`1::get_Error()
// 0x000000E8 System.Void Photon.Voice.OpusCodec/Decoder`1::set_Error(System.String)
// 0x000000E9 System.Void Photon.Voice.OpusCodec/Decoder`1::Dispose()
// 0x000000EA System.Void Photon.Voice.OpusCodec/Decoder`1::Input(Photon.Voice.FrameBuffer&)
// 0x000000EB Photon.Voice.IDeviceEnumerator Photon.Voice.Platform::CreateAudioInEnumerator(Photon.Voice.ILogger)
extern void Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163 (void);
// 0x000000EC Photon.Voice.IAudioInChangeNotifier Photon.Voice.Platform::CreateAudioInChangeNotifier(System.Action,Photon.Voice.ILogger)
extern void Platform_CreateAudioInChangeNotifier_m41F0300A3BB3838D98599DA2C69560732BDDA623 (void);
// 0x000000ED Photon.Voice.IEncoder Photon.Voice.Platform::CreateDefaultAudioEncoder(Photon.Voice.ILogger,Photon.Voice.VoiceInfo)
// 0x000000EE System.Void Photon.Voice.RawCodec/Decoder`1::.ctor(System.Action`1<Photon.Voice.FrameOut`1<T>>)
// 0x000000EF System.Void Photon.Voice.RawCodec/Decoder`1::Open(Photon.Voice.VoiceInfo)
// 0x000000F0 System.Void Photon.Voice.RawCodec/Decoder`1::Input(Photon.Voice.FrameBuffer&)
// 0x000000F1 System.Void Photon.Voice.RawCodec/Decoder`1::Dispose()
// 0x000000F2 System.Void Photon.Voice.SpacingProfile::.ctor(System.Int32)
extern void SpacingProfile__ctor_m1208F1AACB921DD63D631D7C6C0325625AA2E431 (void);
// 0x000000F3 System.Void Photon.Voice.SpacingProfile::Update(System.Boolean,System.Boolean)
extern void SpacingProfile_Update_mEA18EC854FA12B439AEC4C8A35760FC4D9F3E8BB (void);
// 0x000000F4 System.Void Photon.Voice.Util::SetThreadName(System.Threading.Thread,System.String)
extern void Util_SetThreadName_mACD08B4DA0DD63FEFFB3B06BADAF9DA7435BEA34 (void);
// 0x000000F5 System.Boolean Photon.Voice.IDataReader`1::Read(T[])
// 0x000000F6 System.Void Photon.Voice.IServiceable::Service(Photon.Voice.LocalVoice)
// 0x000000F7 System.Void Photon.Voice.FrameOut`1::.ctor(T[],System.Boolean)
// 0x000000F8 Photon.Voice.FrameOut`1<T> Photon.Voice.FrameOut`1::Set(T[],System.Boolean)
// 0x000000F9 T[] Photon.Voice.FrameOut`1::get_Buf()
// 0x000000FA System.Void Photon.Voice.FrameOut`1::set_Buf(T[])
// 0x000000FB System.Boolean Photon.Voice.FrameOut`1::get_EndOfStream()
// 0x000000FC System.Void Photon.Voice.FrameOut`1::set_EndOfStream(System.Boolean)
// 0x000000FD System.Byte Photon.Voice.LocalVoice::get_InterestGroup()
extern void LocalVoice_get_InterestGroup_mC3B34BA32A7D2D3CB175EE97509D26C34B19A59C (void);
// 0x000000FE System.Void Photon.Voice.LocalVoice::set_InterestGroup(System.Byte)
extern void LocalVoice_set_InterestGroup_m2D571F8844CF752601904CC3C7D3B3EAA32C5D7B (void);
// 0x000000FF Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
extern void LocalVoice_get_Info_mFCD2D5AC24454B0E5B0538EE171756EF90F2E938 (void);
// 0x00000100 System.Boolean Photon.Voice.LocalVoice::get_TransmitEnabled()
extern void LocalVoice_get_TransmitEnabled_mEF9CBAAAE859130E102A46B716F720506CCC7E6E (void);
// 0x00000101 System.Void Photon.Voice.LocalVoice::set_TransmitEnabled(System.Boolean)
extern void LocalVoice_set_TransmitEnabled_m4C90109AB98849B171726A9381F7891913C6277E (void);
// 0x00000102 System.Boolean Photon.Voice.LocalVoice::get_IsCurrentlyTransmitting()
extern void LocalVoice_get_IsCurrentlyTransmitting_mACAF3745CED8197ECAC477BE91E089D3FF3DC725 (void);
// 0x00000103 System.Int32 Photon.Voice.LocalVoice::get_FramesSent()
extern void LocalVoice_get_FramesSent_m31EC890BD57564C918D0288CBF59888D70650DD5 (void);
// 0x00000104 System.Void Photon.Voice.LocalVoice::set_FramesSent(System.Int32)
extern void LocalVoice_set_FramesSent_m433AE27E5444F1EE79BD1839CEB0C4649E85187C (void);
// 0x00000105 System.Int32 Photon.Voice.LocalVoice::get_FramesSentBytes()
extern void LocalVoice_get_FramesSentBytes_m303B8432949389B845AE78B7D0A470F0ACF347A4 (void);
// 0x00000106 System.Void Photon.Voice.LocalVoice::set_FramesSentBytes(System.Int32)
extern void LocalVoice_set_FramesSentBytes_m263BFEADD6AD997392D3F82A30AD02D3899F52AC (void);
// 0x00000107 System.Boolean Photon.Voice.LocalVoice::get_Reliable()
extern void LocalVoice_get_Reliable_m6FEF5EDAD5795160542F5C4017CBF9F37A1E66EF (void);
// 0x00000108 System.Void Photon.Voice.LocalVoice::set_Reliable(System.Boolean)
extern void LocalVoice_set_Reliable_mC537F4D8B41C86F0ED5EB2BE05595698D0C4CDBD (void);
// 0x00000109 System.Boolean Photon.Voice.LocalVoice::get_Encrypt()
extern void LocalVoice_get_Encrypt_mDB962FE410E2CBF91B0DC7B819FBF054A59E41A4 (void);
// 0x0000010A System.Void Photon.Voice.LocalVoice::set_Encrypt(System.Boolean)
extern void LocalVoice_set_Encrypt_m438BA614427407D830D26CA9A0F40B7D55C16B03 (void);
// 0x0000010B Photon.Voice.IServiceable Photon.Voice.LocalVoice::get_LocalUserServiceable()
extern void LocalVoice_get_LocalUserServiceable_m480CA4148204285CD0566B8ED7F53F338D51BFAA (void);
// 0x0000010C System.Void Photon.Voice.LocalVoice::set_LocalUserServiceable(Photon.Voice.IServiceable)
extern void LocalVoice_set_LocalUserServiceable_mC9C701DFB55842054DA635B5D75B77780E9A12C7 (void);
// 0x0000010D System.Boolean Photon.Voice.LocalVoice::get_DebugEchoMode()
extern void LocalVoice_get_DebugEchoMode_mBB5814D60DDFE293CAE3D2FAEFF871B1A6A08381 (void);
// 0x0000010E System.Void Photon.Voice.LocalVoice::set_DebugEchoMode(System.Boolean)
extern void LocalVoice_set_DebugEchoMode_m49C88569ED358403659FEE92ABD4E4988C096C4B (void);
// 0x0000010F System.Void Photon.Voice.LocalVoice::.ctor()
extern void LocalVoice__ctor_m5D3248AE19E830581367E9B72A83E0DA47E5D337 (void);
// 0x00000110 System.Void Photon.Voice.LocalVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32)
extern void LocalVoice__ctor_m2758C28A05887B045CA471BB6B985924DD107D15 (void);
// 0x00000111 System.String Photon.Voice.LocalVoice::get_shortName()
extern void LocalVoice_get_shortName_mB1CA8CC8385796A57215CF6A6C48572EEAAD52A9 (void);
// 0x00000112 System.String Photon.Voice.LocalVoice::get_Name()
extern void LocalVoice_get_Name_m0C73447EC9348D15EE923D94301B10B85404E6B5 (void);
// 0x00000113 System.String Photon.Voice.LocalVoice::get_LogPrefix()
extern void LocalVoice_get_LogPrefix_mBD379944D1F0172B0B6A29C02D115E0B07F8F0C8 (void);
// 0x00000114 System.Void Photon.Voice.LocalVoice::service()
extern void LocalVoice_service_mB6D50060CE9CBF18EEFA8C8E1E255100DB0F55C3 (void);
// 0x00000115 System.Void Photon.Voice.LocalVoice::sendConfigFrame(System.Int32)
extern void LocalVoice_sendConfigFrame_m9F6E232E4ECCBE7D97812A3E0E50920772668ED0 (void);
// 0x00000116 System.Void Photon.Voice.LocalVoice::sendFrame(System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags)
extern void LocalVoice_sendFrame_mD8E709F204634A5A1E8AB4FB0654A40FE08B6730 (void);
// 0x00000117 System.Void Photon.Voice.LocalVoice::sendFrame0(System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags,System.Int32,System.Boolean)
extern void LocalVoice_sendFrame0_m50C0ACCBD23B134D1A9353368D5550F72674E7B5 (void);
// 0x00000118 System.Void Photon.Voice.LocalVoice::RemoveSelf()
extern void LocalVoice_RemoveSelf_m1A612ACE8DBA1D5A9F539ECD1919B2A2FAB20F43 (void);
// 0x00000119 System.Void Photon.Voice.LocalVoice::Dispose()
extern void LocalVoice_Dispose_m6A147BF4D5D6C89D16BC289B90CC8249DCFD7B01 (void);
// 0x0000011A System.Void Photon.Voice.RemoteVoiceOptions::SetOutput(System.Action`1<Photon.Voice.FrameOut`1<System.Single>>)
extern void RemoteVoiceOptions_SetOutput_m1D8335B78DC7DFCD68167FBDFABF2E9B15CA6E9B (void);
// 0x0000011B System.Action Photon.Voice.RemoteVoiceOptions::get_OnRemoteVoiceRemoveAction()
extern void RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m019D282B2C9C1A5A5A0DE0E03C586AF58A571610 (void);
// 0x0000011C System.Void Photon.Voice.RemoteVoiceOptions::set_OnRemoteVoiceRemoveAction(System.Action)
extern void RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m6E0B66C38E6233CF40E852DA82627476219C0338 (void);
// 0x0000011D Photon.Voice.IDecoder Photon.Voice.RemoteVoiceOptions::get_Decoder()
extern void RemoteVoiceOptions_get_Decoder_mF10176ACC4A1599DD83BFC7F413B17FBA135F073 (void);
// 0x0000011E System.Void Photon.Voice.RemoteVoiceOptions::set_OutputImageFormat(Photon.Voice.ImageFormat)
extern void RemoteVoiceOptions_set_OutputImageFormat_m266F5CD3FE1FE27355D21C59544B83A90E94F8CA (void);
// 0x0000011F Photon.Voice.RemoteVoiceOptions/OutputType Photon.Voice.RemoteVoiceOptions::get_outType()
extern void RemoteVoiceOptions_get_outType_m255C8527993D6C76731D6566A9ABA236AEC16406 (void);
// 0x00000120 System.Void Photon.Voice.RemoteVoiceOptions::set_outType(Photon.Voice.RemoteVoiceOptions/OutputType)
extern void RemoteVoiceOptions_set_outType_m69DC850D7AB4CD8C62ADBC10418AD166D20513BE (void);
// 0x00000121 System.Object Photon.Voice.RemoteVoiceOptions::get_output()
extern void RemoteVoiceOptions_get_output_m0277760FE5D2111DB81B47EDE17BB1C502D92760 (void);
// 0x00000122 System.Void Photon.Voice.RemoteVoiceOptions::set_output(System.Object)
extern void RemoteVoiceOptions_set_output_m0D8361A82E851B664ED8366959BA64AF16D6542C (void);
// 0x00000123 Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::get_Info()
extern void RemoteVoice_get_Info_mDA764DF4B45A49F2B3B4EA47FCC2DC85FC51B4B8 (void);
// 0x00000124 System.Void Photon.Voice.RemoteVoice::set_Info(Photon.Voice.VoiceInfo)
extern void RemoteVoice_set_Info_m0823E39D1470CD59C7FCEFFA8585238857DEE470 (void);
// 0x00000125 System.Int32 Photon.Voice.RemoteVoice::get_DelayFrames()
extern void RemoteVoice_get_DelayFrames_m25E1B978FD3670CADC173BA4A0B2B041252B612F (void);
// 0x00000126 System.Void Photon.Voice.RemoteVoice::set_DelayFrames(System.Int32)
extern void RemoteVoice_set_DelayFrames_mF3A78B86EF30BA5660B5F7C5A380DE99CB9B68D0 (void);
// 0x00000127 System.Void Photon.Voice.RemoteVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.RemoteVoiceOptions,System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,System.Byte)
extern void RemoteVoice__ctor_m5EA5852C7899034F239F056A8F365F7F62CD4BE2 (void);
// 0x00000128 System.String Photon.Voice.RemoteVoice::get_shortName()
extern void RemoteVoice_get_shortName_mEA08218B32F80E5539A5F9F1062E3B36535B0777 (void);
// 0x00000129 System.String Photon.Voice.RemoteVoice::get_Name()
extern void RemoteVoice_get_Name_m8CB49DEB66D7643A40E32C2A8A726ED9FD72F1CA (void);
// 0x0000012A System.String Photon.Voice.RemoteVoice::get_LogPrefix()
extern void RemoteVoice_get_LogPrefix_m78E27CBF8DA4824928C83FDC7A839C7B06FCE299 (void);
// 0x0000012B System.Byte Photon.Voice.RemoteVoice::byteDiff(System.Byte,System.Byte)
extern void RemoteVoice_byteDiff_m79B1980073C8FCF08AE962F56E479E08D991F65B (void);
// 0x0000012C System.Void Photon.Voice.RemoteVoice::receiveBytes(Photon.Voice.FrameBuffer&,System.Byte)
extern void RemoteVoice_receiveBytes_mBDB797AA14B9B569ABCFCDA2F6B3A9148970E0D3 (void);
// 0x0000012D System.Void Photon.Voice.RemoteVoice::receiveFrame(Photon.Voice.FrameBuffer&)
extern void RemoteVoice_receiveFrame_m1F6CE9B7ADE607C5212F474E9B75CDA7DF97B42D (void);
// 0x0000012E System.Void Photon.Voice.RemoteVoice::receiveNullFrames(System.Int32)
extern void RemoteVoice_receiveNullFrames_m9D331DA80F3D01664C5E36542BCC75F45A580863 (void);
// 0x0000012F Photon.Voice.IDecoder Photon.Voice.RemoteVoice::createDefaultDecoder()
extern void RemoteVoice_createDefaultDecoder_mCE8EF90679F329048A8E084BF28F0B0E6FE3EBFE (void);
// 0x00000130 System.Void Photon.Voice.RemoteVoice::decodeThread()
extern void RemoteVoice_decodeThread_m78EB2CEA3AF98BDC2B1C37B8C5A92503B7CC84C2 (void);
// 0x00000131 System.Void Photon.Voice.RemoteVoice::removeAndDispose()
extern void RemoteVoice_removeAndDispose_mFA5904757A601BF76EAA473B1B17E5E47D6B297D (void);
// 0x00000132 System.Void Photon.Voice.RemoteVoice::Dispose()
extern void RemoteVoice_Dispose_mD1F4C4199B6ADE655B14764208D7EA14AE4BCC91 (void);
// 0x00000133 System.Void Photon.Voice.RemoteVoice::<.ctor>b__14_0()
extern void RemoteVoice_U3C_ctorU3Eb__14_0_m879043D7830914E84BE9732B9AD57B37F2342707 (void);
// 0x00000134 System.Void Photon.Voice.IResettable::Reset()
// 0x00000135 System.Int32 Photon.Voice.IAudioDesc::get_SamplingRate()
// 0x00000136 System.Int32 Photon.Voice.IAudioDesc::get_Channels()
// 0x00000137 System.String Photon.Voice.IAudioDesc::get_Error()
// 0x00000138 System.Void Photon.Voice.IAudioPusher`1::SetCallback(System.Action`1<T[]>,Photon.Voice.ObjectFactory`2<T[],System.Int32>)
// 0x00000139 Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.ILocalVoiceAudio::get_VoiceDetector()
// 0x0000013A Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.ILocalVoiceAudio::get_LevelMeter()
// 0x0000013B System.Boolean Photon.Voice.ILocalVoiceAudio::get_VoiceDetectorCalibrating()
// 0x0000013C System.Void Photon.Voice.ILocalVoiceAudio::VoiceDetectorCalibrate(System.Int32,System.Action`1<System.Single>)
// 0x0000013D Photon.Voice.LocalVoiceAudio`1<T> Photon.Voice.LocalVoiceAudio`1::Create(Photon.Voice.VoiceClient,System.Byte,Photon.Voice.IEncoder,Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,System.Int32)
// 0x0000013E Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.LocalVoiceAudio`1::get_VoiceDetector()
// 0x0000013F Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.LocalVoiceAudio`1::get_LevelMeter()
// 0x00000140 System.Void Photon.Voice.LocalVoiceAudio`1::VoiceDetectorCalibrate(System.Int32,System.Action`1<System.Single>)
// 0x00000141 System.Boolean Photon.Voice.LocalVoiceAudio`1::get_VoiceDetectorCalibrating()
// 0x00000142 System.Void Photon.Voice.LocalVoiceAudio`1::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,System.Int32)
// 0x00000143 System.Void Photon.Voice.LocalVoiceAudio`1::initBuiltinProcessors()
// 0x00000144 Photon.Voice.AudioUtil/IVoiceDetector Photon.Voice.LocalVoiceAudioDummy::get_VoiceDetector()
extern void LocalVoiceAudioDummy_get_VoiceDetector_m5711F0BF61798577A44AAA83B16DD248773CF2E9 (void);
// 0x00000145 Photon.Voice.AudioUtil/ILevelMeter Photon.Voice.LocalVoiceAudioDummy::get_LevelMeter()
extern void LocalVoiceAudioDummy_get_LevelMeter_mF02603475AE4F003ACF466ACE05D0462691A3FF4 (void);
// 0x00000146 System.Boolean Photon.Voice.LocalVoiceAudioDummy::get_VoiceDetectorCalibrating()
extern void LocalVoiceAudioDummy_get_VoiceDetectorCalibrating_m58D7DD27EF19B0A93C059B8A60D66D44C76F7311 (void);
// 0x00000147 System.Void Photon.Voice.LocalVoiceAudioDummy::VoiceDetectorCalibrate(System.Int32,System.Action`1<System.Single>)
extern void LocalVoiceAudioDummy_VoiceDetectorCalibrate_mD8E03D0A77D3AF13505179527FA4E5947A14729B (void);
// 0x00000148 System.Void Photon.Voice.LocalVoiceAudioDummy::.ctor()
extern void LocalVoiceAudioDummy__ctor_m500E2EBCA673CEAACFE892CDC110651BFB93AC70 (void);
// 0x00000149 System.Void Photon.Voice.LocalVoiceAudioDummy::.cctor()
extern void LocalVoiceAudioDummy__cctor_mB4475DA8906014324E9A818167ACED356CA35FBA (void);
// 0x0000014A System.Void Photon.Voice.LocalVoiceAudioFloat::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,System.Int32)
extern void LocalVoiceAudioFloat__ctor_m8B8904660D017484F9CBC7D1FC1B8A0098EB5F2D (void);
// 0x0000014B System.Void Photon.Voice.LocalVoiceAudioShort::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,System.Int32)
extern void LocalVoiceAudioShort__ctor_m7FB64A82FC793306CC62EC571937DA5458169FA0 (void);
// 0x0000014C System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[])
// 0x0000014D System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[])
// 0x0000014E System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[])
// 0x0000014F System.Void Photon.Voice.ILogger::LogDebug(System.String,System.Object[])
// 0x00000150 System.Boolean Photon.Voice.IVoiceTransport::IsChannelJoined(System.Int32)
// 0x00000151 System.Void Photon.Voice.IVoiceTransport::SendVoicesInfo(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice>,System.Int32,System.Int32)
// 0x00000152 System.Void Photon.Voice.IVoiceTransport::SendVoiceRemove(Photon.Voice.LocalVoice,System.Int32,System.Int32)
// 0x00000153 System.Void Photon.Voice.IVoiceTransport::SendFrame(System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags,System.Byte,System.Byte,System.Int32,System.Int32,System.Boolean,Photon.Voice.LocalVoice)
// 0x00000154 System.String Photon.Voice.IVoiceTransport::ChannelIdStr(System.Int32)
// 0x00000155 System.String Photon.Voice.IVoiceTransport::PlayerIdStr(System.Int32)
// 0x00000156 System.Int32 Photon.Voice.VoiceClient::get_FramesLost()
extern void VoiceClient_get_FramesLost_m98466CCB14660851F20F985C1074A16BD49CBFDA (void);
// 0x00000157 System.Void Photon.Voice.VoiceClient::set_FramesLost(System.Int32)
extern void VoiceClient_set_FramesLost_m119D64A228A6C8F31EE323A154B9E0ECA06C84F3 (void);
// 0x00000158 System.Int32 Photon.Voice.VoiceClient::get_FramesReceived()
extern void VoiceClient_get_FramesReceived_m9AB529352DA8F1C9A7FBEB4FE109D0CAEE6C440A (void);
// 0x00000159 System.Void Photon.Voice.VoiceClient::set_FramesReceived(System.Int32)
extern void VoiceClient_set_FramesReceived_m5A32DDC0C9DFB072851C84F9CDFE342D117602FA (void);
// 0x0000015A System.Int32 Photon.Voice.VoiceClient::get_FramesSent()
extern void VoiceClient_get_FramesSent_m1BA3241254EDE469FDF70CB4B5A7D3483CF81B3E (void);
// 0x0000015B System.Int32 Photon.Voice.VoiceClient::get_FramesSentBytes()
extern void VoiceClient_get_FramesSentBytes_mAE278DF31CF670B1E58EB0261FE61F290FDC5150 (void);
// 0x0000015C System.Int32 Photon.Voice.VoiceClient::get_RoundTripTime()
extern void VoiceClient_get_RoundTripTime_m6DD2EF8C9166757654EEA55527B926EA316A89FB (void);
// 0x0000015D System.Void Photon.Voice.VoiceClient::set_RoundTripTime(System.Int32)
extern void VoiceClient_set_RoundTripTime_mF5CCFC4FA32F03941A7FC924D09A0E48F02764FC (void);
// 0x0000015E System.Int32 Photon.Voice.VoiceClient::get_RoundTripTimeVariance()
extern void VoiceClient_get_RoundTripTimeVariance_mC8EFB27305D471D6BFEDA798F1593423D71588DC (void);
// 0x0000015F System.Void Photon.Voice.VoiceClient::set_RoundTripTimeVariance(System.Int32)
extern void VoiceClient_set_RoundTripTimeVariance_mD33E782EBCC80CA1BB096ECD0B247AF787155FF7 (void);
// 0x00000160 System.Boolean Photon.Voice.VoiceClient::get_SuppressInfoDuplicateWarning()
extern void VoiceClient_get_SuppressInfoDuplicateWarning_m73BC21D49E62C08EDFA4FF8C7810D11808996077 (void);
// 0x00000161 Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::get_OnRemoteVoiceInfoAction()
extern void VoiceClient_get_OnRemoteVoiceInfoAction_m5EF4AD6CAF6FF8A44BE48B5F99DC80F31CE81A46 (void);
// 0x00000162 System.Void Photon.Voice.VoiceClient::set_OnRemoteVoiceInfoAction(Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate)
extern void VoiceClient_set_OnRemoteVoiceInfoAction_m22A59006AABCEEA47D6D8FFD92ACE3BBDB210A3D (void);
// 0x00000163 System.Int32 Photon.Voice.VoiceClient::get_DebugLostPercent()
extern void VoiceClient_get_DebugLostPercent_m372E20DEF459F85724F793CD11E43A7F635B4B72 (void);
// 0x00000164 System.Void Photon.Voice.VoiceClient::set_DebugLostPercent(System.Int32)
extern void VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A (void);
// 0x00000165 System.Void Photon.Voice.VoiceClient::.ctor(Photon.Voice.IVoiceTransport,Photon.Voice.ILogger)
extern void VoiceClient__ctor_m990E68E551844CE777B781005EE58D39D3CA9950 (void);
// 0x00000166 System.Void Photon.Voice.VoiceClient::Service()
extern void VoiceClient_Service_m315563438957990A651FEAE936702794FCA3B783 (void);
// 0x00000167 Photon.Voice.LocalVoice Photon.Voice.VoiceClient::createLocalVoice(System.Int32,System.Func`3<System.Byte,System.Int32,Photon.Voice.LocalVoice>)
extern void VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C (void);
// 0x00000168 Photon.Voice.LocalVoiceAudio`1<T> Photon.Voice.VoiceClient::CreateLocalVoiceAudio(Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,Photon.Voice.IEncoder,System.Int32)
// 0x00000169 Photon.Voice.LocalVoice Photon.Voice.VoiceClient::CreateLocalVoiceAudioFromSource(Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,Photon.Voice.AudioSampleType,Photon.Voice.IEncoder,System.Int32)
extern void VoiceClient_CreateLocalVoiceAudioFromSource_m340D08DC53B42CC7677DC68AE93F6FDD8E983ED3 (void);
// 0x0000016A System.Byte Photon.Voice.VoiceClient::getNewVoiceId()
extern void VoiceClient_getNewVoiceId_m700ADAA6D5FABED72CF8D0D62BD49C62DC2BE118 (void);
// 0x0000016B System.Void Photon.Voice.VoiceClient::addVoice(System.Byte,System.Int32,Photon.Voice.LocalVoice)
extern void VoiceClient_addVoice_mC356CFE6062C54F867B205145DD66AF0AB69C511 (void);
// 0x0000016C System.Void Photon.Voice.VoiceClient::RemoveLocalVoice(Photon.Voice.LocalVoice)
extern void VoiceClient_RemoveLocalVoice_mB0E112274E868E8BAB3387773A03315BC62D3C16 (void);
// 0x0000016D System.Void Photon.Voice.VoiceClient::sendChannelVoicesInfo(System.Int32,System.Int32)
extern void VoiceClient_sendChannelVoicesInfo_m66CFA1C50CEB28329A4D5B0398FB8CF969B4F2ED (void);
// 0x0000016E System.Void Photon.Voice.VoiceClient::sendVoicesInfoAndConfigFrame(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice>,System.Int32,System.Int32)
extern void VoiceClient_sendVoicesInfoAndConfigFrame_m968FE64B468BC81287115D4B571631241FFCC8AD (void);
// 0x0000016F System.Byte Photon.Voice.VoiceClient::get_GlobalInterestGroup()
extern void VoiceClient_get_GlobalInterestGroup_m735EBFECB6DC4B5875BA98A52B0E9E419368F006 (void);
// 0x00000170 System.Void Photon.Voice.VoiceClient::clearRemoteVoices()
extern void VoiceClient_clearRemoteVoices_m85A94D9D44D5952DDD9CD6368F9372194D4DDB6A (void);
// 0x00000171 System.Void Photon.Voice.VoiceClient::clearRemoteVoicesInChannel(System.Int32)
extern void VoiceClient_clearRemoteVoicesInChannel_m9D5BCAD29AD37CED4A085997C15CF2F14121BC79 (void);
// 0x00000172 System.Void Photon.Voice.VoiceClient::clearRemoteVoicesInChannelForPlayer(System.Int32,System.Int32)
extern void VoiceClient_clearRemoteVoicesInChannelForPlayer_mEFC287FA8BD560986442138DBC649118FFDD3184 (void);
// 0x00000173 System.Void Photon.Voice.VoiceClient::onJoinChannel(System.Int32)
extern void VoiceClient_onJoinChannel_mCF9FBB7551977F0EFB521CF84728189AB42F3B56 (void);
// 0x00000174 System.Void Photon.Voice.VoiceClient::onLeaveChannel(System.Int32)
extern void VoiceClient_onLeaveChannel_mA8F170D50711852E7CE159AB5B7092858AE9F367 (void);
// 0x00000175 System.Void Photon.Voice.VoiceClient::onLeaveAllChannels()
extern void VoiceClient_onLeaveAllChannels_m4B136F1BF9DB137683A67C4DAF0809743523C45F (void);
// 0x00000176 System.Void Photon.Voice.VoiceClient::onPlayerJoin(System.Int32,System.Int32)
extern void VoiceClient_onPlayerJoin_mAE58710EAC9933C477322096E35DF674BB6823EF (void);
// 0x00000177 System.Void Photon.Voice.VoiceClient::onPlayerLeave(System.Int32,System.Int32)
extern void VoiceClient_onPlayerLeave_mFC467D082FCD8F4A9C037DDE3FAE0AC788EBE280 (void);
// 0x00000178 System.Void Photon.Voice.VoiceClient::onVoiceInfo(System.Int32,System.Int32,System.Byte,System.Byte,Photon.Voice.VoiceInfo)
extern void VoiceClient_onVoiceInfo_m3C5AD959AFB2E7C3552E40640105E6FAF2FE0BC1 (void);
// 0x00000179 System.Void Photon.Voice.VoiceClient::onVoiceRemove(System.Int32,System.Int32,System.Byte[])
extern void VoiceClient_onVoiceRemove_mD2C7AD7A9A3777AE5A94E0245A700E4F2B76BEC0 (void);
// 0x0000017A System.Void Photon.Voice.VoiceClient::onFrame(System.Int32,System.Int32,System.Byte,System.Byte,Photon.Voice.FrameBuffer&,System.Boolean)
extern void VoiceClient_onFrame_m9D4A3B236F96891AEAA7BA07B31684C01614F63B (void);
// 0x0000017B System.String Photon.Voice.VoiceClient::channelStr(System.Int32)
extern void VoiceClient_channelStr_m21FBE4504EF3EC4E80F892F92F2D919A626D36A8 (void);
// 0x0000017C System.String Photon.Voice.VoiceClient::playerStr(System.Int32)
extern void VoiceClient_playerStr_mC2B75E9974E5F7505DA4C6366A1F5307BC89512F (void);
// 0x0000017D System.Void Photon.Voice.VoiceClient::Dispose()
extern void VoiceClient_Dispose_m8653A119E3612FE0256C7E31F2E9842AB4C0E253 (void);
// 0x0000017E System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
extern void RemoteVoiceInfoDelegate__ctor_mF793A2833EE5811B84813F7922DF4794B80EED36 (void);
// 0x0000017F System.Void Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&)
extern void RemoteVoiceInfoDelegate_Invoke_m33C6C0AD7BCE050DCB377C0208C70FA3757B7BCE (void);
// 0x00000180 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::.ctor()
// 0x00000181 Photon.Voice.LocalVoice Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::<CreateLocalVoiceAudio>b__0(System.Byte,System.Int32)
// 0x00000182 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_0::.ctor()
extern void U3CU3Ec__DisplayClass51_0__ctor_mB6AC6F77A44A42487A8DBCA088AAC92890FC269B (void);
// 0x00000183 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_0::<CreateLocalVoiceAudioFromSource>b__0(System.Single[])
extern void U3CU3Ec__DisplayClass51_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_m96FBF1D7AE7C50844E273CA3D629AC5017C5A2C6 (void);
// 0x00000184 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_1::.ctor()
extern void U3CU3Ec__DisplayClass51_1__ctor_mDAE72E1BB3A570F6246514ADD3E32FF15A5742E4 (void);
// 0x00000185 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_1::<CreateLocalVoiceAudioFromSource>b__1(System.Single[])
extern void U3CU3Ec__DisplayClass51_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_mF4CF7D365D780660C5AA4E383586745DD14CC542 (void);
// 0x00000186 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_2::.ctor()
extern void U3CU3Ec__DisplayClass51_2__ctor_mC7335182E0AC99674415BCF817F0AB0C81A5079E (void);
// 0x00000187 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_2::<CreateLocalVoiceAudioFromSource>b__2(System.Int16[])
extern void U3CU3Ec__DisplayClass51_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_mCE34ED542B1B980778452A83749935A9215E0024 (void);
// 0x00000188 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_3::.ctor()
extern void U3CU3Ec__DisplayClass51_3__ctor_mA813E91853A6FAEE777B13024C190F011A0B42EB (void);
// 0x00000189 System.Void Photon.Voice.VoiceClient/<>c__DisplayClass51_3::<CreateLocalVoiceAudioFromSource>b__3(System.Int16[])
extern void U3CU3Ec__DisplayClass51_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m6CDC4F741E81EABD29A7C8D3A7FF641A8809B195 (void);
// 0x0000018A System.Void Photon.Voice.VoiceClient/<>c::.cctor()
extern void U3CU3Ec__cctor_m403BA324CB52C4FAFAD0E37A9EE5F908630FA3A3 (void);
// 0x0000018B System.Void Photon.Voice.VoiceClient/<>c::.ctor()
extern void U3CU3Ec__ctor_m22941987F316D4E04C5D4A0BD657B7C9DC17A5D0 (void);
// 0x0000018C System.Boolean Photon.Voice.VoiceClient/<>c::<sendVoicesInfoAndConfigFrame>b__56_0(Photon.Voice.LocalVoice)
extern void U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__56_0_m30AC2C7585EC2E437029290142AB975B35BED6B3 (void);
// 0x0000018D System.Void Photon.Voice.IEncoder::set_Output(System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags>)
// 0x0000018E System.ArraySegment`1<System.Byte> Photon.Voice.IEncoder::DequeueOutput(Photon.Voice.FrameFlags&)
// 0x0000018F System.Void Photon.Voice.IEncoder::EndOfStream()
// 0x00000190 System.Void Photon.Voice.IEncoderDirect`1::Input(B)
// 0x00000191 System.Void Photon.Voice.IDecoder::Open(Photon.Voice.VoiceInfo)
// 0x00000192 System.Void Photon.Voice.IDecoder::Input(Photon.Voice.FrameBuffer&)
// 0x00000193 System.Void Photon.Voice.UnsupportedSampleTypeException::.ctor(System.Type)
extern void UnsupportedSampleTypeException__ctor_m46A21B924CB1433C20C6DF0E6B10C3BAB96BD1EE (void);
// 0x00000194 System.Void Photon.Voice.UnsupportedCodecException::.ctor(System.String,Photon.Voice.Codec)
extern void UnsupportedCodecException__ctor_mED5DA50DE20213B277BBDF990064B930B98F4D63 (void);
// 0x00000195 T[] Photon.Voice.IProcessor`1::Process(T[])
// 0x00000196 System.Void Photon.Voice.Framer`1::.ctor(System.Int32)
// 0x00000197 System.Collections.Generic.IEnumerable`1<T[]> Photon.Voice.Framer`1::Frame(T[])
// 0x00000198 System.Void Photon.Voice.Framer`1/<Frame>d__5::.ctor(System.Int32)
// 0x00000199 System.Void Photon.Voice.Framer`1/<Frame>d__5::System.IDisposable.Dispose()
// 0x0000019A System.Boolean Photon.Voice.Framer`1/<Frame>d__5::MoveNext()
// 0x0000019B T[] Photon.Voice.Framer`1/<Frame>d__5::System.Collections.Generic.IEnumerator<T[]>.get_Current()
// 0x0000019C System.Void Photon.Voice.Framer`1/<Frame>d__5::System.Collections.IEnumerator.Reset()
// 0x0000019D System.Object Photon.Voice.Framer`1/<Frame>d__5::System.Collections.IEnumerator.get_Current()
// 0x0000019E System.Collections.Generic.IEnumerator`1<T[]> Photon.Voice.Framer`1/<Frame>d__5::System.Collections.Generic.IEnumerable<T[]>.GetEnumerator()
// 0x0000019F System.Collections.IEnumerator Photon.Voice.Framer`1/<Frame>d__5::System.Collections.IEnumerable.GetEnumerator()
// 0x000001A0 System.Int32 Photon.Voice.LocalVoiceFramedBase::get_FrameSize()
extern void LocalVoiceFramedBase_get_FrameSize_m233AE1B2D668E4D27C91796A2C42C9823E8D3C92 (void);
// 0x000001A1 System.Void Photon.Voice.LocalVoiceFramedBase::set_FrameSize(System.Int32)
extern void LocalVoiceFramedBase_set_FrameSize_m64088251A406C257DCDC8289E6252326D8BB7828 (void);
// 0x000001A2 System.Void Photon.Voice.LocalVoiceFramedBase::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32,System.Int32)
extern void LocalVoiceFramedBase__ctor_m55A9B10E5FDDE732FD1CBB497C4B08AEB8619496 (void);
// 0x000001A3 T[] Photon.Voice.LocalVoiceFramed`1::processFrame(T[])
// 0x000001A4 System.Void Photon.Voice.LocalVoiceFramed`1::AddPostProcessor(Photon.Voice.IProcessor`1<T>[])
// 0x000001A5 System.Void Photon.Voice.LocalVoiceFramed`1::AddPreProcessor(Photon.Voice.IProcessor`1<T>[])
// 0x000001A6 System.Void Photon.Voice.LocalVoiceFramed`1::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32,System.Int32)
// 0x000001A7 Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::get_BufferFactory()
// 0x000001A8 System.Boolean Photon.Voice.LocalVoiceFramed`1::get_PushDataAsyncReady()
// 0x000001A9 System.Void Photon.Voice.LocalVoiceFramed`1::PushDataAsync(T[])
// 0x000001AA System.Void Photon.Voice.LocalVoiceFramed`1::PushDataAsyncThread()
// 0x000001AB System.Void Photon.Voice.LocalVoiceFramed`1::PushData(T[])
// 0x000001AC System.Void Photon.Voice.LocalVoiceFramed`1::Dispose()
// 0x000001AD Photon.Voice.VoiceInfo Photon.Voice.VoiceInfo::CreateAudioOpus(POpusCodec.Enums.SamplingRate,System.Int32,Photon.Voice.OpusCodec/FrameDuration,System.Int32,System.Object)
extern void VoiceInfo_CreateAudioOpus_m0980BF6248B625B4CB77421377B1145C1C3A8E5A (void);
// 0x000001AE System.String Photon.Voice.VoiceInfo::ToString()
extern void VoiceInfo_ToString_m31F4E929FD426EC3DFDB94C4FE45D3ECEB904FFF (void);
// 0x000001AF Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
extern void VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2 (void);
// 0x000001B0 System.Void Photon.Voice.VoiceInfo::set_Codec(Photon.Voice.Codec)
extern void VoiceInfo_set_Codec_m83DB6A6E8D8632752E6B4956622E44D27126109E (void);
// 0x000001B1 System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
extern void VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8 (void);
// 0x000001B2 System.Void Photon.Voice.VoiceInfo::set_SamplingRate(System.Int32)
extern void VoiceInfo_set_SamplingRate_m7BD3E61C766F470FB265DCC93B84096870DBAA01 (void);
// 0x000001B3 System.Int32 Photon.Voice.VoiceInfo::get_Channels()
extern void VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0 (void);
// 0x000001B4 System.Void Photon.Voice.VoiceInfo::set_Channels(System.Int32)
extern void VoiceInfo_set_Channels_mF29381F2ABA273B1F9851169CE03122B1EB706C9 (void);
// 0x000001B5 System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationUs()
extern void VoiceInfo_get_FrameDurationUs_m848EC5AF872DBB64AACA968CF1718C04759A12BB (void);
// 0x000001B6 System.Void Photon.Voice.VoiceInfo::set_FrameDurationUs(System.Int32)
extern void VoiceInfo_set_FrameDurationUs_m7A7B07BC964C797FD1AA6643D4376401735FEC40 (void);
// 0x000001B7 System.Int32 Photon.Voice.VoiceInfo::get_Bitrate()
extern void VoiceInfo_get_Bitrate_mE0CECCEA88721AD631108C61993A45383423B064 (void);
// 0x000001B8 System.Void Photon.Voice.VoiceInfo::set_Bitrate(System.Int32)
extern void VoiceInfo_set_Bitrate_mB3268CB62B4A817C413E59D2609EDA9B4F1347B4 (void);
// 0x000001B9 System.Int32 Photon.Voice.VoiceInfo::get_Width()
extern void VoiceInfo_get_Width_mD5716DBF45F4DAEA9F721D24FABDB1AE179858BD (void);
// 0x000001BA System.Void Photon.Voice.VoiceInfo::set_Width(System.Int32)
extern void VoiceInfo_set_Width_m7B176130CA1D12B7B88E1AB0E76F023C321264CC (void);
// 0x000001BB System.Int32 Photon.Voice.VoiceInfo::get_Height()
extern void VoiceInfo_get_Height_m656FAE7A882329D0DF0138D9D47C5EAE07168D5A (void);
// 0x000001BC System.Void Photon.Voice.VoiceInfo::set_Height(System.Int32)
extern void VoiceInfo_set_Height_mB7D71C3A5E6305595E88676F1C7AB1EBCE7A3962 (void);
// 0x000001BD System.Int32 Photon.Voice.VoiceInfo::get_FPS()
extern void VoiceInfo_get_FPS_m4BB8CC7FAD24454C1DC27828F98B4D0880B94471 (void);
// 0x000001BE System.Void Photon.Voice.VoiceInfo::set_FPS(System.Int32)
extern void VoiceInfo_set_FPS_mEAE50B70BB104142A33AA05E0434F33E22077F51 (void);
// 0x000001BF System.Int32 Photon.Voice.VoiceInfo::get_KeyFrameInt()
extern void VoiceInfo_get_KeyFrameInt_mCEAD182130EDDA06B30110ACCC0ABC23D5281961 (void);
// 0x000001C0 System.Void Photon.Voice.VoiceInfo::set_KeyFrameInt(System.Int32)
extern void VoiceInfo_set_KeyFrameInt_m743975A4690224F0C777D2D69BF4ADE72A34B8BF (void);
// 0x000001C1 System.Object Photon.Voice.VoiceInfo::get_UserData()
extern void VoiceInfo_get_UserData_mE49DA945FA1476FF3AD239DB23B02E84F8533B1A (void);
// 0x000001C2 System.Void Photon.Voice.VoiceInfo::set_UserData(System.Object)
extern void VoiceInfo_set_UserData_mA73845AE55BD8DD1B706C209B74D7A8485E4123C (void);
// 0x000001C3 System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationSamples()
extern void VoiceInfo_get_FrameDurationSamples_mA8983E72285C7175D0B7621C8371B0E9627479A6 (void);
// 0x000001C4 System.Int32 Photon.Voice.VoiceInfo::get_FrameSize()
extern void VoiceInfo_get_FrameSize_m0A5674D88D5A900A63367074B63AD06141EB23D1 (void);
// 0x000001C5 System.Void Photon.Voice.BufferReaderPushAdapterBase`1::Service(Photon.Voice.LocalVoice)
// 0x000001C6 System.Void Photon.Voice.BufferReaderPushAdapterBase`1::.ctor(Photon.Voice.IDataReader`1<T>)
// 0x000001C7 System.Void Photon.Voice.BufferReaderPushAdapterAsyncPool`1::.ctor(Photon.Voice.LocalVoice,Photon.Voice.IDataReader`1<T>)
// 0x000001C8 System.Void Photon.Voice.BufferReaderPushAdapterAsyncPool`1::Service(Photon.Voice.LocalVoice)
// 0x000001C9 System.Void Photon.Voice.BufferReaderPushAdapterAsyncPoolFloatToShort::.ctor(Photon.Voice.LocalVoice,Photon.Voice.IDataReader`1<System.Single>)
extern void BufferReaderPushAdapterAsyncPoolFloatToShort__ctor_m91261B14FBDF187DBF6AEE71F238BFABF7F6C26F (void);
// 0x000001CA System.Void Photon.Voice.BufferReaderPushAdapterAsyncPoolFloatToShort::Service(Photon.Voice.LocalVoice)
extern void BufferReaderPushAdapterAsyncPoolFloatToShort_Service_mC9EA761BF3B532FEEDF97BC6AD0450B88012DDD1 (void);
// 0x000001CB System.Void Photon.Voice.BufferReaderPushAdapterAsyncPoolShortToFloat::.ctor(Photon.Voice.LocalVoice,Photon.Voice.IDataReader`1<System.Int16>)
extern void BufferReaderPushAdapterAsyncPoolShortToFloat__ctor_mCFED781C1135E273ECA4374A6E591743AF11C337 (void);
// 0x000001CC System.Void Photon.Voice.BufferReaderPushAdapterAsyncPoolShortToFloat::Service(Photon.Voice.LocalVoice)
extern void BufferReaderPushAdapterAsyncPoolShortToFloat_Service_m7024FF017B2B961946C3DE6602537B339C6FD44F (void);
// 0x000001CD System.Void Photon.Voice.WebRTCAudioProcessor::set_AECStreamDelayMs(System.Int32)
extern void WebRTCAudioProcessor_set_AECStreamDelayMs_mFD966A1446F6E51B605C5C02933052B177689981 (void);
// 0x000001CE System.Void Photon.Voice.WebRTCAudioProcessor::set_AEC(System.Boolean)
extern void WebRTCAudioProcessor_set_AEC_m48FAC379A45AE3CFAEDF40461545AA9E8513C448 (void);
// 0x000001CF System.Void Photon.Voice.WebRTCAudioProcessor::set_AECHighPass(System.Boolean)
extern void WebRTCAudioProcessor_set_AECHighPass_mBA69B78F21EF89504D8E7A1872B4161DF4D188F6 (void);
// 0x000001D0 System.Void Photon.Voice.WebRTCAudioProcessor::set_AECMobile(System.Boolean)
extern void WebRTCAudioProcessor_set_AECMobile_m3C58D7643739EE8B4B4FC2D3BCC37CECA82C347E (void);
// 0x000001D1 System.Void Photon.Voice.WebRTCAudioProcessor::set_HighPass(System.Boolean)
extern void WebRTCAudioProcessor_set_HighPass_m2D5978D8413FB425879B598E2393B0C5EF7A7746 (void);
// 0x000001D2 System.Void Photon.Voice.WebRTCAudioProcessor::set_NoiseSuppression(System.Boolean)
extern void WebRTCAudioProcessor_set_NoiseSuppression_m9EAF5D1C41F62585A4DB36CF02ADD279D72241BB (void);
// 0x000001D3 System.Void Photon.Voice.WebRTCAudioProcessor::set_AGC(System.Boolean)
extern void WebRTCAudioProcessor_set_AGC_mA72AAB9F90FDB1E69442AE430C6E8BF63566663E (void);
// 0x000001D4 System.Void Photon.Voice.WebRTCAudioProcessor::set_AGCCompressionGain(System.Int32)
extern void WebRTCAudioProcessor_set_AGCCompressionGain_mEC815DB6BBD7BF2403FBE1D60CB1447C85E3BF92 (void);
// 0x000001D5 System.Void Photon.Voice.WebRTCAudioProcessor::set_VAD(System.Boolean)
extern void WebRTCAudioProcessor_set_VAD_m38B8ED43452757A5388690CCC09CAD09172B16F5 (void);
// 0x000001D6 System.Void Photon.Voice.WebRTCAudioProcessor::set_Bypass(System.Boolean)
extern void WebRTCAudioProcessor_set_Bypass_m2779AA89CD4AABE8377B5F4FB4C73B38DD9B5414 (void);
// 0x000001D7 System.Boolean Photon.Voice.WebRTCAudioProcessor::get_Bypass()
extern void WebRTCAudioProcessor_get_Bypass_m0D90277F677549D418E8CC1B8BBEA7BD524DA314 (void);
// 0x000001D8 System.Void Photon.Voice.WebRTCAudioProcessor::.ctor(Photon.Voice.ILogger,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void WebRTCAudioProcessor__ctor_m64EB2A018F5A4811854578520C8DA72C5FA0746A (void);
// 0x000001D9 System.Void Photon.Voice.WebRTCAudioProcessor::InitReverseStream()
extern void WebRTCAudioProcessor_InitReverseStream_m1D6F945FE187D205E1EE7F0C6E2877B6D7468294 (void);
// 0x000001DA System.Int16[] Photon.Voice.WebRTCAudioProcessor::Process(System.Int16[])
extern void WebRTCAudioProcessor_Process_mFEBFD487D36515DF5620EEB777E29E8E359F49C6 (void);
// 0x000001DB System.Void Photon.Voice.WebRTCAudioProcessor::OnAudioOutFrameFloat(System.Single[])
extern void WebRTCAudioProcessor_OnAudioOutFrameFloat_m43B319E8861C6F37C9A68AA3A6BFB423A09B8556 (void);
// 0x000001DC System.Void Photon.Voice.WebRTCAudioProcessor::ReverseStreamThread()
extern void WebRTCAudioProcessor_ReverseStreamThread_m4FA1BB07906B21CBB7C4B580CBE7DEF7718D0534 (void);
// 0x000001DD System.Int32 Photon.Voice.WebRTCAudioProcessor::setParam(Photon.Voice.WebRTCAudioLib/Param,System.Int32)
extern void WebRTCAudioProcessor_setParam_mAC191A8A5FEE2A8633BD44C4896E2B61244ED603 (void);
// 0x000001DE System.Void Photon.Voice.WebRTCAudioProcessor::Dispose()
extern void WebRTCAudioProcessor_Dispose_m93761C734852AC8686D670B9AD827B6A8E28D821 (void);
// 0x000001DF System.Void Photon.Voice.WebRTCAudioProcessor::.cctor()
extern void WebRTCAudioProcessor__cctor_mD0835AE7B959AC2633E611CF86923AF17D6C8F71 (void);
// 0x000001E0 System.IntPtr Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_create(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern void WebRTCAudioLib_webrtc_audio_processor_create_m8179B805291D1F607DF7667688554C8C1D4C860D (void);
// 0x000001E1 System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_init(System.IntPtr)
extern void WebRTCAudioLib_webrtc_audio_processor_init_mF26958BB77C0958F37261998200A2A6721F141C7 (void);
// 0x000001E2 System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_set_param(System.IntPtr,System.Int32,System.Int32)
extern void WebRTCAudioLib_webrtc_audio_processor_set_param_m5AB30ECEE7813EB7F5270EC473285CCBADBD39FF (void);
// 0x000001E3 System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process(System.IntPtr,System.Int16[],System.Int32,System.Boolean&)
extern void WebRTCAudioLib_webrtc_audio_processor_process_mF0185137038503FB4F8B2087E6689BB2F361ADA0 (void);
// 0x000001E4 System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process_reverse(System.IntPtr,System.Int16[],System.Int32)
extern void WebRTCAudioLib_webrtc_audio_processor_process_reverse_mFB03E13167BD2D036011E33359161F482F1455B9 (void);
// 0x000001E5 System.Void Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_destroy(System.IntPtr)
extern void WebRTCAudioLib_webrtc_audio_processor_destroy_mFE64C088B74E626578B29154FFA15D4F94A9259F (void);
// 0x000001E6 System.Void Photon.Voice.WebRTCAudioLib::.ctor()
extern void WebRTCAudioLib__ctor_mB225CF739082F787B098FB17F48F117C90A0871E (void);
// 0x000001E7 Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::get_VoiceClient()
extern void LoadBalancingTransport_get_VoiceClient_m5ACBE0BA8C380599EF43552CADD55D68F9B976AE (void);
// 0x000001E8 System.Void Photon.Voice.LoadBalancingTransport::LogError(System.String,System.Object[])
extern void LoadBalancingTransport_LogError_m22FDD5CA6FB88340B915A20FEC33BA4852F17C72 (void);
// 0x000001E9 System.Void Photon.Voice.LoadBalancingTransport::LogWarning(System.String,System.Object[])
extern void LoadBalancingTransport_LogWarning_mF22D85E9E81C1D7D312595A729A890F72BA261F0 (void);
// 0x000001EA System.Void Photon.Voice.LoadBalancingTransport::LogInfo(System.String,System.Object[])
extern void LoadBalancingTransport_LogInfo_m65AE67CA862C6AD4E351864B7BFF7C5CFA51EBDF (void);
// 0x000001EB System.Void Photon.Voice.LoadBalancingTransport::LogDebug(System.String,System.Object[])
extern void LoadBalancingTransport_LogDebug_m5A6AABD3C50EBF8E7DF7D746AC84D2A4680FEA63 (void);
// 0x000001EC System.Byte Photon.Voice.LoadBalancingTransport::photonChannelForCodec(Photon.Voice.Codec)
extern void LoadBalancingTransport_photonChannelForCodec_m5B9878780257FBEB7A41A80E02710CE71F97E3F9 (void);
// 0x000001ED System.Boolean Photon.Voice.LoadBalancingTransport::IsChannelJoined(System.Int32)
extern void LoadBalancingTransport_IsChannelJoined_mD5DFB36AF849924ACE4BD79B5718A87C5A64FF23 (void);
// 0x000001EE System.Void Photon.Voice.LoadBalancingTransport::.ctor(Photon.Voice.ILogger,ExitGames.Client.Photon.ConnectionProtocol)
extern void LoadBalancingTransport__ctor_m8B191AD17091BD9C494F2BA33ACB00E0871C3B5C (void);
// 0x000001EF System.Void Photon.Voice.LoadBalancingTransport::SendVoicesInfo(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice>,System.Int32,System.Int32)
extern void LoadBalancingTransport_SendVoicesInfo_m9AE5021EC9F0CC50729F5E129886421372277A4F (void);
// 0x000001F0 System.Void Photon.Voice.LoadBalancingTransport::SendVoiceRemove(Photon.Voice.LocalVoice,System.Int32,System.Int32)
extern void LoadBalancingTransport_SendVoiceRemove_mA00A0303FEB4146C64F3A346A65B3143FE9D622D (void);
// 0x000001F1 System.Void Photon.Voice.LoadBalancingTransport::SendFrame(System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags,System.Byte,System.Byte,System.Int32,System.Int32,System.Boolean,Photon.Voice.LocalVoice)
extern void LoadBalancingTransport_SendFrame_mE14DE80FC1B5450C67A13F023A05B4A0FA907B70 (void);
// 0x000001F2 System.String Photon.Voice.LoadBalancingTransport::ChannelIdStr(System.Int32)
extern void LoadBalancingTransport_ChannelIdStr_mEF1992E8E9FF99387494D71A023F1FE476328599 (void);
// 0x000001F3 System.String Photon.Voice.LoadBalancingTransport::PlayerIdStr(System.Int32)
extern void LoadBalancingTransport_PlayerIdStr_m8429C84D11F7EBE557A53D7930F8D607AD920E50 (void);
// 0x000001F4 System.Void Photon.Voice.LoadBalancingTransport::onEventActionVoiceClient(ExitGames.Client.Photon.EventData)
extern void LoadBalancingTransport_onEventActionVoiceClient_m858EBD24231AF9D6BBBCEB0609E51DE48E167A25 (void);
// 0x000001F5 System.Void Photon.Voice.LoadBalancingTransport::onStateChangeVoiceClient(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
extern void LoadBalancingTransport_onStateChangeVoiceClient_m352747E2A43417F229459D51E2E1274FABF392A6 (void);
// 0x000001F6 System.Void Photon.Voice.LoadBalancingTransport::Dispose()
extern void LoadBalancingTransport_Dispose_mB12CA36901E057D6B117536B66FB343C7B378956 (void);
// 0x000001F7 System.Void Photon.Voice.LoadBalancingTransport/<>c::.cctor()
extern void U3CU3Ec__cctor_mEBC199A77D3C16FCC34D44D07A0124B1A088CCEF (void);
// 0x000001F8 System.Void Photon.Voice.LoadBalancingTransport/<>c::.ctor()
extern void U3CU3Ec__ctor_m232668399806E7F8B2C4D793E86EA0ADC19EB6AD (void);
// 0x000001F9 Photon.Voice.Codec Photon.Voice.LoadBalancingTransport/<>c::<SendVoicesInfo>b__21_0(Photon.Voice.LocalVoice)
extern void U3CU3Ec_U3CSendVoicesInfoU3Eb__21_0_m691D0C67E7DBFBF7D9B8C8A58353368BAB74EC0D (void);
// 0x000001FA System.Void Photon.Voice.LoadBalancingTransport2::.ctor(Photon.Voice.ILogger,ExitGames.Client.Photon.ConnectionProtocol)
extern void LoadBalancingTransport2__ctor_mA790DBB1B9A74BBFA5FFE6F7702A95EB76F8EF6A (void);
// 0x000001FB System.Void Photon.Voice.LoadBalancingTransport2::SendFrame(System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags,System.Byte,System.Byte,System.Int32,System.Int32,System.Boolean,Photon.Voice.LocalVoice)
extern void LoadBalancingTransport2_SendFrame_m04157349F79E513357E16FDB9E212DA416DF75B3 (void);
// 0x000001FC System.Void Photon.Voice.LoadBalancingTransport2::onEventActionVoiceClient(ExitGames.Client.Photon.EventData)
extern void LoadBalancingTransport2_onEventActionVoiceClient_mC7DFC80AB345231ACBBA3F7EE014952BB80E8EE7 (void);
// 0x000001FD System.Void Photon.Voice.LoadBalancingTransport2::onVoiceFrameEvent(System.Object,System.Int32,System.Int32,System.Int32)
extern void LoadBalancingTransport2_onVoiceFrameEvent_m6CFFC6ABF35EF0129D75723C593174372386A639 (void);
// 0x000001FE System.Void Photon.Voice.PhotonTransportProtocol::.ctor(Photon.Voice.VoiceClient,Photon.Voice.ILogger)
extern void PhotonTransportProtocol__ctor_mED40829E0BF224C317EFC71CAD3B243DBA72C70D (void);
// 0x000001FF System.Object[] Photon.Voice.PhotonTransportProtocol::buildVoicesInfo(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice>,System.Boolean)
extern void PhotonTransportProtocol_buildVoicesInfo_mCFEA94FB65AFDB2EB97883DE0CD4C0A82636DCDD (void);
// 0x00000200 System.Object[] Photon.Voice.PhotonTransportProtocol::buildVoiceRemoveMessage(Photon.Voice.LocalVoice)
extern void PhotonTransportProtocol_buildVoiceRemoveMessage_mADB3F5214D62067FC14D18E45DC05B90EB9FFAC5 (void);
// 0x00000201 System.Object[] Photon.Voice.PhotonTransportProtocol::buildFrameMessage(System.Byte,System.Byte,System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags)
extern void PhotonTransportProtocol_buildFrameMessage_m111F1393965EB5012FBC750520294789B31F73AA (void);
// 0x00000202 System.Void Photon.Voice.PhotonTransportProtocol::onVoiceEvent(System.Object,System.Int32,System.Int32,System.Int32)
extern void PhotonTransportProtocol_onVoiceEvent_mA0D98C633667EA89C7F7EF34E252C249F538619F (void);
// 0x00000203 System.Void Photon.Voice.PhotonTransportProtocol::onVoiceInfo(System.Int32,System.Int32,System.Object)
extern void PhotonTransportProtocol_onVoiceInfo_m4A01952ACD0CEEECE737948E3A533EDC8F2750F1 (void);
// 0x00000204 System.Void Photon.Voice.PhotonTransportProtocol::onVoiceRemove(System.Int32,System.Int32,System.Object)
extern void PhotonTransportProtocol_onVoiceRemove_mA4C0C202E8B63DFACFAF91DFA35A56DE0EFEA0EB (void);
// 0x00000205 Photon.Voice.VoiceInfo Photon.Voice.PhotonTransportProtocol::createVoiceInfoFromEventPayload(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern void PhotonTransportProtocol_createVoiceInfoFromEventPayload_m3E1B64E9FD5F289C5765887C301326B42262DF8C (void);
// 0x00000206 System.Void Photon.Voice.Unity.AndroidAudioInAEC::.ctor(Photon.Voice.ILogger,System.Boolean,System.Boolean,System.Boolean)
extern void AndroidAudioInAEC__ctor_mFBD66FAD0CBE64E246BEE31D96B08234A30335FB (void);
// 0x00000207 System.Void Photon.Voice.Unity.AndroidAudioInAEC::SetCallback(System.Action`1<System.Int16[]>,Photon.Voice.ObjectFactory`2<System.Int16[],System.Int32>)
extern void AndroidAudioInAEC_SetCallback_mF7DBCEC92A457C7D57CC18E3749C206B5F0E82EF (void);
// 0x00000208 System.Int32 Photon.Voice.Unity.AndroidAudioInAEC::get_Channels()
extern void AndroidAudioInAEC_get_Channels_mDF6B03321CFD52DB584EE619A36A9E33C36C22A7 (void);
// 0x00000209 System.Int32 Photon.Voice.Unity.AndroidAudioInAEC::get_SamplingRate()
extern void AndroidAudioInAEC_get_SamplingRate_m0E1A7AFAC3536CE5B6A9DBDF51F31B02A3053441 (void);
// 0x0000020A System.String Photon.Voice.Unity.AndroidAudioInAEC::get_Error()
extern void AndroidAudioInAEC_get_Error_m9D2E4CB43470DC011A568279390C5814EABD8C3E (void);
// 0x0000020B System.Void Photon.Voice.Unity.AndroidAudioInAEC::set_Error(System.String)
extern void AndroidAudioInAEC_set_Error_m40A288E504A1638FCC0FCB07E00181AAEF5B0831 (void);
// 0x0000020C System.Void Photon.Voice.Unity.AndroidAudioInAEC::Reset()
extern void AndroidAudioInAEC_Reset_m417D52520850DD6B785E84E7581444D0A68DDF72 (void);
// 0x0000020D System.Void Photon.Voice.Unity.AndroidAudioInAEC::Dispose()
extern void AndroidAudioInAEC_Dispose_m26843B90A3CA9CD9D2FEABEC272EBEBAAE2ED33E (void);
// 0x0000020E System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::.ctor()
extern void DataCallback__ctor_m69A883EB0EC3F9E4B08EA4B0952CDAB1A95FEE14 (void);
// 0x0000020F System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::SetCallback(System.Action`1<System.Int16[]>,System.IntPtr)
extern void DataCallback_SetCallback_mE2D0FF360E4F160402CC58F4112CDE4900AFDDAC (void);
// 0x00000210 System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::OnData()
extern void DataCallback_OnData_mC17AFFA4F2A6A685F853FD224D879B18923D3E86 (void);
// 0x00000211 System.Void Photon.Voice.Unity.AndroidAudioInAEC/DataCallback::OnStop()
extern void DataCallback_OnStop_mA4808055B1718EBC5C9131F12826C6E3642A85F0 (void);
// 0x00000212 System.Boolean Photon.Voice.Unity.AudioClipWrapper::get_Loop()
extern void AudioClipWrapper_get_Loop_mC6FB111E1487AD4B36328074EC7A78D7F899ADE8 (void);
// 0x00000213 System.Void Photon.Voice.Unity.AudioClipWrapper::set_Loop(System.Boolean)
extern void AudioClipWrapper_set_Loop_mDFC7AE15A8840FC5C8B20DE66FD6F461708EAB91 (void);
// 0x00000214 System.Void Photon.Voice.Unity.AudioClipWrapper::.ctor(UnityEngine.AudioClip)
extern void AudioClipWrapper__ctor_mE456E6F8B632F377F2A96F55157D464AB48162D6 (void);
// 0x00000215 System.Boolean Photon.Voice.Unity.AudioClipWrapper::Read(System.Single[])
extern void AudioClipWrapper_Read_mC6297F65F22ABFA75E769001047445A11E2D50EB (void);
// 0x00000216 System.Int32 Photon.Voice.Unity.AudioClipWrapper::get_SamplingRate()
extern void AudioClipWrapper_get_SamplingRate_m2C38195B6D552BD7B28796C61EE73D01A1980BA7 (void);
// 0x00000217 System.Int32 Photon.Voice.Unity.AudioClipWrapper::get_Channels()
extern void AudioClipWrapper_get_Channels_m3E9A7025560A23B931B369EF616A2232F8BE3423 (void);
// 0x00000218 System.String Photon.Voice.Unity.AudioClipWrapper::get_Error()
extern void AudioClipWrapper_get_Error_m649FB5EB2091006005C4C89D59DA71E290C828F7 (void);
// 0x00000219 System.Void Photon.Voice.Unity.AudioClipWrapper::Dispose()
extern void AudioClipWrapper_Dispose_m4B0DCF797385D089F3D8F72D8F6FCC3EF27FE890 (void);
// 0x0000021A System.Void Photon.Voice.Unity.AudioOutCapture::add_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
extern void AudioOutCapture_add_OnAudioFrame_m4FF3A28BCD297FB144E251F0738F210565904EA2 (void);
// 0x0000021B System.Void Photon.Voice.Unity.AudioOutCapture::remove_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
extern void AudioOutCapture_remove_OnAudioFrame_m86AE5B978E42FF7EDEF6799F50D90330667132C3 (void);
// 0x0000021C System.Void Photon.Voice.Unity.AudioOutCapture::OnAudioFilterRead(System.Single[],System.Int32)
extern void AudioOutCapture_OnAudioFilterRead_m2CD58279218A4D5BEB6533FC632B344583D222EF (void);
// 0x0000021D System.Void Photon.Voice.Unity.AudioOutCapture::.ctor()
extern void AudioOutCapture__ctor_m636126F90EF7A04D81D8766D55067E5519085A7F (void);
// 0x0000021E Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::get_Voice()
extern void PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C (void);
// 0x0000021F System.Void Photon.Voice.Unity.PhotonVoiceCreatedParams::set_Voice(Photon.Voice.LocalVoice)
extern void PhotonVoiceCreatedParams_set_Voice_m143683C70E4667D264B912FDA9499941E1108F44 (void);
// 0x00000220 System.Void Photon.Voice.Unity.PhotonVoiceCreatedParams::set_AudioDesc(Photon.Voice.IAudioDesc)
extern void PhotonVoiceCreatedParams_set_AudioDesc_m3BAEF4BF8A70CB86C849D61A118F2B979ABEE20F (void);
// 0x00000221 System.Void Photon.Voice.Unity.PhotonVoiceCreatedParams::.ctor()
extern void PhotonVoiceCreatedParams__ctor_m19B4DDA1BADC5E0CB4C0ED4D568943B6AC611513 (void);
// 0x00000222 System.Void Photon.Voice.Unity.AudioInEnumerator::.ctor(Photon.Voice.ILogger)
extern void AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3 (void);
// 0x00000223 System.Void Photon.Voice.Unity.AudioInEnumerator::Refresh()
extern void AudioInEnumerator_Refresh_mB786428BE117E83DE7FD2B800D9D5CE21BC12518 (void);
// 0x00000224 System.String Photon.Voice.Unity.AudioInEnumerator::get_Error()
extern void AudioInEnumerator_get_Error_m26ABF5B69C5AB8D3B9CE3A68170CEEB1B5FC183C (void);
// 0x00000225 System.Void Photon.Voice.Unity.AudioInEnumerator::Dispose()
extern void AudioInEnumerator_Dispose_m51E7DB53EC6856A81BCEC3EE962F1F8192389F8C (void);
// 0x00000226 System.Void Photon.Voice.Unity.MicWrapper::.ctor(System.String,System.Int32,Photon.Voice.ILogger)
extern void MicWrapper__ctor_m32E8CA669E6B1B9E2167B130961DEEFD3BB26A93 (void);
// 0x00000227 System.Int32 Photon.Voice.Unity.MicWrapper::get_SamplingRate()
extern void MicWrapper_get_SamplingRate_m8590D79C7AEAE3978D91DDDC2B83F0CD15096206 (void);
// 0x00000228 System.Int32 Photon.Voice.Unity.MicWrapper::get_Channels()
extern void MicWrapper_get_Channels_m9EF4422CE2DFC276E84E8A70E3465F4804D8CAB8 (void);
// 0x00000229 System.String Photon.Voice.Unity.MicWrapper::get_Error()
extern void MicWrapper_get_Error_m05325774B70C9C895217F349716FF76E121E2A50 (void);
// 0x0000022A System.Void Photon.Voice.Unity.MicWrapper::set_Error(System.String)
extern void MicWrapper_set_Error_m51F227BF125CBDB4E19BF5253116FCDA2F83D744 (void);
// 0x0000022B System.Void Photon.Voice.Unity.MicWrapper::Dispose()
extern void MicWrapper_Dispose_m7DB20FA342EA5E4F83E5FC252DB49B958B3CECFD (void);
// 0x0000022C System.Boolean Photon.Voice.Unity.MicWrapper::Read(System.Single[])
extern void MicWrapper_Read_m474FEB1A580A3916FA6069165DB1C91396089032 (void);
// 0x0000022D System.Void Photon.Voice.Unity.MicWrapperPusher::.ctor(System.String,UnityEngine.Transform,System.Int32,Photon.Voice.ILogger,System.Boolean)
extern void MicWrapperPusher__ctor_mD867C5063ECDF5D0D577105979F306691F344A80 (void);
// 0x0000022E System.Void Photon.Voice.Unity.MicWrapperPusher::AudioOutCaptureOnOnAudioFrame(System.Single[],System.Int32)
extern void MicWrapperPusher_AudioOutCaptureOnOnAudioFrame_m1748F21237929785CAE68BE38AF235E59EC46EA9 (void);
// 0x0000022F System.Void Photon.Voice.Unity.MicWrapperPusher::SetCallback(System.Action`1<System.Single[]>,Photon.Voice.ObjectFactory`2<System.Single[],System.Int32>)
extern void MicWrapperPusher_SetCallback_mA10474D2061FABE11F26C50F3C4D68DB5F53B63A (void);
// 0x00000230 System.Void Photon.Voice.Unity.MicWrapperPusher::Dispose()
extern void MicWrapperPusher_Dispose_m53AF8B398E2DB39061D5562CBFCD36FF71B505AC (void);
// 0x00000231 System.Int32 Photon.Voice.Unity.MicWrapperPusher::get_SamplingRate()
extern void MicWrapperPusher_get_SamplingRate_m1B03DD79BCD8A4CBE1F7850490822184C1516B9C (void);
// 0x00000232 System.Int32 Photon.Voice.Unity.MicWrapperPusher::get_Channels()
extern void MicWrapperPusher_get_Channels_mF6F95B5AE0EA50189A8D84960E88C31863D51AA6 (void);
// 0x00000233 System.String Photon.Voice.Unity.MicWrapperPusher::get_Error()
extern void MicWrapperPusher_get_Error_mFA152B5C6AE71AB69E34D6A08F8D4BDE2AC881BB (void);
// 0x00000234 System.Void Photon.Voice.Unity.MicWrapperPusher::set_Error(System.String)
extern void MicWrapperPusher_set_Error_mCC2253562EA96DE5BAA4A2494BF5B5952B701810 (void);
// 0x00000235 System.Void Photon.Voice.Unity.UnityAudioOut::.ctor(UnityEngine.AudioSource,Photon.Voice.AudioOutDelayControl/PlayDelayConfig,Photon.Voice.ILogger,System.String,System.Boolean)
extern void UnityAudioOut__ctor_m7FA47C12B4C15B5E26FAA5056F4DD6F618D323EF (void);
// 0x00000236 System.Int32 Photon.Voice.Unity.UnityAudioOut::get_OutPos()
extern void UnityAudioOut_get_OutPos_m3AF2A7390305C097F73C61CD6337C4E9DA2A5701 (void);
// 0x00000237 System.Void Photon.Voice.Unity.UnityAudioOut::OutCreate(System.Int32,System.Int32,System.Int32)
extern void UnityAudioOut_OutCreate_mE7D65162FE8E0041D4FE21849F643D4DF85B833A (void);
// 0x00000238 System.Void Photon.Voice.Unity.UnityAudioOut::OutStart()
extern void UnityAudioOut_OutStart_mA8FB5BDD2D8AB01827AF19F5D65C07603C6FDCC0 (void);
// 0x00000239 System.Void Photon.Voice.Unity.UnityAudioOut::OutWrite(System.Single[],System.Int32)
extern void UnityAudioOut_OutWrite_m319FBD3D41CF3A6E5CC4ED60443DEC9028FC3B58 (void);
// 0x0000023A System.Void Photon.Voice.Unity.UnityAudioOut::Stop()
extern void UnityAudioOut_Stop_mA0F4F1DDAED9988324588D40C74978F253625955 (void);
// 0x0000023B System.String[] Photon.Voice.Unity.UnityMicrophone::get_devices()
extern void UnityMicrophone_get_devices_mDF8A614AA77A55929195712974FB191993B9EF5F (void);
// 0x0000023C System.Void Photon.Voice.Unity.UnityMicrophone::End(System.String)
extern void UnityMicrophone_End_m7ECA62ED3E3E43BA268CFEA21C862EF8532A36EB (void);
// 0x0000023D System.Void Photon.Voice.Unity.UnityMicrophone::GetDeviceCaps(System.String,System.Int32&,System.Int32&)
extern void UnityMicrophone_GetDeviceCaps_m3F18339A6F63023F4CB82BE7834C223B65FDC7EE (void);
// 0x0000023E System.Int32 Photon.Voice.Unity.UnityMicrophone::GetPosition(System.String)
extern void UnityMicrophone_GetPosition_m8878AC0720F6428C7C9F40EE5E785D05E20F7419 (void);
// 0x0000023F UnityEngine.AudioClip Photon.Voice.Unity.UnityMicrophone::Start(System.String,System.Boolean,System.Int32,System.Int32)
extern void UnityMicrophone_Start_m090FA09D48B01AD499E41C8DAAA0C291F27D2BE8 (void);
// 0x00000240 System.String Photon.Voice.IOS.AudioSessionParameters::ToString()
extern void AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7 (void);
static Il2CppMethodPointer s_methodPointers[576] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OpusLib_get_Version_m1A79C7D0CA41F837FA240628A0B5A4BB22BD5655,
	OpusEncoder_set_EncoderDelay_mE4FE0FDD205A223B2CB3885F97936FAC8E7454B1,
	OpusEncoder_get_EncoderDelay_mDA660B10BCEAA5EBDD1BF746CE78F2DC059D7622,
	OpusEncoder_get_Bitrate_m747FF675E77777295BCAF84851C98DC256F9205D,
	OpusEncoder_set_Bitrate_mC5DD3C897C5008667846B4937E3CD72BA8E7B1CA,
	OpusEncoder_set_UseInbandFEC_m83C3A32495B59E54F133B724C5D94993C40CB1F2,
	OpusEncoder_set_PacketLossPercentage_m5D3A2EBEB66D2D4C6F40ABBC639F7F52B5331A6E,
	OpusEncoder__ctor_m32A64140184D7DD002BDC6D8F508A50D732CE413,
	OpusEncoder_Encode_m0B5F49BCE218DFF1F5A1FB555D03E74F0B3AF487,
	OpusEncoder_Encode_m2273A0992EA1E5207015BD406748B5A6E198BB95,
	OpusEncoder_Dispose_m7F077E1955C9CFA62CA995F486A24C7DDEA661B8,
	OpusEncoder__cctor_m88A202EB024BB9C556D451353A9AD818445ABF8A,
	OpusException__ctor_m1705E7FFAEB6F8EF41F212F5B568B24E5F8F6D1B,
	Wrapper_opus_encoder_get_size_m7893FB71D82FFEAAF1BD9CD5679A6FA27F534496,
	Wrapper_opus_encoder_init_mEE085D640D02C380608E35AE3D417621D0A04896,
	Wrapper_opus_get_version_string_mF95D4EAC6118B15634187C9C30A1365C76C9153D,
	Wrapper_opus_encode_m9278B43E3093634686166CD9864FBCDB9866BAD1,
	Wrapper_opus_encode_float_m7E0A1A5FA82E813C8E5EB74D555E0FFB50EA5D1D,
	Wrapper_opus_encoder_ctl_set_m7CC9B669B6B619024F2E9EEA9DA70F20579CD876,
	Wrapper_opus_encoder_ctl_get_mFF9CE457AF53530890A3E33EA80CCEEC69BF98E2,
	Wrapper_opus_decoder_get_size_m9F89F5A30C03703571A85D33CD8E214F9CBB7298,
	Wrapper_opus_decoder_init_m35A5A8D8A1647D712FCE29E394ECB6CD78EB8448,
	Wrapper_opus_decode_m0245172355BD7636AAF0AC87441DACBC615652C2,
	Wrapper_opus_decode_float_m902402D35F68B745F117C423DA733DA0CA82FC4D,
	Wrapper_opus_packet_get_bandwidth_m24BE628F3F59872BF13F4D90817120F81A9CAD5C,
	Wrapper_opus_strerror_mBC12B8DCA81178B1445809EECF8451C92E122429,
	Wrapper_opus_encoder_create_m9F07A8604A4247888FF2A7D15671B2DD1A46508A,
	Wrapper_opus_encode_m7C4F9B92756053CD3FE12880C3C990DDE723651A,
	Wrapper_opus_encode_m9835EFDE2D18F5AEECA65B99A7DFE8430A342576,
	Wrapper_opus_encoder_destroy_m24360871EE0997656B6E10C3FF3D3D9060AAD1D5,
	Wrapper_get_opus_encoder_ctl_mBAEC1384A74E7A0F3872D6FA6C5FC417EB949DDC,
	Wrapper_set_opus_encoder_ctl_m9C67EDA0D9F8282490CCC4586BEBA36C3749DDFE,
	Wrapper_opus_decoder_create_m2C9439D91CA04BD719933E14374B6E2968B74E91,
	Wrapper_opus_decoder_destroy_mC5950248386996DFAEB69F4B17BC709D81647E4B,
	Wrapper_opus_decode_mFC6B90330C5DFEE5D375D0361A7F1A6C26C8FD9F,
	Wrapper_opus_decode_m875FCB70DD0EFD5669E8C404DB2BA265E58EFB4E,
	Wrapper_HandleStatusCode_mC2703EBE709E2BF8D2B5D0FA6B06EC4423B66C3E,
	NULL,
	AudioUtil_ResampleAndConvert_m49ED11F3FF92BE094E5013FD27D43588299B7A92,
	AudioUtil_Convert_mFD94A7276A0D0AF96A0BB7A94327668E738CF1CC,
	AudioUtil_Convert_mD75A46A4751D793107EFC13EB5A310899A9E18DE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LevelMeterDummy_get_AccumAvgPeakAmp_m3287F0881EDAB941670783E05F4C1E628355D428,
	LevelMeterDummy_ResetAccumAvgPeakAmp_m90A3A188F3DF4B052AAF7F1D32D7866783FF9A99,
	LevelMeterDummy__ctor_m558F4620D936B6FBBA1C3D7E8FFFD769C070E02D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LevelMeterFloat__ctor_mE0A584CF788DCB5BD4713D50EE9923F52D8B9409,
	LevelMeterFloat_Process_mB571DD0E5E3DFC46ABA36F8A0FC124F31A93B077,
	LevelMeterShort__ctor_m052D37BD55E12C250D8B996312CD0F93F4622976,
	LevelMeterShort_Process_m2E29A58E6FDE53392314140C700A80AC18142EB1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VoiceDetectorDummy_get_On_mD6C1D2DD9818F35A49990405F990AEB3E6EDC0B0,
	VoiceDetectorDummy_set_On_m8F60EBFBC1AF288B5173FA13BD9F5A99006744EF,
	VoiceDetectorDummy_get_Threshold_mAA4FDE6C1E3859382966D3A09649482D26EE3FB1,
	VoiceDetectorDummy_set_Threshold_m1165DBF8A743017ACE185F1D3EE3050F79A952D6,
	VoiceDetectorDummy_get_ActivityDelayMs_m5D30D1548EBEE935A28C351FB5D904A2EFD1AA5A,
	VoiceDetectorDummy_set_ActivityDelayMs_mBB7F92B3A99A3C87ED2BB51DAB57BBF58E5B44A4,
	VoiceDetectorDummy__ctor_m5A39825C35A674D8A1FD8386619730554FE20D6F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VoiceDetectorFloat__ctor_m001D2033EEC8BF5CE55619A8A2195498F1D3E9E6,
	VoiceDetectorFloat_Process_m4F93C37AFD695205C7DA5D1EBE0D4C2A5E49D446,
	VoiceDetectorShort__ctor_m56318C396C1C50EEBAA08946E31FCCC7D2F3B9E2,
	VoiceDetectorShort_Process_m8FB59C6696F94A1AC4635FFA4A990C2742C5C666,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AudioOutDelayControl__ctor_mA8715AF7479E275CE5EE57CFFE4ADB949BA5593F,
	PlayDelayConfig__ctor_m09B8A8AF1B11B5A25AE72D6F6B3FA5C39D9EC019,
	PlayDelayConfig_get_Low_m4E1FB56CF693205A74A7AF170385703E47EFCF39,
	PlayDelayConfig_set_Low_mDE42627955A5190654C9FE796E19FCD70700858B,
	PlayDelayConfig_get_High_m7B5AD1D474489A8CE5E8B8AD8F8C3677720671FD,
	PlayDelayConfig_set_High_m6E870865B972E6A9BCA9572077ECF443A6330425,
	PlayDelayConfig_get_Max_mA846AA0A1597AACB2E830A85100F09FB387E157D,
	PlayDelayConfig_set_Max_m83552A14AC33B8B0E4A945EE85F361E82D4B8828,
	PlayDelayConfig_get_SpeedUpPerc_mA84945452E49F62F36A8857A151CCD175E231FC0,
	PlayDelayConfig_set_SpeedUpPerc_m45708D62157C41E2DD7BC43D6FE78AE71F04E0EC,
	PlayDelayConfig_Clone_mD814CF689EDC070E6CDD55B09DD4FB4CC9EDD08D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DeviceInfo__ctor_m96173DA61BDF3BD1456C5372309CA4B401883895,
	DeviceInfo__ctor_m8635D2EAEDFC320C1D80BD2B053B584D058F7BC6,
	DeviceInfo_set_IsDefault_m501D5F69C9B4CCCE9AB649094DF7E811F4FAB43A,
	DeviceInfo_get_IDInt_m26B46F8B9F8267BCA710CB3634D8E62928B96954,
	DeviceInfo_set_IDInt_mFF41782CC6BCDD559B4C4125CC865A8CB1FBA9AC,
	DeviceInfo_get_IDString_mCEA67E532D1957B1EE0E4528A30C0FB130752E6D,
	DeviceInfo_set_IDString_m92E767D2C8B050FBDC6FEA08B9C09D453444B024,
	DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53,
	DeviceInfo_set_Name_m8D6019A448A977493BD7A2564E1FC92FDE1BB1F1,
	DeviceInfo_Equals_m59BEFBB70BBD0F425EC8908A68E2ECE0918CA04B,
	DeviceInfo_GetHashCode_mF7E8C7FD032FDC98F715A18514A4F48E793F24CD,
	DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17,
	DeviceInfo__cctor_m3C1C0C3053248D748AA6AD3A0CE5BC1F4009BAF5,
	NULL,
	NULL,
	DeviceEnumeratorBase__ctor_mB199669E30C7BADB1FA450D74DB2C892C65379D9,
	DeviceEnumeratorBase_get_IsSupported_m12714BF353A4218CB150217B69AAFFEAB4298969,
	DeviceEnumeratorBase_get_Error_mCC842DB04138D4AE8D241CA7743B0104E367B39A,
	DeviceEnumeratorBase_GetEnumerator_mDE5B5A19C1202CBA0E9D4DE55AFB4A8A67C925B7,
	NULL,
	DeviceEnumeratorBase_System_Collections_IEnumerable_GetEnumerator_m317B2D4499CB6DA6F4BAEB07C67093EE12D3E1DE,
	NULL,
	DeviceEnumeratorNotSupported_get_IsSupported_m53026DA5BF15C74C98558A11FD606A857F0B8B16,
	DeviceEnumeratorNotSupported__ctor_mC977B08827779EDF041C293962F0619C3C87AA6D,
	DeviceEnumeratorNotSupported_Refresh_mDA78A2FF56AF404DC4038C4EBC4889C7BC87A791,
	DeviceEnumeratorNotSupported_get_Error_mAE312E35A872E2458C0E3D08488601938D2A3A90,
	DeviceEnumeratorNotSupported_Dispose_m009CE1A40EE3325E4522273FFBCF98930311FCAD,
	AudioInEnumeratorNotSupported__ctor_m5F849A0A30419000B1D5838CA7E64519411DB996,
	NULL,
	NULL,
	AudioInChangeNotifierNotSupported_get_IsSupported_mE4DC52F980C4AACB2EB3E3B2C0B0ED2F6F282C21,
	AudioInChangeNotifierNotSupported__ctor_mC97E12C9FA96BF2886E5CDAE3A2B42DBDB519BCA,
	AudioInChangeNotifierNotSupported_get_Error_mFE548DBC1EE5BB2E690E68570B024DD6FF3BD2FE,
	AudioInChangeNotifierNotSupported_Dispose_m12D0D7CAC39A6B8C21E011A59DF40998931C25CB,
	FrameBuffer__ctor_m251C0C8AB214C4E826964391519565A2C79DD080,
	FrameBuffer__ctor_m9082AB45997EE91BF42B6DC22CF37BB2B1404651,
	FrameBuffer_get_Ptr_m7B8D7F4CD65BE84DE95E48609890CBBA87ACFB15,
	FrameBuffer_Retain_m8C2CE0F03537553A809D3A49E71EBF00920E4B72,
	FrameBuffer_Release_m8EEF2FAF12E3ACFAE456CC3CA5C04C3B968BBFD2,
	FrameBuffer_Dispose_mA6053144FE2D0F804FD8B3D9E33224F7BF1690A6,
	FrameBuffer_get_Array_m33555AC9413B61F9B142C0A9704D277ECBEBD1F5,
	FrameBuffer_get_Length_m99F73FA338DDB97D9228FD206D131E3DB1349201,
	FrameBuffer_get_Offset_m1B1687E7965E3452A09543519DA3617A19F664F0,
	FrameBuffer_get_Flags_mC466B9947228B6EC6A14AF461E2F35E14D8492D4,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OpusCodec_get_Version_m008921D2C85E418116F03DC7B31495021D0A549B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EncoderFloat__ctor_m0991241DD1FE17E2F3746983B476AD2A0140A918,
	EncoderFloat_encodeTyped_m243369A5911C9571E417E78E404E5A8FA942A30B,
	EncoderShort__ctor_m8EF1D2500A53BCBFD9307669E3663E960A34DEF6,
	EncoderShort_encodeTyped_mA436895757B785A2639D882355B4911F16218AD3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Platform_CreateAudioInEnumerator_mAC7EB99564BE856564FD77BA5DEF350B04A72163,
	Platform_CreateAudioInChangeNotifier_m41F0300A3BB3838D98599DA2C69560732BDDA623,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SpacingProfile__ctor_m1208F1AACB921DD63D631D7C6C0325625AA2E431,
	SpacingProfile_Update_mEA18EC854FA12B439AEC4C8A35760FC4D9F3E8BB,
	Util_SetThreadName_mACD08B4DA0DD63FEFFB3B06BADAF9DA7435BEA34,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LocalVoice_get_InterestGroup_mC3B34BA32A7D2D3CB175EE97509D26C34B19A59C,
	LocalVoice_set_InterestGroup_m2D571F8844CF752601904CC3C7D3B3EAA32C5D7B,
	LocalVoice_get_Info_mFCD2D5AC24454B0E5B0538EE171756EF90F2E938,
	LocalVoice_get_TransmitEnabled_mEF9CBAAAE859130E102A46B716F720506CCC7E6E,
	LocalVoice_set_TransmitEnabled_m4C90109AB98849B171726A9381F7891913C6277E,
	LocalVoice_get_IsCurrentlyTransmitting_mACAF3745CED8197ECAC477BE91E089D3FF3DC725,
	LocalVoice_get_FramesSent_m31EC890BD57564C918D0288CBF59888D70650DD5,
	LocalVoice_set_FramesSent_m433AE27E5444F1EE79BD1839CEB0C4649E85187C,
	LocalVoice_get_FramesSentBytes_m303B8432949389B845AE78B7D0A470F0ACF347A4,
	LocalVoice_set_FramesSentBytes_m263BFEADD6AD997392D3F82A30AD02D3899F52AC,
	LocalVoice_get_Reliable_m6FEF5EDAD5795160542F5C4017CBF9F37A1E66EF,
	LocalVoice_set_Reliable_mC537F4D8B41C86F0ED5EB2BE05595698D0C4CDBD,
	LocalVoice_get_Encrypt_mDB962FE410E2CBF91B0DC7B819FBF054A59E41A4,
	LocalVoice_set_Encrypt_m438BA614427407D830D26CA9A0F40B7D55C16B03,
	LocalVoice_get_LocalUserServiceable_m480CA4148204285CD0566B8ED7F53F338D51BFAA,
	LocalVoice_set_LocalUserServiceable_mC9C701DFB55842054DA635B5D75B77780E9A12C7,
	LocalVoice_get_DebugEchoMode_mBB5814D60DDFE293CAE3D2FAEFF871B1A6A08381,
	LocalVoice_set_DebugEchoMode_m49C88569ED358403659FEE92ABD4E4988C096C4B,
	LocalVoice__ctor_m5D3248AE19E830581367E9B72A83E0DA47E5D337,
	LocalVoice__ctor_m2758C28A05887B045CA471BB6B985924DD107D15,
	LocalVoice_get_shortName_mB1CA8CC8385796A57215CF6A6C48572EEAAD52A9,
	LocalVoice_get_Name_m0C73447EC9348D15EE923D94301B10B85404E6B5,
	LocalVoice_get_LogPrefix_mBD379944D1F0172B0B6A29C02D115E0B07F8F0C8,
	LocalVoice_service_mB6D50060CE9CBF18EEFA8C8E1E255100DB0F55C3,
	LocalVoice_sendConfigFrame_m9F6E232E4ECCBE7D97812A3E0E50920772668ED0,
	LocalVoice_sendFrame_mD8E709F204634A5A1E8AB4FB0654A40FE08B6730,
	LocalVoice_sendFrame0_m50C0ACCBD23B134D1A9353368D5550F72674E7B5,
	LocalVoice_RemoveSelf_m1A612ACE8DBA1D5A9F539ECD1919B2A2FAB20F43,
	LocalVoice_Dispose_m6A147BF4D5D6C89D16BC289B90CC8249DCFD7B01,
	RemoteVoiceOptions_SetOutput_m1D8335B78DC7DFCD68167FBDFABF2E9B15CA6E9B,
	RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m019D282B2C9C1A5A5A0DE0E03C586AF58A571610,
	RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m6E0B66C38E6233CF40E852DA82627476219C0338,
	RemoteVoiceOptions_get_Decoder_mF10176ACC4A1599DD83BFC7F413B17FBA135F073,
	RemoteVoiceOptions_set_OutputImageFormat_m266F5CD3FE1FE27355D21C59544B83A90E94F8CA,
	RemoteVoiceOptions_get_outType_m255C8527993D6C76731D6566A9ABA236AEC16406,
	RemoteVoiceOptions_set_outType_m69DC850D7AB4CD8C62ADBC10418AD166D20513BE,
	RemoteVoiceOptions_get_output_m0277760FE5D2111DB81B47EDE17BB1C502D92760,
	RemoteVoiceOptions_set_output_m0D8361A82E851B664ED8366959BA64AF16D6542C,
	RemoteVoice_get_Info_mDA764DF4B45A49F2B3B4EA47FCC2DC85FC51B4B8,
	RemoteVoice_set_Info_m0823E39D1470CD59C7FCEFFA8585238857DEE470,
	RemoteVoice_get_DelayFrames_m25E1B978FD3670CADC173BA4A0B2B041252B612F,
	RemoteVoice_set_DelayFrames_mF3A78B86EF30BA5660B5F7C5A380DE99CB9B68D0,
	RemoteVoice__ctor_m5EA5852C7899034F239F056A8F365F7F62CD4BE2,
	RemoteVoice_get_shortName_mEA08218B32F80E5539A5F9F1062E3B36535B0777,
	RemoteVoice_get_Name_m8CB49DEB66D7643A40E32C2A8A726ED9FD72F1CA,
	RemoteVoice_get_LogPrefix_m78E27CBF8DA4824928C83FDC7A839C7B06FCE299,
	RemoteVoice_byteDiff_m79B1980073C8FCF08AE962F56E479E08D991F65B,
	RemoteVoice_receiveBytes_mBDB797AA14B9B569ABCFCDA2F6B3A9148970E0D3,
	RemoteVoice_receiveFrame_m1F6CE9B7ADE607C5212F474E9B75CDA7DF97B42D,
	RemoteVoice_receiveNullFrames_m9D331DA80F3D01664C5E36542BCC75F45A580863,
	RemoteVoice_createDefaultDecoder_mCE8EF90679F329048A8E084BF28F0B0E6FE3EBFE,
	RemoteVoice_decodeThread_m78EB2CEA3AF98BDC2B1C37B8C5A92503B7CC84C2,
	RemoteVoice_removeAndDispose_mFA5904757A601BF76EAA473B1B17E5E47D6B297D,
	RemoteVoice_Dispose_mD1F4C4199B6ADE655B14764208D7EA14AE4BCC91,
	RemoteVoice_U3C_ctorU3Eb__14_0_m879043D7830914E84BE9732B9AD57B37F2342707,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LocalVoiceAudioDummy_get_VoiceDetector_m5711F0BF61798577A44AAA83B16DD248773CF2E9,
	LocalVoiceAudioDummy_get_LevelMeter_mF02603475AE4F003ACF466ACE05D0462691A3FF4,
	LocalVoiceAudioDummy_get_VoiceDetectorCalibrating_m58D7DD27EF19B0A93C059B8A60D66D44C76F7311,
	LocalVoiceAudioDummy_VoiceDetectorCalibrate_mD8E03D0A77D3AF13505179527FA4E5947A14729B,
	LocalVoiceAudioDummy__ctor_m500E2EBCA673CEAACFE892CDC110651BFB93AC70,
	LocalVoiceAudioDummy__cctor_mB4475DA8906014324E9A818167ACED356CA35FBA,
	LocalVoiceAudioFloat__ctor_m8B8904660D017484F9CBC7D1FC1B8A0098EB5F2D,
	LocalVoiceAudioShort__ctor_m7FB64A82FC793306CC62EC571937DA5458169FA0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VoiceClient_get_FramesLost_m98466CCB14660851F20F985C1074A16BD49CBFDA,
	VoiceClient_set_FramesLost_m119D64A228A6C8F31EE323A154B9E0ECA06C84F3,
	VoiceClient_get_FramesReceived_m9AB529352DA8F1C9A7FBEB4FE109D0CAEE6C440A,
	VoiceClient_set_FramesReceived_m5A32DDC0C9DFB072851C84F9CDFE342D117602FA,
	VoiceClient_get_FramesSent_m1BA3241254EDE469FDF70CB4B5A7D3483CF81B3E,
	VoiceClient_get_FramesSentBytes_mAE278DF31CF670B1E58EB0261FE61F290FDC5150,
	VoiceClient_get_RoundTripTime_m6DD2EF8C9166757654EEA55527B926EA316A89FB,
	VoiceClient_set_RoundTripTime_mF5CCFC4FA32F03941A7FC924D09A0E48F02764FC,
	VoiceClient_get_RoundTripTimeVariance_mC8EFB27305D471D6BFEDA798F1593423D71588DC,
	VoiceClient_set_RoundTripTimeVariance_mD33E782EBCC80CA1BB096ECD0B247AF787155FF7,
	VoiceClient_get_SuppressInfoDuplicateWarning_m73BC21D49E62C08EDFA4FF8C7810D11808996077,
	VoiceClient_get_OnRemoteVoiceInfoAction_m5EF4AD6CAF6FF8A44BE48B5F99DC80F31CE81A46,
	VoiceClient_set_OnRemoteVoiceInfoAction_m22A59006AABCEEA47D6D8FFD92ACE3BBDB210A3D,
	VoiceClient_get_DebugLostPercent_m372E20DEF459F85724F793CD11E43A7F635B4B72,
	VoiceClient_set_DebugLostPercent_m661F08B4FCA903D03B772A2B954CE1CA8E77DC3A,
	VoiceClient__ctor_m990E68E551844CE777B781005EE58D39D3CA9950,
	VoiceClient_Service_m315563438957990A651FEAE936702794FCA3B783,
	VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C,
	NULL,
	VoiceClient_CreateLocalVoiceAudioFromSource_m340D08DC53B42CC7677DC68AE93F6FDD8E983ED3,
	VoiceClient_getNewVoiceId_m700ADAA6D5FABED72CF8D0D62BD49C62DC2BE118,
	VoiceClient_addVoice_mC356CFE6062C54F867B205145DD66AF0AB69C511,
	VoiceClient_RemoveLocalVoice_mB0E112274E868E8BAB3387773A03315BC62D3C16,
	VoiceClient_sendChannelVoicesInfo_m66CFA1C50CEB28329A4D5B0398FB8CF969B4F2ED,
	VoiceClient_sendVoicesInfoAndConfigFrame_m968FE64B468BC81287115D4B571631241FFCC8AD,
	VoiceClient_get_GlobalInterestGroup_m735EBFECB6DC4B5875BA98A52B0E9E419368F006,
	VoiceClient_clearRemoteVoices_m85A94D9D44D5952DDD9CD6368F9372194D4DDB6A,
	VoiceClient_clearRemoteVoicesInChannel_m9D5BCAD29AD37CED4A085997C15CF2F14121BC79,
	VoiceClient_clearRemoteVoicesInChannelForPlayer_mEFC287FA8BD560986442138DBC649118FFDD3184,
	VoiceClient_onJoinChannel_mCF9FBB7551977F0EFB521CF84728189AB42F3B56,
	VoiceClient_onLeaveChannel_mA8F170D50711852E7CE159AB5B7092858AE9F367,
	VoiceClient_onLeaveAllChannels_m4B136F1BF9DB137683A67C4DAF0809743523C45F,
	VoiceClient_onPlayerJoin_mAE58710EAC9933C477322096E35DF674BB6823EF,
	VoiceClient_onPlayerLeave_mFC467D082FCD8F4A9C037DDE3FAE0AC788EBE280,
	VoiceClient_onVoiceInfo_m3C5AD959AFB2E7C3552E40640105E6FAF2FE0BC1,
	VoiceClient_onVoiceRemove_mD2C7AD7A9A3777AE5A94E0245A700E4F2B76BEC0,
	VoiceClient_onFrame_m9D4A3B236F96891AEAA7BA07B31684C01614F63B,
	VoiceClient_channelStr_m21FBE4504EF3EC4E80F892F92F2D919A626D36A8,
	VoiceClient_playerStr_mC2B75E9974E5F7505DA4C6366A1F5307BC89512F,
	VoiceClient_Dispose_m8653A119E3612FE0256C7E31F2E9842AB4C0E253,
	RemoteVoiceInfoDelegate__ctor_mF793A2833EE5811B84813F7922DF4794B80EED36,
	RemoteVoiceInfoDelegate_Invoke_m33C6C0AD7BCE050DCB377C0208C70FA3757B7BCE,
	NULL,
	NULL,
	U3CU3Ec__DisplayClass51_0__ctor_mB6AC6F77A44A42487A8DBCA088AAC92890FC269B,
	U3CU3Ec__DisplayClass51_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_m96FBF1D7AE7C50844E273CA3D629AC5017C5A2C6,
	U3CU3Ec__DisplayClass51_1__ctor_mDAE72E1BB3A570F6246514ADD3E32FF15A5742E4,
	U3CU3Ec__DisplayClass51_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_mF4CF7D365D780660C5AA4E383586745DD14CC542,
	U3CU3Ec__DisplayClass51_2__ctor_mC7335182E0AC99674415BCF817F0AB0C81A5079E,
	U3CU3Ec__DisplayClass51_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_mCE34ED542B1B980778452A83749935A9215E0024,
	U3CU3Ec__DisplayClass51_3__ctor_mA813E91853A6FAEE777B13024C190F011A0B42EB,
	U3CU3Ec__DisplayClass51_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m6CDC4F741E81EABD29A7C8D3A7FF641A8809B195,
	U3CU3Ec__cctor_m403BA324CB52C4FAFAD0E37A9EE5F908630FA3A3,
	U3CU3Ec__ctor_m22941987F316D4E04C5D4A0BD657B7C9DC17A5D0,
	U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__56_0_m30AC2C7585EC2E437029290142AB975B35BED6B3,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	UnsupportedSampleTypeException__ctor_m46A21B924CB1433C20C6DF0E6B10C3BAB96BD1EE,
	UnsupportedCodecException__ctor_mED5DA50DE20213B277BBDF990064B930B98F4D63,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LocalVoiceFramedBase_get_FrameSize_m233AE1B2D668E4D27C91796A2C42C9823E8D3C92,
	LocalVoiceFramedBase_set_FrameSize_m64088251A406C257DCDC8289E6252326D8BB7828,
	LocalVoiceFramedBase__ctor_m55A9B10E5FDDE732FD1CBB497C4B08AEB8619496,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	VoiceInfo_CreateAudioOpus_m0980BF6248B625B4CB77421377B1145C1C3A8E5A,
	VoiceInfo_ToString_m31F4E929FD426EC3DFDB94C4FE45D3ECEB904FFF,
	VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2,
	VoiceInfo_set_Codec_m83DB6A6E8D8632752E6B4956622E44D27126109E,
	VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8,
	VoiceInfo_set_SamplingRate_m7BD3E61C766F470FB265DCC93B84096870DBAA01,
	VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0,
	VoiceInfo_set_Channels_mF29381F2ABA273B1F9851169CE03122B1EB706C9,
	VoiceInfo_get_FrameDurationUs_m848EC5AF872DBB64AACA968CF1718C04759A12BB,
	VoiceInfo_set_FrameDurationUs_m7A7B07BC964C797FD1AA6643D4376401735FEC40,
	VoiceInfo_get_Bitrate_mE0CECCEA88721AD631108C61993A45383423B064,
	VoiceInfo_set_Bitrate_mB3268CB62B4A817C413E59D2609EDA9B4F1347B4,
	VoiceInfo_get_Width_mD5716DBF45F4DAEA9F721D24FABDB1AE179858BD,
	VoiceInfo_set_Width_m7B176130CA1D12B7B88E1AB0E76F023C321264CC,
	VoiceInfo_get_Height_m656FAE7A882329D0DF0138D9D47C5EAE07168D5A,
	VoiceInfo_set_Height_mB7D71C3A5E6305595E88676F1C7AB1EBCE7A3962,
	VoiceInfo_get_FPS_m4BB8CC7FAD24454C1DC27828F98B4D0880B94471,
	VoiceInfo_set_FPS_mEAE50B70BB104142A33AA05E0434F33E22077F51,
	VoiceInfo_get_KeyFrameInt_mCEAD182130EDDA06B30110ACCC0ABC23D5281961,
	VoiceInfo_set_KeyFrameInt_m743975A4690224F0C777D2D69BF4ADE72A34B8BF,
	VoiceInfo_get_UserData_mE49DA945FA1476FF3AD239DB23B02E84F8533B1A,
	VoiceInfo_set_UserData_mA73845AE55BD8DD1B706C209B74D7A8485E4123C,
	VoiceInfo_get_FrameDurationSamples_mA8983E72285C7175D0B7621C8371B0E9627479A6,
	VoiceInfo_get_FrameSize_m0A5674D88D5A900A63367074B63AD06141EB23D1,
	NULL,
	NULL,
	NULL,
	NULL,
	BufferReaderPushAdapterAsyncPoolFloatToShort__ctor_m91261B14FBDF187DBF6AEE71F238BFABF7F6C26F,
	BufferReaderPushAdapterAsyncPoolFloatToShort_Service_mC9EA761BF3B532FEEDF97BC6AD0450B88012DDD1,
	BufferReaderPushAdapterAsyncPoolShortToFloat__ctor_mCFED781C1135E273ECA4374A6E591743AF11C337,
	BufferReaderPushAdapterAsyncPoolShortToFloat_Service_m7024FF017B2B961946C3DE6602537B339C6FD44F,
	WebRTCAudioProcessor_set_AECStreamDelayMs_mFD966A1446F6E51B605C5C02933052B177689981,
	WebRTCAudioProcessor_set_AEC_m48FAC379A45AE3CFAEDF40461545AA9E8513C448,
	WebRTCAudioProcessor_set_AECHighPass_mBA69B78F21EF89504D8E7A1872B4161DF4D188F6,
	WebRTCAudioProcessor_set_AECMobile_m3C58D7643739EE8B4B4FC2D3BCC37CECA82C347E,
	WebRTCAudioProcessor_set_HighPass_m2D5978D8413FB425879B598E2393B0C5EF7A7746,
	WebRTCAudioProcessor_set_NoiseSuppression_m9EAF5D1C41F62585A4DB36CF02ADD279D72241BB,
	WebRTCAudioProcessor_set_AGC_mA72AAB9F90FDB1E69442AE430C6E8BF63566663E,
	WebRTCAudioProcessor_set_AGCCompressionGain_mEC815DB6BBD7BF2403FBE1D60CB1447C85E3BF92,
	WebRTCAudioProcessor_set_VAD_m38B8ED43452757A5388690CCC09CAD09172B16F5,
	WebRTCAudioProcessor_set_Bypass_m2779AA89CD4AABE8377B5F4FB4C73B38DD9B5414,
	WebRTCAudioProcessor_get_Bypass_m0D90277F677549D418E8CC1B8BBEA7BD524DA314,
	WebRTCAudioProcessor__ctor_m64EB2A018F5A4811854578520C8DA72C5FA0746A,
	WebRTCAudioProcessor_InitReverseStream_m1D6F945FE187D205E1EE7F0C6E2877B6D7468294,
	WebRTCAudioProcessor_Process_mFEBFD487D36515DF5620EEB777E29E8E359F49C6,
	WebRTCAudioProcessor_OnAudioOutFrameFloat_m43B319E8861C6F37C9A68AA3A6BFB423A09B8556,
	WebRTCAudioProcessor_ReverseStreamThread_m4FA1BB07906B21CBB7C4B580CBE7DEF7718D0534,
	WebRTCAudioProcessor_setParam_mAC191A8A5FEE2A8633BD44C4896E2B61244ED603,
	WebRTCAudioProcessor_Dispose_m93761C734852AC8686D670B9AD827B6A8E28D821,
	WebRTCAudioProcessor__cctor_mD0835AE7B959AC2633E611CF86923AF17D6C8F71,
	WebRTCAudioLib_webrtc_audio_processor_create_m8179B805291D1F607DF7667688554C8C1D4C860D,
	WebRTCAudioLib_webrtc_audio_processor_init_mF26958BB77C0958F37261998200A2A6721F141C7,
	WebRTCAudioLib_webrtc_audio_processor_set_param_m5AB30ECEE7813EB7F5270EC473285CCBADBD39FF,
	WebRTCAudioLib_webrtc_audio_processor_process_mF0185137038503FB4F8B2087E6689BB2F361ADA0,
	WebRTCAudioLib_webrtc_audio_processor_process_reverse_mFB03E13167BD2D036011E33359161F482F1455B9,
	WebRTCAudioLib_webrtc_audio_processor_destroy_mFE64C088B74E626578B29154FFA15D4F94A9259F,
	WebRTCAudioLib__ctor_mB225CF739082F787B098FB17F48F117C90A0871E,
	LoadBalancingTransport_get_VoiceClient_m5ACBE0BA8C380599EF43552CADD55D68F9B976AE,
	LoadBalancingTransport_LogError_m22FDD5CA6FB88340B915A20FEC33BA4852F17C72,
	LoadBalancingTransport_LogWarning_mF22D85E9E81C1D7D312595A729A890F72BA261F0,
	LoadBalancingTransport_LogInfo_m65AE67CA862C6AD4E351864B7BFF7C5CFA51EBDF,
	LoadBalancingTransport_LogDebug_m5A6AABD3C50EBF8E7DF7D746AC84D2A4680FEA63,
	LoadBalancingTransport_photonChannelForCodec_m5B9878780257FBEB7A41A80E02710CE71F97E3F9,
	LoadBalancingTransport_IsChannelJoined_mD5DFB36AF849924ACE4BD79B5718A87C5A64FF23,
	LoadBalancingTransport__ctor_m8B191AD17091BD9C494F2BA33ACB00E0871C3B5C,
	LoadBalancingTransport_SendVoicesInfo_m9AE5021EC9F0CC50729F5E129886421372277A4F,
	LoadBalancingTransport_SendVoiceRemove_mA00A0303FEB4146C64F3A346A65B3143FE9D622D,
	LoadBalancingTransport_SendFrame_mE14DE80FC1B5450C67A13F023A05B4A0FA907B70,
	LoadBalancingTransport_ChannelIdStr_mEF1992E8E9FF99387494D71A023F1FE476328599,
	LoadBalancingTransport_PlayerIdStr_m8429C84D11F7EBE557A53D7930F8D607AD920E50,
	LoadBalancingTransport_onEventActionVoiceClient_m858EBD24231AF9D6BBBCEB0609E51DE48E167A25,
	LoadBalancingTransport_onStateChangeVoiceClient_m352747E2A43417F229459D51E2E1274FABF392A6,
	LoadBalancingTransport_Dispose_mB12CA36901E057D6B117536B66FB343C7B378956,
	U3CU3Ec__cctor_mEBC199A77D3C16FCC34D44D07A0124B1A088CCEF,
	U3CU3Ec__ctor_m232668399806E7F8B2C4D793E86EA0ADC19EB6AD,
	U3CU3Ec_U3CSendVoicesInfoU3Eb__21_0_m691D0C67E7DBFBF7D9B8C8A58353368BAB74EC0D,
	LoadBalancingTransport2__ctor_mA790DBB1B9A74BBFA5FFE6F7702A95EB76F8EF6A,
	LoadBalancingTransport2_SendFrame_m04157349F79E513357E16FDB9E212DA416DF75B3,
	LoadBalancingTransport2_onEventActionVoiceClient_mC7DFC80AB345231ACBBA3F7EE014952BB80E8EE7,
	LoadBalancingTransport2_onVoiceFrameEvent_m6CFFC6ABF35EF0129D75723C593174372386A639,
	PhotonTransportProtocol__ctor_mED40829E0BF224C317EFC71CAD3B243DBA72C70D,
	PhotonTransportProtocol_buildVoicesInfo_mCFEA94FB65AFDB2EB97883DE0CD4C0A82636DCDD,
	PhotonTransportProtocol_buildVoiceRemoveMessage_mADB3F5214D62067FC14D18E45DC05B90EB9FFAC5,
	PhotonTransportProtocol_buildFrameMessage_m111F1393965EB5012FBC750520294789B31F73AA,
	PhotonTransportProtocol_onVoiceEvent_mA0D98C633667EA89C7F7EF34E252C249F538619F,
	PhotonTransportProtocol_onVoiceInfo_m4A01952ACD0CEEECE737948E3A533EDC8F2750F1,
	PhotonTransportProtocol_onVoiceRemove_mA4C0C202E8B63DFACFAF91DFA35A56DE0EFEA0EB,
	PhotonTransportProtocol_createVoiceInfoFromEventPayload_m3E1B64E9FD5F289C5765887C301326B42262DF8C,
	AndroidAudioInAEC__ctor_mFBD66FAD0CBE64E246BEE31D96B08234A30335FB,
	AndroidAudioInAEC_SetCallback_mF7DBCEC92A457C7D57CC18E3749C206B5F0E82EF,
	AndroidAudioInAEC_get_Channels_mDF6B03321CFD52DB584EE619A36A9E33C36C22A7,
	AndroidAudioInAEC_get_SamplingRate_m0E1A7AFAC3536CE5B6A9DBDF51F31B02A3053441,
	AndroidAudioInAEC_get_Error_m9D2E4CB43470DC011A568279390C5814EABD8C3E,
	AndroidAudioInAEC_set_Error_m40A288E504A1638FCC0FCB07E00181AAEF5B0831,
	AndroidAudioInAEC_Reset_m417D52520850DD6B785E84E7581444D0A68DDF72,
	AndroidAudioInAEC_Dispose_m26843B90A3CA9CD9D2FEABEC272EBEBAAE2ED33E,
	DataCallback__ctor_m69A883EB0EC3F9E4B08EA4B0952CDAB1A95FEE14,
	DataCallback_SetCallback_mE2D0FF360E4F160402CC58F4112CDE4900AFDDAC,
	DataCallback_OnData_mC17AFFA4F2A6A685F853FD224D879B18923D3E86,
	DataCallback_OnStop_mA4808055B1718EBC5C9131F12826C6E3642A85F0,
	AudioClipWrapper_get_Loop_mC6FB111E1487AD4B36328074EC7A78D7F899ADE8,
	AudioClipWrapper_set_Loop_mDFC7AE15A8840FC5C8B20DE66FD6F461708EAB91,
	AudioClipWrapper__ctor_mE456E6F8B632F377F2A96F55157D464AB48162D6,
	AudioClipWrapper_Read_mC6297F65F22ABFA75E769001047445A11E2D50EB,
	AudioClipWrapper_get_SamplingRate_m2C38195B6D552BD7B28796C61EE73D01A1980BA7,
	AudioClipWrapper_get_Channels_m3E9A7025560A23B931B369EF616A2232F8BE3423,
	AudioClipWrapper_get_Error_m649FB5EB2091006005C4C89D59DA71E290C828F7,
	AudioClipWrapper_Dispose_m4B0DCF797385D089F3D8F72D8F6FCC3EF27FE890,
	AudioOutCapture_add_OnAudioFrame_m4FF3A28BCD297FB144E251F0738F210565904EA2,
	AudioOutCapture_remove_OnAudioFrame_m86AE5B978E42FF7EDEF6799F50D90330667132C3,
	AudioOutCapture_OnAudioFilterRead_m2CD58279218A4D5BEB6533FC632B344583D222EF,
	AudioOutCapture__ctor_m636126F90EF7A04D81D8766D55067E5519085A7F,
	PhotonVoiceCreatedParams_get_Voice_m4FA0C437F9309D3E32EFB19530446D386FAC401C,
	PhotonVoiceCreatedParams_set_Voice_m143683C70E4667D264B912FDA9499941E1108F44,
	PhotonVoiceCreatedParams_set_AudioDesc_m3BAEF4BF8A70CB86C849D61A118F2B979ABEE20F,
	PhotonVoiceCreatedParams__ctor_m19B4DDA1BADC5E0CB4C0ED4D568943B6AC611513,
	AudioInEnumerator__ctor_mDAE7254E287178AC4A735D8001A62551F50B43F3,
	AudioInEnumerator_Refresh_mB786428BE117E83DE7FD2B800D9D5CE21BC12518,
	AudioInEnumerator_get_Error_m26ABF5B69C5AB8D3B9CE3A68170CEEB1B5FC183C,
	AudioInEnumerator_Dispose_m51E7DB53EC6856A81BCEC3EE962F1F8192389F8C,
	MicWrapper__ctor_m32E8CA669E6B1B9E2167B130961DEEFD3BB26A93,
	MicWrapper_get_SamplingRate_m8590D79C7AEAE3978D91DDDC2B83F0CD15096206,
	MicWrapper_get_Channels_m9EF4422CE2DFC276E84E8A70E3465F4804D8CAB8,
	MicWrapper_get_Error_m05325774B70C9C895217F349716FF76E121E2A50,
	MicWrapper_set_Error_m51F227BF125CBDB4E19BF5253116FCDA2F83D744,
	MicWrapper_Dispose_m7DB20FA342EA5E4F83E5FC252DB49B958B3CECFD,
	MicWrapper_Read_m474FEB1A580A3916FA6069165DB1C91396089032,
	MicWrapperPusher__ctor_mD867C5063ECDF5D0D577105979F306691F344A80,
	MicWrapperPusher_AudioOutCaptureOnOnAudioFrame_m1748F21237929785CAE68BE38AF235E59EC46EA9,
	MicWrapperPusher_SetCallback_mA10474D2061FABE11F26C50F3C4D68DB5F53B63A,
	MicWrapperPusher_Dispose_m53AF8B398E2DB39061D5562CBFCD36FF71B505AC,
	MicWrapperPusher_get_SamplingRate_m1B03DD79BCD8A4CBE1F7850490822184C1516B9C,
	MicWrapperPusher_get_Channels_mF6F95B5AE0EA50189A8D84960E88C31863D51AA6,
	MicWrapperPusher_get_Error_mFA152B5C6AE71AB69E34D6A08F8D4BDE2AC881BB,
	MicWrapperPusher_set_Error_mCC2253562EA96DE5BAA4A2494BF5B5952B701810,
	UnityAudioOut__ctor_m7FA47C12B4C15B5E26FAA5056F4DD6F618D323EF,
	UnityAudioOut_get_OutPos_m3AF2A7390305C097F73C61CD6337C4E9DA2A5701,
	UnityAudioOut_OutCreate_mE7D65162FE8E0041D4FE21849F643D4DF85B833A,
	UnityAudioOut_OutStart_mA8FB5BDD2D8AB01827AF19F5D65C07603C6FDCC0,
	UnityAudioOut_OutWrite_m319FBD3D41CF3A6E5CC4ED60443DEC9028FC3B58,
	UnityAudioOut_Stop_mA0F4F1DDAED9988324588D40C74978F253625955,
	UnityMicrophone_get_devices_mDF8A614AA77A55929195712974FB191993B9EF5F,
	UnityMicrophone_End_m7ECA62ED3E3E43BA268CFEA21C862EF8532A36EB,
	UnityMicrophone_GetDeviceCaps_m3F18339A6F63023F4CB82BE7834C223B65FDC7EE,
	UnityMicrophone_GetPosition_m8878AC0720F6428C7C9F40EE5E785D05E20F7419,
	UnityMicrophone_Start_m090FA09D48B01AD499E41C8DAAA0C291F27D2BE8,
	AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7,
};
extern void DeviceInfo__ctor_m96173DA61BDF3BD1456C5372309CA4B401883895_AdjustorThunk (void);
extern void DeviceInfo__ctor_m8635D2EAEDFC320C1D80BD2B053B584D058F7BC6_AdjustorThunk (void);
extern void DeviceInfo_set_IsDefault_m501D5F69C9B4CCCE9AB649094DF7E811F4FAB43A_AdjustorThunk (void);
extern void DeviceInfo_get_IDInt_m26B46F8B9F8267BCA710CB3634D8E62928B96954_AdjustorThunk (void);
extern void DeviceInfo_set_IDInt_mFF41782CC6BCDD559B4C4125CC865A8CB1FBA9AC_AdjustorThunk (void);
extern void DeviceInfo_get_IDString_mCEA67E532D1957B1EE0E4528A30C0FB130752E6D_AdjustorThunk (void);
extern void DeviceInfo_set_IDString_m92E767D2C8B050FBDC6FEA08B9C09D453444B024_AdjustorThunk (void);
extern void DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53_AdjustorThunk (void);
extern void DeviceInfo_set_Name_m8D6019A448A977493BD7A2564E1FC92FDE1BB1F1_AdjustorThunk (void);
extern void DeviceInfo_Equals_m59BEFBB70BBD0F425EC8908A68E2ECE0918CA04B_AdjustorThunk (void);
extern void DeviceInfo_GetHashCode_mF7E8C7FD032FDC98F715A18514A4F48E793F24CD_AdjustorThunk (void);
extern void DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17_AdjustorThunk (void);
extern void FrameBuffer__ctor_m251C0C8AB214C4E826964391519565A2C79DD080_AdjustorThunk (void);
extern void FrameBuffer__ctor_m9082AB45997EE91BF42B6DC22CF37BB2B1404651_AdjustorThunk (void);
extern void FrameBuffer_get_Ptr_m7B8D7F4CD65BE84DE95E48609890CBBA87ACFB15_AdjustorThunk (void);
extern void FrameBuffer_Retain_m8C2CE0F03537553A809D3A49E71EBF00920E4B72_AdjustorThunk (void);
extern void FrameBuffer_Release_m8EEF2FAF12E3ACFAE456CC3CA5C04C3B968BBFD2_AdjustorThunk (void);
extern void FrameBuffer_Dispose_mA6053144FE2D0F804FD8B3D9E33224F7BF1690A6_AdjustorThunk (void);
extern void FrameBuffer_get_Array_m33555AC9413B61F9B142C0A9704D277ECBEBD1F5_AdjustorThunk (void);
extern void FrameBuffer_get_Length_m99F73FA338DDB97D9228FD206D131E3DB1349201_AdjustorThunk (void);
extern void FrameBuffer_get_Offset_m1B1687E7965E3452A09543519DA3617A19F664F0_AdjustorThunk (void);
extern void FrameBuffer_get_Flags_mC466B9947228B6EC6A14AF461E2F35E14D8492D4_AdjustorThunk (void);
extern void RemoteVoiceOptions_SetOutput_m1D8335B78DC7DFCD68167FBDFABF2E9B15CA6E9B_AdjustorThunk (void);
extern void RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m019D282B2C9C1A5A5A0DE0E03C586AF58A571610_AdjustorThunk (void);
extern void RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m6E0B66C38E6233CF40E852DA82627476219C0338_AdjustorThunk (void);
extern void RemoteVoiceOptions_get_Decoder_mF10176ACC4A1599DD83BFC7F413B17FBA135F073_AdjustorThunk (void);
extern void RemoteVoiceOptions_set_OutputImageFormat_m266F5CD3FE1FE27355D21C59544B83A90E94F8CA_AdjustorThunk (void);
extern void RemoteVoiceOptions_get_outType_m255C8527993D6C76731D6566A9ABA236AEC16406_AdjustorThunk (void);
extern void RemoteVoiceOptions_set_outType_m69DC850D7AB4CD8C62ADBC10418AD166D20513BE_AdjustorThunk (void);
extern void RemoteVoiceOptions_get_output_m0277760FE5D2111DB81B47EDE17BB1C502D92760_AdjustorThunk (void);
extern void RemoteVoiceOptions_set_output_m0D8361A82E851B664ED8366959BA64AF16D6542C_AdjustorThunk (void);
extern void VoiceInfo_ToString_m31F4E929FD426EC3DFDB94C4FE45D3ECEB904FFF_AdjustorThunk (void);
extern void VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_AdjustorThunk (void);
extern void VoiceInfo_set_Codec_m83DB6A6E8D8632752E6B4956622E44D27126109E_AdjustorThunk (void);
extern void VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_AdjustorThunk (void);
extern void VoiceInfo_set_SamplingRate_m7BD3E61C766F470FB265DCC93B84096870DBAA01_AdjustorThunk (void);
extern void VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_AdjustorThunk (void);
extern void VoiceInfo_set_Channels_mF29381F2ABA273B1F9851169CE03122B1EB706C9_AdjustorThunk (void);
extern void VoiceInfo_get_FrameDurationUs_m848EC5AF872DBB64AACA968CF1718C04759A12BB_AdjustorThunk (void);
extern void VoiceInfo_set_FrameDurationUs_m7A7B07BC964C797FD1AA6643D4376401735FEC40_AdjustorThunk (void);
extern void VoiceInfo_get_Bitrate_mE0CECCEA88721AD631108C61993A45383423B064_AdjustorThunk (void);
extern void VoiceInfo_set_Bitrate_mB3268CB62B4A817C413E59D2609EDA9B4F1347B4_AdjustorThunk (void);
extern void VoiceInfo_get_Width_mD5716DBF45F4DAEA9F721D24FABDB1AE179858BD_AdjustorThunk (void);
extern void VoiceInfo_set_Width_m7B176130CA1D12B7B88E1AB0E76F023C321264CC_AdjustorThunk (void);
extern void VoiceInfo_get_Height_m656FAE7A882329D0DF0138D9D47C5EAE07168D5A_AdjustorThunk (void);
extern void VoiceInfo_set_Height_mB7D71C3A5E6305595E88676F1C7AB1EBCE7A3962_AdjustorThunk (void);
extern void VoiceInfo_get_FPS_m4BB8CC7FAD24454C1DC27828F98B4D0880B94471_AdjustorThunk (void);
extern void VoiceInfo_set_FPS_mEAE50B70BB104142A33AA05E0434F33E22077F51_AdjustorThunk (void);
extern void VoiceInfo_get_KeyFrameInt_mCEAD182130EDDA06B30110ACCC0ABC23D5281961_AdjustorThunk (void);
extern void VoiceInfo_set_KeyFrameInt_m743975A4690224F0C777D2D69BF4ADE72A34B8BF_AdjustorThunk (void);
extern void VoiceInfo_get_UserData_mE49DA945FA1476FF3AD239DB23B02E84F8533B1A_AdjustorThunk (void);
extern void VoiceInfo_set_UserData_mA73845AE55BD8DD1B706C209B74D7A8485E4123C_AdjustorThunk (void);
extern void VoiceInfo_get_FrameDurationSamples_mA8983E72285C7175D0B7621C8371B0E9627479A6_AdjustorThunk (void);
extern void VoiceInfo_get_FrameSize_m0A5674D88D5A900A63367074B63AD06141EB23D1_AdjustorThunk (void);
extern void AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[55] = 
{
	{ 0x0600008B, DeviceInfo__ctor_m96173DA61BDF3BD1456C5372309CA4B401883895_AdjustorThunk },
	{ 0x0600008C, DeviceInfo__ctor_m8635D2EAEDFC320C1D80BD2B053B584D058F7BC6_AdjustorThunk },
	{ 0x0600008D, DeviceInfo_set_IsDefault_m501D5F69C9B4CCCE9AB649094DF7E811F4FAB43A_AdjustorThunk },
	{ 0x0600008E, DeviceInfo_get_IDInt_m26B46F8B9F8267BCA710CB3634D8E62928B96954_AdjustorThunk },
	{ 0x0600008F, DeviceInfo_set_IDInt_mFF41782CC6BCDD559B4C4125CC865A8CB1FBA9AC_AdjustorThunk },
	{ 0x06000090, DeviceInfo_get_IDString_mCEA67E532D1957B1EE0E4528A30C0FB130752E6D_AdjustorThunk },
	{ 0x06000091, DeviceInfo_set_IDString_m92E767D2C8B050FBDC6FEA08B9C09D453444B024_AdjustorThunk },
	{ 0x06000092, DeviceInfo_get_Name_m2559D5ABC53E49FCA44E0563489FCE284417AF53_AdjustorThunk },
	{ 0x06000093, DeviceInfo_set_Name_m8D6019A448A977493BD7A2564E1FC92FDE1BB1F1_AdjustorThunk },
	{ 0x06000094, DeviceInfo_Equals_m59BEFBB70BBD0F425EC8908A68E2ECE0918CA04B_AdjustorThunk },
	{ 0x06000095, DeviceInfo_GetHashCode_mF7E8C7FD032FDC98F715A18514A4F48E793F24CD_AdjustorThunk },
	{ 0x06000096, DeviceInfo_ToString_m5EB035A3212F6102102B2EBD7278D05FF6C94C17_AdjustorThunk },
	{ 0x060000AD, FrameBuffer__ctor_m251C0C8AB214C4E826964391519565A2C79DD080_AdjustorThunk },
	{ 0x060000AE, FrameBuffer__ctor_m9082AB45997EE91BF42B6DC22CF37BB2B1404651_AdjustorThunk },
	{ 0x060000AF, FrameBuffer_get_Ptr_m7B8D7F4CD65BE84DE95E48609890CBBA87ACFB15_AdjustorThunk },
	{ 0x060000B0, FrameBuffer_Retain_m8C2CE0F03537553A809D3A49E71EBF00920E4B72_AdjustorThunk },
	{ 0x060000B1, FrameBuffer_Release_m8EEF2FAF12E3ACFAE456CC3CA5C04C3B968BBFD2_AdjustorThunk },
	{ 0x060000B2, FrameBuffer_Dispose_mA6053144FE2D0F804FD8B3D9E33224F7BF1690A6_AdjustorThunk },
	{ 0x060000B3, FrameBuffer_get_Array_m33555AC9413B61F9B142C0A9704D277ECBEBD1F5_AdjustorThunk },
	{ 0x060000B4, FrameBuffer_get_Length_m99F73FA338DDB97D9228FD206D131E3DB1349201_AdjustorThunk },
	{ 0x060000B5, FrameBuffer_get_Offset_m1B1687E7965E3452A09543519DA3617A19F664F0_AdjustorThunk },
	{ 0x060000B6, FrameBuffer_get_Flags_mC466B9947228B6EC6A14AF461E2F35E14D8492D4_AdjustorThunk },
	{ 0x0600011A, RemoteVoiceOptions_SetOutput_m1D8335B78DC7DFCD68167FBDFABF2E9B15CA6E9B_AdjustorThunk },
	{ 0x0600011B, RemoteVoiceOptions_get_OnRemoteVoiceRemoveAction_m019D282B2C9C1A5A5A0DE0E03C586AF58A571610_AdjustorThunk },
	{ 0x0600011C, RemoteVoiceOptions_set_OnRemoteVoiceRemoveAction_m6E0B66C38E6233CF40E852DA82627476219C0338_AdjustorThunk },
	{ 0x0600011D, RemoteVoiceOptions_get_Decoder_mF10176ACC4A1599DD83BFC7F413B17FBA135F073_AdjustorThunk },
	{ 0x0600011E, RemoteVoiceOptions_set_OutputImageFormat_m266F5CD3FE1FE27355D21C59544B83A90E94F8CA_AdjustorThunk },
	{ 0x0600011F, RemoteVoiceOptions_get_outType_m255C8527993D6C76731D6566A9ABA236AEC16406_AdjustorThunk },
	{ 0x06000120, RemoteVoiceOptions_set_outType_m69DC850D7AB4CD8C62ADBC10418AD166D20513BE_AdjustorThunk },
	{ 0x06000121, RemoteVoiceOptions_get_output_m0277760FE5D2111DB81B47EDE17BB1C502D92760_AdjustorThunk },
	{ 0x06000122, RemoteVoiceOptions_set_output_m0D8361A82E851B664ED8366959BA64AF16D6542C_AdjustorThunk },
	{ 0x060001AE, VoiceInfo_ToString_m31F4E929FD426EC3DFDB94C4FE45D3ECEB904FFF_AdjustorThunk },
	{ 0x060001AF, VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_AdjustorThunk },
	{ 0x060001B0, VoiceInfo_set_Codec_m83DB6A6E8D8632752E6B4956622E44D27126109E_AdjustorThunk },
	{ 0x060001B1, VoiceInfo_get_SamplingRate_mB35BF119B634916F78FF136465AD6E3FDFE834C8_AdjustorThunk },
	{ 0x060001B2, VoiceInfo_set_SamplingRate_m7BD3E61C766F470FB265DCC93B84096870DBAA01_AdjustorThunk },
	{ 0x060001B3, VoiceInfo_get_Channels_m9834209C53A08D0EF5F2F6AD8967DD364EFDB5F0_AdjustorThunk },
	{ 0x060001B4, VoiceInfo_set_Channels_mF29381F2ABA273B1F9851169CE03122B1EB706C9_AdjustorThunk },
	{ 0x060001B5, VoiceInfo_get_FrameDurationUs_m848EC5AF872DBB64AACA968CF1718C04759A12BB_AdjustorThunk },
	{ 0x060001B6, VoiceInfo_set_FrameDurationUs_m7A7B07BC964C797FD1AA6643D4376401735FEC40_AdjustorThunk },
	{ 0x060001B7, VoiceInfo_get_Bitrate_mE0CECCEA88721AD631108C61993A45383423B064_AdjustorThunk },
	{ 0x060001B8, VoiceInfo_set_Bitrate_mB3268CB62B4A817C413E59D2609EDA9B4F1347B4_AdjustorThunk },
	{ 0x060001B9, VoiceInfo_get_Width_mD5716DBF45F4DAEA9F721D24FABDB1AE179858BD_AdjustorThunk },
	{ 0x060001BA, VoiceInfo_set_Width_m7B176130CA1D12B7B88E1AB0E76F023C321264CC_AdjustorThunk },
	{ 0x060001BB, VoiceInfo_get_Height_m656FAE7A882329D0DF0138D9D47C5EAE07168D5A_AdjustorThunk },
	{ 0x060001BC, VoiceInfo_set_Height_mB7D71C3A5E6305595E88676F1C7AB1EBCE7A3962_AdjustorThunk },
	{ 0x060001BD, VoiceInfo_get_FPS_m4BB8CC7FAD24454C1DC27828F98B4D0880B94471_AdjustorThunk },
	{ 0x060001BE, VoiceInfo_set_FPS_mEAE50B70BB104142A33AA05E0434F33E22077F51_AdjustorThunk },
	{ 0x060001BF, VoiceInfo_get_KeyFrameInt_mCEAD182130EDDA06B30110ACCC0ABC23D5281961_AdjustorThunk },
	{ 0x060001C0, VoiceInfo_set_KeyFrameInt_m743975A4690224F0C777D2D69BF4ADE72A34B8BF_AdjustorThunk },
	{ 0x060001C1, VoiceInfo_get_UserData_mE49DA945FA1476FF3AD239DB23B02E84F8533B1A_AdjustorThunk },
	{ 0x060001C2, VoiceInfo_set_UserData_mA73845AE55BD8DD1B706C209B74D7A8485E4123C_AdjustorThunk },
	{ 0x060001C3, VoiceInfo_get_FrameDurationSamples_mA8983E72285C7175D0B7621C8371B0E9627479A6_AdjustorThunk },
	{ 0x060001C4, VoiceInfo_get_FrameSize_m0A5674D88D5A900A63367074B63AD06141EB23D1_AdjustorThunk },
	{ 0x06000240, AudioSessionParameters_ToString_mEB3B038EDA3373B3B35BB0DF7CB7D0D66EAFEDC7_AdjustorThunk },
};
static const int32_t s_InvokerIndices[576] = 
{
	0,
	0,
	0,
	0,
	0,
	10717,
	5577,
	6903,
	6903,
	5577,
	5503,
	5577,
	563,
	3306,
	3306,
	7062,
	10762,
	2891,
	10185,
	8034,
	10706,
	7580,
	7580,
	8632,
	8631,
	10185,
	8632,
	7427,
	7427,
	10187,
	10220,
	8676,
	8036,
	8036,
	10517,
	9408,
	9008,
	9453,
	10517,
	7578,
	7578,
	10515,
	0,
	8350,
	9060,
	9060,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6990,
	7062,
	7062,
	0,
	0,
	0,
	0,
	0,
	2862,
	4988,
	2862,
	4988,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6834,
	5503,
	6990,
	5658,
	6903,
	5577,
	7062,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2862,
	4988,
	2862,
	4988,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7062,
	7062,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6944,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1097,
	5613,
	5503,
	6903,
	5577,
	6944,
	5613,
	6944,
	5613,
	4008,
	6903,
	6944,
	10762,
	0,
	0,
	5613,
	6834,
	6944,
	6944,
	0,
	6944,
	0,
	6834,
	3156,
	7062,
	6944,
	7062,
	5613,
	0,
	0,
	6834,
	3156,
	6944,
	7062,
	586,
	3139,
	6905,
	7062,
	7062,
	7062,
	6944,
	6903,
	6903,
	6834,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	10717,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3254,
	3306,
	3254,
	3306,
	0,
	0,
	0,
	0,
	0,
	0,
	10310,
	9529,
	0,
	0,
	0,
	0,
	0,
	5577,
	2581,
	9820,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6834,
	5503,
	7061,
	6834,
	5503,
	6834,
	6903,
	5577,
	6903,
	5577,
	6834,
	5503,
	6834,
	5503,
	6944,
	5613,
	6834,
	5503,
	7062,
	598,
	6944,
	6944,
	6944,
	7062,
	5577,
	2537,
	1061,
	7062,
	7062,
	5613,
	6944,
	5613,
	6944,
	5577,
	6903,
	5577,
	6944,
	5613,
	7061,
	5721,
	6903,
	5577,
	167,
	6944,
	6944,
	6944,
	9174,
	2559,
	5491,
	5577,
	6944,
	7062,
	7062,
	7062,
	7062,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6944,
	6944,
	6834,
	2891,
	7062,
	10762,
	296,
	296,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6903,
	5577,
	6903,
	5577,
	6903,
	6903,
	6903,
	5577,
	6903,
	5577,
	6834,
	6944,
	5613,
	6903,
	5577,
	3156,
	7062,
	2443,
	0,
	525,
	6834,
	1603,
	5613,
	2862,
	1707,
	6834,
	7062,
	5577,
	2862,
	5577,
	5577,
	7062,
	2862,
	2862,
	554,
	1652,
	268,
	4980,
	4980,
	7062,
	3152,
	555,
	0,
	0,
	7062,
	5613,
	7062,
	5613,
	7062,
	5613,
	7062,
	5613,
	10762,
	7062,
	4008,
	0,
	0,
	0,
	0,
	0,
	0,
	5613,
	3150,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6903,
	5577,
	295,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7743,
	6944,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6903,
	5577,
	6944,
	5613,
	6903,
	6903,
	0,
	0,
	0,
	0,
	3156,
	5613,
	3156,
	5613,
	5577,
	5503,
	5503,
	5503,
	5503,
	5503,
	5503,
	5577,
	5503,
	5503,
	6834,
	286,
	7062,
	4988,
	5613,
	7062,
	2216,
	7062,
	10762,
	7690,
	10187,
	8632,
	8035,
	8635,
	10517,
	7062,
	6944,
	3156,
	3156,
	3156,
	3156,
	3969,
	3969,
	3139,
	1707,
	1707,
	74,
	4980,
	4980,
	5613,
	2862,
	7062,
	10762,
	7062,
	4676,
	3139,
	74,
	5613,
	1184,
	3156,
	2455,
	4988,
	971,
	1184,
	1652,
	1652,
	5186,
	1147,
	3156,
	6903,
	6903,
	6944,
	5613,
	7062,
	7062,
	7062,
	3152,
	7062,
	7062,
	6834,
	5503,
	5613,
	4008,
	6903,
	6903,
	6944,
	7062,
	5613,
	5613,
	3150,
	7062,
	6944,
	5613,
	5613,
	7062,
	5613,
	7062,
	6944,
	7062,
	1710,
	6903,
	6903,
	6944,
	5613,
	7062,
	4008,
	604,
	3150,
	3156,
	7062,
	6903,
	6903,
	6944,
	5613,
	611,
	6903,
	1650,
	7062,
	3150,
	7062,
	10717,
	10520,
	9035,
	10191,
	8194,
	6944,
};
static const Il2CppTokenRangePair s_rgctxIndices[22] = 
{
	{ 0x02000002, { 0, 4 } },
	{ 0x0200000F, { 4, 5 } },
	{ 0x02000010, { 9, 2 } },
	{ 0x02000019, { 11, 3 } },
	{ 0x0200001F, { 14, 27 } },
	{ 0x02000029, { 41, 1 } },
	{ 0x0200002A, { 42, 9 } },
	{ 0x0200002B, { 51, 8 } },
	{ 0x0200002C, { 59, 4 } },
	{ 0x02000030, { 64, 6 } },
	{ 0x02000033, { 70, 12 } },
	{ 0x02000036, { 83, 7 } },
	{ 0x0200003B, { 90, 3 } },
	{ 0x02000046, { 93, 12 } },
	{ 0x0200004E, { 109, 3 } },
	{ 0x0200005D, { 112, 5 } },
	{ 0x0200005E, { 117, 3 } },
	{ 0x02000060, { 120, 33 } },
	{ 0x02000063, { 153, 10 } },
	{ 0x060000D5, { 63, 1 } },
	{ 0x060000ED, { 82, 1 } },
	{ 0x06000168, { 105, 4 } },
};
extern const uint32_t g_rgctx_T_tF06A7B2069DD8DD579726202EBACAD2F17C98D7D;
extern const uint32_t g_rgctx_Marshal_SizeOf_TisT_tF06A7B2069DD8DD579726202EBACAD2F17C98D7D_m7CB3653FCC3C082F7B1D06295A05E2D7A1AE1783;
extern const uint32_t g_rgctx_OpusDecoder_1_t7D0C52A594E8B6B1822980081FBCF51E92E1FC73;
extern const uint32_t g_rgctx_TU5BU5D_t2F069FCCE028AB0F4C1E12D9AECCD777116DB309;
extern const uint32_t g_rgctx_TempoUp_1_processShort_mFCD2732B78638F8E8C12249C2FC44B4A20072687;
extern const uint32_t g_rgctx_TempoUp_1_processFloat_m8BF780F509B34CDD776A232D307AC05A8F8E07D9;
extern const uint32_t g_rgctx_TempoUp_1_endShort_mD4C45D5A0B5645E809E79806EEB3D99433A33345;
extern const uint32_t g_rgctx_TempoUp_1_endFloat_mE8C6C7BD50102879D4C021DC4303F5C33B55A1D1;
extern const uint32_t g_rgctx_Marshal_SizeOf_TisT_tB2955D200C8C8737B5223936E5D7AA2240DB3BA3_mDE023394E1E32A551E24B07E6EAC579DDAB07174;
extern const uint32_t g_rgctx_TU5BU5D_t2C222A3E098633BA497713A19BB3D5CA5F4E9522;
extern const uint32_t g_rgctx_AudioUtil_Resample_TisT_tCF91755BB65761ED4E19573490AEAAC50DF0B137_mCDB090BCF16B800B5C66756C2534214E60F4BAF2;
extern const uint32_t g_rgctx_VoiceDetector_1_set_DetectedTime_mBD00B4AD657D7B99F3CF298FE24BB2119201920F;
extern const uint32_t g_rgctx_VoiceDetector_1_set_ActivityDelayMs_m998BEC32FA0AE93A9BE9E3105D5FC173CB06B90D;
extern const uint32_t g_rgctx_VoiceDetector_1_set_On_m50DDE063FDA5DD5C19718E57DDD240A13CF6F84A;
extern const uint32_t g_rgctx_Marshal_SizeOf_TisT_tD08755A5D18EAE93D407B6880B37200B6D4DF397_m5FD3D9A76938BEAB0BCADBDC4E78F80A77058920;
extern const uint32_t g_rgctx_Queue_1_t84335BE5543CC286F48DE9FA8A3730D8AC0F53B8;
extern const uint32_t g_rgctx_Queue_1__ctor_m827FF39E6FB12EBE4DDCC890FD420D14A9F5864B;
extern const uint32_t g_rgctx_PrimitiveArrayPool_1_tE0DFEFA59824AECB062CE1140CEB1A61793AB161;
extern const uint32_t g_rgctx_PrimitiveArrayPool_1__ctor_m79B4511681D23E1222C2D5F1B08003B290AE370D;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_tA70CD8213E0C6404BB0F22DEC981C7343FA6E84B;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_get_OutPos_m10DD19552774BED1BB44A3EE89DB119A75B11B71;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_get_IsFlushed_m2277BC30029A5D48BD664640C7744AA18395D47A;
extern const uint32_t g_rgctx_ObjectPool_2_tA6C0B9F4FD37A7CBFF7A5B2BA9F370DFBF6E7774;
extern const uint32_t g_rgctx_ObjectPool_2_get_Info_m87F438B3C54B1F5B2BC7D2443C2D17FCB2CCF3F2;
extern const uint32_t g_rgctx_ObjectPool_2_Init_m6D5F845285EAA36702CD5F5951E181A030EDE8CD;
extern const uint32_t g_rgctx_TU5BU5D_tA1C0D258B747795A6CBF6A69E551764688044547;
extern const uint32_t g_rgctx_TempoUp_1_tE6E267DFFD84DCF3014DB3419A45719223D5BE74;
extern const uint32_t g_rgctx_TempoUp_1__ctor_m2016541EE8918657F4679422309088B83AF735D0;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_OutCreate_m32340B12B2F27A8AB0B7C5A916FA7ED4C6D7DA1B;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_OutStart_mF0A5253D2CB7A14BB4437DDF8B8E1AFDCD67368E;
extern const uint32_t g_rgctx_TempoUp_1_Begin_m4FEBC5FFDF4D84B7A2F45C704EC935965A2E80D2;
extern const uint32_t g_rgctx_TempoUp_1_End_mFF7DD06301857CDDAA0C4C4D66EB3F00A9C1F3EF;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_writeResampled_mB6A3FC29D715B7DAFB395ADBF298E52F4A4A2071;
extern const uint32_t g_rgctx_TempoUp_1_Process_mD6A62507EEE94ADDCCD3BFB91A31152AF394FF3B;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_OutWrite_m74747452751FB7D92042383333D9852392F17808;
extern const uint32_t g_rgctx_Queue_1_Dequeue_m4CAA1D1C11723152F30A26C874E574300369A48C;
extern const uint32_t g_rgctx_AudioOutDelayControl_1_processFrame_mF89C6C6B1647CB75A420EADC08A392A6E1416A9E;
extern const uint32_t g_rgctx_ObjectPool_2_Release_m4924981EA99BBFF2F7C513B0EBCFB3B5AB168FC7;
extern const uint32_t g_rgctx_Queue_1_get_Count_m5EDFAD204816A1A277C8F4E4310ED2C7D5A9C56A;
extern const uint32_t g_rgctx_ObjectPool_2_AcquireOrCreate_m173F49344599FC25A28BF1C4067447BE2611B0E2;
extern const uint32_t g_rgctx_Queue_1_Enqueue_m129C39CA7EB2A485146B2DF3040055D285859687;
extern const uint32_t g_rgctx_TU5BU5D_t9DADB9BB6E76E6AA6ED5D78E3F15F5CC20EC086C;
extern const uint32_t g_rgctx_PrimitiveArrayPool_1_t54CB354C6526B316331F5D11A2485B7FAEFA6368;
extern const uint32_t g_rgctx_PrimitiveArrayPool_1__ctor_mAF5A7AD91C4164FA16574C18C4D12ABE1BC63513;
extern const uint32_t g_rgctx_ObjectPool_2_tE88F97A661CB651CC7A908C4E2CD6006A4381596;
extern const uint32_t g_rgctx_ObjectPool_2_get_Info_m4FDD39E8701BE409E56CEDF534401CAFE8ED964A;
extern const uint32_t g_rgctx_ObjectPool_2_AcquireOrCreate_m79CB629250AF4CA6BF2AC161BEDFE88052C32312;
extern const uint32_t g_rgctx_ObjectPool_2_AcquireOrCreate_mD3A87F6CE0C1CA76AA93C1ECF9D1F2A4ECF722F9;
extern const uint32_t g_rgctx_ObjectPool_2_Release_m4136DDC8EE2D15C1C8FBA169B55AAD01D4FABD92;
extern const uint32_t g_rgctx_ObjectPool_2_Release_m171C9C17F6403959DD9982AA3422ABE4ED535041;
extern const uint32_t g_rgctx_ObjectPool_2_Dispose_m8538071567D615B2CFB923E3CCF03A796BF50B77;
extern const uint32_t g_rgctx_TTypeU5BU5D_tF4E3906AB6F61F5786A6978BE01B9122A63477E2;
extern const uint32_t g_rgctx_ObjectPool_2_Init_m0D454243D4E437038EE78536F70BF85932894273;
extern const uint32_t g_rgctx_ObjectPool_2_t660FC7289C860A0425A4A27E86B185051802EE03;
extern const uint32_t g_rgctx_ObjectPool_2_destroyObject_mF72925E414C2BE84C0FA43DD09CDAC32D201203B;
extern const uint32_t g_rgctx_ObjectPool_2_get_LogPrefix_m04FED733DD3110C3389B0CAFF42419EA65C9300F;
extern const uint32_t g_rgctx_ObjectPool_2_createObject_mCE3ED49E9E5AF20A8ABD0D398A9C5C128997519D;
extern const uint32_t g_rgctx_ObjectPool_2_infosMatch_m64A0C22146F00A105F60DA62955581FD5AD27003;
extern const uint32_t g_rgctx_ObjectPool_2_AcquireOrCreate_mB8A54890EED92C3BB635258978B74A1BE85C099C;
extern const uint32_t g_rgctx_ObjectPool_2__ctor_m04EF7A79D197A71FA385D7AA5865F63A18C33EF9;
extern const uint32_t g_rgctx_ObjectPool_2_t6D110649E617FAEBECB6F6DF86BAA45B735664B2;
extern const uint32_t g_rgctx_ObjectPool_2__ctor_mBADE5E62905E922E649E762C9B44ECBF80E6C2AE;
extern const uint32_t g_rgctx_TU5BU5D_tE4BAA1E0582A7C7026EC79A9A9574D840D210EFD;
extern const uint32_t g_rgctx_B_t047B0818F03EFBB19504F8D1DB75AD45EAF14F34;
extern const uint32_t g_rgctx_Encoder_1_set_Error_m6DD54934E468A7365FC82CFE9E8248552E4EF6E8;
extern const uint32_t g_rgctx_Encoder_1_get_Error_m7AB0C5A85B9A4594AB117F2E1B4F0565C91DCF00;
extern const uint32_t g_rgctx_Encoder_1_get_Output_m9DD36EB206D6680B5C5F07BB2806DF2A43893EEB;
extern const uint32_t g_rgctx_Encoder_1_tFBAEB6CEC78D876FD19C2AFAE624834F574E29F8;
extern const uint32_t g_rgctx_Encoder_1_encodeTyped_m1ADE5EDDC2BEAB38AF89C3F7497EE45324D91833;
extern const uint32_t g_rgctx_Encoder_1_tFBAEB6CEC78D876FD19C2AFAE624834F574E29F8;
extern const uint32_t g_rgctx_FrameOut_1_tB110C35E8C59E3386D079298356C6D7570779411;
extern const uint32_t g_rgctx_FrameOut_1__ctor_m31F336F7D9665E592473D07171D46C2826632016;
extern const uint32_t g_rgctx_OpusDecoder_1_tB4768A5830B08AD0585F83A92E16E8E6AC49ECAB;
extern const uint32_t g_rgctx_OpusDecoder_1__ctor_m2241616BDD4FB5B84B31450CCFE3BE38225DCE63;
extern const uint32_t g_rgctx_Decoder_1_set_Error_m8B175C75B1D0C6F150C3604A836946DD7A9C72CD;
extern const uint32_t g_rgctx_Decoder_1_get_Error_m2B0848408B4DD90D8A90A77F1A80E09103B981C6;
extern const uint32_t g_rgctx_OpusDecoder_1_Dispose_m2F66E41CE2611556230A414D13E28489EAF179F2;
extern const uint32_t g_rgctx_OpusDecoder_1_DecodePacket_m0F38F0308F04A81E0E92EB4963D398D1BD1D07AB;
extern const uint32_t g_rgctx_OpusDecoder_1_DecodeEndOfStream_mE1580EAA5AB68D8AA4207B2D26095F50271664FA;
extern const uint32_t g_rgctx_FrameOut_1_Set_mF33C02B0BB167534E9B39DD04EAFB6B3767C1D12;
extern const uint32_t g_rgctx_Action_1_t6199008C8073519829E53A52A7BC0A62361AEDC5;
extern const uint32_t g_rgctx_Action_1_Invoke_m8CCB2621D78ACD31AAEC7B8967C201ABDF6C8634;
extern const uint32_t g_rgctx_Factory_CreateEncoder_TisTU5BU5D_tDF914093680BCB6431260186BA475286A804F21D_mD5D424732C3BAC386190EC1BACFEB8248556EC27;
extern const uint32_t g_rgctx_TU5BU5D_t8A10AF90CF532BCF5F3FE64C3CA8F695C255FC96;
extern const uint32_t g_rgctx_Marshal_SizeOf_TisT_t7743049A63484136E1CAB59AB1D5C6B0431A5A0A_mFD2405ADE7321C6EC305294FECB4AFE241C03DF2;
extern const uint32_t g_rgctx_TU5BU5D_t8A10AF90CF532BCF5F3FE64C3CA8F695C255FC96;
extern const uint32_t g_rgctx_FrameOut_1_tBD0700819A6BB73A1E4093539769A11446C0CDA8;
extern const uint32_t g_rgctx_FrameOut_1__ctor_m09A1A625AD4B3B4940E31D653368D3E42BDF9AB9;
extern const uint32_t g_rgctx_Action_1_tC298CE195EA48F01B0752D4D5427CD1399B632B4;
extern const uint32_t g_rgctx_Action_1_Invoke_m28A121FFEEEF9EE11260E33CAF74EFAFFD49BA03;
extern const uint32_t g_rgctx_FrameOut_1_Set_m2121B215DD390FD573523A08EF4F889E681E77A9;
extern const uint32_t g_rgctx_FrameOut_1_set_Buf_mE9A0DB2C960A935869C196B6B8C9539546C07917;
extern const uint32_t g_rgctx_FrameOut_1_set_EndOfStream_mBBC9DF3DCBB551C633D3333B5DB13883DB4FA7AD;
extern const uint32_t g_rgctx_T_tCB1D20C5919300217E911271AD601685B177B4AC;
extern const uint32_t g_rgctx_LocalVoiceAudio_1_t1BF67F136A9FF8680559EA3E83F7734ECE848268;
extern const uint32_t g_rgctx_VoiceDetectorCalibration_1_t32EF3A2C190C250B2000E12FAF98A4BFDBE590AB;
extern const uint32_t g_rgctx_VoiceDetectorCalibration_1_Calibrate_m8F726FFF60DED784E86ED66E499F650C781BD1AF;
extern const uint32_t g_rgctx_VoiceDetectorCalibration_1_get_IsCalibrating_m164E637FB7DB4E0EC0BDA58239B9D877765964B1;
extern const uint32_t g_rgctx_LocalVoiceFramed_1__ctor_mB1090BEA8B341BBF9D32CDCF265D7EDA01EBDD0B;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_tCB49440AA932D09EAC1999970FCE517C5B088382;
extern const uint32_t g_rgctx_IProcessor_1U5BU5D_tCF08D92526C364397EDF5E02FB25E91B4F5AA937;
extern const uint32_t g_rgctx_Resampler_1_t1BC7BC7B56126E264C21947FE605B26A067687A0;
extern const uint32_t g_rgctx_Resampler_1__ctor_mFC6E33542E48C8681D0A247C732542E33601B574;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_AddPostProcessor_m74D03B84E2BE9C160C6FAC274AD955365CD3EDE2;
extern const uint32_t g_rgctx_VoiceDetectorCalibration_1__ctor_mFC292317B35E30B44F37721F4E81EC6DF9AB39C0;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1_t5C4335143DB856BB043F725CA9E2D96C9C6CEDB0;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1__ctor_m0131FD5547AF6C79451FD557D68E9DEBF6534233;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass50_0_1_U3CCreateLocalVoiceAudioU3Eb__0_mFFD6F71C1CBAE6EE769A4E58A68DFEE8A9262A98;
extern const uint32_t g_rgctx_LocalVoiceAudio_1_tAC2EF2A2808E2C0DEE6AD441D5E0BC1E1DB5AA1B;
extern const uint32_t g_rgctx_LocalVoiceAudio_1_Create_mEE4096D629A6B5B624311632002EFC4888A2A949;
extern const uint32_t g_rgctx_LocalVoiceAudio_1_t3546AB74957BA0798C046D92EBE2F11450EEB56C;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_t824699DEEF696811BE7529CBB2649EFD0A1D82E4;
extern const uint32_t g_rgctx_TU5BU5D_t785519CEF6DA638650F87C8584464F59FB225890;
extern const uint32_t g_rgctx_T_t2F198BE2F4C50DF87CE9C5FA9ED3554353882E83;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2F198BE2F4C50DF87CE9C5FA9ED3554353882E83_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3;
extern const uint32_t g_rgctx_U3CFrameU3Ed__5_tB43D306CBFD66D3B866F29CF413AF8DD62C6591F;
extern const uint32_t g_rgctx_U3CFrameU3Ed__5__ctor_m70C2608F837B9255DB4955D3E56BCA9DF3C223C0;
extern const uint32_t g_rgctx_U3CFrameU3Ed__5_t1FD7693F8DC39B3CDD9C5862B5B5A4092376AF20;
extern const uint32_t g_rgctx_U3CFrameU3Ed__5__ctor_m155487ECF2B04FCA1FEFE6E7C403E80960F9950F;
extern const uint32_t g_rgctx_U3CFrameU3Ed__5_System_Collections_Generic_IEnumerableU3CTU5BU5DU3E_GetEnumerator_m836AC7FEE5240A55D834E044FCC63D7C4E6E7005;
extern const uint32_t g_rgctx_List_1_t51AECF840C4BCCADD01C734FCD62BF6B68508D9C;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mCE330B4F1DFE43436DFC6F8A7BDC884D69CB67EB;
extern const uint32_t g_rgctx_Enumerator_get_Current_m550FA47A57098641B703F859CC0D06FB19CA4390;
extern const uint32_t g_rgctx_IProcessor_1_tF6A857FC3A2051BF4E8AD0883D9CCB0BBC1A14E3;
extern const uint32_t g_rgctx_IProcessor_1_Process_m075C3D9AB662A6B89410A920C87CD5290662F0E3;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m0BDC14628DEA71BC244968CC2CAE6EE1D6153BFF;
extern const uint32_t g_rgctx_Enumerator_tD1E4371C02731A41F70A417A769F6B3E344EC44D;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tD1E4371C02731A41F70A417A769F6B3E344EC44D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_List_1_Add_mF8F38A6502A0E34514E8D146148CCC7BB86C5A5F;
extern const uint32_t g_rgctx_List_1_Insert_m89DBB12EA0AAB6DA62BB6D78C64D725B7AEFBB78;
extern const uint32_t g_rgctx_List_1__ctor_mC23F2EFC0E9D222080289DDDE4EE7422143EAB16;
extern const uint32_t g_rgctx_Queue_1_t51FBE2B8986BA3A4683948EC8B5C8716F1A3E8AE;
extern const uint32_t g_rgctx_Queue_1__ctor_m57E1D288EF256B8E2325949BFB0EA0A47D9144C9;
extern const uint32_t g_rgctx_Framer_1_t9EF1C4256DFA566DC18D4D7749381A53B8F96EA8;
extern const uint32_t g_rgctx_Framer_1__ctor_mFA67E496008632E9D0E7C9F6ED8B5CB6C74AC632;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_tB3BB7907D199F237CE9C63D91F48FD8F564AC48B;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1__ctor_mC5D21495882799BE9787BE50D46EF40F887C7743;
extern const uint32_t g_rgctx_Queue_1_get_Count_m6595264862514CD35173767BD9C171541C7259BF;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_PushDataAsyncThread_mFFAE9BD1B8C720EB99E74571BCD2245C02455289;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_get_PushDataAsyncReady_mCB8AC4555B29F3E8BE6ED68E93929512A48293E4;
extern const uint32_t g_rgctx_Queue_1_Enqueue_m081DB61441CE92A313E5B10C8FD1780F06F06747;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_Free_m84056286AB5F10761E89CED34E8DF450BB5EA15C;
extern const uint32_t g_rgctx_Queue_1_Dequeue_m4523FD1EEFDBB09A272017BBCC1169F657255D10;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_PushData_m025EA745C296314F5D0F03E40160A5957DDB6AFC;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_Dispose_mD0AE5FC10D143984FE80119144E952C0FBEA104B;
extern const uint32_t g_rgctx_IEncoderDirect_1_tEDC7418BD397A200D649B977403283964B295C4B;
extern const uint32_t g_rgctx_Framer_1_Frame_m55DC37B5CBAA80F6D56FC38855C216961F2BF9DC;
extern const uint32_t g_rgctx_IEnumerable_1_t806D733E2D86C56BC7D9D5EA5215220DC089D431;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m21C878B0BEC63C36F62BD6BD4F7114086439EA5C;
extern const uint32_t g_rgctx_IEnumerator_1_t9568C5D479581E94676086EC22C7300EB9F083D6;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mF075DBAA35664C9F8D52F6C591A78E087093A48C;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_processFrame_m3C61FE74962BFA2FBEB413F1B086CCA69FEF04AE;
extern const uint32_t g_rgctx_IEncoderDirect_1_Input_m1DA22569962E0A5AE4D303D785A370F24438E1D9;
extern const uint32_t g_rgctx_BufferReaderPushAdapterBase_1__ctor_m3DCF1AD4E081E111C9C765B67F0FA18A503BC31D;
extern const uint32_t g_rgctx_BufferReaderPushAdapterBase_1_t408850E473B808F82052076B062E7630DFDACA00;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_t9624E87F826381EFE25FDCE1C1BD7E47B49F8EBE;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_get_BufferFactory_m7B13689B864119749E9B68FA25FD420F821BEA75;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_tE7675C713B55CAB27522530670E12918A99EF4E7;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_New_m3E4C1237EE0BB6F30CC450A4574CF8754E09D81E;
extern const uint32_t g_rgctx_LocalVoiceFramed_1_PushDataAsync_m7C078F130987B2907FABDA2E855DD7EF87DF1FB0;
extern const uint32_t g_rgctx_IDataReader_1_t3E205FB8580E8A31F691AFCBBE01548EEA4ACD18;
extern const uint32_t g_rgctx_IDataReader_1_Read_m58C2B87A577930FAC456BE23C5EF72EFBC91AFB3;
extern const uint32_t g_rgctx_FactoryPrimitiveArrayPool_1_Free_m19A6244946D719691F0B28D311D150174FBE07AF;
static const Il2CppRGCTXDefinition s_rgctxValues[163] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tF06A7B2069DD8DD579726202EBACAD2F17C98D7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshal_SizeOf_TisT_tF06A7B2069DD8DD579726202EBACAD2F17C98D7D_m7CB3653FCC3C082F7B1D06295A05E2D7A1AE1783 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OpusDecoder_1_t7D0C52A594E8B6B1822980081FBCF51E92E1FC73 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t2F069FCCE028AB0F4C1E12D9AECCD777116DB309 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_processShort_mFCD2732B78638F8E8C12249C2FC44B4A20072687 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_processFloat_m8BF780F509B34CDD776A232D307AC05A8F8E07D9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_endShort_mD4C45D5A0B5645E809E79806EEB3D99433A33345 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_endFloat_mE8C6C7BD50102879D4C021DC4303F5C33B55A1D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshal_SizeOf_TisT_tB2955D200C8C8737B5223936E5D7AA2240DB3BA3_mDE023394E1E32A551E24B07E6EAC579DDAB07174 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t2C222A3E098633BA497713A19BB3D5CA5F4E9522 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioUtil_Resample_TisT_tCF91755BB65761ED4E19573490AEAAC50DF0B137_mCDB090BCF16B800B5C66756C2534214E60F4BAF2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetector_1_set_DetectedTime_mBD00B4AD657D7B99F3CF298FE24BB2119201920F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetector_1_set_ActivityDelayMs_m998BEC32FA0AE93A9BE9E3105D5FC173CB06B90D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetector_1_set_On_m50DDE063FDA5DD5C19718E57DDD240A13CF6F84A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshal_SizeOf_TisT_tD08755A5D18EAE93D407B6880B37200B6D4DF397_m5FD3D9A76938BEAB0BCADBDC4E78F80A77058920 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_t84335BE5543CC286F48DE9FA8A3730D8AC0F53B8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1__ctor_m827FF39E6FB12EBE4DDCC890FD420D14A9F5864B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_PrimitiveArrayPool_1_tE0DFEFA59824AECB062CE1140CEB1A61793AB161 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PrimitiveArrayPool_1__ctor_m79B4511681D23E1222C2D5F1B08003B290AE370D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AudioOutDelayControl_1_tA70CD8213E0C6404BB0F22DEC981C7343FA6E84B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_get_OutPos_m10DD19552774BED1BB44A3EE89DB119A75B11B71 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_get_IsFlushed_m2277BC30029A5D48BD664640C7744AA18395D47A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ObjectPool_2_tA6C0B9F4FD37A7CBFF7A5B2BA9F370DFBF6E7774 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_get_Info_m87F438B3C54B1F5B2BC7D2443C2D17FCB2CCF3F2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Init_m6D5F845285EAA36702CD5F5951E181A030EDE8CD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tA1C0D258B747795A6CBF6A69E551764688044547 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TempoUp_1_tE6E267DFFD84DCF3014DB3419A45719223D5BE74 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1__ctor_m2016541EE8918657F4679422309088B83AF735D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_OutCreate_m32340B12B2F27A8AB0B7C5A916FA7ED4C6D7DA1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_OutStart_mF0A5253D2CB7A14BB4437DDF8B8E1AFDCD67368E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_Begin_m4FEBC5FFDF4D84B7A2F45C704EC935965A2E80D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_End_mFF7DD06301857CDDAA0C4C4D66EB3F00A9C1F3EF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_writeResampled_mB6A3FC29D715B7DAFB395ADBF298E52F4A4A2071 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TempoUp_1_Process_mD6A62507EEE94ADDCCD3BFB91A31152AF394FF3B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_OutWrite_m74747452751FB7D92042383333D9852392F17808 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Dequeue_m4CAA1D1C11723152F30A26C874E574300369A48C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AudioOutDelayControl_1_processFrame_mF89C6C6B1647CB75A420EADC08A392A6E1416A9E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Release_m4924981EA99BBFF2F7C513B0EBCFB3B5AB168FC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_m5EDFAD204816A1A277C8F4E4310ED2C7D5A9C56A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_AcquireOrCreate_m173F49344599FC25A28BF1C4067447BE2611B0E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Enqueue_m129C39CA7EB2A485146B2DF3040055D285859687 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t9DADB9BB6E76E6AA6ED5D78E3F15F5CC20EC086C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_PrimitiveArrayPool_1_t54CB354C6526B316331F5D11A2485B7FAEFA6368 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PrimitiveArrayPool_1__ctor_mAF5A7AD91C4164FA16574C18C4D12ABE1BC63513 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ObjectPool_2_tE88F97A661CB651CC7A908C4E2CD6006A4381596 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_get_Info_m4FDD39E8701BE409E56CEDF534401CAFE8ED964A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_AcquireOrCreate_m79CB629250AF4CA6BF2AC161BEDFE88052C32312 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_AcquireOrCreate_mD3A87F6CE0C1CA76AA93C1ECF9D1F2A4ECF722F9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Release_m4136DDC8EE2D15C1C8FBA169B55AAD01D4FABD92 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Release_m171C9C17F6403959DD9982AA3422ABE4ED535041 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Dispose_m8538071567D615B2CFB923E3CCF03A796BF50B77 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TTypeU5BU5D_tF4E3906AB6F61F5786A6978BE01B9122A63477E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_Init_m0D454243D4E437038EE78536F70BF85932894273 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ObjectPool_2_t660FC7289C860A0425A4A27E86B185051802EE03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_destroyObject_mF72925E414C2BE84C0FA43DD09CDAC32D201203B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_get_LogPrefix_m04FED733DD3110C3389B0CAFF42419EA65C9300F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_createObject_mCE3ED49E9E5AF20A8ABD0D398A9C5C128997519D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_infosMatch_m64A0C22146F00A105F60DA62955581FD5AD27003 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2_AcquireOrCreate_mB8A54890EED92C3BB635258978B74A1BE85C099C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2__ctor_m04EF7A79D197A71FA385D7AA5865F63A18C33EF9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ObjectPool_2_t6D110649E617FAEBECB6F6DF86BAA45B735664B2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_2__ctor_mBADE5E62905E922E649E762C9B44ECBF80E6C2AE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_tE4BAA1E0582A7C7026EC79A9A9574D840D210EFD },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_B_t047B0818F03EFBB19504F8D1DB75AD45EAF14F34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Encoder_1_set_Error_m6DD54934E468A7365FC82CFE9E8248552E4EF6E8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Encoder_1_get_Error_m7AB0C5A85B9A4594AB117F2E1B4F0565C91DCF00 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Encoder_1_get_Output_m9DD36EB206D6680B5C5F07BB2806DF2A43893EEB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Encoder_1_tFBAEB6CEC78D876FD19C2AFAE624834F574E29F8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Encoder_1_encodeTyped_m1ADE5EDDC2BEAB38AF89C3F7497EE45324D91833 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Encoder_1_tFBAEB6CEC78D876FD19C2AFAE624834F574E29F8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FrameOut_1_tB110C35E8C59E3386D079298356C6D7570779411 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1__ctor_m31F336F7D9665E592473D07171D46C2826632016 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_OpusDecoder_1_tB4768A5830B08AD0585F83A92E16E8E6AC49ECAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OpusDecoder_1__ctor_m2241616BDD4FB5B84B31450CCFE3BE38225DCE63 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Decoder_1_set_Error_m8B175C75B1D0C6F150C3604A836946DD7A9C72CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Decoder_1_get_Error_m2B0848408B4DD90D8A90A77F1A80E09103B981C6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OpusDecoder_1_Dispose_m2F66E41CE2611556230A414D13E28489EAF179F2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OpusDecoder_1_DecodePacket_m0F38F0308F04A81E0E92EB4963D398D1BD1D07AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_OpusDecoder_1_DecodeEndOfStream_mE1580EAA5AB68D8AA4207B2D26095F50271664FA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1_Set_mF33C02B0BB167534E9B39DD04EAFB6B3767C1D12 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t6199008C8073519829E53A52A7BC0A62361AEDC5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m8CCB2621D78ACD31AAEC7B8967C201ABDF6C8634 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Factory_CreateEncoder_TisTU5BU5D_tDF914093680BCB6431260186BA475286A804F21D_mD5D424732C3BAC386190EC1BACFEB8248556EC27 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t8A10AF90CF532BCF5F3FE64C3CA8F695C255FC96 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Marshal_SizeOf_TisT_t7743049A63484136E1CAB59AB1D5C6B0431A5A0A_mFD2405ADE7321C6EC305294FECB4AFE241C03DF2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t8A10AF90CF532BCF5F3FE64C3CA8F695C255FC96 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FrameOut_1_tBD0700819A6BB73A1E4093539769A11446C0CDA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1__ctor_m09A1A625AD4B3B4940E31D653368D3E42BDF9AB9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_tC298CE195EA48F01B0752D4D5427CD1399B632B4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m28A121FFEEEF9EE11260E33CAF74EFAFFD49BA03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1_Set_m2121B215DD390FD573523A08EF4F889E681E77A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1_set_Buf_mE9A0DB2C960A935869C196B6B8C9539546C07917 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameOut_1_set_EndOfStream_mBBC9DF3DCBB551C633D3333B5DB13883DB4FA7AD },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tCB1D20C5919300217E911271AD601685B177B4AC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceAudio_1_t1BF67F136A9FF8680559EA3E83F7734ECE848268 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_VoiceDetectorCalibration_1_t32EF3A2C190C250B2000E12FAF98A4BFDBE590AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetectorCalibration_1_Calibrate_m8F726FFF60DED784E86ED66E499F650C781BD1AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetectorCalibration_1_get_IsCalibrating_m164E637FB7DB4E0EC0BDA58239B9D877765964B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1__ctor_mB1090BEA8B341BBF9D32CDCF265D7EDA01EBDD0B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceFramed_1_tCB49440AA932D09EAC1999970FCE517C5B088382 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IProcessor_1U5BU5D_tCF08D92526C364397EDF5E02FB25E91B4F5AA937 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Resampler_1_t1BC7BC7B56126E264C21947FE605B26A067687A0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Resampler_1__ctor_mFC6E33542E48C8681D0A247C732542E33601B574 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_AddPostProcessor_m74D03B84E2BE9C160C6FAC274AD955365CD3EDE2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_VoiceDetectorCalibration_1__ctor_mFC292317B35E30B44F37721F4E81EC6DF9AB39C0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1_t5C4335143DB856BB043F725CA9E2D96C9C6CEDB0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1__ctor_m0131FD5547AF6C79451FD557D68E9DEBF6534233 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass50_0_1_U3CCreateLocalVoiceAudioU3Eb__0_mFFD6F71C1CBAE6EE769A4E58A68DFEE8A9262A98 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceAudio_1_tAC2EF2A2808E2C0DEE6AD441D5E0BC1E1DB5AA1B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceAudio_1_Create_mEE4096D629A6B5B624311632002EFC4888A2A949 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceAudio_1_t3546AB74957BA0798C046D92EBE2F11450EEB56C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceFramed_1_t824699DEEF696811BE7529CBB2649EFD0A1D82E4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU5BU5D_t785519CEF6DA638650F87C8584464F59FB225890 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2F198BE2F4C50DF87CE9C5FA9ED3554353882E83 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2F198BE2F4C50DF87CE9C5FA9ED3554353882E83_Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CFrameU3Ed__5_tB43D306CBFD66D3B866F29CF413AF8DD62C6591F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CFrameU3Ed__5__ctor_m70C2608F837B9255DB4955D3E56BCA9DF3C223C0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CFrameU3Ed__5_t1FD7693F8DC39B3CDD9C5862B5B5A4092376AF20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CFrameU3Ed__5__ctor_m155487ECF2B04FCA1FEFE6E7C403E80960F9950F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CFrameU3Ed__5_System_Collections_Generic_IEnumerableU3CTU5BU5DU3E_GetEnumerator_m836AC7FEE5240A55D834E044FCC63D7C4E6E7005 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t51AECF840C4BCCADD01C734FCD62BF6B68508D9C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_mCE330B4F1DFE43436DFC6F8A7BDC884D69CB67EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m550FA47A57098641B703F859CC0D06FB19CA4390 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IProcessor_1_tF6A857FC3A2051BF4E8AD0883D9CCB0BBC1A14E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IProcessor_1_Process_m075C3D9AB662A6B89410A920C87CD5290662F0E3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m0BDC14628DEA71BC244968CC2CAE6EE1D6153BFF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tD1E4371C02731A41F70A417A769F6B3E344EC44D },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tD1E4371C02731A41F70A417A769F6B3E344EC44D_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_mF8F38A6502A0E34514E8D146148CCC7BB86C5A5F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Insert_m89DBB12EA0AAB6DA62BB6D78C64D725B7AEFBB78 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mC23F2EFC0E9D222080289DDDE4EE7422143EAB16 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_t51FBE2B8986BA3A4683948EC8B5C8716F1A3E8AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1__ctor_m57E1D288EF256B8E2325949BFB0EA0A47D9144C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Framer_1_t9EF1C4256DFA566DC18D4D7749381A53B8F96EA8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Framer_1__ctor_mFA67E496008632E9D0E7C9F6ED8B5CB6C74AC632 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_tB3BB7907D199F237CE9C63D91F48FD8F564AC48B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1__ctor_mC5D21495882799BE9787BE50D46EF40F887C7743 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_m6595264862514CD35173767BD9C171541C7259BF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_PushDataAsyncThread_mFFAE9BD1B8C720EB99E74571BCD2245C02455289 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_get_PushDataAsyncReady_mCB8AC4555B29F3E8BE6ED68E93929512A48293E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Enqueue_m081DB61441CE92A313E5B10C8FD1780F06F06747 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_Free_m84056286AB5F10761E89CED34E8DF450BB5EA15C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Dequeue_m4523FD1EEFDBB09A272017BBCC1169F657255D10 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_PushData_m025EA745C296314F5D0F03E40160A5957DDB6AFC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_Dispose_mD0AE5FC10D143984FE80119144E952C0FBEA104B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEncoderDirect_1_tEDC7418BD397A200D649B977403283964B295C4B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Framer_1_Frame_m55DC37B5CBAA80F6D56FC38855C216961F2BF9DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t806D733E2D86C56BC7D9D5EA5215220DC089D431 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m21C878B0BEC63C36F62BD6BD4F7114086439EA5C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t9568C5D479581E94676086EC22C7300EB9F083D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mF075DBAA35664C9F8D52F6C591A78E087093A48C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_processFrame_m3C61FE74962BFA2FBEB413F1B086CCA69FEF04AE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEncoderDirect_1_Input_m1DA22569962E0A5AE4D303D785A370F24438E1D9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_BufferReaderPushAdapterBase_1__ctor_m3DCF1AD4E081E111C9C765B67F0FA18A503BC31D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_BufferReaderPushAdapterBase_1_t408850E473B808F82052076B062E7630DFDACA00 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LocalVoiceFramed_1_t9624E87F826381EFE25FDCE1C1BD7E47B49F8EBE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_get_BufferFactory_m7B13689B864119749E9B68FA25FD420F821BEA75 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_tE7675C713B55CAB27522530670E12918A99EF4E7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_New_m3E4C1237EE0BB6F30CC450A4574CF8754E09D81E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LocalVoiceFramed_1_PushDataAsync_m7C078F130987B2907FABDA2E855DD7EF87DF1FB0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDataReader_1_t3E205FB8580E8A31F691AFCBBE01548EEA4ACD18 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDataReader_1_Read_m58C2B87A577930FAC456BE23C5EF72EFBC91AFB3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FactoryPrimitiveArrayPool_1_Free_m19A6244946D719691F0B28D311D150174FBE07AF },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_PhotonVoice_API_CodeGenModule;
const Il2CppCodeGenModule g_PhotonVoice_API_CodeGenModule = 
{
	"PhotonVoice.API.dll",
	576,
	s_methodPointers,
	55,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	22,
	s_rgctxIndices,
	163,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
