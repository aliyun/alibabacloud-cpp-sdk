// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCESUBSCRIPTIONESTIMATECOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceSubscriptionEstimateCostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceSubscriptionEstimateCostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourcePeriod, resourcePeriod_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceSubscriptionEstimateCostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourcePeriod, resourcePeriod_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    GetServiceInstanceSubscriptionEstimateCostRequest() = default ;
    GetServiceInstanceSubscriptionEstimateCostRequest(const GetServiceInstanceSubscriptionEstimateCostRequest &) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequest(GetServiceInstanceSubscriptionEstimateCostRequest &&) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceSubscriptionEstimateCostRequest() = default ;
    GetServiceInstanceSubscriptionEstimateCostRequest& operator=(const GetServiceInstanceSubscriptionEstimateCostRequest &) = default ;
    GetServiceInstanceSubscriptionEstimateCostRequest& operator=(GetServiceInstanceSubscriptionEstimateCostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->orderType_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr && this->regionId_ != nullptr && this->resourcePeriod_ != nullptr
        && this->serviceInstanceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourcePeriod Field Functions 
    bool hasResourcePeriod() const { return this->resourcePeriod_ != nullptr;};
    void deleteResourcePeriod() { this->resourcePeriod_ = nullptr;};
    inline const vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod> & resourcePeriod() const { DARABONBA_PTR_GET_CONST(resourcePeriod_, vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod>) };
    inline vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod> resourcePeriod() { DARABONBA_PTR_GET(resourcePeriod_, vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod>) };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setResourcePeriod(const vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod> & resourcePeriod) { DARABONBA_PTR_SET_VALUE(resourcePeriod_, resourcePeriod) };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setResourcePeriod(vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod> && resourcePeriod) { DARABONBA_PTR_SET_RVALUE(resourcePeriod_, resourcePeriod) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceInstanceSubscriptionEstimateCostRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // Ensures idempotence of the request. Generate a parameter value from your client to ensure its uniqueness across different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Order type. Possible value: Renewal.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
    // The renewal duration for all prepaid resources of the service instance. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The time unit for the renewal duration of all prepaid resources of the service instance, which is the unit of the Period parameter. Valid values: Month, Year. Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource renewal configuration.
    std::shared_ptr<vector<GetServiceInstanceSubscriptionEstimateCostRequestResourcePeriod>> resourcePeriod_ = nullptr;
    // Service instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
