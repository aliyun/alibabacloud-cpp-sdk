// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDCONFIGRESPONSEBODYLIVEAPPRECORDLISTLIVEAPPRECORD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList.hpp>
#include <alibabacloud/models/DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList.hpp>
#include <alibabacloud/models/DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OnDemond, onDemond_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(RecordFormatList, recordFormatList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodeRecordFormatList, transcodeRecordFormatList_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OnDemond, onDemond_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(RecordFormatList, recordFormatList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodeRecordFormatList, transcodeRecordFormatList_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplates, transcodeTemplates_);
    };
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord() = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(const DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord &) = default ;
    DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& operator=(DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->createTime_ == nullptr && return this->delayTime_ == nullptr && return this->domainName_ == nullptr && return this->endTime_ == nullptr && return this->onDemond_ == nullptr
        && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->recordFormatList_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr
        && return this->transcodeRecordFormatList_ == nullptr && return this->transcodeTemplates_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // onDemond Field Functions 
    bool hasOnDemond() const { return this->onDemond_ != nullptr;};
    void deleteOnDemond() { this->onDemond_ = nullptr;};
    inline int32_t onDemond() const { DARABONBA_PTR_GET_DEFAULT(onDemond_, 0) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setOnDemond(int32_t onDemond) { DARABONBA_PTR_SET_VALUE(onDemond_, onDemond) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // recordFormatList Field Functions 
    bool hasRecordFormatList() const { return this->recordFormatList_ != nullptr;};
    void deleteRecordFormatList() { this->recordFormatList_ = nullptr;};
    inline const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList & recordFormatList() const { DARABONBA_PTR_GET_CONST(recordFormatList_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList) };
    inline Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList recordFormatList() { DARABONBA_PTR_GET(recordFormatList_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setRecordFormatList(const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList & recordFormatList) { DARABONBA_PTR_SET_VALUE(recordFormatList_, recordFormatList) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setRecordFormatList(Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList && recordFormatList) { DARABONBA_PTR_SET_RVALUE(recordFormatList_, recordFormatList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodeRecordFormatList Field Functions 
    bool hasTranscodeRecordFormatList() const { return this->transcodeRecordFormatList_ != nullptr;};
    void deleteTranscodeRecordFormatList() { this->transcodeRecordFormatList_ = nullptr;};
    inline const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList & transcodeRecordFormatList() const { DARABONBA_PTR_GET_CONST(transcodeRecordFormatList_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList) };
    inline Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList transcodeRecordFormatList() { DARABONBA_PTR_GET(transcodeRecordFormatList_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setTranscodeRecordFormatList(const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList & transcodeRecordFormatList) { DARABONBA_PTR_SET_VALUE(transcodeRecordFormatList_, transcodeRecordFormatList) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setTranscodeRecordFormatList(Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList && transcodeRecordFormatList) { DARABONBA_PTR_SET_RVALUE(transcodeRecordFormatList_, transcodeRecordFormatList) };


    // transcodeTemplates Field Functions 
    bool hasTranscodeTemplates() const { return this->transcodeTemplates_ != nullptr;};
    void deleteTranscodeTemplates() { this->transcodeTemplates_ = nullptr;};
    inline const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates & transcodeTemplates() const { DARABONBA_PTR_GET_CONST(transcodeTemplates_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates) };
    inline Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates transcodeTemplates() { DARABONBA_PTR_GET(transcodeTemplates_, Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setTranscodeTemplates(const Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates & transcodeTemplates) { DARABONBA_PTR_SET_VALUE(transcodeTemplates_, transcodeTemplates) };
    inline DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecord& setTranscodeTemplates(Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates && transcodeTemplates) { DARABONBA_PTR_SET_RVALUE(transcodeTemplates_, transcodeTemplates) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the recording configuration was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The maximum interruption duration of the live stream. If the actual interruption duration exceeds the threshold, a new recording is generated. Valid values: 15 to 21600. Unit: seconds.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // The name of the main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end time of the recording. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The configuration of on-demand recording. Valid values:
    // 
    // *   **0**: disables on-demand recording.
    // *   **1**: enables on-demand recording that is triggered by HTTP callbacks.
    // *   **2**: enables on-demand recording that is triggered by stream ingest parameters.
    // *   **7**: enables on-demand recording by calling the [RealTimeRecordCommand](https://help.aliyun.com/document_detail/85907.html) operation to manually start or stop recording.
    // 
    // >  If you set OnDemand to **1**, you must call the [AddLiveRecordNotifyConfig](https://help.aliyun.com/document_detail/51831.html) operation to configure OnDemandUrl. Otherwise, the configuration of on-demand recording is invalid.
    std::shared_ptr<int32_t> onDemond_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket in which the recordings are stored.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The recording formats of original streams.
    std::shared_ptr<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordRecordFormatList> recordFormatList_ = nullptr;
    // The start time of the recording. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The recording formats of transcoded streams.
    std::shared_ptr<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeRecordFormatList> transcodeRecordFormatList_ = nullptr;
    // The transcoding templates.
    std::shared_ptr<Models::DescribeLiveRecordConfigResponseBodyLiveAppRecordListLiveAppRecordTranscodeTemplates> transcodeTemplates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
