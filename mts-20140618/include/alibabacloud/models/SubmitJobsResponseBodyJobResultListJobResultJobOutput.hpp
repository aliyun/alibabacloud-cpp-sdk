// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputClip.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutput& obj) { 
      DARABONBA_PTR_TO_JSON(AmixList, amixList_);
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_TO_JSON(Clip, clip_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_TO_JSON(DigiWaterMark, digiWaterMark_);
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
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(AmixList, amixList_);
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(AudioStreamMap, audioStreamMap_);
      DARABONBA_PTR_FROM_JSON(Clip, clip_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(DeWatermark, deWatermark_);
      DARABONBA_PTR_FROM_JSON(DigiWaterMark, digiWaterMark_);
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
    SubmitJobsResponseBodyJobResultListJobResultJobOutput() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutput(const SubmitJobsResponseBodyJobResultListJobResultJobOutput &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutput(SubmitJobsResponseBodyJobResultListJobResultJobOutput &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutput() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutput& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutput &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutput& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amixList_ == nullptr
        && return this->audio_ == nullptr && return this->audioStreamMap_ == nullptr && return this->clip_ == nullptr && return this->container_ == nullptr && return this->deWatermark_ == nullptr
        && return this->digiWaterMark_ == nullptr && return this->encryption_ == nullptr && return this->m3U8NonStandardSupport_ == nullptr && return this->mergeConfigUrl_ == nullptr && return this->mergeList_ == nullptr
        && return this->muxConfig_ == nullptr && return this->openingList_ == nullptr && return this->outSubtitleList_ == nullptr && return this->outputFile_ == nullptr && return this->priority_ == nullptr
        && return this->properties_ == nullptr && return this->rotate_ == nullptr && return this->subtitleConfig_ == nullptr && return this->superReso_ == nullptr && return this->tailSlateList_ == nullptr
        && return this->templateId_ == nullptr && return this->transConfig_ == nullptr && return this->userData_ == nullptr && return this->video_ == nullptr && return this->videoStreamMap_ == nullptr
        && return this->waterMarkConfigUrl_ == nullptr && return this->waterMarkList_ == nullptr; };
    // amixList Field Functions 
    bool hasAmixList() const { return this->amixList_ != nullptr;};
    void deleteAmixList() { this->amixList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList & amixList() const { DARABONBA_PTR_GET_CONST(amixList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList amixList() { DARABONBA_PTR_GET(amixList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setAmixList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList & amixList) { DARABONBA_PTR_SET_VALUE(amixList_, amixList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setAmixList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList && amixList) { DARABONBA_PTR_SET_RVALUE(amixList_, amixList) };


    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio audio() { DARABONBA_PTR_GET(audio_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setAudio(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setAudio(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // audioStreamMap Field Functions 
    bool hasAudioStreamMap() const { return this->audioStreamMap_ != nullptr;};
    void deleteAudioStreamMap() { this->audioStreamMap_ = nullptr;};
    inline string audioStreamMap() const { DARABONBA_PTR_GET_DEFAULT(audioStreamMap_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setAudioStreamMap(string audioStreamMap) { DARABONBA_PTR_SET_VALUE(audioStreamMap_, audioStreamMap) };


    // clip Field Functions 
    bool hasClip() const { return this->clip_ != nullptr;};
    void deleteClip() { this->clip_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip & clip() const { DARABONBA_PTR_GET_CONST(clip_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip clip() { DARABONBA_PTR_GET(clip_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setClip(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setClip(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer container() { DARABONBA_PTR_GET(container_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setContainer(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setContainer(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // deWatermark Field Functions 
    bool hasDeWatermark() const { return this->deWatermark_ != nullptr;};
    void deleteDeWatermark() { this->deWatermark_ = nullptr;};
    inline string deWatermark() const { DARABONBA_PTR_GET_DEFAULT(deWatermark_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setDeWatermark(string deWatermark) { DARABONBA_PTR_SET_VALUE(deWatermark_, deWatermark) };


    // digiWaterMark Field Functions 
    bool hasDigiWaterMark() const { return this->digiWaterMark_ != nullptr;};
    void deleteDigiWaterMark() { this->digiWaterMark_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark & digiWaterMark() const { DARABONBA_PTR_GET_CONST(digiWaterMark_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark digiWaterMark() { DARABONBA_PTR_GET(digiWaterMark_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setDigiWaterMark(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark & digiWaterMark) { DARABONBA_PTR_SET_VALUE(digiWaterMark_, digiWaterMark) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setDigiWaterMark(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark && digiWaterMark) { DARABONBA_PTR_SET_RVALUE(digiWaterMark_, digiWaterMark) };


    // encryption Field Functions 
    bool hasEncryption() const { return this->encryption_ != nullptr;};
    void deleteEncryption() { this->encryption_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption & encryption() const { DARABONBA_PTR_GET_CONST(encryption_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption encryption() { DARABONBA_PTR_GET(encryption_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setEncryption(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setEncryption(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


    // m3U8NonStandardSupport Field Functions 
    bool hasM3U8NonStandardSupport() const { return this->m3U8NonStandardSupport_ != nullptr;};
    void deleteM3U8NonStandardSupport() { this->m3U8NonStandardSupport_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport() const { DARABONBA_PTR_GET_CONST(m3U8NonStandardSupport_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport m3U8NonStandardSupport() { DARABONBA_PTR_GET(m3U8NonStandardSupport_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setM3U8NonStandardSupport(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport & m3U8NonStandardSupport) { DARABONBA_PTR_SET_VALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setM3U8NonStandardSupport(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport && m3U8NonStandardSupport) { DARABONBA_PTR_SET_RVALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };


    // mergeConfigUrl Field Functions 
    bool hasMergeConfigUrl() const { return this->mergeConfigUrl_ != nullptr;};
    void deleteMergeConfigUrl() { this->mergeConfigUrl_ = nullptr;};
    inline string mergeConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(mergeConfigUrl_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setMergeConfigUrl(string mergeConfigUrl) { DARABONBA_PTR_SET_VALUE(mergeConfigUrl_, mergeConfigUrl) };


    // mergeList Field Functions 
    bool hasMergeList() const { return this->mergeList_ != nullptr;};
    void deleteMergeList() { this->mergeList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList & mergeList() const { DARABONBA_PTR_GET_CONST(mergeList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList mergeList() { DARABONBA_PTR_GET(mergeList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setMergeList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList & mergeList) { DARABONBA_PTR_SET_VALUE(mergeList_, mergeList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setMergeList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList && mergeList) { DARABONBA_PTR_SET_RVALUE(mergeList_, mergeList) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setMuxConfig(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setMuxConfig(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // openingList Field Functions 
    bool hasOpeningList() const { return this->openingList_ != nullptr;};
    void deleteOpeningList() { this->openingList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList & openingList() const { DARABONBA_PTR_GET_CONST(openingList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList openingList() { DARABONBA_PTR_GET(openingList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOpeningList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList & openingList) { DARABONBA_PTR_SET_VALUE(openingList_, openingList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOpeningList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList && openingList) { DARABONBA_PTR_SET_RVALUE(openingList_, openingList) };


    // outSubtitleList Field Functions 
    bool hasOutSubtitleList() const { return this->outSubtitleList_ != nullptr;};
    void deleteOutSubtitleList() { this->outSubtitleList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList & outSubtitleList() const { DARABONBA_PTR_GET_CONST(outSubtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList outSubtitleList() { DARABONBA_PTR_GET(outSubtitleList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOutSubtitleList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList & outSubtitleList) { DARABONBA_PTR_SET_VALUE(outSubtitleList_, outSubtitleList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOutSubtitleList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList && outSubtitleList) { DARABONBA_PTR_SET_RVALUE(outSubtitleList_, outSubtitleList) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOutputFile(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setOutputFile(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties properties() { DARABONBA_PTR_GET(properties_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setProperties(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setProperties(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // rotate Field Functions 
    bool hasRotate() const { return this->rotate_ != nullptr;};
    void deleteRotate() { this->rotate_ = nullptr;};
    inline string rotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


    // subtitleConfig Field Functions 
    bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
    void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig & subtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig subtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setSubtitleConfig(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setSubtitleConfig(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


    // superReso Field Functions 
    bool hasSuperReso() const { return this->superReso_ != nullptr;};
    void deleteSuperReso() { this->superReso_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso & superReso() const { DARABONBA_PTR_GET_CONST(superReso_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso superReso() { DARABONBA_PTR_GET(superReso_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setSuperReso(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso & superReso) { DARABONBA_PTR_SET_VALUE(superReso_, superReso) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setSuperReso(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso && superReso) { DARABONBA_PTR_SET_RVALUE(superReso_, superReso) };


    // tailSlateList Field Functions 
    bool hasTailSlateList() const { return this->tailSlateList_ != nullptr;};
    void deleteTailSlateList() { this->tailSlateList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList & tailSlateList() const { DARABONBA_PTR_GET_CONST(tailSlateList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList tailSlateList() { DARABONBA_PTR_GET(tailSlateList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setTailSlateList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList & tailSlateList) { DARABONBA_PTR_SET_VALUE(tailSlateList_, tailSlateList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setTailSlateList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList && tailSlateList) { DARABONBA_PTR_SET_RVALUE(tailSlateList_, tailSlateList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setTransConfig(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setTransConfig(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo video() { DARABONBA_PTR_GET(video_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setVideo(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setVideo(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    // videoStreamMap Field Functions 
    bool hasVideoStreamMap() const { return this->videoStreamMap_ != nullptr;};
    void deleteVideoStreamMap() { this->videoStreamMap_ = nullptr;};
    inline string videoStreamMap() const { DARABONBA_PTR_GET_DEFAULT(videoStreamMap_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setVideoStreamMap(string videoStreamMap) { DARABONBA_PTR_SET_VALUE(videoStreamMap_, videoStreamMap) };


    // waterMarkConfigUrl Field Functions 
    bool hasWaterMarkConfigUrl() const { return this->waterMarkConfigUrl_ != nullptr;};
    void deleteWaterMarkConfigUrl() { this->waterMarkConfigUrl_ = nullptr;};
    inline string waterMarkConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(waterMarkConfigUrl_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setWaterMarkConfigUrl(string waterMarkConfigUrl) { DARABONBA_PTR_SET_VALUE(waterMarkConfigUrl_, waterMarkConfigUrl) };


    // waterMarkList Field Functions 
    bool hasWaterMarkList() const { return this->waterMarkList_ != nullptr;};
    void deleteWaterMarkList() { this->waterMarkList_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList & waterMarkList() const { DARABONBA_PTR_GET_CONST(waterMarkList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList waterMarkList() { DARABONBA_PTR_GET(waterMarkList_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setWaterMarkList(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList & waterMarkList) { DARABONBA_PTR_SET_VALUE(waterMarkList_, waterMarkList) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutput& setWaterMarkList(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList && waterMarkList) { DARABONBA_PTR_SET_RVALUE(waterMarkList_, waterMarkList) };


  protected:
    // The audio tracks that are mixed.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAmixList> amixList_ = nullptr;
    // The audio configurations.
    // 
    // >  If this parameter is specified in the request, the corresponding configurations in the specified transcoding template are overwritten.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputAudio> audio_ = nullptr;
    // The sequence number of the audio stream.
    // 
    // *   Format: 0:a:{Sequence number}. Example: 0:a:0.
    // *   The sequence number is the index of the audio stream in the list and starts from 0.
    // *   If no sequence number is specified, the default audio stream is used.
    std::shared_ptr<string> audioStreamMap_ = nullptr;
    // The information about the clip.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputClip> clip_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputContainer> container_ = nullptr;
    // The configurations of watermark blurring. The value is a JSON object. For more information, see the **DeWatermark** section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    std::shared_ptr<string> deWatermark_ = nullptr;
    // The digital watermarks.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputDigiWaterMark> digiWaterMark_ = nullptr;
    // The encryption configurations. Only outputs in the M3U8 format are supported.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputEncryption> encryption_ = nullptr;
    // The non-standard support configuration for M3U8. The value is a JSON object. For more information, see the **M3U8NonStandardSupport** section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputM3U8NonStandardSupport> m3U8NonStandardSupport_ = nullptr;
    // The URL of the merging configuration file. Only one of **MergeList** and **MergeConfigUrl** takes effect.
    // 
    // *   The configuration file specified by MergeConfigUrl can contain up to 50 clips.
    // *   MergeConfigUrl indicates the URL of the configuration file for merging clips.
    // *   Make sure that the configuration file is stored as an object in OSS and that MPS can access the OSS object. For information about the file content, see the details about merging parameters.
    // *   Example of the content of the merging configuration file: `{"MergeList":[{"MergeURL":"http://exampleBucket****.oss-cn-hangzhou.aliyuncs.com/video_01.mp4"}]}`.
    std::shared_ptr<string> mergeConfigUrl_ = nullptr;
    // The configurations for merging clips.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeList> mergeList_ = nullptr;
    // The transmuxing configurations. If this parameter is specified in the request, the corresponding configurations in the specified transcoding template are overwritten.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputMuxConfig> muxConfig_ = nullptr;
    // The opening parts. The value is a JSON object.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOpeningList> openingList_ = nullptr;
    // The output subtitles.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutSubtitleList> outSubtitleList_ = nullptr;
    // The details of the output file.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputOutputFile> outputFile_ = nullptr;
    // The priority of the job in the MPS queue to which the job is added.
    // 
    // *   A value of **10** indicates the highest priority.
    // *   Default value: **6**.
    std::shared_ptr<string> priority_ = nullptr;
    // The media properties.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties> properties_ = nullptr;
    // The rotation angle of the video, in the clockwise direction.
    std::shared_ptr<string> rotate_ = nullptr;
    // The subtitle configurations.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSubtitleConfig> subtitleConfig_ = nullptr;
    // The configurations for using the resolution of the source video.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputSuperReso> superReso_ = nullptr;
    // The ending parts. The value is a JSON object.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTailSlateList> tailSlateList_ = nullptr;
    // The ID of the transcoding template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The general transcoding configurations.
    // 
    // >  If this parameter is specified in the request, the corresponding parameter in the specified transcoding template are overwritten.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputTransConfig> transConfig_ = nullptr;
    // The custom data.
    std::shared_ptr<string> userData_ = nullptr;
    // The video configurations.
    // 
    // >  If this parameter is specified, **AliyunVideoCodec** in the template specified by **TemplateId** is overwritten.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputVideo> video_ = nullptr;
    // The sequence number of the video stream.
    // 
    // *   Format: 0:a:{Sequence number}. Example: 0:a:0.
    // *   The sequence number is the index of the video stream in the list and starts from 0.
    // *   If no sequence number is specified, the default video stream is used.
    std::shared_ptr<string> videoStreamMap_ = nullptr;
    // The URL of the watermark configuration file.
    std::shared_ptr<string> waterMarkConfigUrl_ = nullptr;
    // The watermarks.
    // 
    // >  If watermarks are truncated or fail to be generated, check whether the text watermarks that you add contain special characters. If the text watermarks contain special characters, you must escape the special characters before you add the watermarks. Alternatively, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12246746.top-nav.dticket.68797bbcm8H408#/ticket/add/?productId=1232) to contact Alibaba Cloud customer service for compatibility processing.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputWaterMarkList> waterMarkList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
