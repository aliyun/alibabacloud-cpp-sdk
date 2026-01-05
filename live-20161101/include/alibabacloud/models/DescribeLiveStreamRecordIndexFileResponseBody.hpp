// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordIndexFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordIndexFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordIndexInfo, recordIndexInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordIndexFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordIndexInfo, recordIndexInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamRecordIndexFileResponseBody() = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(const DescribeLiveStreamRecordIndexFileResponseBody &) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(DescribeLiveStreamRecordIndexFileResponseBody &&) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordIndexFileResponseBody() = default ;
    DescribeLiveStreamRecordIndexFileResponseBody& operator=(const DescribeLiveStreamRecordIndexFileResponseBody &) = default ;
    DescribeLiveStreamRecordIndexFileResponseBody& operator=(DescribeLiveStreamRecordIndexFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordIndexInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordIndexInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_TO_JSON(OssObject, ossObject_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, RecordIndexInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_FROM_JSON(OssObject, ossObject_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      RecordIndexInfo() = default ;
      RecordIndexInfo(const RecordIndexInfo &) = default ;
      RecordIndexInfo(RecordIndexInfo &&) = default ;
      RecordIndexInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordIndexInfo() = default ;
      RecordIndexInfo& operator=(const RecordIndexInfo &) = default ;
      RecordIndexInfo& operator=(RecordIndexInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appName_ == nullptr
        && this->createTime_ == nullptr && this->domainName_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->format_ == nullptr
        && this->height_ == nullptr && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->ossObject_ == nullptr && this->recordId_ == nullptr
        && this->recordUrl_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr && this->width_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RecordIndexInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordIndexInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline RecordIndexInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline RecordIndexInfo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline RecordIndexInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline RecordIndexInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline RecordIndexInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline RecordIndexInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossEndpoint Field Functions 
      bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
      void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
      inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
      inline RecordIndexInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


      // ossObject Field Functions 
      bool hasOssObject() const { return this->ossObject_ != nullptr;};
      void deleteOssObject() { this->ossObject_ = nullptr;};
      inline string getOssObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
      inline RecordIndexInfo& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
      inline RecordIndexInfo& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordUrl Field Functions 
      bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
      void deleteRecordUrl() { this->recordUrl_ = nullptr;};
      inline string getRecordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
      inline RecordIndexInfo& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline RecordIndexInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline RecordIndexInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline RecordIndexInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The name of the application to which the live stream belongs.
      shared_ptr<string> appName_ {};
      // The time when the index file was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The recording length. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The end time of the index file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The video format.
      shared_ptr<string> format_ {};
      // The video height.
      shared_ptr<int32_t> height_ {};
      // The name of the Object Storage Service (OSS) bucket.
      shared_ptr<string> ossBucket_ {};
      // The endpoint of the OSS bucket.
      shared_ptr<string> ossEndpoint_ {};
      // The name of the storage file in OSS.
      shared_ptr<string> ossObject_ {};
      // The ID of the index file.
      shared_ptr<string> recordId_ {};
      // The URL of the index file.
      shared_ptr<string> recordUrl_ {};
      // The start time of the index file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The name of the live stream.
      shared_ptr<string> streamName_ {};
      // The video width.
      shared_ptr<int32_t> width_ {};
    };

    virtual bool empty() const override { return this->recordIndexInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // recordIndexInfo Field Functions 
    bool hasRecordIndexInfo() const { return this->recordIndexInfo_ != nullptr;};
    void deleteRecordIndexInfo() { this->recordIndexInfo_ = nullptr;};
    inline const DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo & getRecordIndexInfo() const { DARABONBA_PTR_GET_CONST(recordIndexInfo_, DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo getRecordIndexInfo() { DARABONBA_PTR_GET(recordIndexInfo_, DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRecordIndexInfo(const DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo & recordIndexInfo) { DARABONBA_PTR_SET_VALUE(recordIndexInfo_, recordIndexInfo) };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRecordIndexInfo(DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo && recordIndexInfo) { DARABONBA_PTR_SET_RVALUE(recordIndexInfo_, recordIndexInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamRecordIndexFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the index file.
    shared_ptr<DescribeLiveStreamRecordIndexFileResponseBody::RecordIndexInfo> recordIndexInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
