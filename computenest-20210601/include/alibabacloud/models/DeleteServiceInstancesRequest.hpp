// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESERVICEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESERVICEINSTANCESREQUEST_HPP_
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
  class DeleteServiceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteServiceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteServiceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    DeleteServiceInstancesRequest() = default ;
    DeleteServiceInstancesRequest(const DeleteServiceInstancesRequest &) = default ;
    DeleteServiceInstancesRequest(DeleteServiceInstancesRequest &&) = default ;
    DeleteServiceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteServiceInstancesRequest() = default ;
    DeleteServiceInstancesRequest& operator=(const DeleteServiceInstancesRequest &) = default ;
    DeleteServiceInstancesRequest& operator=(DeleteServiceInstancesRequest &&) = default ;
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
    inline DeleteServiceInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteServiceInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline const vector<string> & serviceInstanceId() const { DARABONBA_PTR_GET_CONST(serviceInstanceId_, vector<string>) };
    inline vector<string> serviceInstanceId() { DARABONBA_PTR_GET(serviceInstanceId_, vector<string>) };
    inline DeleteServiceInstancesRequest& setServiceInstanceId(const vector<string> & serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };
    inline DeleteServiceInstancesRequest& setServiceInstanceId(vector<string> && serviceInstanceId) { DARABONBA_PTR_SET_RVALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the service instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
