// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODY_HPP_
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
  class RenewElasticityAssurancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptionsIdSet, privatePoolOptionsIdSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsIdSet, privatePoolOptionsIdSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RenewElasticityAssurancesResponseBody() = default ;
    RenewElasticityAssurancesResponseBody(const RenewElasticityAssurancesResponseBody &) = default ;
    RenewElasticityAssurancesResponseBody(RenewElasticityAssurancesResponseBody &&) = default ;
    RenewElasticityAssurancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewElasticityAssurancesResponseBody() = default ;
    RenewElasticityAssurancesResponseBody& operator=(const RenewElasticityAssurancesResponseBody &) = default ;
    RenewElasticityAssurancesResponseBody& operator=(RenewElasticityAssurancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrivatePoolOptionsIdSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivatePoolOptionsIdSet& obj) { 
        DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      };
      friend void from_json(const Darabonba::Json& j, PrivatePoolOptionsIdSet& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
      };
      PrivatePoolOptionsIdSet() = default ;
      PrivatePoolOptionsIdSet(const PrivatePoolOptionsIdSet &) = default ;
      PrivatePoolOptionsIdSet(PrivatePoolOptionsIdSet &&) = default ;
      PrivatePoolOptionsIdSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivatePoolOptionsIdSet() = default ;
      PrivatePoolOptionsIdSet& operator=(const PrivatePoolOptionsIdSet &) = default ;
      PrivatePoolOptionsIdSet& operator=(PrivatePoolOptionsIdSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privatePoolOptionsId_ == nullptr; };
      // privatePoolOptionsId Field Functions 
      bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
      void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
      inline const vector<string> & getPrivatePoolOptionsId() const { DARABONBA_PTR_GET_CONST(privatePoolOptionsId_, vector<string>) };
      inline vector<string> getPrivatePoolOptionsId() { DARABONBA_PTR_GET(privatePoolOptionsId_, vector<string>) };
      inline PrivatePoolOptionsIdSet& setPrivatePoolOptionsId(const vector<string> & privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };
      inline PrivatePoolOptionsIdSet& setPrivatePoolOptionsId(vector<string> && privatePoolOptionsId) { DARABONBA_PTR_SET_RVALUE(privatePoolOptionsId_, privatePoolOptionsId) };


    protected:
      shared_ptr<vector<string>> privatePoolOptionsId_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->privatePoolOptionsIdSet_ == nullptr && this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RenewElasticityAssurancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // privatePoolOptionsIdSet Field Functions 
    bool hasPrivatePoolOptionsIdSet() const { return this->privatePoolOptionsIdSet_ != nullptr;};
    void deletePrivatePoolOptionsIdSet() { this->privatePoolOptionsIdSet_ = nullptr;};
    inline const RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet & getPrivatePoolOptionsIdSet() const { DARABONBA_PTR_GET_CONST(privatePoolOptionsIdSet_, RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet getPrivatePoolOptionsIdSet() { DARABONBA_PTR_GET(privatePoolOptionsIdSet_, RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBody& setPrivatePoolOptionsIdSet(const RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet & privatePoolOptionsIdSet) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsIdSet_, privatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBody& setPrivatePoolOptionsIdSet(RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet && privatePoolOptionsIdSet) { DARABONBA_PTR_SET_RVALUE(privatePoolOptionsIdSet_, privatePoolOptionsIdSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewElasticityAssurancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the renewal order.
    shared_ptr<string> orderId_ {};
    // The IDs of the elasticity assurances.
    shared_ptr<RenewElasticityAssurancesResponseBody::PrivatePoolOptionsIdSet> privatePoolOptionsIdSet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
