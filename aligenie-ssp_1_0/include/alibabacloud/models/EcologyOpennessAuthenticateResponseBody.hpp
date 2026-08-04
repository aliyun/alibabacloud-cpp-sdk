// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class EcologyOpennessAuthenticateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcologyOpennessAuthenticateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EcologyOpennessAuthenticateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EcologyOpennessAuthenticateResponseBody() = default ;
    EcologyOpennessAuthenticateResponseBody(const EcologyOpennessAuthenticateResponseBody &) = default ;
    EcologyOpennessAuthenticateResponseBody(EcologyOpennessAuthenticateResponseBody &&) = default ;
    EcologyOpennessAuthenticateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcologyOpennessAuthenticateResponseBody() = default ;
    EcologyOpennessAuthenticateResponseBody& operator=(const EcologyOpennessAuthenticateResponseBody &) = default ;
    EcologyOpennessAuthenticateResponseBody& operator=(EcologyOpennessAuthenticateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_TO_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
        DARABONBA_PTR_TO_JSON(ThirdUserType, thirdUserType_);
        DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
        DARABONBA_PTR_FROM_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
        DARABONBA_PTR_FROM_JSON(ThirdUserType, thirdUserType_);
        DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
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
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->sceneCode_ == nullptr && this->thirdUserIdentifier_ == nullptr && this->thirdUserType_ == nullptr && this->userOpenId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline Result& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline Result& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // sceneCode Field Functions 
      bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
      void deleteSceneCode() { this->sceneCode_ = nullptr;};
      inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
      inline Result& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


      // thirdUserIdentifier Field Functions 
      bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
      void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
      inline string getThirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
      inline Result& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


      // thirdUserType Field Functions 
      bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
      void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
      inline string getThirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
      inline Result& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


      // userOpenId Field Functions 
      bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
      void deleteUserOpenId() { this->userOpenId_ = nullptr;};
      inline string getUserOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
      inline Result& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


    protected:
      // entity key
      shared_ptr<string> encodeKey_ {};
      // entity Type
      shared_ptr<string> encodeType_ {};
      // scenario code
      shared_ptr<string> sceneCode_ {};
      // Third-party user identifier
      shared_ptr<string> thirdUserIdentifier_ {};
      // Third-party user type
      shared_ptr<string> thirdUserType_ {};
      // Tmall Genie user openId
      shared_ptr<string> userOpenId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline EcologyOpennessAuthenticateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EcologyOpennessAuthenticateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EcologyOpennessAuthenticateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EcologyOpennessAuthenticateResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EcologyOpennessAuthenticateResponseBody::Result) };
    inline EcologyOpennessAuthenticateResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EcologyOpennessAuthenticateResponseBody::Result) };
    inline EcologyOpennessAuthenticateResponseBody& setResult(const EcologyOpennessAuthenticateResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EcologyOpennessAuthenticateResponseBody& setResult(EcologyOpennessAuthenticateResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EcologyOpennessAuthenticateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response Result
    shared_ptr<EcologyOpennessAuthenticateResponseBody::Result> result_ {};
    // Flag indicating whether the invocation succeeded
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
