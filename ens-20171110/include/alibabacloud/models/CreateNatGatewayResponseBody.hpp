// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNatGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNatGatewayResponseBody() = default ;
    CreateNatGatewayResponseBody(const CreateNatGatewayResponseBody &) = default ;
    CreateNatGatewayResponseBody(CreateNatGatewayResponseBody &&) = default ;
    CreateNatGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatGatewayResponseBody() = default ;
    CreateNatGatewayResponseBody& operator=(const CreateNatGatewayResponseBody &) = default ;
    CreateNatGatewayResponseBody& operator=(CreateNatGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natGatewayId_ == nullptr
        && this->requestId_ == nullptr; };
    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateNatGatewayResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
