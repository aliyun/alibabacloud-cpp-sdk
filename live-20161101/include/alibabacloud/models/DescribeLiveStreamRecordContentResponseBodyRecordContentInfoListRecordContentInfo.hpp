// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODYRECORDCONTENTINFOLISTRECORDCONTENTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMRECORDCONTENTRESPONSEBODYRECORDCONTENTINFOLISTRECORDCONTENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo() = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo(const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo &) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo(DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo &&) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo() = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& operator=(const DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo &) = default ;
    DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& operator=(DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->endTime_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->ossObjectPrefix_ == nullptr && return this->startTime_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamRecordContentResponseBodyRecordContentInfoListRecordContentInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The beginning of the time range for which the recordings were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<float> duration_ = nullptr;
    // The recordings.
    std::shared_ptr<string> endTime_ = nullptr;
    // The recording length. Unit: seconds.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The naming rule of recordings in OSS.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The end of the time range for which the recordings were queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
