// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHGATEWAYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DetachGatewayDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachGatewayDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachGatewayDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachGatewayDomainResponseBody() = default ;
    DetachGatewayDomainResponseBody(const DetachGatewayDomainResponseBody &) = default ;
    DetachGatewayDomainResponseBody(DetachGatewayDomainResponseBody &&) = default ;
    DetachGatewayDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachGatewayDomainResponseBody() = default ;
    DetachGatewayDomainResponseBody& operator=(const DetachGatewayDomainResponseBody &) = default ;
    DetachGatewayDomainResponseBody& operator=(DetachGatewayDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DetachGatewayDomainResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetachGatewayDomainResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachGatewayDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the private gateway. To obtain the private gateway ID, see the GatewayId parameter in the response parameters of the [ListGateway](https://apiworkbench.aliyun-inc.com/document/eas/2021-07-01/ListGateway?spm=openapi-amp.newDocPublishment.0.0.765e281fL2IcjJ\\&ampEnv=online) operation.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
