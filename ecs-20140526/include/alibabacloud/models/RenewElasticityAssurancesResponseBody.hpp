// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWELASTICITYASSURANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet.hpp>
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
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->privatePoolOptionsIdSet_ == nullptr && return this->requestId_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RenewElasticityAssurancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // privatePoolOptionsIdSet Field Functions 
    bool hasPrivatePoolOptionsIdSet() const { return this->privatePoolOptionsIdSet_ != nullptr;};
    void deletePrivatePoolOptionsIdSet() { this->privatePoolOptionsIdSet_ = nullptr;};
    inline const RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet & privatePoolOptionsIdSet() const { DARABONBA_PTR_GET_CONST(privatePoolOptionsIdSet_, RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet privatePoolOptionsIdSet() { DARABONBA_PTR_GET(privatePoolOptionsIdSet_, RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBody& setPrivatePoolOptionsIdSet(const RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet & privatePoolOptionsIdSet) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsIdSet_, privatePoolOptionsIdSet) };
    inline RenewElasticityAssurancesResponseBody& setPrivatePoolOptionsIdSet(RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet && privatePoolOptionsIdSet) { DARABONBA_PTR_SET_RVALUE(privatePoolOptionsIdSet_, privatePoolOptionsIdSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewElasticityAssurancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the renewal order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The IDs of the elasticity assurances.
    std::shared_ptr<RenewElasticityAssurancesResponseBodyPrivatePoolOptionsIdSet> privatePoolOptionsIdSet_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
