// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AuthLoginTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LoginTicketDto, loginTicketDto_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LoginTicketDto, loginTicketDto_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AuthLoginTicketResponseBody() = default ;
    AuthLoginTicketResponseBody(const AuthLoginTicketResponseBody &) = default ;
    AuthLoginTicketResponseBody(AuthLoginTicketResponseBody &&) = default ;
    AuthLoginTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginTicketResponseBody() = default ;
    AuthLoginTicketResponseBody& operator=(const AuthLoginTicketResponseBody &) = default ;
    AuthLoginTicketResponseBody& operator=(AuthLoginTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoginTicketDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoginTicketDto& obj) { 
        DARABONBA_PTR_TO_JSON(LoginTicket, loginTicket_);
      };
      friend void from_json(const Darabonba::Json& j, LoginTicketDto& obj) { 
        DARABONBA_PTR_FROM_JSON(LoginTicket, loginTicket_);
      };
      LoginTicketDto() = default ;
      LoginTicketDto(const LoginTicketDto &) = default ;
      LoginTicketDto(LoginTicketDto &&) = default ;
      LoginTicketDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoginTicketDto() = default ;
      LoginTicketDto& operator=(const LoginTicketDto &) = default ;
      LoginTicketDto& operator=(LoginTicketDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->loginTicket_ == nullptr; };
      // loginTicket Field Functions 
      bool hasLoginTicket() const { return this->loginTicket_ != nullptr;};
      void deleteLoginTicket() { this->loginTicket_ = nullptr;};
      inline string getLoginTicket() const { DARABONBA_PTR_GET_DEFAULT(loginTicket_, "") };
      inline LoginTicketDto& setLoginTicket(string loginTicket) { DARABONBA_PTR_SET_VALUE(loginTicket_, loginTicket) };


    protected:
      shared_ptr<string> loginTicket_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->loginTicketDto_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AuthLoginTicketResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // loginTicketDto Field Functions 
    bool hasLoginTicketDto() const { return this->loginTicketDto_ != nullptr;};
    void deleteLoginTicketDto() { this->loginTicketDto_ = nullptr;};
    inline const AuthLoginTicketResponseBody::LoginTicketDto & getLoginTicketDto() const { DARABONBA_PTR_GET_CONST(loginTicketDto_, AuthLoginTicketResponseBody::LoginTicketDto) };
    inline AuthLoginTicketResponseBody::LoginTicketDto getLoginTicketDto() { DARABONBA_PTR_GET(loginTicketDto_, AuthLoginTicketResponseBody::LoginTicketDto) };
    inline AuthLoginTicketResponseBody& setLoginTicketDto(const AuthLoginTicketResponseBody::LoginTicketDto & loginTicketDto) { DARABONBA_PTR_SET_VALUE(loginTicketDto_, loginTicketDto) };
    inline AuthLoginTicketResponseBody& setLoginTicketDto(AuthLoginTicketResponseBody::LoginTicketDto && loginTicketDto) { DARABONBA_PTR_SET_RVALUE(loginTicketDto_, loginTicketDto) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthLoginTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthLoginTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AuthLoginTicketResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AuthLoginTicketResponseBody::LoginTicketDto> loginTicketDto_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
