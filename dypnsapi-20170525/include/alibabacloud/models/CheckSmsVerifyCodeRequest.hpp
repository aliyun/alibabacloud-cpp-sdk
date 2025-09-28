// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CheckSmsVerifyCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSmsVerifyCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaseAuthPolicy, caseAuthPolicy_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSmsVerifyCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseAuthPolicy, caseAuthPolicy_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    CheckSmsVerifyCodeRequest() = default ;
    CheckSmsVerifyCodeRequest(const CheckSmsVerifyCodeRequest &) = default ;
    CheckSmsVerifyCodeRequest(CheckSmsVerifyCodeRequest &&) = default ;
    CheckSmsVerifyCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSmsVerifyCodeRequest() = default ;
    CheckSmsVerifyCodeRequest& operator=(const CheckSmsVerifyCodeRequest &) = default ;
    CheckSmsVerifyCodeRequest& operator=(CheckSmsVerifyCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caseAuthPolicy_ != nullptr
        && this->countryCode_ != nullptr && this->outId_ != nullptr && this->ownerId_ != nullptr && this->phoneNumber_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->schemeName_ != nullptr && this->verifyCode_ != nullptr; };
    // caseAuthPolicy Field Functions 
    bool hasCaseAuthPolicy() const { return this->caseAuthPolicy_ != nullptr;};
    void deleteCaseAuthPolicy() { this->caseAuthPolicy_ = nullptr;};
    inline int64_t caseAuthPolicy() const { DARABONBA_PTR_GET_DEFAULT(caseAuthPolicy_, 0L) };
    inline CheckSmsVerifyCodeRequest& setCaseAuthPolicy(int64_t caseAuthPolicy) { DARABONBA_PTR_SET_VALUE(caseAuthPolicy_, caseAuthPolicy) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline CheckSmsVerifyCodeRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline CheckSmsVerifyCodeRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CheckSmsVerifyCodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline CheckSmsVerifyCodeRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CheckSmsVerifyCodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CheckSmsVerifyCodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string schemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline CheckSmsVerifyCodeRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline CheckSmsVerifyCodeRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The verification policy for uppercase and lowercase letters of the verification code. Valid values:
    // 
    // *   1: The verification policy does not distinguish uppercase and lowercase letters.
    // *   2: The verification policy distinguishes uppercase and lowercase letters.
    std::shared_ptr<int64_t> caseAuthPolicy_ = nullptr;
    // The country code of the phone number. Default value: 86.
    std::shared_ptr<string> countryCode_ = nullptr;
    // The external ID.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The phone number.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The verification service name. If this parameter is not specified, the default service is used. The name can be up to 20 characters in length.
    std::shared_ptr<string> schemeName_ = nullptr;
    // The verification code.
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
