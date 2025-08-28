// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNatGatewayResponseBodyForwardTableIds.hpp>
#include <alibabacloud/models/CreateNatGatewayResponseBodyFullNatTableIds.hpp>
#include <alibabacloud/models/CreateNatGatewayResponseBodySnatTableIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_TO_JSON(FullNatTableIds, fullNatTableIds_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatTableIds, snatTableIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_FROM_JSON(FullNatTableIds, fullNatTableIds_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatTableIds, snatTableIds_);
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
    virtual bool empty() const override { this->forwardTableIds_ != nullptr
        && this->fullNatTableIds_ != nullptr && this->natGatewayId_ != nullptr && this->requestId_ != nullptr && this->snatTableIds_ != nullptr; };
    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBodyForwardTableIds & forwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, CreateNatGatewayResponseBodyForwardTableIds) };
    inline CreateNatGatewayResponseBodyForwardTableIds forwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, CreateNatGatewayResponseBodyForwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(const CreateNatGatewayResponseBodyForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(CreateNatGatewayResponseBodyForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


    // fullNatTableIds Field Functions 
    bool hasFullNatTableIds() const { return this->fullNatTableIds_ != nullptr;};
    void deleteFullNatTableIds() { this->fullNatTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBodyFullNatTableIds & fullNatTableIds() const { DARABONBA_PTR_GET_CONST(fullNatTableIds_, CreateNatGatewayResponseBodyFullNatTableIds) };
    inline CreateNatGatewayResponseBodyFullNatTableIds fullNatTableIds() { DARABONBA_PTR_GET(fullNatTableIds_, CreateNatGatewayResponseBodyFullNatTableIds) };
    inline CreateNatGatewayResponseBody& setFullNatTableIds(const CreateNatGatewayResponseBodyFullNatTableIds & fullNatTableIds) { DARABONBA_PTR_SET_VALUE(fullNatTableIds_, fullNatTableIds) };
    inline CreateNatGatewayResponseBody& setFullNatTableIds(CreateNatGatewayResponseBodyFullNatTableIds && fullNatTableIds) { DARABONBA_PTR_SET_RVALUE(fullNatTableIds_, fullNatTableIds) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateNatGatewayResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatTableIds Field Functions 
    bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
    void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBodySnatTableIds & snatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, CreateNatGatewayResponseBodySnatTableIds) };
    inline CreateNatGatewayResponseBodySnatTableIds snatTableIds() { DARABONBA_PTR_GET(snatTableIds_, CreateNatGatewayResponseBodySnatTableIds) };
    inline CreateNatGatewayResponseBody& setSnatTableIds(const CreateNatGatewayResponseBodySnatTableIds & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
    inline CreateNatGatewayResponseBody& setSnatTableIds(CreateNatGatewayResponseBodySnatTableIds && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


  protected:
    // A list of DNAT entries.
    std::shared_ptr<CreateNatGatewayResponseBodyForwardTableIds> forwardTableIds_ = nullptr;
    // A list of FULLNAT entries.
    std::shared_ptr<CreateNatGatewayResponseBodyFullNatTableIds> fullNatTableIds_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of SNAT entries.
    std::shared_ptr<CreateNatGatewayResponseBodySnatTableIds> snatTableIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
