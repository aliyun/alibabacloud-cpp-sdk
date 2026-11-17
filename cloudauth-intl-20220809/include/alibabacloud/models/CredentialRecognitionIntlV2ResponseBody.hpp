// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALRECOGNITIONINTLV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALRECOGNITIONINTLV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CredentialRecognitionIntlV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialRecognitionIntlV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialRecognitionIntlV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CredentialRecognitionIntlV2ResponseBody() = default ;
    CredentialRecognitionIntlV2ResponseBody(const CredentialRecognitionIntlV2ResponseBody &) = default ;
    CredentialRecognitionIntlV2ResponseBody(CredentialRecognitionIntlV2ResponseBody &&) = default ;
    CredentialRecognitionIntlV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialRecognitionIntlV2ResponseBody() = default ;
    CredentialRecognitionIntlV2ResponseBody& operator=(const CredentialRecognitionIntlV2ResponseBody &) = default ;
    CredentialRecognitionIntlV2ResponseBody& operator=(CredentialRecognitionIntlV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_TO_JSON(SubCode, subCode_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
        DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->extIdInfo_ == nullptr
        && this->subCode_ == nullptr && this->success_ == nullptr; };
      // extIdInfo Field Functions 
      bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
      void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
      inline string getExtIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
      inline Result& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


      // subCode Field Functions 
      bool hasSubCode() const { return this->subCode_ != nullptr;};
      void deleteSubCode() { this->subCode_ = nullptr;};
      inline string getSubCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
      inline Result& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline Result& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The recognized key information in JSON format.
      shared_ptr<string> extIdInfo_ {};
      // The result code. Valid values:
      // - 200: OCR extraction is successful and all rule checks are passed
      // - 204: verification results are inconsistent. OCR extraction is successful, but some fields in CheckRuleConfig fail the check (N)
      // - 211: quality does not meet the requirements. Quality detection fails when idQuality is set to Y. This feature is not available in the current version
      // - 212: anti-counterfeiting check fails. fraudCheck is triggered and anti-counterfeiting verification fails
      // - 213: no text is extracted or the credential type check fails
      shared_ptr<string> subCode_ {};
      // The extraction result. Valid values:
      // - S: success.
      // - F: failure.
      shared_ptr<string> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CredentialRecognitionIntlV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CredentialRecognitionIntlV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CredentialRecognitionIntlV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CredentialRecognitionIntlV2ResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CredentialRecognitionIntlV2ResponseBody::Result) };
    inline CredentialRecognitionIntlV2ResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CredentialRecognitionIntlV2ResponseBody::Result) };
    inline CredentialRecognitionIntlV2ResponseBody& setResult(const CredentialRecognitionIntlV2ResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CredentialRecognitionIntlV2ResponseBody& setResult(CredentialRecognitionIntlV2ResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The return code. A value of 200 indicates that the request is successful. Other values indicate that the request failed.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CredentialRecognitionIntlV2ResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
