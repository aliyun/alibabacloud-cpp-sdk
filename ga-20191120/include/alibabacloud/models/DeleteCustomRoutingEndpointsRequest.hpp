// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMROUTINGENDPOINTSREQUEST_HPP_
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
  class DeleteCustomRoutingEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomRoutingEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointIds, endpointIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCustomRoutingEndpointsRequest() = default ;
    DeleteCustomRoutingEndpointsRequest(const DeleteCustomRoutingEndpointsRequest &) = default ;
    DeleteCustomRoutingEndpointsRequest(DeleteCustomRoutingEndpointsRequest &&) = default ;
    DeleteCustomRoutingEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomRoutingEndpointsRequest() = default ;
    DeleteCustomRoutingEndpointsRequest& operator=(const DeleteCustomRoutingEndpointsRequest &) = default ;
    DeleteCustomRoutingEndpointsRequest& operator=(DeleteCustomRoutingEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointGroupId_ == nullptr && this->endpointIds_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteCustomRoutingEndpointsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DeleteCustomRoutingEndpointsRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


    // endpointIds Field Functions 
    bool hasEndpointIds() const { return this->endpointIds_ != nullptr;};
    void deleteEndpointIds() { this->endpointIds_ = nullptr;};
    inline const vector<string> & getEndpointIds() const { DARABONBA_PTR_GET_CONST(endpointIds_, vector<string>) };
    inline vector<string> getEndpointIds() { DARABONBA_PTR_GET(endpointIds_, vector<string>) };
    inline DeleteCustomRoutingEndpointsRequest& setEndpointIds(const vector<string> & endpointIds) { DARABONBA_PTR_SET_VALUE(endpointIds_, endpointIds) };
    inline DeleteCustomRoutingEndpointsRequest& setEndpointIds(vector<string> && endpointIds) { DARABONBA_PTR_SET_RVALUE(endpointIds_, endpointIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCustomRoutingEndpointsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among all requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the endpoint group to which the endpoint that you want to delete belongs.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
    // The IDs of endpoints to be deleted.
    // 
    // If you do not set this parameter, all the endpoints in the specified endpoint group are deleted.
    // 
    // You can specify at most 10 endpoint IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> endpointIds_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
