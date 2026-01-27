// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKMONITORDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskMonitorDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskMonitorDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskMonitorDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDiskMonitorDataRequest() = default ;
    DescribeDiskMonitorDataRequest(const DescribeDiskMonitorDataRequest &) = default ;
    DescribeDiskMonitorDataRequest(DescribeDiskMonitorDataRequest &&) = default ;
    DescribeDiskMonitorDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskMonitorDataRequest() = default ;
    DescribeDiskMonitorDataRequest& operator=(const DescribeDiskMonitorDataRequest &) = default ;
    DescribeDiskMonitorDataRequest& operator=(DescribeDiskMonitorDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && this->endTime_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDiskMonitorDataRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiskMonitorDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline DescribeDiskMonitorDataRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiskMonitorDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiskMonitorDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDiskMonitorDataRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the disk.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // The end of the time range during which you want to query the near real-time monitoring data of the disk. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The interval at which the near real-time monitoring data is collected. Unit: seconds. Valid values:
    // 
    // *   5
    // *   60
    // 
    // Default value: 5.
    shared_ptr<int64_t> period_ {};
    // The region ID of the disk.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The beginning of the time range during which you want to query the near real-time monitoring data of the disk. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The type of the monitoring data. Valid values:
    // 
    // *   basic: baseline performance data.
    // *   pro: burst performance data, such as burst I/O operations.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
