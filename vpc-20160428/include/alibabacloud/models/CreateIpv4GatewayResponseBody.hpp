// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPV4GATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPV4GATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIpv4GatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpv4GatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpv4GatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateIpv4GatewayResponseBody() = default ;
    CreateIpv4GatewayResponseBody(const CreateIpv4GatewayResponseBody &) = default ;
    CreateIpv4GatewayResponseBody(CreateIpv4GatewayResponseBody &&) = default ;
    CreateIpv4GatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpv4GatewayResponseBody() = default ;
    CreateIpv4GatewayResponseBody& operator=(const CreateIpv4GatewayResponseBody &) = default ;
    CreateIpv4GatewayResponseBody& operator=(CreateIpv4GatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4GatewayId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string getIpv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline CreateIpv4GatewayResponseBody& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpv4GatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIpv4GatewayResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the IPv4 gateway.
    shared_ptr<string> ipv4GatewayId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
