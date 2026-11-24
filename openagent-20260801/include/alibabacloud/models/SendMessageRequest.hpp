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
      DARABONBA_PTR_TO_JSON(commands, commands_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(resume, resume_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(commands, commands_);
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
      // The ID of the interrupt to be replied to. Obtain this value from `data.outcome.interrupts[].id` in the SSE `RUN_FINISHED` event or `data.outcome.interrupts[].id` in the `GetRun` response.
      shared_ptr<string> interruptId_ {};
      // The interrupt processing result. This parameter is required when `status` is set to `resolved` and must conform to the `responseSchema` of the corresponding interrupt. Do not provide this parameter when `status` is set to `cancelled`.
      Darabonba::Json payload_ {};
      // The reply method for the current interrupt. A value of `resolved` indicates that the answer, confirmation, or tool result required by the interrupt is submitted, and `payload` must be provided. A value of `cancelled` indicates that the interrupt is canceled, and `payload` is not provided.
      shared_ptr<string> status_ {};
    };

    class Commands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commands& obj) { 
        DARABONBA_PTR_TO_JSON(payload, payload_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Commands& obj) { 
        DARABONBA_PTR_FROM_JSON(payload, payload_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Commands() = default ;
      Commands(const Commands &) = default ;
      Commands(Commands &&) = default ;
      Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commands() = default ;
      Commands& operator=(const Commands &) = default ;
      Commands& operator=(Commands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Payload : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Payload& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(skillId, skillId_);
        };
        friend void from_json(const Darabonba::Json& j, Payload& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(skillId, skillId_);
        };
        Payload() = default ;
        Payload(const Payload &) = default ;
        Payload(Payload &&) = default ;
        Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Payload() = default ;
        Payload& operator=(const Payload &) = default ;
        Payload& operator=(Payload &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->skillId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Payload& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skillId Field Functions 
        bool hasSkillId() const { return this->skillId_ != nullptr;};
        void deleteSkillId() { this->skillId_ = nullptr;};
        inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
        inline Payload& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      protected:
        // The skill name snapshot.
        shared_ptr<string> name_ {};
        // The skill ID.
        shared_ptr<string> skillId_ {};
      };

      virtual bool empty() const override { return this->payload_ == nullptr
        && this->type_ == nullptr; };
      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline const Commands::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, Commands::Payload) };
      inline Commands::Payload getPayload() { DARABONBA_PTR_GET(payload_, Commands::Payload) };
      inline Commands& setPayload(const Commands::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
      inline Commands& setPayload(Commands::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Commands& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The parameter object corresponding to the command type. For a skill command, you must specify the skill to be executed by using `skillId`. The `name` parameter is optional and is used only to save a snapshot of the display name. It is not used for execution or authorization checks. For a compact command, omit this object.
      shared_ptr<Commands::Payload> payload_ {};
      // The command type.
      shared_ptr<string> type_ {};
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
        && this->commands_ == nullptr && this->content_ == nullptr && this->resume_ == nullptr && this->runId_ == nullptr && this->type_ == nullptr; };
    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<SendMessageRequest::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<SendMessageRequest::Attachments>) };
    inline vector<SendMessageRequest::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<SendMessageRequest::Attachments>) };
    inline SendMessageRequest& setAttachments(const vector<SendMessageRequest::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline SendMessageRequest& setAttachments(vector<SendMessageRequest::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<SendMessageRequest::Commands> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<SendMessageRequest::Commands>) };
    inline vector<SendMessageRequest::Commands> getCommands() { DARABONBA_PTR_GET(commands_, vector<SendMessageRequest::Commands>) };
    inline SendMessageRequest& setCommands(const vector<SendMessageRequest::Commands> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline SendMessageRequest& setCommands(vector<SendMessageRequest::Commands> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


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
    // The MESSAGE commands. A skill command must include `payload.skillId`. A compact command must be sent separately without a body or attachments.
    shared_ptr<vector<SendMessageRequest::Commands>> commands_ {};
    // The message text in MESSAGE mode. This parameter cannot be empty. The type parameter can be omitted in this mode.
    shared_ptr<string> content_ {};
    // The list of interrupt replies. This parameter is required when `type` is set to `RESUME`. You must reply to all pending interrupts at once. Each `interruptId` can appear only once.
    shared_ptr<vector<SendMessageRequest::Resume>> resume_ {};
    // The ID of the active run to resubscribe to. This parameter is required in RECONNECT mode.
    shared_ptr<string> runId_ {};
    // The request type. Valid values: `MESSAGE` (sends a message), `RESUME` (resumes a run), and `RECONNECT` (reconnects to a run). Default value: `MESSAGE`.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
