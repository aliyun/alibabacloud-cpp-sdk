// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ForwardTableIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardTableIds& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardTableIds& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      };
      ForwardTableIds() = default ;
      ForwardTableIds(const ForwardTableIds &) = default ;
      ForwardTableIds(ForwardTableIds &&) = default ;
      ForwardTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardTableIds() = default ;
      ForwardTableIds& operator=(const ForwardTableIds &) = default ;
      ForwardTableIds& operator=(ForwardTableIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->forwardTableId_ == nullptr; };
      // forwardTableId Field Functions 
      bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
      void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
      inline const vector<string> & getForwardTableId() const { DARABONBA_PTR_GET_CONST(forwardTableId_, vector<string>) };
      inline vector<string> getForwardTableId() { DARABONBA_PTR_GET(forwardTableId_, vector<string>) };
      inline ForwardTableIds& setForwardTableId(const vector<string> & forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };
      inline ForwardTableIds& setForwardTableId(vector<string> && forwardTableId) { DARABONBA_PTR_SET_RVALUE(forwardTableId_, forwardTableId) };


    protected:
      shared_ptr<vector<string>> forwardTableId_ {};
    };

    class BandwidthPackageIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BandwidthPackageIds& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      };
      friend void from_json(const Darabonba::Json& j, BandwidthPackageIds& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      };
      BandwidthPackageIds() = default ;
      BandwidthPackageIds(const BandwidthPackageIds &) = default ;
      BandwidthPackageIds(BandwidthPackageIds &&) = default ;
      BandwidthPackageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BandwidthPackageIds() = default ;
      BandwidthPackageIds& operator=(const BandwidthPackageIds &) = default ;
      BandwidthPackageIds& operator=(BandwidthPackageIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr; };
      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline const vector<string> & getBandwidthPackageId() const { DARABONBA_PTR_GET_CONST(bandwidthPackageId_, vector<string>) };
      inline vector<string> getBandwidthPackageId() { DARABONBA_PTR_GET(bandwidthPackageId_, vector<string>) };
      inline BandwidthPackageIds& setBandwidthPackageId(const vector<string> & bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };
      inline BandwidthPackageIds& setBandwidthPackageId(vector<string> && bandwidthPackageId) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageId_, bandwidthPackageId) };


    protected:
      shared_ptr<vector<string>> bandwidthPackageId_ {};
    };

    virtual bool empty() const override { return this->bandwidthPackageIds_ == nullptr
        && this->forwardTableIds_ == nullptr && this->natGatewayId_ == nullptr && this->requestId_ == nullptr; };
    // bandwidthPackageIds Field Functions 
    bool hasBandwidthPackageIds() const { return this->bandwidthPackageIds_ != nullptr;};
    void deleteBandwidthPackageIds() { this->bandwidthPackageIds_ = nullptr;};
    inline const CreateNatGatewayResponseBody::BandwidthPackageIds & getBandwidthPackageIds() const { DARABONBA_PTR_GET_CONST(bandwidthPackageIds_, CreateNatGatewayResponseBody::BandwidthPackageIds) };
    inline CreateNatGatewayResponseBody::BandwidthPackageIds getBandwidthPackageIds() { DARABONBA_PTR_GET(bandwidthPackageIds_, CreateNatGatewayResponseBody::BandwidthPackageIds) };
    inline CreateNatGatewayResponseBody& setBandwidthPackageIds(const CreateNatGatewayResponseBody::BandwidthPackageIds & bandwidthPackageIds) { DARABONBA_PTR_SET_VALUE(bandwidthPackageIds_, bandwidthPackageIds) };
    inline CreateNatGatewayResponseBody& setBandwidthPackageIds(CreateNatGatewayResponseBody::BandwidthPackageIds && bandwidthPackageIds) { DARABONBA_PTR_SET_RVALUE(bandwidthPackageIds_, bandwidthPackageIds) };


    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBody::ForwardTableIds & getForwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, CreateNatGatewayResponseBody::ForwardTableIds) };
    inline CreateNatGatewayResponseBody::ForwardTableIds getForwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, CreateNatGatewayResponseBody::ForwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(const CreateNatGatewayResponseBody::ForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(CreateNatGatewayResponseBody::ForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


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
    shared_ptr<CreateNatGatewayResponseBody::BandwidthPackageIds> bandwidthPackageIds_ {};
    shared_ptr<CreateNatGatewayResponseBody::ForwardTableIds> forwardTableIds_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
