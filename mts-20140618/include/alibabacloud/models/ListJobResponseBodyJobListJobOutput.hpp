// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputAudio.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputClip.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputContainer.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputEncryption.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMergeList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputMuxConfig.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOpeningList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOutSubtitleList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputOutputFile.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputProperties.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSubtitleConfig.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputSuperReso.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputTailSlateList.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputTransConfig.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputVideo.hpp>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputWaterMarkList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_TO_JSON(Clip, clip_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_TO_JSON(Encryption, encryption_);
      DARABONBA_PTR_TO_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
      DARABONBA_PTR_TO_JSON(MergeConfigUrl, mergeConfigUrl_);
      DARABONBA_PTR_TO_JSON(MergeList, mergeList_);
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
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_FROM_JSON(Clip, clip_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
      DARABONBA_PTR_FROM_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
      DARABONBA_PTR_FROM_JSON(MergeConfigUrl, mergeConfigUrl_);
      DARABONBA_PTR_FROM_JSON(MergeList, mergeList_);
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
    ListJobResponseBodyJobListJobOutput() = default ;
    ListJobResponseBodyJobListJobOutput(const ListJobResponseBodyJobListJobOutput &) = default ;
    ListJobResponseBodyJobListJobOutput(ListJobResponseBodyJobListJobOutput &&) = default ;
    ListJobResponseBodyJobListJobOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutput() = default ;
    ListJobResponseBodyJobListJobOutput& operator=(const ListJobResponseBodyJobListJobOutput &) = default ;
    ListJobResponseBodyJobListJobOutput& operator=(ListJobResponseBodyJobListJobOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->audioStreamMap_ == nullptr && return this->clip_ == nullptr && return this->container_ == nullptr && return this->deWatermark_ == nullptr && return this->encryption_ == nullptr
        && return this->m3U8NonStandardSupport_ == nullptr && return this->mergeConfigUrl_ == nullptr && return this->mergeList_ == nullptr && return this->muxConfig_ == nullptr && return this->openingList_ == nullptr
        && return this->outSubtitleList_ == nullptr && return this->outputFile_ == nullptr && return this->priority_ == nullptr && return this->properties_ == nullptr && return this->rotate_ == nullptr
        && return this->subtitleConfig_ == nullptr && return this->superReso_ == nullptr && return this->tailSlateList_ == nullptr && return this->templateId_ == nullptr && return this->transConfig_ == nullptr
        && return this->userData_ == nullptr && return this->video_ == nullptr && return this->videoStreamMap_ == nullptr && return this->waterMarkConfigUrl_ == nullptr && return this->waterMarkList_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::ListJobResponseBodyJobListJobOutputAudio) };
    inline Models::ListJobResponseBodyJobListJobOutputAudio audio() { DARABONBA_PTR_GET(audio_, Models::ListJobResponseBodyJobListJobOutputAudio) };
    inline ListJobResponseBodyJobListJobOutput& setAudio(const Models::ListJobResponseBodyJobListJobOutputAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline ListJobResponseBodyJobListJobOutput& setAudio(Models::ListJobResponseBodyJobListJobOutputAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // audioStreamMap Field Functions 
    bool hasAudioStreamMap() const { return this->audioStreamMap_ != nullptr;};
    void deleteAudioStreamMap() { this->audioStreamMap_ = nullptr;};
    inline string audioStreamMap() const { DARABONBA_PTR_GET_DEFAULT(audioStreamMap_, "") };
    inline ListJobResponseBodyJobListJobOutput& setAudioStreamMap(string audioStreamMap) { DARABONBA_PTR_SET_VALUE(audioStreamMap_, audioStreamMap) };


    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputClip & clip() const { DARABONBA_PTR_GET_CONST(clip_, Models::ListJobResponseBodyJobListJobOutputClip) };
    inline Models::ListJobResponseBodyJobListJobOutputClip clip() { DARABONBA_PTR_GET(clip_, Models::ListJobResponseBodyJobListJobOutputClip) };
    inline ListJobResponseBodyJobListJobOutput& setClip(const Models::ListJobResponseBodyJobListJobOutputClip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
    inline ListJobResponseBodyJobListJobOutput& setClip(Models::ListJobResponseBodyJobListJobOutputClip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::ListJobResponseBodyJobListJobOutputContainer) };
    inline Models::ListJobResponseBodyJobListJobOutputContainer container() { DARABONBA_PTR_GET(container_, Models::ListJobResponseBodyJobListJobOutputContainer) };
    inline ListJobResponseBodyJobListJobOutput& setContainer(const Models::ListJobResponseBodyJobListJobOutputContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline ListJobResponseBodyJobListJobOutput& setContainer(Models::ListJobResponseBodyJobListJobOutputContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // deWatermark Field Functions 
    bool hasDeWatermark() const { return this->deWatermark_ != nullptr;};
    void deleteDeWatermark() { this->deWatermark_ = nullptr;};
    inline string deWatermark() const { DARABONBA_PTR_GET_DEFAULT(deWatermark_, "") };
    inline ListJobResponseBodyJobListJobOutput& setDeWatermark(string deWatermark) { DARABONBA_PTR_SET_VALUE(deWatermark_, deWatermark) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::ListJobResponseBodyJobListJobOutputEncryption) };
    inline Models::ListJobResponseBodyJobListJobOutputEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::ListJobResponseBodyJobListJobOutputEncryption) };
    inline ListJobResponseBodyJobListJobOutput& setEncryption(const Models::ListJobResponseBodyJobListJobOutputEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline ListJobResponseBodyJobListJobOutput& setEncryption(Models::ListJobResponseBodyJobListJobOutputEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // m3U8NonStandardSupport Field Functions 
    bool hasM3U8NonStandardSupport() const { return this->m3U8NonStandardSupport_ != nullptr;};
    void deleteM3U8NonStandardSupport() { this->m3U8NonStandardSupport_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport() const { DARABONBA_PTR_GET_CONST(m3U8NonStandardSupport_, Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport) };
    inline Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport m3U8NonStandardSupport() { DARABONBA_PTR_GET(m3U8NonStandardSupport_, Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport) };
    inline ListJobResponseBodyJobListJobOutput& setM3U8NonStandardSupport(const Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport) { DARABONBA_PTR_SET_VALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };
    inline ListJobResponseBodyJobListJobOutput& setM3U8NonStandardSupport(Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport && m3U8NonStandardSupport) { DARABONBA_PTR_SET_RVALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };


    // mergeConfigUrl Field Functions 
    bool hasMergeConfigUrl() const { return this->mergeConfigUrl_ != nullptr;};
    void deleteMergeConfigUrl() { this->mergeConfigUrl_ = nullptr;};
    inline string mergeConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(mergeConfigUrl_, "") };
    inline ListJobResponseBodyJobListJobOutput& setMergeConfigUrl(string mergeConfigUrl) { DARABONBA_PTR_SET_VALUE(mergeConfigUrl_, mergeConfigUrl) };


    // mergeList Field Functions 
    bool hasMergeList() const { return this->mergeList_ != nullptr;};
    void deleteMergeList() { this->mergeList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputMergeList & mergeList() const { DARABONBA_PTR_GET_CONST(mergeList_, Models::ListJobResponseBodyJobListJobOutputMergeList) };
    inline Models::ListJobResponseBodyJobListJobOutputMergeList mergeList() { DARABONBA_PTR_GET(mergeList_, Models::ListJobResponseBodyJobListJobOutputMergeList) };
    inline ListJobResponseBodyJobListJobOutput& setMergeList(const Models::ListJobResponseBodyJobListJobOutputMergeList & mergeList) { DARABONBA_PTR_SET_VALUE(mergeList_, mergeList) };
    inline ListJobResponseBodyJobListJobOutput& setMergeList(Models::ListJobResponseBodyJobListJobOutputMergeList && mergeList) { DARABONBA_PTR_SET_RVALUE(mergeList_, mergeList) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::ListJobResponseBodyJobListJobOutputMuxConfig) };
    inline Models::ListJobResponseBodyJobListJobOutputMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::ListJobResponseBodyJobListJobOutputMuxConfig) };
    inline ListJobResponseBodyJobListJobOutput& setMuxConfig(const Models::ListJobResponseBodyJobListJobOutputMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline ListJobResponseBodyJobListJobOutput& setMuxConfig(Models::ListJobResponseBodyJobListJobOutputMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // openingList Field Functions 
    bool hasOpeningList() const { return this->openingList_ != nullptr;};
    void deleteOpeningList() { this->openingList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputOpeningList & openingList() const { DARABONBA_PTR_GET_CONST(openingList_, Models::ListJobResponseBodyJobListJobOutputOpeningList) };
    inline Models::ListJobResponseBodyJobListJobOutputOpeningList openingList() { DARABONBA_PTR_GET(openingList_, Models::ListJobResponseBodyJobListJobOutputOpeningList) };
    inline ListJobResponseBodyJobListJobOutput& setOpeningList(const Models::ListJobResponseBodyJobListJobOutputOpeningList & openingList) { DARABONBA_PTR_SET_VALUE(openingList_, openingList) };
    inline ListJobResponseBodyJobListJobOutput& setOpeningList(Models::ListJobResponseBodyJobListJobOutputOpeningList && openingList) { DARABONBA_PTR_SET_RVALUE(openingList_, openingList) };


    // outSubtitleList Field Functions 
    bool hasOutSubtitleList() const { return this->outSubtitleList_ != nullptr;};
    void deleteOutSubtitleList() { this->outSubtitleList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputOutSubtitleList & outSubtitleList() const { DARABONBA_PTR_GET_CONST(outSubtitleList_, Models::ListJobResponseBodyJobListJobOutputOutSubtitleList) };
    inline Models::ListJobResponseBodyJobListJobOutputOutSubtitleList outSubtitleList() { DARABONBA_PTR_GET(outSubtitleList_, Models::ListJobResponseBodyJobListJobOutputOutSubtitleList) };
    inline ListJobResponseBodyJobListJobOutput& setOutSubtitleList(const Models::ListJobResponseBodyJobListJobOutputOutSubtitleList & outSubtitleList) { DARABONBA_PTR_SET_VALUE(outSubtitleList_, outSubtitleList) };
    inline ListJobResponseBodyJobListJobOutput& setOutSubtitleList(Models::ListJobResponseBodyJobListJobOutputOutSubtitleList && outSubtitleList) { DARABONBA_PTR_SET_RVALUE(outSubtitleList_, outSubtitleList) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::ListJobResponseBodyJobListJobOutputOutputFile) };
    inline Models::ListJobResponseBodyJobListJobOutputOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::ListJobResponseBodyJobListJobOutputOutputFile) };
    inline ListJobResponseBodyJobListJobOutput& setOutputFile(const Models::ListJobResponseBodyJobListJobOutputOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline ListJobResponseBodyJobListJobOutput& setOutputFile(Models::ListJobResponseBodyJobListJobOutputOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline ListJobResponseBodyJobListJobOutput& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::ListJobResponseBodyJobListJobOutputProperties) };
    inline Models::ListJobResponseBodyJobListJobOutputProperties properties() { DARABONBA_PTR_GET(properties_, Models::ListJobResponseBodyJobListJobOutputProperties) };
    inline ListJobResponseBodyJobListJobOutput& setProperties(const Models::ListJobResponseBodyJobListJobOutputProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListJobResponseBodyJobListJobOutput& setProperties(Models::ListJobResponseBodyJobListJobOutputProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline ListJobResponseBodyJobListJobOutput& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // subtitleConfig Field Functions 
    bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
    void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputSubtitleConfig & subtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfig) };
    inline Models::ListJobResponseBodyJobListJobOutputSubtitleConfig subtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, Models::ListJobResponseBodyJobListJobOutputSubtitleConfig) };
    inline ListJobResponseBodyJobListJobOutput& setSubtitleConfig(const Models::ListJobResponseBodyJobListJobOutputSubtitleConfig & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
    inline ListJobResponseBodyJobListJobOutput& setSubtitleConfig(Models::ListJobResponseBodyJobListJobOutputSubtitleConfig && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


    // superReso Field Functions 
    bool hasSuperReso() const { return this->superReso_ != nullptr;};
    void deleteSuperReso() { this->superReso_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputSuperReso & superReso() const { DARABONBA_PTR_GET_CONST(superReso_, Models::ListJobResponseBodyJobListJobOutputSuperReso) };
    inline Models::ListJobResponseBodyJobListJobOutputSuperReso superReso() { DARABONBA_PTR_GET(superReso_, Models::ListJobResponseBodyJobListJobOutputSuperReso) };
    inline ListJobResponseBodyJobListJobOutput& setSuperReso(const Models::ListJobResponseBodyJobListJobOutputSuperReso & superReso) { DARABONBA_PTR_SET_VALUE(superReso_, superReso) };
    inline ListJobResponseBodyJobListJobOutput& setSuperReso(Models::ListJobResponseBodyJobListJobOutputSuperReso && superReso) { DARABONBA_PTR_SET_RVALUE(superReso_, superReso) };


    // tailSlateList Field Functions 
    bool hasTailSlateList() const { return this->tailSlateList_ != nullptr;};
    void deleteTailSlateList() { this->tailSlateList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputTailSlateList & tailSlateList() const { DARABONBA_PTR_GET_CONST(tailSlateList_, Models::ListJobResponseBodyJobListJobOutputTailSlateList) };
    inline Models::ListJobResponseBodyJobListJobOutputTailSlateList tailSlateList() { DARABONBA_PTR_GET(tailSlateList_, Models::ListJobResponseBodyJobListJobOutputTailSlateList) };
    inline ListJobResponseBodyJobListJobOutput& setTailSlateList(const Models::ListJobResponseBodyJobListJobOutputTailSlateList & tailSlateList) { DARABONBA_PTR_SET_VALUE(tailSlateList_, tailSlateList) };
    inline ListJobResponseBodyJobListJobOutput& setTailSlateList(Models::ListJobResponseBodyJobListJobOutputTailSlateList && tailSlateList) { DARABONBA_PTR_SET_RVALUE(tailSlateList_, tailSlateList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListJobResponseBodyJobListJobOutput& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::ListJobResponseBodyJobListJobOutputTransConfig) };
    inline Models::ListJobResponseBodyJobListJobOutputTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::ListJobResponseBodyJobListJobOutputTransConfig) };
    inline ListJobResponseBodyJobListJobOutput& setTransConfig(const Models::ListJobResponseBodyJobListJobOutputTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline ListJobResponseBodyJobListJobOutput& setTransConfig(Models::ListJobResponseBodyJobListJobOutputTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ListJobResponseBodyJobListJobOutput& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::ListJobResponseBodyJobListJobOutputVideo) };
    inline Models::ListJobResponseBodyJobListJobOutputVideo video() { DARABONBA_PTR_GET(video_, Models::ListJobResponseBodyJobListJobOutputVideo) };
    inline ListJobResponseBodyJobListJobOutput& setVideo(const Models::ListJobResponseBodyJobListJobOutputVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline ListJobResponseBodyJobListJobOutput& setVideo(Models::ListJobResponseBodyJobListJobOutputVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    // videoStreamMap Field Functions 
    bool hasVideoStreamMap() const { return this->videoStreamMap_ != nullptr;};
    void deleteVideoStreamMap() { this->videoStreamMap_ = nullptr;};
    inline string videoStreamMap() const { DARABONBA_PTR_GET_DEFAULT(videoStreamMap_, "") };
    inline ListJobResponseBodyJobListJobOutput& setVideoStreamMap(string videoStreamMap) { DARABONBA_PTR_SET_VALUE(videoStreamMap_, videoStreamMap) };


    // waterMarkConfigUrl Field Functions 
    bool hasWaterMarkConfigUrl() const { return this->waterMarkConfigUrl_ != nullptr;};
    void deleteWaterMarkConfigUrl() { this->waterMarkConfigUrl_ = nullptr;};
    inline string waterMarkConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(waterMarkConfigUrl_, "") };
    inline ListJobResponseBodyJobListJobOutput& setWaterMarkConfigUrl(string waterMarkConfigUrl) { DARABONBA_PTR_SET_VALUE(waterMarkConfigUrl_, waterMarkConfigUrl) };


    // waterMarkList Field Functions 
    bool hasWaterMarkList() const { return this->waterMarkList_ != nullptr;};
    void deleteWaterMarkList() { this->waterMarkList_ = nullptr;};
    inline const Models::ListJobResponseBodyJobListJobOutputWaterMarkList & waterMarkList() const { DARABONBA_PTR_GET_CONST(waterMarkList_, Models::ListJobResponseBodyJobListJobOutputWaterMarkList) };
    inline Models::ListJobResponseBodyJobListJobOutputWaterMarkList waterMarkList() { DARABONBA_PTR_GET(waterMarkList_, Models::ListJobResponseBodyJobListJobOutputWaterMarkList) };
    inline ListJobResponseBodyJobListJobOutput& setWaterMarkList(const Models::ListJobResponseBodyJobListJobOutputWaterMarkList & waterMarkList) { DARABONBA_PTR_SET_VALUE(waterMarkList_, waterMarkList) };
    inline ListJobResponseBodyJobListJobOutput& setWaterMarkList(Models::ListJobResponseBodyJobListJobOutputWaterMarkList && waterMarkList) { DARABONBA_PTR_SET_RVALUE(waterMarkList_, waterMarkList) };


  protected:
    // The audio configurations.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputAudio> audio_ = nullptr;
    // The sequence number of the audio stream.
    // 
    // *   Format: `0:a:{Sequence number}`.
    // *   The sequence number is the index of the audio stream in the list and starts from 0. If no sequence number is specified, the default audio stream is used.
    std::shared_ptr<string> audioStreamMap_ = nullptr;
    // The information about the clip.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputClip> clip_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputContainer> container_ = nullptr;
    // The configurations of watermark blurring. The value is a JSON object. For more information, see [Parameter details](https://help.aliyun.com/document_detail/29253.html).
    std::shared_ptr<string> deWatermark_ = nullptr;
    // The encryption configurations. Only outputs in the M3U8 format are supported.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputEncryption> encryption_ = nullptr;
    // The non-standard support configuration for M3U8. The value must be a JSON object. For more information, see [Parameter details](https://help.aliyun.com/document_detail/29253.html).
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputM3U8NonStandardSupport> m3U8NonStandardSupport_ = nullptr;
    // The URL of the merging configuration file. You can specify either MergeList or MergeConfigUrl when you submit the transcoding job.
    // 
    // *   The configuration file specified by MergeConfigUrl can contain up to 50 clips.
    // *   MergeConfigUrl indicates the URL of the configuration file for merging clips.
    // *   Make sure that the configuration file is stored as an object in OSS and that MPS can access the OSS object. For information about the file content, see the details of merging parameters.
    // *   Example of the content of the merging configuration file: `{"MergeList":[{"MergeURL":"http://exampleBucket****.oss-cn-hangzhou.aliyuncs.com/video_01.mp4"}]}`.
    std::shared_ptr<string> mergeConfigUrl_ = nullptr;
    // The configurations for merging clips.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputMergeList> mergeList_ = nullptr;
    // The transmuxing configurations.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputMuxConfig> muxConfig_ = nullptr;
    // The opening parts.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputOpeningList> openingList_ = nullptr;
    // The output subtitles.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputOutSubtitleList> outSubtitleList_ = nullptr;
    // The details of the output file.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputOutputFile> outputFile_ = nullptr;
    // The priority of the job in the MPS queue to which the job is added.
    // 
    // *   A value of 10 indicates the highest priority.
    // *   Default value: **6**.
    std::shared_ptr<string> priority_ = nullptr;
    // The media properties.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputProperties> properties_ = nullptr;
    // The rotation angle of the video.
    std::shared_ptr<string> rotate_ = nullptr;
    // The subtitle configurations.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputSubtitleConfig> subtitleConfig_ = nullptr;
    // The configurations for using the resolution of the source video.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputSuperReso> superReso_ = nullptr;
    // The ending parts.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputTailSlateList> tailSlateList_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The general transcoding configurations. If this parameter is specified in the request, the corresponding parameters in the specified transcoding template are overwritten.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputTransConfig> transConfig_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
    // The video configurations.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputVideo> video_ = nullptr;
    // The sequence number of the video stream.
    // 
    // *   Format: 0:a:{Sequence number}. Example value: 0:a:0.
    // *   The sequence number is the index of the video stream in the list and starts from 0.
    // *   If no sequence number is specified, the default video stream is used.
    std::shared_ptr<string> videoStreamMap_ = nullptr;
    // The URL of the watermark configuration file.
    std::shared_ptr<string> waterMarkConfigUrl_ = nullptr;
    // The watermarks.
    std::shared_ptr<Models::ListJobResponseBodyJobListJobOutputWaterMarkList> waterMarkList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
