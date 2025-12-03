// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PatchUserRequestCustomFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class PatchUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_TO_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, PatchUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(emailVerified, emailVerified_);
      DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(phoneNumberVerified, phoneNumberVerified_);
      DARABONBA_PTR_FROM_JSON(phoneRegion, phoneRegion_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    PatchUserRequest() = default ;
    PatchUserRequest(const PatchUserRequest &) = default ;
    PatchUserRequest(PatchUserRequest &&) = default ;
    PatchUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchUserRequest() = default ;
    PatchUserRequest& operator=(const PatchUserRequest &) = default ;
    PatchUserRequest& operator=(PatchUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFields_ == nullptr
        && return this->displayName_ == nullptr && return this->email_ == nullptr && return this->emailVerified_ == nullptr && return this->phoneNumber_ == nullptr && return this->phoneNumberVerified_ == nullptr
        && return this->phoneRegion_ == nullptr && return this->username_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<PatchUserRequestCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<PatchUserRequestCustomFields>) };
    inline vector<PatchUserRequestCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<PatchUserRequestCustomFields>) };
    inline PatchUserRequest& setCustomFields(const vector<PatchUserRequestCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline PatchUserRequest& setCustomFields(vector<PatchUserRequestCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PatchUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline PatchUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool emailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline PatchUserRequest& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline PatchUserRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool phoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline PatchUserRequest& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string phoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline PatchUserRequest& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline PatchUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The extended fields of the account.
    std::shared_ptr<vector<PatchUserRequestCustomFields>> customFields_ = nullptr;
    // The display name of the account.
    std::shared_ptr<string> displayName_ = nullptr;
    // The email address.
    std::shared_ptr<string> email_ = nullptr;
    // Specifies whether the email address is verified. This field is required if an email address is specified. If you have no special requirement, set this parameter to true.
    std::shared_ptr<bool> emailVerified_ = nullptr;
    // The mobile number.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // Specifies whether the mobile number is verified. This field is required if a mobile number is specified. If you have no special requirement, set this parameter to true.
    std::shared_ptr<bool> phoneNumberVerified_ = nullptr;
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +. This parameter is required if a mobile number is specified.
    std::shared_ptr<string> phoneRegion_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
