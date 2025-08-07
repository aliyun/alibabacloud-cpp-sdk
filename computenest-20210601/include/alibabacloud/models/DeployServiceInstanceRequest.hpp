// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class DeployServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    DeployServiceInstanceRequest() = default ;
    DeployServiceInstanceRequest(const DeployServiceInstanceRequest &) = default ;
    DeployServiceInstanceRequest(DeployServiceInstanceRequest &&) = default ;
    DeployServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployServiceInstanceRequest() = default ;
    DeployServiceInstanceRequest& operator=(const DeployServiceInstanceRequest &) = default ;
    DeployServiceInstanceRequest& operator=(DeployServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeployServiceInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeployServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline DeployServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // Ensures idempotency of the request. Generate a unique value for this parameter from your client to ensure it is unique across different requests. ClientToken supports only ASCII characters and cannot exceed 64 characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Region ID. Allowed values:
    // 
    // - cn-hangzhou: East China 1 (Hangzhou).
    // 
    // - ap-southeast-1: Singapore.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Service instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
