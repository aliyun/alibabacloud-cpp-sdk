// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithThirdUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithThirdUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataObj, dataObj_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithThirdUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataObj, dataObj_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AuthLoginWithThirdUserInfoResponseBody() = default ;
    AuthLoginWithThirdUserInfoResponseBody(const AuthLoginWithThirdUserInfoResponseBody &) = default ;
    AuthLoginWithThirdUserInfoResponseBody(AuthLoginWithThirdUserInfoResponseBody &&) = default ;
    AuthLoginWithThirdUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithThirdUserInfoResponseBody() = default ;
    AuthLoginWithThirdUserInfoResponseBody& operator=(const AuthLoginWithThirdUserInfoResponseBody &) = default ;
    AuthLoginWithThirdUserInfoResponseBody& operator=(AuthLoginWithThirdUserInfoResponseBody &&) = default ;
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
      // Expiration time of the logon state access token
      shared_ptr<int64_t> expiredTimeLong_ {};
      // Logon state access token
      shared_ptr<string> loginStateAccessToken_ {};
    };

    class DataObj : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataObj& obj) { 
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, DataObj& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      DataObj() = default ;
      DataObj(const DataObj &) = default ;
      DataObj(DataObj &&) = default ;
      DataObj(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataObj() = default ;
      DataObj& operator=(const DataObj &) = default ;
      DataObj& operator=(DataObj &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sessionId_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline DataObj& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // Session ID
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataObj_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AuthLoginWithThirdUserInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataObj Field Functions 
    bool hasDataObj() const { return this->dataObj_ != nullptr;};
    void deleteDataObj() { this->dataObj_ = nullptr;};
    inline const AuthLoginWithThirdUserInfoResponseBody::DataObj & getDataObj() const { DARABONBA_PTR_GET_CONST(dataObj_, AuthLoginWithThirdUserInfoResponseBody::DataObj) };
    inline AuthLoginWithThirdUserInfoResponseBody::DataObj getDataObj() { DARABONBA_PTR_GET(dataObj_, AuthLoginWithThirdUserInfoResponseBody::DataObj) };
    inline AuthLoginWithThirdUserInfoResponseBody& setDataObj(const AuthLoginWithThirdUserInfoResponseBody::DataObj & dataObj) { DARABONBA_PTR_SET_VALUE(dataObj_, dataObj) };
    inline AuthLoginWithThirdUserInfoResponseBody& setDataObj(AuthLoginWithThirdUserInfoResponseBody::DataObj && dataObj) { DARABONBA_PTR_SET_RVALUE(dataObj_, dataObj) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthLoginWithThirdUserInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthLoginWithThirdUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const AuthLoginWithThirdUserInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, AuthLoginWithThirdUserInfoResponseBody::Result) };
    inline AuthLoginWithThirdUserInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, AuthLoginWithThirdUserInfoResponseBody::Result) };
    inline AuthLoginWithThirdUserInfoResponseBody& setResult(const AuthLoginWithThirdUserInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline AuthLoginWithThirdUserInfoResponseBody& setResult(AuthLoginWithThirdUserInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AuthLoginWithThirdUserInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // When Code is 5140001, it indicates that logon failed because the third-party user is not attached to a Tmall Genie user. The frontend must initiate the phone number authorization logon flow based on this error code. In subsequent steps, the frontend must return the SessionId in DataObj to the server.
    shared_ptr<AuthLoginWithThirdUserInfoResponseBody::DataObj> dataObj_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response Result
    shared_ptr<AuthLoginWithThirdUserInfoResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
