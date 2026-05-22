// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CROSSACCOUNTVERIFYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CROSSACCOUNTVERIFYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class CrossAccountVerifyTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CrossAccountVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CrossAccountVerifyTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CrossAccountVerifyTokenResponseBody() = default ;
    CrossAccountVerifyTokenResponseBody(const CrossAccountVerifyTokenResponseBody &) = default ;
    CrossAccountVerifyTokenResponseBody(CrossAccountVerifyTokenResponseBody &&) = default ;
    CrossAccountVerifyTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CrossAccountVerifyTokenResponseBody() = default ;
    CrossAccountVerifyTokenResponseBody& operator=(const CrossAccountVerifyTokenResponseBody &) = default ;
    CrossAccountVerifyTokenResponseBody& operator=(CrossAccountVerifyTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthRoles, authRoles_);
        DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthRoles, authRoles_);
        DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
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
      virtual bool empty() const override { return this->authRoles_ == nullptr
        && this->authTime_ == nullptr && this->name_ == nullptr && this->uid_ == nullptr; };
      // authRoles Field Functions 
      bool hasAuthRoles() const { return this->authRoles_ != nullptr;};
      void deleteAuthRoles() { this->authRoles_ = nullptr;};
      inline const vector<string> & getAuthRoles() const { DARABONBA_PTR_GET_CONST(authRoles_, vector<string>) };
      inline vector<string> getAuthRoles() { DARABONBA_PTR_GET(authRoles_, vector<string>) };
      inline Result& setAuthRoles(const vector<string> & authRoles) { DARABONBA_PTR_SET_VALUE(authRoles_, authRoles) };
      inline Result& setAuthRoles(vector<string> && authRoles) { DARABONBA_PTR_SET_RVALUE(authRoles_, authRoles) };


      // authTime Field Functions 
      bool hasAuthTime() const { return this->authTime_ != nullptr;};
      void deleteAuthTime() { this->authTime_ = nullptr;};
      inline int64_t getAuthTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, 0L) };
      inline Result& setAuthTime(int64_t authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Result& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    protected:
      shared_ptr<vector<string>> authRoles_ {};
      shared_ptr<int64_t> authTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> uid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CrossAccountVerifyTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CrossAccountVerifyTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CrossAccountVerifyTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CrossAccountVerifyTokenResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CrossAccountVerifyTokenResponseBody::Result) };
    inline CrossAccountVerifyTokenResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CrossAccountVerifyTokenResponseBody::Result) };
    inline CrossAccountVerifyTokenResponseBody& setResult(const CrossAccountVerifyTokenResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CrossAccountVerifyTokenResponseBody& setResult(CrossAccountVerifyTokenResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CrossAccountVerifyTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // RequestId
    shared_ptr<string> requestId_ {};
    shared_ptr<CrossAccountVerifyTokenResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
