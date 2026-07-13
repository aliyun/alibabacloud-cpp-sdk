// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDITPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDITPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCreditPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCreditPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditPackageId, creditPackageId_);
      DARABONBA_PTR_TO_JSON(CreditPackageIds, creditPackageIds_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCreditPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditPackageId, creditPackageId_);
      DARABONBA_PTR_FROM_JSON(CreditPackageIds, creditPackageIds_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCreditPackageResponseBody() = default ;
    CreateCreditPackageResponseBody(const CreateCreditPackageResponseBody &) = default ;
    CreateCreditPackageResponseBody(CreateCreditPackageResponseBody &&) = default ;
    CreateCreditPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCreditPackageResponseBody() = default ;
    CreateCreditPackageResponseBody& operator=(const CreateCreditPackageResponseBody &) = default ;
    CreateCreditPackageResponseBody& operator=(CreateCreditPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditPackageId_ == nullptr
        && this->creditPackageIds_ == nullptr && this->effectiveTime_ == nullptr && this->expiredTime_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // creditPackageId Field Functions 
    bool hasCreditPackageId() const { return this->creditPackageId_ != nullptr;};
    void deleteCreditPackageId() { this->creditPackageId_ = nullptr;};
    inline string getCreditPackageId() const { DARABONBA_PTR_GET_DEFAULT(creditPackageId_, "") };
    inline CreateCreditPackageResponseBody& setCreditPackageId(string creditPackageId) { DARABONBA_PTR_SET_VALUE(creditPackageId_, creditPackageId) };


    // creditPackageIds Field Functions 
    bool hasCreditPackageIds() const { return this->creditPackageIds_ != nullptr;};
    void deleteCreditPackageIds() { this->creditPackageIds_ = nullptr;};
    inline const vector<string> & getCreditPackageIds() const { DARABONBA_PTR_GET_CONST(creditPackageIds_, vector<string>) };
    inline vector<string> getCreditPackageIds() { DARABONBA_PTR_GET(creditPackageIds_, vector<string>) };
    inline CreateCreditPackageResponseBody& setCreditPackageIds(const vector<string> & creditPackageIds) { DARABONBA_PTR_SET_VALUE(creditPackageIds_, creditPackageIds) };
    inline CreateCreditPackageResponseBody& setCreditPackageIds(vector<string> && creditPackageIds) { DARABONBA_PTR_SET_RVALUE(creditPackageIds_, creditPackageIds) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline CreateCreditPackageResponseBody& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline CreateCreditPackageResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCreditPackageResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCreditPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the credit booster pack.
    shared_ptr<string> creditPackageId_ {};
    shared_ptr<vector<string>> creditPackageIds_ {};
    // The effective period of the credit booster pack.
    shared_ptr<string> effectiveTime_ {};
    // The time when the credit booster pack expires.
    shared_ptr<string> expiredTime_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
