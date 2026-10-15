// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetCustomerAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomerAccountInfoResponseBody() = default ;
    GetCustomerAccountInfoResponseBody(const GetCustomerAccountInfoResponseBody &) = default ;
    GetCustomerAccountInfoResponseBody(GetCustomerAccountInfoResponseBody &&) = default ;
    GetCustomerAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerAccountInfoResponseBody() = default ;
    GetCustomerAccountInfoResponseBody& operator=(const GetCustomerAccountInfoResponseBody &) = default ;
    GetCustomerAccountInfoResponseBody& operator=(GetCustomerAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(CreditLimitStatus, creditLimitStatus_);
        DARABONBA_PTR_TO_JSON(HostingStatus, hostingStatus_);
        DARABONBA_PTR_TO_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
        DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(CreditLimitStatus, creditLimitStatus_);
        DARABONBA_PTR_FROM_JSON(HostingStatus, hostingStatus_);
        DARABONBA_PTR_FROM_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
        DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
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
        && this->creditLimitStatus_ == nullptr && this->hostingStatus_ == nullptr && this->isCertified_ == nullptr && this->loginEmail_ == nullptr && this->mpk_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Data& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // creditLimitStatus Field Functions 
      bool hasCreditLimitStatus() const { return this->creditLimitStatus_ != nullptr;};
      void deleteCreditLimitStatus() { this->creditLimitStatus_ = nullptr;};
      inline string getCreditLimitStatus() const { DARABONBA_PTR_GET_DEFAULT(creditLimitStatus_, "") };
      inline Data& setCreditLimitStatus(string creditLimitStatus) { DARABONBA_PTR_SET_VALUE(creditLimitStatus_, creditLimitStatus) };


      // hostingStatus Field Functions 
      bool hasHostingStatus() const { return this->hostingStatus_ != nullptr;};
      void deleteHostingStatus() { this->hostingStatus_ = nullptr;};
      inline string getHostingStatus() const { DARABONBA_PTR_GET_DEFAULT(hostingStatus_, "") };
      inline Data& setHostingStatus(string hostingStatus) { DARABONBA_PTR_SET_VALUE(hostingStatus_, hostingStatus) };


      // isCertified Field Functions 
      bool hasIsCertified() const { return this->isCertified_ != nullptr;};
      void deleteIsCertified() { this->isCertified_ = nullptr;};
      inline bool getIsCertified() const { DARABONBA_PTR_GET_DEFAULT(isCertified_, false) };
      inline Data& setIsCertified(bool isCertified) { DARABONBA_PTR_SET_VALUE(isCertified_, isCertified) };


      // loginEmail Field Functions 
      bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
      void deleteLoginEmail() { this->loginEmail_ = nullptr;};
      inline string getLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
      inline Data& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


      // mpk Field Functions 
      bool hasMpk() const { return this->mpk_ != nullptr;};
      void deleteMpk() { this->mpk_ = nullptr;};
      inline int64_t getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, 0L) };
      inline Data& setMpk(int64_t mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    protected:
      // The account type. Valid values:
      // 
      // - 1: enterprise account.
      // - 0: individual account.
      shared_ptr<string> accountType_ {};
      // The business type of the end user.
      // 
      // Valid values:
      // 
      // 1. Freeze: The user is in a frozen state.
      // 
      // 2. Thaw: The user is in a thawed state.
      // 
      // 3. Trusteeship: The user is in a trusteeship state.
      // 
      // 4. TrusteeshipCancel: The user is in a non-trusteeship state.
      shared_ptr<string> creditLimitStatus_ {};
      // The hosting status. This parameter is provided by the credit control system and indicates whether the instance is managed by Alibaba Cloud. If the instance is managed, Alibaba Cloud handles resource suspension/resumption due to overdue payments.
      // 
      // Valid values:
      // 
      // 1. FREEZE: The user\\"s business is frozen.
      // 
      // 2. TRUSTEESHIP: The user\\"s business is under trusteeship.
      shared_ptr<string> hostingStatus_ {};
      // The real-name verification status.
      shared_ptr<bool> isCertified_ {};
      // The email address of the end customer.
      shared_ptr<string> loginEmail_ {};
      // The MPK of the parent account.
      shared_ptr<int64_t> mpk_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomerAccountInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomerAccountInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomerAccountInfoResponseBody::Data) };
    inline GetCustomerAccountInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomerAccountInfoResponseBody::Data) };
    inline GetCustomerAccountInfoResponseBody& setData(const GetCustomerAccountInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomerAccountInfoResponseBody& setData(GetCustomerAccountInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomerAccountInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomerAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomerAccountInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetCustomerAccountInfoResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. A value of true indicates that the call was completed. A value of false indicates that an error occurred.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
