// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSCRIPTRECORDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSCRIPTRECORDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DownloadScriptRecordingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadScriptRecordingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DownloadParams, downloadParams_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadScriptRecordingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DownloadParams, downloadParams_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DownloadScriptRecordingResponseBody() = default ;
    DownloadScriptRecordingResponseBody(const DownloadScriptRecordingResponseBody &) = default ;
    DownloadScriptRecordingResponseBody(DownloadScriptRecordingResponseBody &&) = default ;
    DownloadScriptRecordingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadScriptRecordingResponseBody() = default ;
    DownloadScriptRecordingResponseBody& operator=(const DownloadScriptRecordingResponseBody &) = default ;
    DownloadScriptRecordingResponseBody& operator=(DownloadScriptRecordingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DownloadParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DownloadParams& obj) { 
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DownloadParams& obj) { 
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
      };
      DownloadParams() = default ;
      DownloadParams(const DownloadParams &) = default ;
      DownloadParams(DownloadParams &&) = default ;
      DownloadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DownloadParams() = default ;
      DownloadParams& operator=(const DownloadParams &) = default ;
      DownloadParams& operator=(DownloadParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->signatureUrl_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline DownloadParams& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // signatureUrl Field Functions 
      bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
      void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
      inline string getSignatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
      inline DownloadParams& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


    protected:
      shared_ptr<string> fileName_ {};
      shared_ptr<string> signatureUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->downloadParams_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DownloadScriptRecordingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downloadParams Field Functions 
    bool hasDownloadParams() const { return this->downloadParams_ != nullptr;};
    void deleteDownloadParams() { this->downloadParams_ = nullptr;};
    inline const DownloadScriptRecordingResponseBody::DownloadParams & getDownloadParams() const { DARABONBA_PTR_GET_CONST(downloadParams_, DownloadScriptRecordingResponseBody::DownloadParams) };
    inline DownloadScriptRecordingResponseBody::DownloadParams getDownloadParams() { DARABONBA_PTR_GET(downloadParams_, DownloadScriptRecordingResponseBody::DownloadParams) };
    inline DownloadScriptRecordingResponseBody& setDownloadParams(const DownloadScriptRecordingResponseBody::DownloadParams & downloadParams) { DARABONBA_PTR_SET_VALUE(downloadParams_, downloadParams) };
    inline DownloadScriptRecordingResponseBody& setDownloadParams(DownloadScriptRecordingResponseBody::DownloadParams && downloadParams) { DARABONBA_PTR_SET_RVALUE(downloadParams_, downloadParams) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DownloadScriptRecordingResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DownloadScriptRecordingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadScriptRecordingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DownloadScriptRecordingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DownloadScriptRecordingResponseBody::DownloadParams> downloadParams_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
