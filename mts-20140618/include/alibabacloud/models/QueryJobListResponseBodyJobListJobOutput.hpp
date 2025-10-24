// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputAudio.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputClip.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputContainer.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputEncryption.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputMergeList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputMuxConfig.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputOpeningList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputOutSubtitleList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputOutputFile.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputProperties.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSubtitleConfig.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputSuperReso.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputTailSlateList.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputTransConfig.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputVideo.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputWaterMarkList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_TO_JSON(Clip, clip_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(ExtendData, extendData_);
      DARABONBA_PTR_TO_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
      DARABONBA_PTR_TO_JSON(MergeConfigUrl, mergeConfigUrl_);
      DARABONBA_PTR_TO_JSON(MergeList, mergeList_);
      DARABONBA_PTR_TO_JSON(MultiSpeedInfo, multiSpeedInfo_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(OpeningList, openingList_);
      DARABONBA_PTR_TO_JSON(OutSubtitleList, outSubtitleList_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Rotate, rotate_);
      DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
      DARABONBA_PTR_TO_JSON(SuperReso, superReso_);
      DARABONBA_PTR_TO_JSON(TailSlateList, tailSlateList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Video, video_);
      DARABONBA_PTR_TO_JSON(VideoStreamMap, videoStreamMap_);
      DARABONBA_PTR_TO_JSON(WaterMarkConfigUrl, waterMarkConfigUrl_);
      DARABONBA_PTR_TO_JSON(WaterMarkList, waterMarkList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_FROM_JSON(Clip, clip_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(ExtendData, extendData_);
      DARABONBA_PTR_FROM_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
      DARABONBA_PTR_FROM_JSON(MergeConfigUrl, mergeConfigUrl_);
      DARABONBA_PTR_FROM_JSON(MergeList, mergeList_);
      DARABONBA_PTR_FROM_JSON(MultiSpeedInfo, multiSpeedInfo_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(OpeningList, openingList_);
      DARABONBA_PTR_FROM_JSON(OutSubtitleList, outSubtitleList_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
      DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
      DARABONBA_PTR_FROM_JSON(SuperReso, superReso_);
      DARABONBA_PTR_FROM_JSON(TailSlateList, tailSlateList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
      DARABONBA_PTR_FROM_JSON(VideoStreamMap, videoStreamMap_);
      DARABONBA_PTR_FROM_JSON(WaterMarkConfigUrl, waterMarkConfigUrl_);
      DARABONBA_PTR_FROM_JSON(WaterMarkList, waterMarkList_);
    };
    QueryJobListResponseBodyJobListJobOutput() = default ;
    QueryJobListResponseBodyJobListJobOutput(const QueryJobListResponseBodyJobListJobOutput &) = default ;
    QueryJobListResponseBodyJobListJobOutput(QueryJobListResponseBodyJobListJobOutput &&) = default ;
    QueryJobListResponseBodyJobListJobOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutput() = default ;
    QueryJobListResponseBodyJobListJobOutput& operator=(const QueryJobListResponseBodyJobListJobOutput &) = default ;
    QueryJobListResponseBodyJobListJobOutput& operator=(QueryJobListResponseBodyJobListJobOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->audioStreamMap_ == nullptr && return this->clip_ == nullptr && return this->container_ == nullptr && return this->deWatermark_ == nullptr && return this->encryption_ == nullptr
        && return this->extendData_ == nullptr && return this->m3U8NonStandardSupport_ == nullptr && return this->mergeConfigUrl_ == nullptr && return this->mergeList_ == nullptr && return this->multiSpeedInfo_ == nullptr
        && return this->muxConfig_ == nullptr && return this->openingList_ == nullptr && return this->outSubtitleList_ == nullptr && return this->outputFile_ == nullptr && return this->priority_ == nullptr
        && return this->properties_ == nullptr && return this->rotate_ == nullptr && return this->subtitleConfig_ == nullptr && return this->superReso_ == nullptr && return this->tailSlateList_ == nullptr
        && return this->templateId_ == nullptr && return this->transConfig_ == nullptr && return this->userData_ == nullptr && return this->video_ == nullptr && return this->videoStreamMap_ == nullptr
        && return this->waterMarkConfigUrl_ == nullptr && return this->waterMarkList_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::QueryJobListResponseBodyJobListJobOutputAudio) };
    inline Models::QueryJobListResponseBodyJobListJobOutputAudio audio() { DARABONBA_PTR_GET(audio_, Models::QueryJobListResponseBodyJobListJobOutputAudio) };
    inline QueryJobListResponseBodyJobListJobOutput& setAudio(const Models::QueryJobListResponseBodyJobListJobOutputAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline QueryJobListResponseBodyJobListJobOutput& setAudio(Models::QueryJobListResponseBodyJobListJobOutputAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // audioStreamMap Field Functions 
    bool hasAudioStreamMap() const { return this->audioStreamMap_ != nullptr;};
    void deleteAudioStreamMap() { this->audioStreamMap_ = nullptr;};
    inline string audioStreamMap() const { DARABONBA_PTR_GET_DEFAULT(audioStreamMap_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setAudioStreamMap(string audioStreamMap) { DARABONBA_PTR_SET_VALUE(audioStreamMap_, audioStreamMap) };


    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputClip & clip() const { DARABONBA_PTR_GET_CONST(clip_, Models::QueryJobListResponseBodyJobListJobOutputClip) };
    inline Models::QueryJobListResponseBodyJobListJobOutputClip clip() { DARABONBA_PTR_GET(clip_, Models::QueryJobListResponseBodyJobListJobOutputClip) };
    inline QueryJobListResponseBodyJobListJobOutput& setClip(const Models::QueryJobListResponseBodyJobListJobOutputClip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
    inline QueryJobListResponseBodyJobListJobOutput& setClip(Models::QueryJobListResponseBodyJobListJobOutputClip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::QueryJobListResponseBodyJobListJobOutputContainer) };
    inline Models::QueryJobListResponseBodyJobListJobOutputContainer container() { DARABONBA_PTR_GET(container_, Models::QueryJobListResponseBodyJobListJobOutputContainer) };
    inline QueryJobListResponseBodyJobListJobOutput& setContainer(const Models::QueryJobListResponseBodyJobListJobOutputContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline QueryJobListResponseBodyJobListJobOutput& setContainer(Models::QueryJobListResponseBodyJobListJobOutputContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // deWatermark Field Functions 
    bool hasDeWatermark() const { return this->deWatermark_ != nullptr;};
    void deleteDeWatermark() { this->deWatermark_ = nullptr;};
    inline string deWatermark() const { DARABONBA_PTR_GET_DEFAULT(deWatermark_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setDeWatermark(string deWatermark) { DARABONBA_PTR_SET_VALUE(deWatermark_, deWatermark) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::QueryJobListResponseBodyJobListJobOutputEncryption) };
    inline Models::QueryJobListResponseBodyJobListJobOutputEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::QueryJobListResponseBodyJobListJobOutputEncryption) };
    inline QueryJobListResponseBodyJobListJobOutput& setEncryption(const Models::QueryJobListResponseBodyJobListJobOutputEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline QueryJobListResponseBodyJobListJobOutput& setEncryption(Models::QueryJobListResponseBodyJobListJobOutputEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // extendData Field Functions 
    bool hasExtendData() const { return this->extendData_ != nullptr;};
    void deleteExtendData() { this->extendData_ = nullptr;};
    inline string extendData() const { DARABONBA_PTR_GET_DEFAULT(extendData_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setExtendData(string extendData) { DARABONBA_PTR_SET_VALUE(extendData_, extendData) };


    // m3U8NonStandardSupport Field Functions 
    bool hasM3U8NonStandardSupport() const { return this->m3U8NonStandardSupport_ != nullptr;};
    void deleteM3U8NonStandardSupport() { this->m3U8NonStandardSupport_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport() const { DARABONBA_PTR_GET_CONST(m3U8NonStandardSupport_, Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport) };
    inline Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport m3U8NonStandardSupport() { DARABONBA_PTR_GET(m3U8NonStandardSupport_, Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport) };
    inline QueryJobListResponseBodyJobListJobOutput& setM3U8NonStandardSupport(const Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport) { DARABONBA_PTR_SET_VALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };
    inline QueryJobListResponseBodyJobListJobOutput& setM3U8NonStandardSupport(Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport && m3U8NonStandardSupport) { DARABONBA_PTR_SET_RVALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };


    // mergeConfigUrl Field Functions 
    bool hasMergeConfigUrl() const { return this->mergeConfigUrl_ != nullptr;};
    void deleteMergeConfigUrl() { this->mergeConfigUrl_ = nullptr;};
    inline string mergeConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(mergeConfigUrl_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setMergeConfigUrl(string mergeConfigUrl) { DARABONBA_PTR_SET_VALUE(mergeConfigUrl_, mergeConfigUrl) };


    // mergeList Field Functions 
    bool hasMergeList() const { return this->mergeList_ != nullptr;};
    void deleteMergeList() { this->mergeList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputMergeList & mergeList() const { DARABONBA_PTR_GET_CONST(mergeList_, Models::QueryJobListResponseBodyJobListJobOutputMergeList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputMergeList mergeList() { DARABONBA_PTR_GET(mergeList_, Models::QueryJobListResponseBodyJobListJobOutputMergeList) };
    inline QueryJobListResponseBodyJobListJobOutput& setMergeList(const Models::QueryJobListResponseBodyJobListJobOutputMergeList & mergeList) { DARABONBA_PTR_SET_VALUE(mergeList_, mergeList) };
    inline QueryJobListResponseBodyJobListJobOutput& setMergeList(Models::QueryJobListResponseBodyJobListJobOutputMergeList && mergeList) { DARABONBA_PTR_SET_RVALUE(mergeList_, mergeList) };


    // multiSpeedInfo Field Functions 
    bool hasMultiSpeedInfo() const { return this->multiSpeedInfo_ != nullptr;};
    void deleteMultiSpeedInfo() { this->multiSpeedInfo_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo & multiSpeedInfo() const { DARABONBA_PTR_GET_CONST(multiSpeedInfo_, Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo) };
    inline Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo multiSpeedInfo() { DARABONBA_PTR_GET(multiSpeedInfo_, Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo) };
    inline QueryJobListResponseBodyJobListJobOutput& setMultiSpeedInfo(const Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo & multiSpeedInfo) { DARABONBA_PTR_SET_VALUE(multiSpeedInfo_, multiSpeedInfo) };
    inline QueryJobListResponseBodyJobListJobOutput& setMultiSpeedInfo(Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo && multiSpeedInfo) { DARABONBA_PTR_SET_RVALUE(multiSpeedInfo_, multiSpeedInfo) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::QueryJobListResponseBodyJobListJobOutputMuxConfig) };
    inline Models::QueryJobListResponseBodyJobListJobOutputMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::QueryJobListResponseBodyJobListJobOutputMuxConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setMuxConfig(const Models::QueryJobListResponseBodyJobListJobOutputMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setMuxConfig(Models::QueryJobListResponseBodyJobListJobOutputMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // openingList Field Functions 
    bool hasOpeningList() const { return this->openingList_ != nullptr;};
    void deleteOpeningList() { this->openingList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputOpeningList & openingList() const { DARABONBA_PTR_GET_CONST(openingList_, Models::QueryJobListResponseBodyJobListJobOutputOpeningList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputOpeningList openingList() { DARABONBA_PTR_GET(openingList_, Models::QueryJobListResponseBodyJobListJobOutputOpeningList) };
    inline QueryJobListResponseBodyJobListJobOutput& setOpeningList(const Models::QueryJobListResponseBodyJobListJobOutputOpeningList & openingList) { DARABONBA_PTR_SET_VALUE(openingList_, openingList) };
    inline QueryJobListResponseBodyJobListJobOutput& setOpeningList(Models::QueryJobListResponseBodyJobListJobOutputOpeningList && openingList) { DARABONBA_PTR_SET_RVALUE(openingList_, openingList) };


    // outSubtitleList Field Functions 
    bool hasOutSubtitleList() const { return this->outSubtitleList_ != nullptr;};
    void deleteOutSubtitleList() { this->outSubtitleList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList & outSubtitleList() const { DARABONBA_PTR_GET_CONST(outSubtitleList_, Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList outSubtitleList() { DARABONBA_PTR_GET(outSubtitleList_, Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList) };
    inline QueryJobListResponseBodyJobListJobOutput& setOutSubtitleList(const Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList & outSubtitleList) { DARABONBA_PTR_SET_VALUE(outSubtitleList_, outSubtitleList) };
    inline QueryJobListResponseBodyJobListJobOutput& setOutSubtitleList(Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList && outSubtitleList) { DARABONBA_PTR_SET_RVALUE(outSubtitleList_, outSubtitleList) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::QueryJobListResponseBodyJobListJobOutputOutputFile) };
    inline Models::QueryJobListResponseBodyJobListJobOutputOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::QueryJobListResponseBodyJobListJobOutputOutputFile) };
    inline QueryJobListResponseBodyJobListJobOutput& setOutputFile(const Models::QueryJobListResponseBodyJobListJobOutputOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline QueryJobListResponseBodyJobListJobOutput& setOutputFile(Models::QueryJobListResponseBodyJobListJobOutputOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::QueryJobListResponseBodyJobListJobOutputProperties) };
    inline Models::QueryJobListResponseBodyJobListJobOutputProperties properties() { DARABONBA_PTR_GET(properties_, Models::QueryJobListResponseBodyJobListJobOutputProperties) };
    inline QueryJobListResponseBodyJobListJobOutput& setProperties(const Models::QueryJobListResponseBodyJobListJobOutputProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline QueryJobListResponseBodyJobListJobOutput& setProperties(Models::QueryJobListResponseBodyJobListJobOutputProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // subtitleConfig Field Functions 
    bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
    void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig & subtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig) };
    inline Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig subtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setSubtitleConfig(const Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setSubtitleConfig(Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


    // superReso Field Functions 
    bool hasSuperReso() const { return this->superReso_ != nullptr;};
    void deleteSuperReso() { this->superReso_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputSuperReso & superReso() const { DARABONBA_PTR_GET_CONST(superReso_, Models::QueryJobListResponseBodyJobListJobOutputSuperReso) };
    inline Models::QueryJobListResponseBodyJobListJobOutputSuperReso superReso() { DARABONBA_PTR_GET(superReso_, Models::QueryJobListResponseBodyJobListJobOutputSuperReso) };
    inline QueryJobListResponseBodyJobListJobOutput& setSuperReso(const Models::QueryJobListResponseBodyJobListJobOutputSuperReso & superReso) { DARABONBA_PTR_SET_VALUE(superReso_, superReso) };
    inline QueryJobListResponseBodyJobListJobOutput& setSuperReso(Models::QueryJobListResponseBodyJobListJobOutputSuperReso && superReso) { DARABONBA_PTR_SET_RVALUE(superReso_, superReso) };


    // tailSlateList Field Functions 
    bool hasTailSlateList() const { return this->tailSlateList_ != nullptr;};
    void deleteTailSlateList() { this->tailSlateList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputTailSlateList & tailSlateList() const { DARABONBA_PTR_GET_CONST(tailSlateList_, Models::QueryJobListResponseBodyJobListJobOutputTailSlateList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputTailSlateList tailSlateList() { DARABONBA_PTR_GET(tailSlateList_, Models::QueryJobListResponseBodyJobListJobOutputTailSlateList) };
    inline QueryJobListResponseBodyJobListJobOutput& setTailSlateList(const Models::QueryJobListResponseBodyJobListJobOutputTailSlateList & tailSlateList) { DARABONBA_PTR_SET_VALUE(tailSlateList_, tailSlateList) };
    inline QueryJobListResponseBodyJobListJobOutput& setTailSlateList(Models::QueryJobListResponseBodyJobListJobOutputTailSlateList && tailSlateList) { DARABONBA_PTR_SET_RVALUE(tailSlateList_, tailSlateList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::QueryJobListResponseBodyJobListJobOutputTransConfig) };
    inline Models::QueryJobListResponseBodyJobListJobOutputTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::QueryJobListResponseBodyJobListJobOutputTransConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setTransConfig(const Models::QueryJobListResponseBodyJobListJobOutputTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline QueryJobListResponseBodyJobListJobOutput& setTransConfig(Models::QueryJobListResponseBodyJobListJobOutputTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::QueryJobListResponseBodyJobListJobOutputVideo) };
    inline Models::QueryJobListResponseBodyJobListJobOutputVideo video() { DARABONBA_PTR_GET(video_, Models::QueryJobListResponseBodyJobListJobOutputVideo) };
    inline QueryJobListResponseBodyJobListJobOutput& setVideo(const Models::QueryJobListResponseBodyJobListJobOutputVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline QueryJobListResponseBodyJobListJobOutput& setVideo(Models::QueryJobListResponseBodyJobListJobOutputVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    // videoStreamMap Field Functions 
    bool hasVideoStreamMap() const { return this->videoStreamMap_ != nullptr;};
    void deleteVideoStreamMap() { this->videoStreamMap_ = nullptr;};
    inline string videoStreamMap() const { DARABONBA_PTR_GET_DEFAULT(videoStreamMap_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setVideoStreamMap(string videoStreamMap) { DARABONBA_PTR_SET_VALUE(videoStreamMap_, videoStreamMap) };


    // waterMarkConfigUrl Field Functions 
    bool hasWaterMarkConfigUrl() const { return this->waterMarkConfigUrl_ != nullptr;};
    void deleteWaterMarkConfigUrl() { this->waterMarkConfigUrl_ = nullptr;};
    inline string waterMarkConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(waterMarkConfigUrl_, "") };
    inline QueryJobListResponseBodyJobListJobOutput& setWaterMarkConfigUrl(string waterMarkConfigUrl) { DARABONBA_PTR_SET_VALUE(waterMarkConfigUrl_, waterMarkConfigUrl) };


    // waterMarkList Field Functions 
    bool hasWaterMarkList() const { return this->waterMarkList_ != nullptr;};
    void deleteWaterMarkList() { this->waterMarkList_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList & waterMarkList() const { DARABONBA_PTR_GET_CONST(waterMarkList_, Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList) };
    inline Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList waterMarkList() { DARABONBA_PTR_GET(waterMarkList_, Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList) };
    inline QueryJobListResponseBodyJobListJobOutput& setWaterMarkList(const Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList & waterMarkList) { DARABONBA_PTR_SET_VALUE(waterMarkList_, waterMarkList) };
    inline QueryJobListResponseBodyJobListJobOutput& setWaterMarkList(Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList && waterMarkList) { DARABONBA_PTR_SET_RVALUE(waterMarkList_, waterMarkList) };


  protected:
    // The audio configurations.
    // 
    // >  If this parameter is specified in the request, the corresponding parameters in the specified transcoding template are overwritten.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputAudio> audio_ = nullptr;
    // The sequence number of the audio stream.
    // 
    // *   Format: 0:a:{Sequence number}. Example: 0:a:0.
    // *   The sequence number is the index of the audio stream in the list and starts from 0.
    // *   If no sequence number is specified, the default audio stream is used.
    std::shared_ptr<string> audioStreamMap_ = nullptr;
    // The information about clips.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputClip> clip_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputContainer> container_ = nullptr;
    // The configurations of watermark blurring. The value is a JSON object. For more information, see the DeWatermark section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    std::shared_ptr<string> deWatermark_ = nullptr;
    // The encryption configurations. The encrypted video file is generated in the M3U8 format.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputEncryption> encryption_ = nullptr;
    // The custom fields.
    std::shared_ptr<string> extendData_ = nullptr;
    // The non-standard support configurations for M3U8. The value is a JSON object. For more information, see the M3U8NonStandardSupport section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputM3U8NonStandardSupport> m3U8NonStandardSupport_ = nullptr;
    // The URL of the merging configuration file. Only one of MergeList and MergeConfigUrl takes effect.
    // 
    // *   The configuration file specified by MergeConfigUrl can contain up to 50 clips.
    // *   MergeConfigUrl indicates the URL of the configuration file for merging clips. Make sure that the configuration file is stored as an object in OSS and that MPS can access the OSS object. For information about the file content, see the details about merging parameters.
    // *   Example of the content of the merging configuration file: `{"MergeList":[{"MergeURL":"http://exampleBucket****.oss-cn-hangzhou.aliyuncs.com/video_01.mp4"}]}`.
    std::shared_ptr<string> mergeConfigUrl_ = nullptr;
    // The configurations of clip merging. Up to four clips can be merged.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputMergeList> mergeList_ = nullptr;
    // The information about the high-speed transcoding job. This information is available only for jobs that are submitted by using an MPS queue for high-speed transcoding. This does not support MPS queues for high-speed transcoding of an earlier version.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputMultiSpeedInfo> multiSpeedInfo_ = nullptr;
    // The transmuxing configurations. The transmuxing configurations. If this parameter is specified in the request, the corresponding parameters in the specified transcoding template are overwritten.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputMuxConfig> muxConfig_ = nullptr;
    // The opening parts. The value is a JSON object.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputOpeningList> openingList_ = nullptr;
    // The output captions.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputOutSubtitleList> outSubtitleList_ = nullptr;
    // The details of the output file.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputOutputFile> outputFile_ = nullptr;
    // The priority of the job in the ApsaraVideo Media Processing (MPS) queue to which the job is added.
    // 
    // *   A value of 10 indicates the highest priority.
    // *   Default value: **6**.
    std::shared_ptr<string> priority_ = nullptr;
    // The media properties.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputProperties> properties_ = nullptr;
    // The rotation angle of the video.
    std::shared_ptr<string> rotate_ = nullptr;
    // The caption configurations.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputSubtitleConfig> subtitleConfig_ = nullptr;
    // The configurations for using the resolution of the source video.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputSuperReso> superReso_ = nullptr;
    // The ending parts.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputTailSlateList> tailSlateList_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The general transcoding configurations.
    // 
    // >  If this parameter is specified in the request, the corresponding parameters in the specified transcoding template are overwritten.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputTransConfig> transConfig_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
    // The video configurations.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputVideo> video_ = nullptr;
    // The sequence number of the video stream. The sequence number is the index of the video stream in the list and starts from 0. If no sequence number is specified, the default video stream is used.
    std::shared_ptr<string> videoStreamMap_ = nullptr;
    // The URL of the watermark configuration file.
    std::shared_ptr<string> waterMarkConfigUrl_ = nullptr;
    // The watermarks.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputWaterMarkList> waterMarkList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
