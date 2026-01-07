// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEREGISTERACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEREGISTERACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRegisterAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRegisterAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfo, accountInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRegisterAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfo, accountInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseRegisterAccountResponseBody() = default ;
    EnterpriseRegisterAccountResponseBody(const EnterpriseRegisterAccountResponseBody &) = default ;
    EnterpriseRegisterAccountResponseBody(EnterpriseRegisterAccountResponseBody &&) = default ;
    EnterpriseRegisterAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRegisterAccountResponseBody() = default ;
    EnterpriseRegisterAccountResponseBody& operator=(const EnterpriseRegisterAccountResponseBody &) = default ;
    EnterpriseRegisterAccountResponseBody& operator=(EnterpriseRegisterAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EnterpriseLicenseNo, enterpriseLicenseNo_);
        DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_TO_JSON(LoginId, loginId_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
      };
      friend void from_json(const Darabonba::Json& j, AccountInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EnterpriseLicenseNo, enterpriseLicenseNo_);
        DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_FROM_JSON(LoginId, loginId_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
      };
      AccountInfo() = default ;
      AccountInfo(const AccountInfo &) = default ;
      AccountInfo(AccountInfo &&) = default ;
      AccountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountInfo() = default ;
      AccountInfo& operator=(const AccountInfo &) = default ;
      AccountInfo& operator=(AccountInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enterpriseLicenseNo_ == nullptr
        && this->enterpriseName_ == nullptr && this->loginId_ == nullptr && this->pk_ == nullptr; };
      // enterpriseLicenseNo Field Functions 
      bool hasEnterpriseLicenseNo() const { return this->enterpriseLicenseNo_ != nullptr;};
      void deleteEnterpriseLicenseNo() { this->enterpriseLicenseNo_ = nullptr;};
      inline string getEnterpriseLicenseNo() const { DARABONBA_PTR_GET_DEFAULT(enterpriseLicenseNo_, "") };
      inline AccountInfo& setEnterpriseLicenseNo(string enterpriseLicenseNo) { DARABONBA_PTR_SET_VALUE(enterpriseLicenseNo_, enterpriseLicenseNo) };


      // enterpriseName Field Functions 
      bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
      void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
      inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
      inline AccountInfo& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


      // loginId Field Functions 
      bool hasLoginId() const { return this->loginId_ != nullptr;};
      void deleteLoginId() { this->loginId_ = nullptr;};
      inline string getLoginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
      inline AccountInfo& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline AccountInfo& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    protected:
      shared_ptr<string> enterpriseLicenseNo_ {};
      shared_ptr<string> enterpriseName_ {};
      shared_ptr<string> loginId_ {};
      shared_ptr<string> pk_ {};
    };

    virtual bool empty() const override { return this->accountInfo_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accountInfo Field Functions 
    bool hasAccountInfo() const { return this->accountInfo_ != nullptr;};
    void deleteAccountInfo() { this->accountInfo_ = nullptr;};
    inline const EnterpriseRegisterAccountResponseBody::AccountInfo & getAccountInfo() const { DARABONBA_PTR_GET_CONST(accountInfo_, EnterpriseRegisterAccountResponseBody::AccountInfo) };
    inline EnterpriseRegisterAccountResponseBody::AccountInfo getAccountInfo() { DARABONBA_PTR_GET(accountInfo_, EnterpriseRegisterAccountResponseBody::AccountInfo) };
    inline EnterpriseRegisterAccountResponseBody& setAccountInfo(const EnterpriseRegisterAccountResponseBody::AccountInfo & accountInfo) { DARABONBA_PTR_SET_VALUE(accountInfo_, accountInfo) };
    inline EnterpriseRegisterAccountResponseBody& setAccountInfo(EnterpriseRegisterAccountResponseBody::AccountInfo && accountInfo) { DARABONBA_PTR_SET_RVALUE(accountInfo_, accountInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseRegisterAccountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseRegisterAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRegisterAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseRegisterAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<EnterpriseRegisterAccountResponseBody::AccountInfo> accountInfo_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
