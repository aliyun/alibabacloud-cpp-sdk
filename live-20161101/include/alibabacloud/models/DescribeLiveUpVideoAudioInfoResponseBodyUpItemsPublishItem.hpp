// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& obj) { 
      DARABONBA_PTR_TO_JSON(AacHeaders, aacHeaders_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
      DARABONBA_PTR_TO_JSON(AudioFrames, audioFrames_);
      DARABONBA_PTR_TO_JSON(AudioInterval, audioInterval_);
      DARABONBA_PTR_TO_JSON(AudioStamps, audioStamps_);
      DARABONBA_PTR_TO_JSON(AvcHeaders, avcHeaders_);
      DARABONBA_PTR_TO_JSON(CodecInfo, codecInfo_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrorFlags, errorFlags_);
      DARABONBA_PTR_TO_JSON(PublishInterval, publishInterval_);
      DARABONBA_PTR_TO_JSON(PublishIp, publishIp_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_TO_JSON(VideoAndAudioStamp, videoAndAudioStamp_);
      DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
      DARABONBA_PTR_TO_JSON(VideoFrames, videoFrames_);
      DARABONBA_PTR_TO_JSON(VideoInterval, videoInterval_);
      DARABONBA_PTR_TO_JSON(VideoStamps, videoStamps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AacHeaders, aacHeaders_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
      DARABONBA_PTR_FROM_JSON(AudioFrames, audioFrames_);
      DARABONBA_PTR_FROM_JSON(AudioInterval, audioInterval_);
      DARABONBA_PTR_FROM_JSON(AudioStamps, audioStamps_);
      DARABONBA_PTR_FROM_JSON(AvcHeaders, avcHeaders_);
      DARABONBA_PTR_FROM_JSON(CodecInfo, codecInfo_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrorFlags, errorFlags_);
      DARABONBA_PTR_FROM_JSON(PublishInterval, publishInterval_);
      DARABONBA_PTR_FROM_JSON(PublishIp, publishIp_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
      DARABONBA_PTR_FROM_JSON(VideoAndAudioStamp, videoAndAudioStamp_);
      DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
      DARABONBA_PTR_FROM_JSON(VideoFrames, videoFrames_);
      DARABONBA_PTR_FROM_JSON(VideoInterval, videoInterval_);
      DARABONBA_PTR_FROM_JSON(VideoStamps, videoStamps_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aacHeaders_ == nullptr
        && return this->appName_ == nullptr && return this->audioBitRate_ == nullptr && return this->audioFrames_ == nullptr && return this->audioInterval_ == nullptr && return this->audioStamps_ == nullptr
        && return this->avcHeaders_ == nullptr && return this->codecInfo_ == nullptr && return this->domainName_ == nullptr && return this->errorFlags_ == nullptr && return this->publishInterval_ == nullptr
        && return this->publishIp_ == nullptr && return this->publishStatus_ == nullptr && return this->publishTime_ == nullptr && return this->stopTime_ == nullptr && return this->streamName_ == nullptr
        && return this->uniqueId_ == nullptr && return this->videoAndAudioStamp_ == nullptr && return this->videoBitRate_ == nullptr && return this->videoFrames_ == nullptr && return this->videoInterval_ == nullptr
        && return this->videoStamps_ == nullptr; };
    // aacHeaders Field Functions 
    bool hasAacHeaders() const { return this->aacHeaders_ != nullptr;};
    void deleteAacHeaders() { this->aacHeaders_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders & aacHeaders() const { DARABONBA_PTR_GET_CONST(aacHeaders_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders aacHeaders() { DARABONBA_PTR_GET(aacHeaders_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAacHeaders(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders & aacHeaders) { DARABONBA_PTR_SET_VALUE(aacHeaders_, aacHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAacHeaders(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders && aacHeaders) { DARABONBA_PTR_SET_RVALUE(aacHeaders_, aacHeaders) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // audioBitRate Field Functions 
    bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
    void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate & audioBitRate() const { DARABONBA_PTR_GET_CONST(audioBitRate_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate audioBitRate() { DARABONBA_PTR_GET(audioBitRate_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioBitRate(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate & audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioBitRate(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate && audioBitRate) { DARABONBA_PTR_SET_RVALUE(audioBitRate_, audioBitRate) };


    // audioFrames Field Functions 
    bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
    void deleteAudioFrames() { this->audioFrames_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames & audioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames audioFrames() { DARABONBA_PTR_GET(audioFrames_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioFrames(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioFrames(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


    // audioInterval Field Functions 
    bool hasAudioInterval() const { return this->audioInterval_ != nullptr;};
    void deleteAudioInterval() { this->audioInterval_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval & audioInterval() const { DARABONBA_PTR_GET_CONST(audioInterval_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval audioInterval() { DARABONBA_PTR_GET(audioInterval_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioInterval(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval & audioInterval) { DARABONBA_PTR_SET_VALUE(audioInterval_, audioInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioInterval(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval && audioInterval) { DARABONBA_PTR_SET_RVALUE(audioInterval_, audioInterval) };


    // audioStamps Field Functions 
    bool hasAudioStamps() const { return this->audioStamps_ != nullptr;};
    void deleteAudioStamps() { this->audioStamps_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps & audioStamps() const { DARABONBA_PTR_GET_CONST(audioStamps_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps audioStamps() { DARABONBA_PTR_GET(audioStamps_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioStamps(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps & audioStamps) { DARABONBA_PTR_SET_VALUE(audioStamps_, audioStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAudioStamps(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps && audioStamps) { DARABONBA_PTR_SET_RVALUE(audioStamps_, audioStamps) };


    // avcHeaders Field Functions 
    bool hasAvcHeaders() const { return this->avcHeaders_ != nullptr;};
    void deleteAvcHeaders() { this->avcHeaders_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders & avcHeaders() const { DARABONBA_PTR_GET_CONST(avcHeaders_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders avcHeaders() { DARABONBA_PTR_GET(avcHeaders_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAvcHeaders(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders & avcHeaders) { DARABONBA_PTR_SET_VALUE(avcHeaders_, avcHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setAvcHeaders(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders && avcHeaders) { DARABONBA_PTR_SET_RVALUE(avcHeaders_, avcHeaders) };


    // codecInfo Field Functions 
    bool hasCodecInfo() const { return this->codecInfo_ != nullptr;};
    void deleteCodecInfo() { this->codecInfo_ = nullptr;};
    inline string codecInfo() const { DARABONBA_PTR_GET_DEFAULT(codecInfo_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setCodecInfo(string codecInfo) { DARABONBA_PTR_SET_VALUE(codecInfo_, codecInfo) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorFlags Field Functions 
    bool hasErrorFlags() const { return this->errorFlags_ != nullptr;};
    void deleteErrorFlags() { this->errorFlags_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags & errorFlags() const { DARABONBA_PTR_GET_CONST(errorFlags_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags errorFlags() { DARABONBA_PTR_GET(errorFlags_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setErrorFlags(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags & errorFlags) { DARABONBA_PTR_SET_VALUE(errorFlags_, errorFlags) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setErrorFlags(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags && errorFlags) { DARABONBA_PTR_SET_RVALUE(errorFlags_, errorFlags) };


    // publishInterval Field Functions 
    bool hasPublishInterval() const { return this->publishInterval_ != nullptr;};
    void deletePublishInterval() { this->publishInterval_ = nullptr;};
    inline string publishInterval() const { DARABONBA_PTR_GET_DEFAULT(publishInterval_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setPublishInterval(string publishInterval) { DARABONBA_PTR_SET_VALUE(publishInterval_, publishInterval) };


    // publishIp Field Functions 
    bool hasPublishIp() const { return this->publishIp_ != nullptr;};
    void deletePublishIp() { this->publishIp_ = nullptr;};
    inline string publishIp() const { DARABONBA_PTR_GET_DEFAULT(publishIp_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setPublishIp(string publishIp) { DARABONBA_PTR_SET_VALUE(publishIp_, publishIp) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // uniqueId Field Functions 
    bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
    void deleteUniqueId() { this->uniqueId_ = nullptr;};
    inline string uniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


    // videoAndAudioStamp Field Functions 
    bool hasVideoAndAudioStamp() const { return this->videoAndAudioStamp_ != nullptr;};
    void deleteVideoAndAudioStamp() { this->videoAndAudioStamp_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp & videoAndAudioStamp() const { DARABONBA_PTR_GET_CONST(videoAndAudioStamp_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp videoAndAudioStamp() { DARABONBA_PTR_GET(videoAndAudioStamp_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoAndAudioStamp(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp & videoAndAudioStamp) { DARABONBA_PTR_SET_VALUE(videoAndAudioStamp_, videoAndAudioStamp) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoAndAudioStamp(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp && videoAndAudioStamp) { DARABONBA_PTR_SET_RVALUE(videoAndAudioStamp_, videoAndAudioStamp) };


    // videoBitRate Field Functions 
    bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
    void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate & videoBitRate() const { DARABONBA_PTR_GET_CONST(videoBitRate_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate videoBitRate() { DARABONBA_PTR_GET(videoBitRate_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoBitRate(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate & videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoBitRate(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate && videoBitRate) { DARABONBA_PTR_SET_RVALUE(videoBitRate_, videoBitRate) };


    // videoFrames Field Functions 
    bool hasVideoFrames() const { return this->videoFrames_ != nullptr;};
    void deleteVideoFrames() { this->videoFrames_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames & videoFrames() const { DARABONBA_PTR_GET_CONST(videoFrames_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames videoFrames() { DARABONBA_PTR_GET(videoFrames_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoFrames(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames & videoFrames) { DARABONBA_PTR_SET_VALUE(videoFrames_, videoFrames) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoFrames(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames && videoFrames) { DARABONBA_PTR_SET_RVALUE(videoFrames_, videoFrames) };


    // videoInterval Field Functions 
    bool hasVideoInterval() const { return this->videoInterval_ != nullptr;};
    void deleteVideoInterval() { this->videoInterval_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval & videoInterval() const { DARABONBA_PTR_GET_CONST(videoInterval_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval videoInterval() { DARABONBA_PTR_GET(videoInterval_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoInterval(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval & videoInterval) { DARABONBA_PTR_SET_VALUE(videoInterval_, videoInterval) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoInterval(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval && videoInterval) { DARABONBA_PTR_SET_RVALUE(videoInterval_, videoInterval) };


    // videoStamps Field Functions 
    bool hasVideoStamps() const { return this->videoStamps_ != nullptr;};
    void deleteVideoStamps() { this->videoStamps_ = nullptr;};
    inline const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps & videoStamps() const { DARABONBA_PTR_GET_CONST(videoStamps_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps) };
    inline Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps videoStamps() { DARABONBA_PTR_GET(videoStamps_, Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoStamps(const Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps & videoStamps) { DARABONBA_PTR_SET_VALUE(videoStamps_, videoStamps) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItem& setVideoStamps(Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps && videoStamps) { DARABONBA_PTR_SET_RVALUE(videoStamps_, videoStamps) };


  protected:
    // The details about the audio and video data of the stream ingest occurrences.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders> aacHeaders_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<string> appName_ = nullptr;
    // The name of the application to which the ingested stream belongs.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioBitRate> audioBitRate_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioFrames> audioFrames_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioInterval> audioInterval_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAudioStamps> audioStamps_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders> avcHeaders_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<string> codecInfo_ = nullptr;
    // The audio and video encoding information.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ingest domain.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemErrorFlags> errorFlags_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<string> publishInterval_ = nullptr;
    // The stream ingest duration. Unit: seconds. A hyphen (-) indicates that the stream is being ingested and the duration cannot be returned.
    std::shared_ptr<string> publishIp_ = nullptr;
    // The IP address of the stream ingest client.
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The stream ingest status. A value of 1 indicates that the stream is being ingested. A value of 0 indicates that the stream was ingested.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The start time of stream ingest. The time is displayed in UTC.
    std::shared_ptr<string> stopTime_ = nullptr;
    // The end time of stream ingest. The time is displayed in UTC.
    std::shared_ptr<string> streamName_ = nullptr;
    // The name of the stream.
    std::shared_ptr<string> uniqueId_ = nullptr;
    // The unique ID of each stream ingest occurrence.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoAndAudioStamp> videoAndAudioStamp_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoBitRate> videoBitRate_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoFrames> videoFrames_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoInterval> videoInterval_ = nullptr;
    // The metric value at a granularity of seconds at the query time.
    std::shared_ptr<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemVideoStamps> videoStamps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
