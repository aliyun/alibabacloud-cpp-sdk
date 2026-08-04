// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGACCOUNTAKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGACCOUNTAKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAgAccountAkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgAccountAkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountAkDto, accountAkDto_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgAccountAkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountAkDto, accountAkDto_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgAccountAkResponseBody() = default ;
    GetAgAccountAkResponseBody(const GetAgAccountAkResponseBody &) = default ;
    GetAgAccountAkResponseBody(GetAgAccountAkResponseBody &&) = default ;
    GetAgAccountAkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgAccountAkResponseBody() = default ;
    GetAgAccountAkResponseBody& operator=(const GetAgAccountAkResponseBody &) = default ;
    GetAgAccountAkResponseBody& operator=(GetAgAccountAkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountAkDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountAkDto& obj) { 
        DARABONBA_PTR_TO_JSON(Ak, ak_);
        DARABONBA_PTR_TO_JSON(Secret, secret_);
      };
      friend void from_json(const Darabonba::Json& j, AccountAkDto& obj) { 
        DARABONBA_PTR_FROM_JSON(Ak, ak_);
        DARABONBA_PTR_FROM_JSON(Secret, secret_);
      };
      AccountAkDto() = default ;
      AccountAkDto(const AccountAkDto &) = default ;
      AccountAkDto(AccountAkDto &&) = default ;
      AccountAkDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountAkDto() = default ;
      AccountAkDto& operator=(const AccountAkDto &) = default ;
      AccountAkDto& operator=(AccountAkDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ak_ == nullptr
        && this->secret_ == nullptr; };
      // ak Field Functions 
      bool hasAk() const { return this->ak_ != nullptr;};
      void deleteAk() { this->ak_ = nullptr;};
      inline string getAk() const { DARABONBA_PTR_GET_DEFAULT(ak_, "") };
      inline AccountAkDto& setAk(string ak) { DARABONBA_PTR_SET_VALUE(ak_, ak) };


      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
      inline AccountAkDto& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    protected:
      shared_ptr<string> ak_ {};
      shared_ptr<string> secret_ {};
    };

    virtual bool empty() const override { return this->accountAkDto_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accountAkDto Field Functions 
    bool hasAccountAkDto() const { return this->accountAkDto_ != nullptr;};
    void deleteAccountAkDto() { this->accountAkDto_ = nullptr;};
    inline const GetAgAccountAkResponseBody::AccountAkDto & getAccountAkDto() const { DARABONBA_PTR_GET_CONST(accountAkDto_, GetAgAccountAkResponseBody::AccountAkDto) };
    inline GetAgAccountAkResponseBody::AccountAkDto getAccountAkDto() { DARABONBA_PTR_GET(accountAkDto_, GetAgAccountAkResponseBody::AccountAkDto) };
    inline GetAgAccountAkResponseBody& setAccountAkDto(const GetAgAccountAkResponseBody::AccountAkDto & accountAkDto) { DARABONBA_PTR_SET_VALUE(accountAkDto_, accountAkDto) };
    inline GetAgAccountAkResponseBody& setAccountAkDto(GetAgAccountAkResponseBody::AccountAkDto && accountAkDto) { DARABONBA_PTR_SET_RVALUE(accountAkDto_, accountAkDto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgAccountAkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgAccountAkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgAccountAkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetAgAccountAkResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetAgAccountAkResponseBody::AccountAkDto> accountAkDto_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
