// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACEVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACEVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFaceVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CompareFaceVerifyResponseBody() = default ;
    CompareFaceVerifyResponseBody(const CompareFaceVerifyResponseBody &) = default ;
    CompareFaceVerifyResponseBody(CompareFaceVerifyResponseBody &&) = default ;
    CompareFaceVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFaceVerifyResponseBody() = default ;
    CompareFaceVerifyResponseBody& operator=(const CompareFaceVerifyResponseBody &) = default ;
    CompareFaceVerifyResponseBody& operator=(CompareFaceVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(VerifyScore, verifyScore_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(VerifyScore, verifyScore_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certifyId_ == nullptr
        && this->passed_ == nullptr && this->verifyScore_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline ResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // verifyScore Field Functions 
      bool hasVerifyScore() const { return this->verifyScore_ != nullptr;};
      void deleteVerifyScore() { this->verifyScore_ = nullptr;};
      inline float getVerifyScore() const { DARABONBA_PTR_GET_DEFAULT(verifyScore_, 0.0) };
      inline ResultObject& setVerifyScore(float verifyScore) { DARABONBA_PTR_SET_VALUE(verifyScore_, verifyScore) };


    protected:
      // Unique identifier for the real-person authentication request.
      shared_ptr<string> certifyId_ {};
      // Whether the verification passed, T for pass, F for fail.
      shared_ptr<string> passed_ {};
      // Face comparison score.
      shared_ptr<float> verifyScore_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CompareFaceVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CompareFaceVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareFaceVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CompareFaceVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CompareFaceVerifyResponseBody::ResultObject) };
    inline CompareFaceVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CompareFaceVerifyResponseBody::ResultObject) };
    inline CompareFaceVerifyResponseBody& setResultObject(const CompareFaceVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CompareFaceVerifyResponseBody& setResultObject(CompareFaceVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, other values indicate failure.
    shared_ptr<string> code_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Face comparison result information.
    shared_ptr<CompareFaceVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
