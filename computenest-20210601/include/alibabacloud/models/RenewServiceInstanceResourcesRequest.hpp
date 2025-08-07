// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RenewServiceInstanceResourcesRequestResourcePeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class RenewServiceInstanceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourcePeriod, resourcePeriod_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourcePeriod, resourcePeriod_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    RenewServiceInstanceResourcesRequest() = default ;
    RenewServiceInstanceResourcesRequest(const RenewServiceInstanceResourcesRequest &) = default ;
    RenewServiceInstanceResourcesRequest(RenewServiceInstanceResourcesRequest &&) = default ;
    RenewServiceInstanceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewServiceInstanceResourcesRequest() = default ;
    RenewServiceInstanceResourcesRequest& operator=(const RenewServiceInstanceResourcesRequest &) = default ;
    RenewServiceInstanceResourcesRequest& operator=(RenewServiceInstanceResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->period_ != nullptr && this->periodUnit_ != nullptr && this->regionId_ != nullptr && this->resourcePeriod_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewServiceInstanceResourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewServiceInstanceResourcesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewServiceInstanceResourcesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RenewServiceInstanceResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourcePeriod Field Functions 
    bool hasResourcePeriod() const { return this->resourcePeriod_ != nullptr;};
    void deleteResourcePeriod() { this->resourcePeriod_ = nullptr;};
    inline const vector<RenewServiceInstanceResourcesRequestResourcePeriod> & resourcePeriod() const { DARABONBA_PTR_GET_CONST(resourcePeriod_, vector<RenewServiceInstanceResourcesRequestResourcePeriod>) };
    inline vector<RenewServiceInstanceResourcesRequestResourcePeriod> resourcePeriod() { DARABONBA_PTR_GET(resourcePeriod_, vector<RenewServiceInstanceResourcesRequestResourcePeriod>) };
    inline RenewServiceInstanceResourcesRequest& setResourcePeriod(const vector<RenewServiceInstanceResourcesRequestResourcePeriod> & resourcePeriod) { DARABONBA_PTR_SET_VALUE(resourcePeriod_, resourcePeriod) };
    inline RenewServiceInstanceResourcesRequest& setResourcePeriod(vector<RenewServiceInstanceResourcesRequestResourcePeriod> && resourcePeriod) { DARABONBA_PTR_SET_RVALUE(resourcePeriod_, resourcePeriod) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline RenewServiceInstanceResourcesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The renewal duration for all prepaid resources in the service instance. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The time unit for the renewal duration of all prepaid resources in the service instance, which is the unit for the Period parameter. Valid values: Month, Year. Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // List of resource renewals.
    std::shared_ptr<vector<RenewServiceInstanceResourcesRequestResourcePeriod>> resourcePeriod_ = nullptr;
    // Service instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
