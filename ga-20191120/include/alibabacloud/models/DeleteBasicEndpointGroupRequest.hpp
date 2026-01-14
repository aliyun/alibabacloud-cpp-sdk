// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBASICENDPOINTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBASICENDPOINTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteBasicEndpointGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBasicEndpointGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBasicEndpointGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
    };
    DeleteBasicEndpointGroupRequest() = default ;
    DeleteBasicEndpointGroupRequest(const DeleteBasicEndpointGroupRequest &) = default ;
    DeleteBasicEndpointGroupRequest(DeleteBasicEndpointGroupRequest &&) = default ;
    DeleteBasicEndpointGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBasicEndpointGroupRequest() = default ;
    DeleteBasicEndpointGroupRequest& operator=(const DeleteBasicEndpointGroupRequest &) = default ;
    DeleteBasicEndpointGroupRequest& operator=(DeleteBasicEndpointGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->endpointGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteBasicEndpointGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endpointGroupId Field Functions 
    bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
    void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
    inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
    inline DeleteBasicEndpointGroupRequest& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The ID of the endpoint group that is associated with the basic GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> endpointGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
