// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITNOTEPOSTPROCESSINGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITNOTEPOSTPROCESSINGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAuditNotePostProcessingStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditNotePostProcessingStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditNotePostProcessingStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAuditNotePostProcessingStatusResponseBody() = default ;
    GetAuditNotePostProcessingStatusResponseBody(const GetAuditNotePostProcessingStatusResponseBody &) = default ;
    GetAuditNotePostProcessingStatusResponseBody(GetAuditNotePostProcessingStatusResponseBody &&) = default ;
    GetAuditNotePostProcessingStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditNotePostProcessingStatusResponseBody() = default ;
    GetAuditNotePostProcessingStatusResponseBody& operator=(const GetAuditNotePostProcessingStatusResponseBody &) = default ;
    GetAuditNotePostProcessingStatusResponseBody& operator=(GetAuditNotePostProcessingStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(NoteId, noteId_);
        DARABONBA_PTR_TO_JSON(ProcessedLines, processedLines_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalLines, totalLines_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CompletionTime, completionTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
        DARABONBA_PTR_FROM_JSON(ProcessedLines, processedLines_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalLines, totalLines_);
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
      virtual bool empty() const override { return this->completionTime_ == nullptr
        && this->createTime_ == nullptr && this->errorMessage_ == nullptr && this->noteId_ == nullptr && this->processedLines_ == nullptr && this->status_ == nullptr
        && this->totalLines_ == nullptr; };
      // completionTime Field Functions 
      bool hasCompletionTime() const { return this->completionTime_ != nullptr;};
      void deleteCompletionTime() { this->completionTime_ = nullptr;};
      inline string getCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(completionTime_, "") };
      inline Data& setCompletionTime(string completionTime) { DARABONBA_PTR_SET_VALUE(completionTime_, completionTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // noteId Field Functions 
      bool hasNoteId() const { return this->noteId_ != nullptr;};
      void deleteNoteId() { this->noteId_ = nullptr;};
      inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
      inline Data& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


      // processedLines Field Functions 
      bool hasProcessedLines() const { return this->processedLines_ != nullptr;};
      void deleteProcessedLines() { this->processedLines_ = nullptr;};
      inline int32_t getProcessedLines() const { DARABONBA_PTR_GET_DEFAULT(processedLines_, 0) };
      inline Data& setProcessedLines(int32_t processedLines) { DARABONBA_PTR_SET_VALUE(processedLines_, processedLines) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalLines Field Functions 
      bool hasTotalLines() const { return this->totalLines_ != nullptr;};
      void deleteTotalLines() { this->totalLines_ = nullptr;};
      inline int32_t getTotalLines() const { DARABONBA_PTR_GET_DEFAULT(totalLines_, 0) };
      inline Data& setTotalLines(int32_t totalLines) { DARABONBA_PTR_SET_VALUE(totalLines_, totalLines) };


    protected:
      shared_ptr<string> completionTime_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> noteId_ {};
      shared_ptr<int32_t> processedLines_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> totalLines_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuditNotePostProcessingStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAuditNotePostProcessingStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAuditNotePostProcessingStatusResponseBody::Data) };
    inline GetAuditNotePostProcessingStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAuditNotePostProcessingStatusResponseBody::Data) };
    inline GetAuditNotePostProcessingStatusResponseBody& setData(const GetAuditNotePostProcessingStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAuditNotePostProcessingStatusResponseBody& setData(GetAuditNotePostProcessingStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAuditNotePostProcessingStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAuditNotePostProcessingStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditNotePostProcessingStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuditNotePostProcessingStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // This parameter is required.
    shared_ptr<string> code_ {};
    shared_ptr<GetAuditNotePostProcessingStatusResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    // Id of the request
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
