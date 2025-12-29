// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTRASTFACEVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ContrastFaceVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContrastFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, ContrastFaceVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    ContrastFaceVerifyResponseBody() = default ;
    ContrastFaceVerifyResponseBody(const ContrastFaceVerifyResponseBody &) = default ;
    ContrastFaceVerifyResponseBody(ContrastFaceVerifyResponseBody &&) = default ;
    ContrastFaceVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContrastFaceVerifyResponseBody() = default ;
    ContrastFaceVerifyResponseBody& operator=(const ContrastFaceVerifyResponseBody &) = default ;
    ContrastFaceVerifyResponseBody& operator=(ContrastFaceVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(IdentityInfo, identityInfo_);
        DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(IdentityInfo, identityInfo_);
        DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
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
        && this->identityInfo_ == nullptr && this->materialInfo_ == nullptr && this->passed_ == nullptr && this->subCode_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // identityInfo Field Functions 
      bool hasIdentityInfo() const { return this->identityInfo_ != nullptr;};
      void deleteIdentityInfo() { this->identityInfo_ = nullptr;};
      inline string getIdentityInfo() const { DARABONBA_PTR_GET_DEFAULT(identityInfo_, "") };
      inline ResultObject& setIdentityInfo(string identityInfo) { DARABONBA_PTR_SET_VALUE(identityInfo_, identityInfo) };


      // materialInfo Field Functions 
      bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
      void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
      inline string getMaterialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
      inline ResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline string getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
      inline ResultObject& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline ResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


    protected:
      // Unique identifier for the real-person verification request.
      shared_ptr<string> certifyId_ {};
      // Information about the authenticated entity, which is usually empty in general authentication scenarios.
      shared_ptr<string> identityInfo_ {};
      // Attachment information of the authenticated entity, mainly image materials, in JSON format, as follows.
      shared_ptr<string> materialInfo_ {};
      // Whether it passed, T for pass, F for fail.
      shared_ptr<string> passed_ {};
      // Description of the authentication result. For details, see the SubCode explanation below.
      shared_ptr<string> subCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ContrastFaceVerifyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ContrastFaceVerifyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContrastFaceVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const ContrastFaceVerifyResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, ContrastFaceVerifyResponseBody::ResultObject) };
    inline ContrastFaceVerifyResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, ContrastFaceVerifyResponseBody::ResultObject) };
    inline ContrastFaceVerifyResponseBody& setResultObject(const ContrastFaceVerifyResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline ContrastFaceVerifyResponseBody& setResultObject(ContrastFaceVerifyResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Request result
    shared_ptr<ContrastFaceVerifyResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
