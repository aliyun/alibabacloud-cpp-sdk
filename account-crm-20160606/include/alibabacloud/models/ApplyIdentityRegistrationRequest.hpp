// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYIDENTITYREGISTRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYIDENTITYREGISTRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ApplyIdentityRegistrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyIdentityRegistrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(DocBackPic, docBackPic_);
      DARABONBA_PTR_TO_JSON(DocFrontPic, docFrontPic_);
      DARABONBA_PTR_TO_JSON(DocNum, docNum_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(RegisteredAddress, registeredAddress_);
      DARABONBA_PTR_TO_JSON(RegisteredCountry, registeredCountry_);
      DARABONBA_PTR_TO_JSON(RegisteredNum, registeredNum_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tel, tel_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyIdentityRegistrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(DocBackPic, docBackPic_);
      DARABONBA_PTR_FROM_JSON(DocFrontPic, docFrontPic_);
      DARABONBA_PTR_FROM_JSON(DocNum, docNum_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(RegisteredAddress, registeredAddress_);
      DARABONBA_PTR_FROM_JSON(RegisteredCountry, registeredCountry_);
      DARABONBA_PTR_FROM_JSON(RegisteredNum, registeredNum_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tel, tel_);
    };
    ApplyIdentityRegistrationRequest() = default ;
    ApplyIdentityRegistrationRequest(const ApplyIdentityRegistrationRequest &) = default ;
    ApplyIdentityRegistrationRequest(ApplyIdentityRegistrationRequest &&) = default ;
    ApplyIdentityRegistrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyIdentityRegistrationRequest() = default ;
    ApplyIdentityRegistrationRequest& operator=(const ApplyIdentityRegistrationRequest &) = default ;
    ApplyIdentityRegistrationRequest& operator=(ApplyIdentityRegistrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountType_ == nullptr
        && this->customerId_ == nullptr && this->docBackPic_ == nullptr && this->docFrontPic_ == nullptr && this->docNum_ == nullptr && this->docType_ == nullptr
        && this->email_ == nullptr && this->fullName_ == nullptr && this->registeredAddress_ == nullptr && this->registeredCountry_ == nullptr && this->registeredNum_ == nullptr
        && this->source_ == nullptr && this->tel_ == nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline ApplyIdentityRegistrationRequest& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline ApplyIdentityRegistrationRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // docBackPic Field Functions 
    bool hasDocBackPic() const { return this->docBackPic_ != nullptr;};
    void deleteDocBackPic() { this->docBackPic_ = nullptr;};
    inline string getDocBackPic() const { DARABONBA_PTR_GET_DEFAULT(docBackPic_, "") };
    inline ApplyIdentityRegistrationRequest& setDocBackPic(string docBackPic) { DARABONBA_PTR_SET_VALUE(docBackPic_, docBackPic) };


    // docFrontPic Field Functions 
    bool hasDocFrontPic() const { return this->docFrontPic_ != nullptr;};
    void deleteDocFrontPic() { this->docFrontPic_ = nullptr;};
    inline string getDocFrontPic() const { DARABONBA_PTR_GET_DEFAULT(docFrontPic_, "") };
    inline ApplyIdentityRegistrationRequest& setDocFrontPic(string docFrontPic) { DARABONBA_PTR_SET_VALUE(docFrontPic_, docFrontPic) };


    // docNum Field Functions 
    bool hasDocNum() const { return this->docNum_ != nullptr;};
    void deleteDocNum() { this->docNum_ = nullptr;};
    inline string getDocNum() const { DARABONBA_PTR_GET_DEFAULT(docNum_, "") };
    inline ApplyIdentityRegistrationRequest& setDocNum(string docNum) { DARABONBA_PTR_SET_VALUE(docNum_, docNum) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ApplyIdentityRegistrationRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ApplyIdentityRegistrationRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline ApplyIdentityRegistrationRequest& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // registeredAddress Field Functions 
    bool hasRegisteredAddress() const { return this->registeredAddress_ != nullptr;};
    void deleteRegisteredAddress() { this->registeredAddress_ = nullptr;};
    inline string getRegisteredAddress() const { DARABONBA_PTR_GET_DEFAULT(registeredAddress_, "") };
    inline ApplyIdentityRegistrationRequest& setRegisteredAddress(string registeredAddress) { DARABONBA_PTR_SET_VALUE(registeredAddress_, registeredAddress) };


    // registeredCountry Field Functions 
    bool hasRegisteredCountry() const { return this->registeredCountry_ != nullptr;};
    void deleteRegisteredCountry() { this->registeredCountry_ = nullptr;};
    inline string getRegisteredCountry() const { DARABONBA_PTR_GET_DEFAULT(registeredCountry_, "") };
    inline ApplyIdentityRegistrationRequest& setRegisteredCountry(string registeredCountry) { DARABONBA_PTR_SET_VALUE(registeredCountry_, registeredCountry) };


    // registeredNum Field Functions 
    bool hasRegisteredNum() const { return this->registeredNum_ != nullptr;};
    void deleteRegisteredNum() { this->registeredNum_ = nullptr;};
    inline string getRegisteredNum() const { DARABONBA_PTR_GET_DEFAULT(registeredNum_, "") };
    inline ApplyIdentityRegistrationRequest& setRegisteredNum(string registeredNum) { DARABONBA_PTR_SET_VALUE(registeredNum_, registeredNum) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ApplyIdentityRegistrationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tel Field Functions 
    bool hasTel() const { return this->tel_ != nullptr;};
    void deleteTel() { this->tel_ = nullptr;};
    inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
    inline ApplyIdentityRegistrationRequest& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> accountType_ {};
    shared_ptr<string> customerId_ {};
    // This parameter is required.
    shared_ptr<string> docBackPic_ {};
    // This parameter is required.
    shared_ptr<string> docFrontPic_ {};
    shared_ptr<string> docNum_ {};
    shared_ptr<string> docType_ {};
    // This parameter is required.
    shared_ptr<string> email_ {};
    // This parameter is required.
    shared_ptr<string> fullName_ {};
    shared_ptr<string> registeredAddress_ {};
    shared_ptr<string> registeredCountry_ {};
    shared_ptr<string> registeredNum_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> tel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
