// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITFACEVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITFACEVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitFaceVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, InitFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    InitFaceVerifyResponseBody() = default ;
    InitFaceVerifyResponseBody(const InitFaceVerifyResponseBody &) = default ;
    InitFaceVerifyResponseBody(InitFaceVerifyResponseBody &&) = default ;
    InitFaceVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitFaceVerifyResponseBody() = default ;
    InitFaceVerifyResponseBody& operator=(const InitFaceVerifyResponseBody &) = default ;
    InitFaceVerifyResponseBody& operator=(InitFaceVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(CertifyUrl, certifyUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(CertifyUrl, certifyUrl_);
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
        && this->certifyUrl_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // certifyUrl Field Functions 
      bool hasCertifyUrl() const { return this->certifyUrl_ != nullptr;};
      void deleteCertifyUrl() { this->certifyUrl_ = nullptr;};
      inline string getCertifyUrl() const { DARABONBA_PTR_GET_DEFAULT(certifyUrl_, "") };
      inline ResultObject& setCertifyUrl(string certifyUrl) { DARABONBA_PTR_SET_VALUE(certifyUrl_, certifyUrl) };


    protected:
      // Unique identifier for real-person authentication.
      shared_ptr<string> certifyId_ {};
      // URL for real-person authentication in a Web browser, which will redirect according to the ReturnUrl parameter after authentication.
      // 
      // >Notice: 
      // 
      // - The CertifyUrl returned by the initialization interface is valid for **30 minutes and can only be used once**. Please use it within the validity period to avoid reuse.
      // - This parameter requires the correct input of **MetaInfo** to return a CertifyUrl that matches the client. If you cannot obtain it, please check whether **MetaInfo** and other input parameters are correct.
      // 
      // - The domain name of this URL may change with service updates. To ensure normal service availability, it is recommended not to apply access control to this domain name.
      // 
      // - When redirecting in the browser, try not to use incognito mode or modify the URL, as this may result in a **signature error**.
      shared_ptr<string> certifyUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitFaceVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitFaceVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitFaceVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const InitFaceVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, InitFaceVerifyResponseBody::ResultObject) };
    inline InitFaceVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, InitFaceVerifyResponseBody::ResultObject) };
    inline InitFaceVerifyResponseBody& setResultObject(const InitFaceVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline InitFaceVerifyResponseBody& setResultObject(InitFaceVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 indicates success, other values indicate failure.
    shared_ptr<string> code_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Result object.
    shared_ptr<InitFaceVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
