// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTREQUESTRESOURCEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTREQUESTRESOURCEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
    };
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod() = default ;
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod(const GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod &) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod(GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod() = default ;
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& operator=(const GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod &) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& operator=(GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod &&) = default ;
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
    inline GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


  protected:
    // Renewal duration. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The time unit for the resource renewal duration, which is the unit of the Period parameter. Valid values: Month, Year. Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Resource ARN (Aliyun Resource Name).
    std::shared_ptr<string> resourceArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
