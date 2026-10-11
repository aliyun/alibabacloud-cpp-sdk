// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class CreateEgressProxyGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEgressProxyGatewayResponseBody() = default ;
    CreateEgressProxyGatewayResponseBody(const CreateEgressProxyGatewayResponseBody &) = default ;
    CreateEgressProxyGatewayResponseBody(CreateEgressProxyGatewayResponseBody &&) = default ;
    CreateEgressProxyGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyGatewayResponseBody() = default ;
    CreateEgressProxyGatewayResponseBody& operator=(const CreateEgressProxyGatewayResponseBody &) = default ;
    CreateEgressProxyGatewayResponseBody& operator=(CreateEgressProxyGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressProxyGatewayId_ == nullptr
        && this->requestId_ == nullptr; };
    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline CreateEgressProxyGatewayResponseBody& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEgressProxyGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the egress proxy gateway instance.
    shared_ptr<string> egressProxyGatewayId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
