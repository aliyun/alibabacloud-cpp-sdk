// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEBUILDTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEBUILDTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetKnowledgeBaseBuildTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseBuildTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseBuildTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKnowledgeBaseBuildTaskResultResponseBody() = default ;
    GetKnowledgeBaseBuildTaskResultResponseBody(const GetKnowledgeBaseBuildTaskResultResponseBody &) = default ;
    GetKnowledgeBaseBuildTaskResultResponseBody(GetKnowledgeBaseBuildTaskResultResponseBody &&) = default ;
    GetKnowledgeBaseBuildTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseBuildTaskResultResponseBody() = default ;
    GetKnowledgeBaseBuildTaskResultResponseBody& operator=(const GetKnowledgeBaseBuildTaskResultResponseBody &) = default ;
    GetKnowledgeBaseBuildTaskResultResponseBody& operator=(GetKnowledgeBaseBuildTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
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
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->expiresIn_ == nullptr && this->knowledgeBaseId_ == nullptr && this->taskInstanceId_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Data& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline int32_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0) };
      inline Data& setExpiresIn(int32_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // taskInstanceId Field Functions 
      bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
      void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
      inline string getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, "") };
      inline Data& setTaskInstanceId(string taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


    protected:
      // The temporary Object Storage Service (OSS) download URL issued to the current caller when this operation is called. The URL is not stored.
      shared_ptr<string> downloadUrl_ {};
      // The validity period of the download URL, in seconds. Request a new URL after it expires.
      shared_ptr<int32_t> expiresIn_ {};
      // The ID of the knowledge base to which the result belongs.
      shared_ptr<string> knowledgeBaseId_ {};
      // The ID of the task instance that produced the result.
      shared_ptr<string> taskInstanceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKnowledgeBaseBuildTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKnowledgeBaseBuildTaskResultResponseBody::Data) };
    inline GetKnowledgeBaseBuildTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKnowledgeBaseBuildTaskResultResponseBody::Data) };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setData(const GetKnowledgeBaseBuildTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setData(GetKnowledgeBaseBuildTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKnowledgeBaseBuildTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code, which is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<GetKnowledgeBaseBuildTaskResultResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
