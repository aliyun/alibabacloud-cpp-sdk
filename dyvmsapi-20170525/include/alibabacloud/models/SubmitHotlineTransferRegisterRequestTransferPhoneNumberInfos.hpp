// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUESTTRANSFERPHONENUMBERINFOS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTLINETRANSFERREGISTERREQUESTTRANSFERPHONENUMBERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityCard, identityCard_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(PhoneNumberOwnerName, phoneNumberOwnerName_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityCard, identityCard_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberOwnerName, phoneNumberOwnerName_);
    };
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() = default ;
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos(const SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos &) = default ;
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos(SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos &&) = default ;
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos() = default ;
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& operator=(const SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos &) = default ;
    SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& operator=(SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityCard_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->phoneNumberOwnerName_ == nullptr; };
    // identityCard Field Functions 
    bool hasIdentityCard() const { return this->identityCard_ != nullptr;};
    void deleteIdentityCard() { this->identityCard_ = nullptr;};
    inline string identityCard() const { DARABONBA_PTR_GET_DEFAULT(identityCard_, "") };
    inline SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& setIdentityCard(string identityCard) { DARABONBA_PTR_SET_VALUE(identityCard_, identityCard) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberOwnerName Field Functions 
    bool hasPhoneNumberOwnerName() const { return this->phoneNumberOwnerName_ != nullptr;};
    void deletePhoneNumberOwnerName() { this->phoneNumberOwnerName_ = nullptr;};
    inline string phoneNumberOwnerName() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberOwnerName_, "") };
    inline SubmitHotlineTransferRegisterRequestTransferPhoneNumberInfos& setPhoneNumberOwnerName(string phoneNumberOwnerName) { DARABONBA_PTR_SET_VALUE(phoneNumberOwnerName_, phoneNumberOwnerName) };


  protected:
    // The ID card number of the number owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> identityCard_ = nullptr;
    // The China 400 number that you want to submit for registration.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The real name or company name of the number owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> phoneNumberOwnerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
