// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTUPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTUPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeObjectUploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeObjectUploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeObjectUploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateKnowledgeObjectUploadResponseBody() = default ;
    CreateKnowledgeObjectUploadResponseBody(const CreateKnowledgeObjectUploadResponseBody &) = default ;
    CreateKnowledgeObjectUploadResponseBody(CreateKnowledgeObjectUploadResponseBody &&) = default ;
    CreateKnowledgeObjectUploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeObjectUploadResponseBody() = default ;
    CreateKnowledgeObjectUploadResponseBody& operator=(const CreateKnowledgeObjectUploadResponseBody &) = default ;
    CreateKnowledgeObjectUploadResponseBody& operator=(CreateKnowledgeObjectUploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(RequiredHeaders, requiredHeaders_);
        DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
        DARABONBA_PTR_TO_JSON(UploadUrl, uploadUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(RequiredHeaders, requiredHeaders_);
        DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
        DARABONBA_PTR_FROM_JSON(UploadUrl, uploadUrl_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expiresAt_ == nullptr
        && this->requiredHeaders_ == nullptr && this->uploadId_ == nullptr && this->uploadUrl_ == nullptr; };
      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
      inline Data& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // requiredHeaders Field Functions 
      bool hasRequiredHeaders() const { return this->requiredHeaders_ != nullptr;};
      void deleteRequiredHeaders() { this->requiredHeaders_ = nullptr;};
      inline const map<string, string> & getRequiredHeaders() const { DARABONBA_PTR_GET_CONST(requiredHeaders_, map<string, string>) };
      inline map<string, string> getRequiredHeaders() { DARABONBA_PTR_GET(requiredHeaders_, map<string, string>) };
      inline Data& setRequiredHeaders(const map<string, string> & requiredHeaders) { DARABONBA_PTR_SET_VALUE(requiredHeaders_, requiredHeaders) };
      inline Data& setRequiredHeaders(map<string, string> && requiredHeaders) { DARABONBA_PTR_SET_RVALUE(requiredHeaders_, requiredHeaders) };


      // uploadId Field Functions 
      bool hasUploadId() const { return this->uploadId_ != nullptr;};
      void deleteUploadId() { this->uploadId_ = nullptr;};
      inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
      inline Data& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


      // uploadUrl Field Functions 
      bool hasUploadUrl() const { return this->uploadUrl_ != nullptr;};
      void deleteUploadUrl() { this->uploadUrl_ = nullptr;};
      inline string getUploadUrl() const { DARABONBA_PTR_GET_DEFAULT(uploadUrl_, "") };
      inline Data& setUploadUrl(string uploadUrl) { DARABONBA_PTR_SET_VALUE(uploadUrl_, uploadUrl) };


    protected:
      // The expiration time of the UploadUrl, represented as a UNIX timestamp in milliseconds. The maximum validity period is 30 minutes, subject to the upper limit of the OSS signature configuration and the remaining time of the session. This field prevails.
      shared_ptr<int64_t> expiresAt_ {};
      // The HTTP headers that must be included in the direct upload request. The key is the actual header name, and the value is the header value.
      shared_ptr<map<string, string>> requiredHeaders_ {};
      // The identifier of the upload session to be consumed by document creation, model update, or model import tasks. This is not a KnowledgeObjectId or TaskId.
      shared_ptr<string> uploadId_ {};
      // The temporary direct upload URL.
      shared_ptr<string> uploadUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateKnowledgeObjectUploadResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKnowledgeObjectUploadResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateKnowledgeObjectUploadResponseBody::Data) };
    inline CreateKnowledgeObjectUploadResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateKnowledgeObjectUploadResponseBody::Data) };
    inline CreateKnowledgeObjectUploadResponseBody& setData(const CreateKnowledgeObjectUploadResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKnowledgeObjectUploadResponseBody& setData(CreateKnowledgeObjectUploadResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateKnowledgeObjectUploadResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKnowledgeObjectUploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateKnowledgeObjectUploadResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<CreateKnowledgeObjectUploadResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
