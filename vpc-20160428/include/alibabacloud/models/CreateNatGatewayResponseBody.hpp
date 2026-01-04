// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SnatTableIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnatTableIds& obj) { 
        DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
      };
      friend void from_json(const Darabonba::Json& j, SnatTableIds& obj) { 
        DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
      };
      SnatTableIds() = default ;
      SnatTableIds(const SnatTableIds &) = default ;
      SnatTableIds(SnatTableIds &&) = default ;
      SnatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnatTableIds() = default ;
      SnatTableIds& operator=(const SnatTableIds &) = default ;
      SnatTableIds& operator=(SnatTableIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->snatTableId_ == nullptr; };
      // snatTableId Field Functions 
      bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
      void deleteSnatTableId() { this->snatTableId_ = nullptr;};
      inline const vector<string> & getSnatTableId() const { DARABONBA_PTR_GET_CONST(snatTableId_, vector<string>) };
      inline vector<string> getSnatTableId() { DARABONBA_PTR_GET(snatTableId_, vector<string>) };
      inline SnatTableIds& setSnatTableId(const vector<string> & snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };
      inline SnatTableIds& setSnatTableId(vector<string> && snatTableId) { DARABONBA_PTR_SET_RVALUE(snatTableId_, snatTableId) };


    protected:
      shared_ptr<vector<string>> snatTableId_ {};
    };

    class FullNatTableIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FullNatTableIds& obj) { 
        DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
      };
      friend void from_json(const Darabonba::Json& j, FullNatTableIds& obj) { 
        DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
      };
      FullNatTableIds() = default ;
      FullNatTableIds(const FullNatTableIds &) = default ;
      FullNatTableIds(FullNatTableIds &&) = default ;
      FullNatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FullNatTableIds() = default ;
      FullNatTableIds& operator=(const FullNatTableIds &) = default ;
      FullNatTableIds& operator=(FullNatTableIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fullNatTableId_ == nullptr; };
      // fullNatTableId Field Functions 
      bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
      void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
      inline const vector<string> & getFullNatTableId() const { DARABONBA_PTR_GET_CONST(fullNatTableId_, vector<string>) };
      inline vector<string> getFullNatTableId() { DARABONBA_PTR_GET(fullNatTableId_, vector<string>) };
      inline FullNatTableIds& setFullNatTableId(const vector<string> & fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };
      inline FullNatTableIds& setFullNatTableId(vector<string> && fullNatTableId) { DARABONBA_PTR_SET_RVALUE(fullNatTableId_, fullNatTableId) };


    protected:
      shared_ptr<vector<string>> fullNatTableId_ {};
    };

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

    virtual bool empty() const override { return this->forwardTableIds_ == nullptr
        && this->fullNatTableIds_ == nullptr && this->natGatewayId_ == nullptr && this->requestId_ == nullptr && this->snatTableIds_ == nullptr; };
    // forwardTableIds Field Functions 
    bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
    void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBody::ForwardTableIds & getForwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, CreateNatGatewayResponseBody::ForwardTableIds) };
    inline CreateNatGatewayResponseBody::ForwardTableIds getForwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, CreateNatGatewayResponseBody::ForwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(const CreateNatGatewayResponseBody::ForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
    inline CreateNatGatewayResponseBody& setForwardTableIds(CreateNatGatewayResponseBody::ForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


    // fullNatTableIds Field Functions 
    bool hasFullNatTableIds() const { return this->fullNatTableIds_ != nullptr;};
    void deleteFullNatTableIds() { this->fullNatTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBody::FullNatTableIds & getFullNatTableIds() const { DARABONBA_PTR_GET_CONST(fullNatTableIds_, CreateNatGatewayResponseBody::FullNatTableIds) };
    inline CreateNatGatewayResponseBody::FullNatTableIds getFullNatTableIds() { DARABONBA_PTR_GET(fullNatTableIds_, CreateNatGatewayResponseBody::FullNatTableIds) };
    inline CreateNatGatewayResponseBody& setFullNatTableIds(const CreateNatGatewayResponseBody::FullNatTableIds & fullNatTableIds) { DARABONBA_PTR_SET_VALUE(fullNatTableIds_, fullNatTableIds) };
    inline CreateNatGatewayResponseBody& setFullNatTableIds(CreateNatGatewayResponseBody::FullNatTableIds && fullNatTableIds) { DARABONBA_PTR_SET_RVALUE(fullNatTableIds_, fullNatTableIds) };


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


    // snatTableIds Field Functions 
    bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
    void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
    inline const CreateNatGatewayResponseBody::SnatTableIds & getSnatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, CreateNatGatewayResponseBody::SnatTableIds) };
    inline CreateNatGatewayResponseBody::SnatTableIds getSnatTableIds() { DARABONBA_PTR_GET(snatTableIds_, CreateNatGatewayResponseBody::SnatTableIds) };
    inline CreateNatGatewayResponseBody& setSnatTableIds(const CreateNatGatewayResponseBody::SnatTableIds & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
    inline CreateNatGatewayResponseBody& setSnatTableIds(CreateNatGatewayResponseBody::SnatTableIds && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


  protected:
    // A list of DNAT entries.
    shared_ptr<CreateNatGatewayResponseBody::ForwardTableIds> forwardTableIds_ {};
    // A list of FULLNAT entries.
    shared_ptr<CreateNatGatewayResponseBody::FullNatTableIds> fullNatTableIds_ {};
    // The ID of the NAT gateway.
    shared_ptr<string> natGatewayId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of SNAT entries.
    shared_ptr<CreateNatGatewayResponseBody::SnatTableIds> snatTableIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
