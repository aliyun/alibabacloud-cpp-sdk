// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTTRAFFICPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTTRAFFICPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteCustomRoutingEndpointTrafficPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomRoutingEndpointTrafficPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomRoutingEndpointTrafficPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCustomRoutingEndpointTrafficPoliciesRequest() = default ;
    DeleteCustomRoutingEndpointTrafficPoliciesRequest(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &) = default ;
    DeleteCustomRoutingEndpointTrafficPoliciesRequest(DeleteCustomRoutingEndpointTrafficPoliciesRequest &&) = default ;
    DeleteCustomRoutingEndpointTrafficPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomRoutingEndpointTrafficPoliciesRequest() = default ;
    DeleteCustomRoutingEndpointTrafficPoliciesRequest& operator=(const DeleteCustomRoutingEndpointTrafficPoliciesRequest &) = default ;
    DeleteCustomRoutingEndpointTrafficPoliciesRequest& operator=(DeleteCustomRoutingEndpointTrafficPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointId_ == nullptr && this->policyIds_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteCustomRoutingEndpointTrafficPoliciesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DeleteCustomRoutingEndpointTrafficPoliciesRequest& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline DeleteCustomRoutingEndpointTrafficPoliciesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline DeleteCustomRoutingEndpointTrafficPoliciesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomRoutingEndpointTrafficPoliciesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the endpoint for which you want to delete traffic destinations.
    // 
    // >  This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> endpointId_ {};
    // The IDs of the traffic destinations.
    // 
    // You can specify the IDs of up to 9,000 traffic destinations.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> policyIds_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
