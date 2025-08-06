// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTRANSCODEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTranscodeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTranscodeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTranscodeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    DescribeVodTranscodeDataRequest() = default ;
    DescribeVodTranscodeDataRequest(const DescribeVodTranscodeDataRequest &) = default ;
    DescribeVodTranscodeDataRequest(DescribeVodTranscodeDataRequest &&) = default ;
    DescribeVodTranscodeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTranscodeDataRequest() = default ;
    DescribeVodTranscodeDataRequest& operator=(const DescribeVodTranscodeDataRequest &) = default ;
    DescribeVodTranscodeDataRequest& operator=(DescribeVodTranscodeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->ownerId_ != nullptr && this->region_ != nullptr && this->specification_ != nullptr
        && this->startTime_ != nullptr && this->storage_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeVodTranscodeDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodTranscodeDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodTranscodeDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodTranscodeDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodTranscodeDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline DescribeVodTranscodeDataRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodTranscodeDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline string storage() const { DARABONBA_PTR_GET_DEFAULT(storage_, "") };
    inline DescribeVodTranscodeDataRequest& setStorage(string storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


  protected:
    // The ID of the application. You can specify this parameter to query the transcoding statistics of a specific application. By default, the transcoding statistics of all applications is returned. You can obtain the application ID from the `AppId` parameter in the response to the [CreateAppInfo](~~CreateAppInfo~~) operation.
    std::shared_ptr<string> appId_ = nullptr;
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The interval at which you want to query data. Valid values:
    // 
    // *   **day**: days
    // *   **hour**: hours
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region in which you want to query data. If you leave this parameter empty, data in all regions is returned. Separate multiple regions with commas (,). Valid values:
    // 
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-beijing**: China (Beijing)
    // *   **eu-central-1**: Germany (Frankfurt)
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> region_ = nullptr;
    // The transcoding specification. If you leave this parameter empty, data of all transcoding specifications is returned. Separate multiple transcoding specifications with commas (,). Valid values:
    // 
    // *   **Audio**: audio transcoding
    // *   **Segmentation**: container format conversion
    // *   **H264.LD**, **H264.SD**, **H264.HD**, **H264.2K**, **H264.4K**, and more
    std::shared_ptr<string> specification_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket. If you leave this parameter empty, data of all buckets is returned. Separate multiple bucket names with commas (,).
    std::shared_ptr<string> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
