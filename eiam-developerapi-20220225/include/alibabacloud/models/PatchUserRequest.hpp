// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PATCHUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CustomFields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomFields& obj) { 
        DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(operator, operator_);
      };
      friend void from_json(const Darabonba::Json& j, CustomFields& obj) { 
        DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(operator, operator_);
      };
      CustomFields() = default ;
      CustomFields(const CustomFields &) = default ;
      CustomFields(CustomFields &&) = default ;
      CustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomFields() = default ;
      CustomFields& operator=(const CustomFields &) = default ;
      CustomFields& operator=(CustomFields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr && this->operation_ == nullptr && this->operator_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline CustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline CustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline CustomFields& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline CustomFields& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    protected:
      // The name of the extended field. For more information about the type and valid values of the extended field, see the detailed description of the extended field in the IDaaS console.
      shared_ptr<string> fieldName_ {};
      // The value of the extended field.
      shared_ptr<string> fieldValue_ {};
      // The operation to be performed on the field. Valid values:
      // 
      // *   add
      // *   replace If you leave the value of the extended field empty, the replace operation is converted to an add operation.
      // *   remove
      shared_ptr<string> operation_ {};
      // The type of the operation. This parameter is deprecated. Replace it with operation.
      shared_ptr<string> operator_ {};
    };

    virtual bool empty() const override { return this->customFields_ == nullptr
        && this->displayName_ == nullptr && this->email_ == nullptr && this->emailVerified_ == nullptr && this->phoneNumber_ == nullptr && this->phoneNumberVerified_ == nullptr
        && this->phoneRegion_ == nullptr && this->username_ == nullptr; };
    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<PatchUserRequest::CustomFields> & getCustomFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<PatchUserRequest::CustomFields>) };
    inline vector<PatchUserRequest::CustomFields> getCustomFields() { DARABONBA_PTR_GET(customFields_, vector<PatchUserRequest::CustomFields>) };
    inline PatchUserRequest& setCustomFields(const vector<PatchUserRequest::CustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline PatchUserRequest& setCustomFields(vector<PatchUserRequest::CustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline PatchUserRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline PatchUserRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerified Field Functions 
    bool hasEmailVerified() const { return this->emailVerified_ != nullptr;};
    void deleteEmailVerified() { this->emailVerified_ = nullptr;};
    inline bool getEmailVerified() const { DARABONBA_PTR_GET_DEFAULT(emailVerified_, false) };
    inline PatchUserRequest& setEmailVerified(bool emailVerified) { DARABONBA_PTR_SET_VALUE(emailVerified_, emailVerified) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline PatchUserRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // phoneNumberVerified Field Functions 
    bool hasPhoneNumberVerified() const { return this->phoneNumberVerified_ != nullptr;};
    void deletePhoneNumberVerified() { this->phoneNumberVerified_ = nullptr;};
    inline bool getPhoneNumberVerified() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberVerified_, false) };
    inline PatchUserRequest& setPhoneNumberVerified(bool phoneNumberVerified) { DARABONBA_PTR_SET_VALUE(phoneNumberVerified_, phoneNumberVerified) };


    // phoneRegion Field Functions 
    bool hasPhoneRegion() const { return this->phoneRegion_ != nullptr;};
    void deletePhoneRegion() { this->phoneRegion_ = nullptr;};
    inline string getPhoneRegion() const { DARABONBA_PTR_GET_DEFAULT(phoneRegion_, "") };
    inline PatchUserRequest& setPhoneRegion(string phoneRegion) { DARABONBA_PTR_SET_VALUE(phoneRegion_, phoneRegion) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline PatchUserRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The extended fields of the account.
    shared_ptr<vector<PatchUserRequest::CustomFields>> customFields_ {};
    // The display name of the account.
    shared_ptr<string> displayName_ {};
    // The email address.
    shared_ptr<string> email_ {};
    // Specifies whether the email address is verified. This field is required if an email address is specified. If you have no special requirement, set this parameter to true.
    shared_ptr<bool> emailVerified_ {};
    // The mobile number.
    shared_ptr<string> phoneNumber_ {};
    // Specifies whether the mobile number is verified. This field is required if a mobile number is specified. If you have no special requirement, set this parameter to true.
    shared_ptr<bool> phoneNumberVerified_ {};
    // The country code of the mobile number. For example, the country code of China is 86 without 00 or +. This parameter is required if a mobile number is specified.
    shared_ptr<string> phoneRegion_ {};
    // The name of the account.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
