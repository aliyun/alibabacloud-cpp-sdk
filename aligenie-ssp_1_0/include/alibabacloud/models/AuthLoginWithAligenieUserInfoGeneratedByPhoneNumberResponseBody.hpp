// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOGENERATEDBYPHONENUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHALIGENIEUSERINFOGENERATEDBYPHONENUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody() = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody &) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody(AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody &&) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody() = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& operator=(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody &) = default ;
    AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& operator=(AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExpiredTimeLong, expiredTimeLong_);
        DARABONBA_PTR_TO_JSON(LoginStateAccessToken, loginStateAccessToken_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpiredTimeLong, expiredTimeLong_);
        DARABONBA_PTR_FROM_JSON(LoginStateAccessToken, loginStateAccessToken_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expiredTimeLong_ == nullptr
        && this->loginStateAccessToken_ == nullptr; };
      // expiredTimeLong Field Functions 
      bool hasExpiredTimeLong() const { return this->expiredTimeLong_ != nullptr;};
      void deleteExpiredTimeLong() { this->expiredTimeLong_ = nullptr;};
      inline int64_t getExpiredTimeLong() const { DARABONBA_PTR_GET_DEFAULT(expiredTimeLong_, 0L) };
      inline Result& setExpiredTimeLong(int64_t expiredTimeLong) { DARABONBA_PTR_SET_VALUE(expiredTimeLong_, expiredTimeLong) };


      // loginStateAccessToken Field Functions 
      bool hasLoginStateAccessToken() const { return this->loginStateAccessToken_ != nullptr;};
      void deleteLoginStateAccessToken() { this->loginStateAccessToken_ = nullptr;};
      inline string getLoginStateAccessToken() const { DARABONBA_PTR_GET_DEFAULT(loginStateAccessToken_, "") };
      inline Result& setLoginStateAccessToken(string loginStateAccessToken) { DARABONBA_PTR_SET_VALUE(loginStateAccessToken_, loginStateAccessToken) };


    protected:
      // Expiration time of the logon state access token (long integer)
      shared_ptr<int64_t> expiredTimeLong_ {};
      // Logon state access token
      shared_ptr<string> loginStateAccessToken_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result) };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result) };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setResult(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setResult(AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response Result
    shared_ptr<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
