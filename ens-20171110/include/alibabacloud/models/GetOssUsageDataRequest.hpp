// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetOssUsageDataRequest() = default ;
    GetOssUsageDataRequest(const GetOssUsageDataRequest &) = default ;
    GetOssUsageDataRequest(GetOssUsageDataRequest &&) = default ;
    GetOssUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUsageDataRequest() = default ;
    GetOssUsageDataRequest& operator=(const GetOssUsageDataRequest &) = default ;
    GetOssUsageDataRequest& operator=(GetOssUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && return this->endTime_ == nullptr && return this->period_ == nullptr && return this->startTime_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline GetOssUsageDataRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetOssUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline GetOssUsageDataRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetOssUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the logical Object Storage Service (OSS) bucket.
    std::shared_ptr<string> bucket_ = nullptr;
    // The end of the time range to query. The time must be in UTC. Format: 2010-01-21T09:50:23Z.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The aggregation granularity. Unit: minutes.
    // 
    // Default value: 5. Valid values: 5 to 1440.
    std::shared_ptr<string> period_ = nullptr;
    // The beginning of the time range to query. The time must be in UTC. Format: 2010-01-21T09:50:23Z.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
