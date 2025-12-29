// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITCARDVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITCARDVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitCardVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitCardVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, InitCardVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    InitCardVerifyResponseBody() = default ;
    InitCardVerifyResponseBody(const InitCardVerifyResponseBody &) = default ;
    InitCardVerifyResponseBody(InitCardVerifyResponseBody &&) = default ;
    InitCardVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitCardVerifyResponseBody() = default ;
    InitCardVerifyResponseBody& operator=(const InitCardVerifyResponseBody &) = default ;
    InitCardVerifyResponseBody& operator=(InitCardVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
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
      virtual bool empty() const override { return this->certifyId_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    protected:
      // Verification request ID, a unique identifier for the verification service\\"s authentication request.
      // - When querying the authentication result, the authentication request ID must be provided.
      // 
      // - The CertifyId field is a billing statistics field. To facilitate subsequent bill reconciliation, please retain this field information locally. The CertifyId returned by the initialization interface is valid for 30 minutes and can only be submitted once for authentication. Please apply it within the validity period to avoid reuse.
      shared_ptr<string> certifyId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitCardVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitCardVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitCardVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const InitCardVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, InitCardVerifyResponseBody::ResultObject) };
    inline InitCardVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, InitCardVerifyResponseBody::ResultObject) };
    inline InitCardVerifyResponseBody& setResultObject(const InitCardVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline InitCardVerifyResponseBody& setResultObject(InitCardVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    // Important
    // - This parameter indicates whether the interface was called correctly. For detailed return code descriptions, see the error codes.
    // - Business results should be viewed through the fields in ResultObject.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<InitCardVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
