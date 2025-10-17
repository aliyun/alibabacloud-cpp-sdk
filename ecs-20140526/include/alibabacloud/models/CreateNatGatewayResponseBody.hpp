// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNatGatewayResponseBodyBandwidthPackageIds.hpp>
#include <alibabacloud/models/CreateNatGatewayResponseBodyForwardTableIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNatGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageIds, bandwidthPackageIds_);
      DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageIds, bandwidthPackageIds_);
      DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
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
    virtual bool empty() const override { return this->bandwidthPackageIds_ == nullptr
        && return this->forwardTableIds_ == nullptr && return this->natGatewayId_ == nullptr && return this->requestId_ == nullptr; };
    // bandwidthPackageIds Field Functions 
    bool hasBandwidthPackageIds() const { return this->bandwidthPackageIds_ != nullptr;};
    void deleteBandwidthPackageIds() { this->bandwidthPackageIds_ = nullptr;};
    inline const CreateNatGatewayResponseBodyBandwidthPackageIds & bandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(bandwidthPackageIds_, CreateNatGatewayResponseBodyBandwidthPackageIds) };
    inline CreateNatGatewayResponseBodyBandwidthPackageIds bandwidthPackageIds() { DARABONBA_PTR_GET(bandwidthPackageIds_, CreateNatGatewayResponseBodyBandwidthPackageIds) };
    inline CreateNatGatewayResponseBody& setBandwidthPackageIds(const CreateNatGatewayResponseBodyBandwidthPackageIds & bandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(bandwidthPackageIds_, bandwidthPackageIds) };
    inline CreateNatGatewayResponseBody& setBandwidthPackageIds(CreateNatGatewayResponseBodyBandwidthPackageIds && bandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageIds_, bandwidthPackageIds) };


    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBodyForwardTableIds & forwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, CreateNatGatewayResponseBodyForwardTableIds) };
    inline CreateNatGatewayResponseBodyForwardTableIds forwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, CreateNatGatewayResponseBodyForwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(const CreateNatGatewayResponseBodyForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(CreateNatGatewayResponseBodyForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


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


  protected:
    std::shared_ptr<CreateNatGatewayResponseBodyBandwidthPackageIds> bandwidthPackageIds_ = nullptr;
    std::shared_ptr<CreateNatGatewayResponseBodyForwardTableIds> forwardTableIds_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
