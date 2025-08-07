// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUESTRESOURCEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUESTRESOURCEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class RenewServiceInstanceResourcesRequestResourcePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewServiceInstanceResourcesRequestResourcePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, RenewServiceInstanceResourcesRequestResourcePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
    };
    RenewServiceInstanceResourcesRequestResourcePeriod() = default ;
    RenewServiceInstanceResourcesRequestResourcePeriod(const RenewServiceInstanceResourcesRequestResourcePeriod &) = default ;
    RenewServiceInstanceResourcesRequestResourcePeriod(RenewServiceInstanceResourcesRequestResourcePeriod &&) = default ;
    RenewServiceInstanceResourcesRequestResourcePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewServiceInstanceResourcesRequestResourcePeriod() = default ;
    RenewServiceInstanceResourcesRequestResourcePeriod& operator=(const RenewServiceInstanceResourcesRequestResourcePeriod &) = default ;
    RenewServiceInstanceResourcesRequestResourcePeriod& operator=(RenewServiceInstanceResourcesRequestResourcePeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->resourceArn_ != nullptr; };
    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewServiceInstanceResourcesRequestResourcePeriod& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewServiceInstanceResourcesRequestResourcePeriod& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline RenewServiceInstanceResourcesRequestResourcePeriod& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


  protected:
    // The renewal duration for the resource. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The time unit for the renewal duration of the resource, which is the unit for the Period parameter. Valid values: Month, Year. Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Resource ARN (Aliyun Resource Name).
    std::shared_ptr<string> resourceArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
