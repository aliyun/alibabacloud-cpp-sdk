// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDINDEXINFOLISTRECORDINDEXINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDINDEXFILESRESPONSEBODYRECORDINDEXINFOLISTRECORDINDEXINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& obj) { 
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
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo() = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo(const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo &) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo(DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo &&) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo() = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& operator=(const DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo &) = default ;
    DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& operator=(DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->createTime_ != nullptr && this->domainName_ != nullptr && this->duration_ != nullptr && this->endTime_ != nullptr && this->format_ != nullptr
        && this->height_ != nullptr && this->ossBucket_ != nullptr && this->ossEndpoint_ != nullptr && this->ossObject_ != nullptr && this->recordId_ != nullptr
        && this->recordUrl_ != nullptr && this->startTime_ != nullptr && this->streamName_ != nullptr && this->width_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObject Field Functions 
    bool hasOssObject() const { return this->ossObject_ != nullptr;};
    void deleteOssObject() { this->ossObject_ = nullptr;};
    inline string ossObject() const { DARABONBA_PTR_GET_DEFAULT(ossObject_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setOssObject(string ossObject) { DARABONBA_PTR_SET_VALUE(ossObject_, ossObject) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordUrl Field Functions 
    bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
    void deleteRecordUrl() { this->recordUrl_ = nullptr;};
    inline string recordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DescribeLiveStreamRecordIndexFilesResponseBodyRecordIndexInfoListRecordIndexInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the index file was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The recording length. Unit: seconds.
    std::shared_ptr<float> duration_ = nullptr;
    // The end time of the index file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The video format.
    std::shared_ptr<string> format_ = nullptr;
    // The video height.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The endpoint of the OSS bucket.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The name of the storage file in OSS.
    std::shared_ptr<string> ossObject_ = nullptr;
    // The ID of the index file.
    std::shared_ptr<string> recordId_ = nullptr;
    // The URL of the index file.
    std::shared_ptr<string> recordUrl_ = nullptr;
    // The start time of the index file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The video width.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
