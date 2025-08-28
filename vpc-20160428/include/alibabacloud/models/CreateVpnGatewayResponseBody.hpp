// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    CreateVpnGatewayResponseBody() = default ;
    CreateVpnGatewayResponseBody(const CreateVpnGatewayResponseBody &) = default ;
    CreateVpnGatewayResponseBody(CreateVpnGatewayResponseBody &&) = default ;
    CreateVpnGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnGatewayResponseBody() = default ;
    CreateVpnGatewayResponseBody& operator=(const CreateVpnGatewayResponseBody &) = default ;
    CreateVpnGatewayResponseBody& operator=(CreateVpnGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->orderId_ != nullptr && this->requestId_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVpnGatewayResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateVpnGatewayResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpnGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateVpnGatewayResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The name of the VPN gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The order ID.
    // 
    // If automatic payment is disabled, you must manually complete the payment for the VPN gateway in the [Alibaba Cloud Management console](https://usercenter2-intl.aliyun.com/billing/#/account/overview).
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
