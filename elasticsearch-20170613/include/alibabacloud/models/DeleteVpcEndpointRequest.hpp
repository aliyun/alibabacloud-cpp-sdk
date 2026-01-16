// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVPCENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVPCENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DeleteVpcEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVpcEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVpcEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    DeleteVpcEndpointRequest() = default ;
    DeleteVpcEndpointRequest(const DeleteVpcEndpointRequest &) = default ;
    DeleteVpcEndpointRequest(DeleteVpcEndpointRequest &&) = default ;
    DeleteVpcEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVpcEndpointRequest() = default ;
    DeleteVpcEndpointRequest& operator=(const DeleteVpcEndpointRequest &) = default ;
    DeleteVpcEndpointRequest& operator=(DeleteVpcEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteVpcEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
