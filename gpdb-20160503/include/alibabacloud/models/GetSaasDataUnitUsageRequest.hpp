// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAASDATAUNITUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAASDATAUNITUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSaasDataUnitUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSaasDataUnitUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetSaasDataUnitUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    GetSaasDataUnitUsageRequest() = default ;
    GetSaasDataUnitUsageRequest(const GetSaasDataUnitUsageRequest &) = default ;
    GetSaasDataUnitUsageRequest(GetSaasDataUnitUsageRequest &&) = default ;
    GetSaasDataUnitUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSaasDataUnitUsageRequest() = default ;
    GetSaasDataUnitUsageRequest& operator=(const GetSaasDataUnitUsageRequest &) = default ;
    GetSaasDataUnitUsageRequest& operator=(GetSaasDataUnitUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->regionId_ == nullptr && this->serviceId_ == nullptr && this->startTime_ == nullptr && this->timeUnit_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetSaasDataUnitUsageRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSaasDataUnitUsageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetSaasDataUnitUsageRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSaasDataUnitUsageRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline GetSaasDataUnitUsageRequest& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // UTC时间，格式yyyy-MM-ddTHH:mm:ssZ，秒必须为00。必须晚于StartTime且不晚于请求时刻，不自动裁剪查询范围。
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> regionId_ {};
    // 未删除的SaaS服务实例ID，不接受普通DBInstanceId替代。
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
    // UTC时间，格式yyyy-MM-ddTHH:mm:ssZ，秒必须为00。不得早于请求时刻前30天；与EndTime组成左闭右开区间，跨度最多7天。
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // 支持hour（UTC小时）或day（UTC日），未传默认hour。仅决定趋势汇总方式，不在响应中回显。
    shared_ptr<string> timeUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
