// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ResourcePeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePeriod& obj) { 
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      };
      ResourcePeriod() = default ;
      ResourcePeriod(const ResourcePeriod &) = default ;
      ResourcePeriod(ResourcePeriod &&) = default ;
      ResourcePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePeriod() = default ;
      ResourcePeriod& operator=(const ResourcePeriod &) = default ;
      ResourcePeriod& operator=(ResourcePeriod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->resourceArn_ == nullptr; };
      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline ResourcePeriod& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline ResourcePeriod& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline ResourcePeriod& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    protected:
      // The renewal duration for the resource. The unit is specified by PeriodUnit.
      shared_ptr<int32_t> period_ {};
      // The time unit for the renewal duration of the resource, which is the unit for the Period parameter. Valid values: Month, Year. Default value: Month.
      shared_ptr<string> periodUnit_ {};
      // Resource ARN (Aliyun Resource Name).
      shared_ptr<string> resourceArn_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr && this->resourcePeriod_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewServiceInstanceResourcesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewServiceInstanceResourcesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewServiceInstanceResourcesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RenewServiceInstanceResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourcePeriod Field Functions 
    bool hasResourcePeriod() const { return this->resourcePeriod_ != nullptr;};
    void deleteResourcePeriod() { this->resourcePeriod_ = nullptr;};
    inline const vector<RenewServiceInstanceResourcesRequest::ResourcePeriod> & getResourcePeriod() const { DARABONBA_PTR_GET_CONST(resourcePeriod_, vector<RenewServiceInstanceResourcesRequest::ResourcePeriod>) };
    inline vector<RenewServiceInstanceResourcesRequest::ResourcePeriod> getResourcePeriod() { DARABONBA_PTR_GET(resourcePeriod_, vector<RenewServiceInstanceResourcesRequest::ResourcePeriod>) };
    inline RenewServiceInstanceResourcesRequest& setResourcePeriod(const vector<RenewServiceInstanceResourcesRequest::ResourcePeriod> & resourcePeriod) { DARABONBA_PTR_SET_VALUE(resourcePeriod_, resourcePeriod) };
    inline RenewServiceInstanceResourcesRequest& setResourcePeriod(vector<RenewServiceInstanceResourcesRequest::ResourcePeriod> && resourcePeriod) { DARABONBA_PTR_SET_RVALUE(resourcePeriod_, resourcePeriod) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline RenewServiceInstanceResourcesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The renewal duration for all prepaid resources in the service instance. The unit is specified by PeriodUnit.
    shared_ptr<int32_t> period_ {};
    // The time unit for the renewal duration of all prepaid resources in the service instance, which is the unit for the Period parameter. Valid values: Month, Year. Default value: Month.
    shared_ptr<string> periodUnit_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // List of resource renewals.
    shared_ptr<vector<RenewServiceInstanceResourcesRequest::ResourcePeriod>> resourcePeriod_ {};
    // Service instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
