// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
namespace Models
{
  class SendMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachments, attachments_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(resume, resume_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(resume, resume_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SendMessageRequest() = default ;
    SendMessageRequest(const SendMessageRequest &) = default ;
    SendMessageRequest(SendMessageRequest &&) = default ;
    SendMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequest() = default ;
    SendMessageRequest& operator=(const SendMessageRequest &) = default ;
    SendMessageRequest& operator=(SendMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resume : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resume& obj) { 
        DARABONBA_PTR_TO_JSON(interruptId, interruptId_);
        DARABONBA_ANY_TO_JSON(payload, payload_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Resume& obj) { 
        DARABONBA_PTR_FROM_JSON(interruptId, interruptId_);
        DARABONBA_ANY_FROM_JSON(payload, payload_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Resume() = default ;
      Resume(const Resume &) = default ;
      Resume(Resume &&) = default ;
      Resume(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resume() = default ;
      Resume& operator=(const Resume &) = default ;
      Resume& operator=(Resume &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->interruptId_ == nullptr
        && this->payload_ == nullptr && this->status_ == nullptr; };
      // interruptId Field Functions 
      bool hasInterruptId() const { return this->interruptId_ != nullptr;};
      void deleteInterruptId() { this->interruptId_ = nullptr;};
      inline string getInterruptId() const { DARABONBA_PTR_GET_DEFAULT(interruptId_, "") };
      inline Resume& setInterruptId(string interruptId) { DARABONBA_PTR_SET_VALUE(interruptId_, interruptId) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline       const Darabonba::Json & getPayload() const { DARABONBA_GET(payload_) };
      Darabonba::Json & getPayload() { DARABONBA_GET(payload_) };
      inline Resume& setPayload(const Darabonba::Json & payload) { DARABONBA_SET_VALUE(payload_, payload) };
      inline Resume& setPayload(Darabonba::Json && payload) { DARABONBA_SET_RVALUE(payload_, payload) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Resume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the interrupt to be replied to. Obtain this value from data.outcome.interrupts[].id in the SSE RUN_FINISHED event or the GetRun response.
      shared_ptr<string> interruptId_ {};
      // The interrupt handling result. This parameter is required when status is set to resolved and must conform to the responseSchema of the corresponding interrupt. Do not pass this parameter when status is set to cancelled.
      Darabonba::Json payload_ {};
      // The reply method for the interrupt. Valid values: resolved (submits the answer, confirmation, or tool result required by the interrupt, and must include payload) and cancelled (cancels the interrupt without passing payload).
      shared_ptr<string> status_ {};
    };

    class Attachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
        DARABONBA_PTR_TO_JSON(fileExtension, fileExtension_);
        DARABONBA_PTR_TO_JSON(fileId, fileId_);
        DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
        DARABONBA_PTR_TO_JSON(workspacePath, workspacePath_);
      };
      friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
        DARABONBA_PTR_FROM_JSON(fileExtension, fileExtension_);
        DARABONBA_PTR_FROM_JSON(fileId, fileId_);
        DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
        DARABONBA_PTR_FROM_JSON(workspacePath, workspacePath_);
      };
      Attachments() = default ;
      Attachments(const Attachments &) = default ;
      Attachments(Attachments &&) = default ;
      Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attachments() = default ;
      Attachments& operator=(const Attachments &) = default ;
      Attachments& operator=(Attachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileExtension_ == nullptr
        && this->fileId_ == nullptr && this->sourceName_ == nullptr && this->workspacePath_ == nullptr; };
      // fileExtension Field Functions 
      bool hasFileExtension() const { return this->fileExtension_ != nullptr;};
      void deleteFileExtension() { this->fileExtension_ = nullptr;};
      inline string getFileExtension() const { DARABONBA_PTR_GET_DEFAULT(fileExtension_, "") };
      inline Attachments& setFileExtension(string fileExtension) { DARABONBA_PTR_SET_VALUE(fileExtension_, fileExtension) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Attachments& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline Attachments& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // workspacePath Field Functions 
      bool hasWorkspacePath() const { return this->workspacePath_ != nullptr;};
      void deleteWorkspacePath() { this->workspacePath_ = nullptr;};
      inline string getWorkspacePath() const { DARABONBA_PTR_GET_DEFAULT(workspacePath_, "") };
      inline Attachments& setWorkspacePath(string workspacePath) { DARABONBA_PTR_SET_VALUE(workspacePath_, workspacePath) };


    protected:
      // The file name extension.
      shared_ptr<string> fileExtension_ {};
      // The ID of the file after it is uploaded.
      shared_ptr<string> fileId_ {};
      // The original name of the file.
      shared_ptr<string> sourceName_ {};
      // The workspace path.
      shared_ptr<string> workspacePath_ {};
    };

    virtual bool empty() const override { return this->attachments_ == nullptr
        && this->content_ == nullptr && this->resume_ == nullptr && this->runId_ == nullptr && this->type_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<SendMessageRequest::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<SendMessageRequest::Attachments>) };
    inline vector<SendMessageRequest::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<SendMessageRequest::Attachments>) };
    inline SendMessageRequest& setAttachments(const vector<SendMessageRequest::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline SendMessageRequest& setAttachments(vector<SendMessageRequest::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendMessageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // resume Field Functions 
    bool hasResume() const { return this->resume_ != nullptr;};
    void deleteResume() { this->resume_ = nullptr;};
    inline const vector<SendMessageRequest::Resume> & getResume() const { DARABONBA_PTR_GET_CONST(resume_, vector<SendMessageRequest::Resume>) };
    inline vector<SendMessageRequest::Resume> getResume() { DARABONBA_PTR_GET(resume_, vector<SendMessageRequest::Resume>) };
    inline SendMessageRequest& setResume(const vector<SendMessageRequest::Resume> & resume) { DARABONBA_PTR_SET_VALUE(resume_, resume) };
    inline SendMessageRequest& setResume(vector<SendMessageRequest::Resume> && resume) { DARABONBA_PTR_SET_RVALUE(resume_, resume) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline SendMessageRequest& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SendMessageRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of attachments.
    shared_ptr<vector<SendMessageRequest::Attachments>> attachments_ {};
    // The message text in MESSAGE mode. This parameter cannot be empty. The type parameter can be omitted in this mode.
    shared_ptr<string> content_ {};
    // The list of interrupt replies. This parameter is required when type is set to RESUME. You must reply to all pending interrupts at once. Each interruptId can appear only once.
    shared_ptr<vector<SendMessageRequest::Resume>> resume_ {};
    // The ID of the active run to resubscribe to. This parameter is required in RECONNECT mode.
    shared_ptr<string> runId_ {};
    // The request type. Valid values: MESSAGE (sends a message), RESUME (resumes a run), and RECONNECT (reconnects to a run). Default value: MESSAGE.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
