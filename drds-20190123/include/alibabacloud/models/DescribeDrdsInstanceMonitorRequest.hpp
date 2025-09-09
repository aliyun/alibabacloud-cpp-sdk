// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCEMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(PeriodMultiple, periodMultiple_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(PeriodMultiple, periodMultiple_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDrdsInstanceMonitorRequest() = default ;
    DescribeDrdsInstanceMonitorRequest(const DescribeDrdsInstanceMonitorRequest &) = default ;
    DescribeDrdsInstanceMonitorRequest(DescribeDrdsInstanceMonitorRequest &&) = default ;
    DescribeDrdsInstanceMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceMonitorRequest() = default ;
    DescribeDrdsInstanceMonitorRequest& operator=(const DescribeDrdsInstanceMonitorRequest &) = default ;
    DescribeDrdsInstanceMonitorRequest& operator=(DescribeDrdsInstanceMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->drdsInstanceId_ != nullptr
        && this->endTime_ != nullptr && this->key_ != nullptr && this->periodMultiple_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsInstanceMonitorRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDrdsInstanceMonitorRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeDrdsInstanceMonitorRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // periodMultiple Field Functions 
    bool hasPeriodMultiple() const { return this->periodMultiple_ != nullptr;};
    void deletePeriodMultiple() { this->periodMultiple_ = nullptr;};
    inline int32_t periodMultiple() const { DARABONBA_PTR_GET_DEFAULT(periodMultiple_, 0) };
    inline DescribeDrdsInstanceMonitorRequest& setPeriodMultiple(int32_t periodMultiple) { DARABONBA_PTR_SET_VALUE(periodMultiple_, periodMultiple) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrdsInstanceMonitorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDrdsInstanceMonitorRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The end time of the query. Specify the value in the UNIX timestamp format. The timestamp must be in UTC. Unit: ms.
    // 
    // >  If the time range that you specify is less than 1 hour, the monitoring data that is collected in a 1-hour period before the end time is returned.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The performance monitoring metrics. You can specify one or more metrics. Separate multiple metric names with commas (,).
    // 
    // >  For more information about performance monitoring metrics, see [Monitor instances](https://help.aliyun.com/document_detail/186703.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> key_ = nullptr;
    // The multiple of the default time interval that you want to use to collect monitoring data. By default, the system collects monitoring data of resources at an interval of 1 minute. If you set the value of this parameter to 2, the system collects monitoring data of the instance at an interval of 2 minutes.
    std::shared_ptr<int32_t> periodMultiple_ = nullptr;
    // The ID of the region where the instance is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start time of the query. Specify the value in the UNIX timestamp format. The timestamp must be in UTC. Unit: ms.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
