// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MarketInstanceId, marketInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    GetServiceInstanceRequest() = default ;
    GetServiceInstanceRequest(const GetServiceInstanceRequest &) = default ;
    GetServiceInstanceRequest(GetServiceInstanceRequest &&) = default ;
    GetServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceRequest() = default ;
    GetServiceInstanceRequest& operator=(const GetServiceInstanceRequest &) = default ;
    GetServiceInstanceRequest& operator=(GetServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->marketInstanceId_ != nullptr
        && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // marketInstanceId Field Functions 
    bool hasMarketInstanceId() const { return this->marketInstanceId_ != nullptr;};
    void deleteMarketInstanceId() { this->marketInstanceId_ = nullptr;};
    inline string marketInstanceId() const { DARABONBA_PTR_GET_DEFAULT(marketInstanceId_, "") };
    inline GetServiceInstanceRequest& setMarketInstanceId(string marketInstanceId) { DARABONBA_PTR_SET_VALUE(marketInstanceId_, marketInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The MarketInstance ID.
    std::shared_ptr<string> marketInstanceId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service instance ID.
    // 
    // >  You must specify either `ServiceInstanceId` or `MarketInstanceId`. Otherwise, the operation fails.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
