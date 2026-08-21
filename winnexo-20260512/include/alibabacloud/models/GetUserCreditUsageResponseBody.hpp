// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCREDITUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCREDITUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetUserCreditUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserCreditUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(creditLimit, creditLimit_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(remainingCredits, remainingCredits_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(shadowCreditLimit, shadowCreditLimit_);
      DARABONBA_PTR_TO_JSON(shadowRemainingCredits, shadowRemainingCredits_);
      DARABONBA_PTR_TO_JSON(shadowUsedCredits, shadowUsedCredits_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(usedCredits, usedCredits_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserCreditUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(creditLimit, creditLimit_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(remainingCredits, remainingCredits_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(shadowCreditLimit, shadowCreditLimit_);
      DARABONBA_PTR_FROM_JSON(shadowRemainingCredits, shadowRemainingCredits_);
      DARABONBA_PTR_FROM_JSON(shadowUsedCredits, shadowUsedCredits_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(usedCredits, usedCredits_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetUserCreditUsageResponseBody() = default ;
    GetUserCreditUsageResponseBody(const GetUserCreditUsageResponseBody &) = default ;
    GetUserCreditUsageResponseBody(GetUserCreditUsageResponseBody &&) = default ;
    GetUserCreditUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserCreditUsageResponseBody() = default ;
    GetUserCreditUsageResponseBody& operator=(const GetUserCreditUsageResponseBody &) = default ;
    GetUserCreditUsageResponseBody& operator=(GetUserCreditUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->creditLimit_ == nullptr && this->message_ == nullptr && this->remainingCredits_ == nullptr && this->requestId_ == nullptr && this->shadowCreditLimit_ == nullptr
        && this->shadowRemainingCredits_ == nullptr && this->shadowUsedCredits_ == nullptr && this->tenantId_ == nullptr && this->usedCredits_ == nullptr && this->userId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserCreditUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // creditLimit Field Functions 
    bool hasCreditLimit() const { return this->creditLimit_ != nullptr;};
    void deleteCreditLimit() { this->creditLimit_ = nullptr;};
    inline string getCreditLimit() const { DARABONBA_PTR_GET_DEFAULT(creditLimit_, "") };
    inline GetUserCreditUsageResponseBody& setCreditLimit(string creditLimit) { DARABONBA_PTR_SET_VALUE(creditLimit_, creditLimit) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserCreditUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // remainingCredits Field Functions 
    bool hasRemainingCredits() const { return this->remainingCredits_ != nullptr;};
    void deleteRemainingCredits() { this->remainingCredits_ = nullptr;};
    inline string getRemainingCredits() const { DARABONBA_PTR_GET_DEFAULT(remainingCredits_, "") };
    inline GetUserCreditUsageResponseBody& setRemainingCredits(string remainingCredits) { DARABONBA_PTR_SET_VALUE(remainingCredits_, remainingCredits) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserCreditUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shadowCreditLimit Field Functions 
    bool hasShadowCreditLimit() const { return this->shadowCreditLimit_ != nullptr;};
    void deleteShadowCreditLimit() { this->shadowCreditLimit_ = nullptr;};
    inline string getShadowCreditLimit() const { DARABONBA_PTR_GET_DEFAULT(shadowCreditLimit_, "") };
    inline GetUserCreditUsageResponseBody& setShadowCreditLimit(string shadowCreditLimit) { DARABONBA_PTR_SET_VALUE(shadowCreditLimit_, shadowCreditLimit) };


    // shadowRemainingCredits Field Functions 
    bool hasShadowRemainingCredits() const { return this->shadowRemainingCredits_ != nullptr;};
    void deleteShadowRemainingCredits() { this->shadowRemainingCredits_ = nullptr;};
    inline string getShadowRemainingCredits() const { DARABONBA_PTR_GET_DEFAULT(shadowRemainingCredits_, "") };
    inline GetUserCreditUsageResponseBody& setShadowRemainingCredits(string shadowRemainingCredits) { DARABONBA_PTR_SET_VALUE(shadowRemainingCredits_, shadowRemainingCredits) };


    // shadowUsedCredits Field Functions 
    bool hasShadowUsedCredits() const { return this->shadowUsedCredits_ != nullptr;};
    void deleteShadowUsedCredits() { this->shadowUsedCredits_ = nullptr;};
    inline string getShadowUsedCredits() const { DARABONBA_PTR_GET_DEFAULT(shadowUsedCredits_, "") };
    inline GetUserCreditUsageResponseBody& setShadowUsedCredits(string shadowUsedCredits) { DARABONBA_PTR_SET_VALUE(shadowUsedCredits_, shadowUsedCredits) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetUserCreditUsageResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // usedCredits Field Functions 
    bool hasUsedCredits() const { return this->usedCredits_ != nullptr;};
    void deleteUsedCredits() { this->usedCredits_ = nullptr;};
    inline string getUsedCredits() const { DARABONBA_PTR_GET_DEFAULT(usedCredits_, "") };
    inline GetUserCreditUsageResponseBody& setUsedCredits(string usedCredits) { DARABONBA_PTR_SET_VALUE(usedCredits_, usedCredits) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetUserCreditUsageResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The credit limit of the user.
    shared_ptr<string> creditLimit_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The remaining credits in real time.
    shared_ptr<string> remainingCredits_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The shadow credit limit.
    shared_ptr<string> shadowCreditLimit_ {};
    // The remaining shadow credits in real time.
    shared_ptr<string> shadowRemainingCredits_ {};
    // The consumed shadow credits in real time.
    shared_ptr<string> shadowUsedCredits_ {};
    // The ID of the tenant to which the task belongs.
    shared_ptr<int64_t> tenantId_ {};
    // The consumed credits in real time.
    shared_ptr<string> usedCredits_ {};
    // The user ID.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
