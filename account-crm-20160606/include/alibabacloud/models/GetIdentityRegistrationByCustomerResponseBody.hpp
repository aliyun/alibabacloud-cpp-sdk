// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYREGISTRATIONBYCUSTOMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYREGISTRATIONBYCUSTOMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetIdentityRegistrationByCustomerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityRegistrationByCustomerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityRegistrationByCustomerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIdentityRegistrationByCustomerResponseBody() = default ;
    GetIdentityRegistrationByCustomerResponseBody(const GetIdentityRegistrationByCustomerResponseBody &) = default ;
    GetIdentityRegistrationByCustomerResponseBody(GetIdentityRegistrationByCustomerResponseBody &&) = default ;
    GetIdentityRegistrationByCustomerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityRegistrationByCustomerResponseBody() = default ;
    GetIdentityRegistrationByCustomerResponseBody& operator=(const GetIdentityRegistrationByCustomerResponseBody &) = default ;
    GetIdentityRegistrationByCustomerResponseBody& operator=(GetIdentityRegistrationByCustomerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplyStatus, applyStatus_);
        DARABONBA_PTR_TO_JSON(AuditCode, auditCode_);
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
        DARABONBA_PTR_TO_JSON(Tel, tel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplyStatus, applyStatus_);
        DARABONBA_PTR_FROM_JSON(AuditCode, auditCode_);
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
        DARABONBA_PTR_FROM_JSON(Tel, tel_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->applicationId_ == nullptr && this->applyStatus_ == nullptr && this->auditCode_ == nullptr && this->customerId_ == nullptr && this->docBackPic_ == nullptr
        && this->docFrontPic_ == nullptr && this->docNum_ == nullptr && this->docType_ == nullptr && this->email_ == nullptr && this->fullName_ == nullptr
        && this->registeredAddress_ == nullptr && this->registeredCountry_ == nullptr && this->registeredNum_ == nullptr && this->tel_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline int32_t getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
      inline Data& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
      inline Data& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applyStatus Field Functions 
      bool hasApplyStatus() const { return this->applyStatus_ != nullptr;};
      void deleteApplyStatus() { this->applyStatus_ = nullptr;};
      inline string getApplyStatus() const { DARABONBA_PTR_GET_DEFAULT(applyStatus_, "") };
      inline Data& setApplyStatus(string applyStatus) { DARABONBA_PTR_SET_VALUE(applyStatus_, applyStatus) };


      // auditCode Field Functions 
      bool hasAuditCode() const { return this->auditCode_ != nullptr;};
      void deleteAuditCode() { this->auditCode_ = nullptr;};
      inline string getAuditCode() const { DARABONBA_PTR_GET_DEFAULT(auditCode_, "") };
      inline Data& setAuditCode(string auditCode) { DARABONBA_PTR_SET_VALUE(auditCode_, auditCode) };


      // customerId Field Functions 
      bool hasCustomerId() const { return this->customerId_ != nullptr;};
      void deleteCustomerId() { this->customerId_ = nullptr;};
      inline int64_t getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, 0L) };
      inline Data& setCustomerId(int64_t customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


      // docBackPic Field Functions 
      bool hasDocBackPic() const { return this->docBackPic_ != nullptr;};
      void deleteDocBackPic() { this->docBackPic_ = nullptr;};
      inline string getDocBackPic() const { DARABONBA_PTR_GET_DEFAULT(docBackPic_, "") };
      inline Data& setDocBackPic(string docBackPic) { DARABONBA_PTR_SET_VALUE(docBackPic_, docBackPic) };


      // docFrontPic Field Functions 
      bool hasDocFrontPic() const { return this->docFrontPic_ != nullptr;};
      void deleteDocFrontPic() { this->docFrontPic_ = nullptr;};
      inline string getDocFrontPic() const { DARABONBA_PTR_GET_DEFAULT(docFrontPic_, "") };
      inline Data& setDocFrontPic(string docFrontPic) { DARABONBA_PTR_SET_VALUE(docFrontPic_, docFrontPic) };


      // docNum Field Functions 
      bool hasDocNum() const { return this->docNum_ != nullptr;};
      void deleteDocNum() { this->docNum_ = nullptr;};
      inline string getDocNum() const { DARABONBA_PTR_GET_DEFAULT(docNum_, "") };
      inline Data& setDocNum(string docNum) { DARABONBA_PTR_SET_VALUE(docNum_, docNum) };


      // docType Field Functions 
      bool hasDocType() const { return this->docType_ != nullptr;};
      void deleteDocType() { this->docType_ = nullptr;};
      inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
      inline Data& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline Data& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // registeredAddress Field Functions 
      bool hasRegisteredAddress() const { return this->registeredAddress_ != nullptr;};
      void deleteRegisteredAddress() { this->registeredAddress_ = nullptr;};
      inline string getRegisteredAddress() const { DARABONBA_PTR_GET_DEFAULT(registeredAddress_, "") };
      inline Data& setRegisteredAddress(string registeredAddress) { DARABONBA_PTR_SET_VALUE(registeredAddress_, registeredAddress) };


      // registeredCountry Field Functions 
      bool hasRegisteredCountry() const { return this->registeredCountry_ != nullptr;};
      void deleteRegisteredCountry() { this->registeredCountry_ = nullptr;};
      inline string getRegisteredCountry() const { DARABONBA_PTR_GET_DEFAULT(registeredCountry_, "") };
      inline Data& setRegisteredCountry(string registeredCountry) { DARABONBA_PTR_SET_VALUE(registeredCountry_, registeredCountry) };


      // registeredNum Field Functions 
      bool hasRegisteredNum() const { return this->registeredNum_ != nullptr;};
      void deleteRegisteredNum() { this->registeredNum_ = nullptr;};
      inline string getRegisteredNum() const { DARABONBA_PTR_GET_DEFAULT(registeredNum_, "") };
      inline Data& setRegisteredNum(string registeredNum) { DARABONBA_PTR_SET_VALUE(registeredNum_, registeredNum) };


      // tel Field Functions 
      bool hasTel() const { return this->tel_ != nullptr;};
      void deleteTel() { this->tel_ = nullptr;};
      inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
      inline Data& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


    protected:
      shared_ptr<int32_t> accountType_ {};
      shared_ptr<int64_t> applicationId_ {};
      shared_ptr<string> applyStatus_ {};
      shared_ptr<string> auditCode_ {};
      shared_ptr<int64_t> customerId_ {};
      shared_ptr<string> docBackPic_ {};
      shared_ptr<string> docFrontPic_ {};
      shared_ptr<string> docNum_ {};
      shared_ptr<string> docType_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> fullName_ {};
      shared_ptr<string> registeredAddress_ {};
      shared_ptr<string> registeredCountry_ {};
      shared_ptr<string> registeredNum_ {};
      shared_ptr<string> tel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdentityRegistrationByCustomerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdentityRegistrationByCustomerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetIdentityRegistrationByCustomerResponseBody::Data) };
    inline GetIdentityRegistrationByCustomerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetIdentityRegistrationByCustomerResponseBody::Data) };
    inline GetIdentityRegistrationByCustomerResponseBody& setData(const GetIdentityRegistrationByCustomerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdentityRegistrationByCustomerResponseBody& setData(GetIdentityRegistrationByCustomerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdentityRegistrationByCustomerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityRegistrationByCustomerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdentityRegistrationByCustomerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetIdentityRegistrationByCustomerResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
