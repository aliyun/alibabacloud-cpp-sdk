// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendAsyncChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAsyncChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(directChat, directChat_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(directChat, directChat_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecution_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SendAsyncChatMessageRequest() = default ;
    SendAsyncChatMessageRequest(const SendAsyncChatMessageRequest &) = default ;
    SendAsyncChatMessageRequest(SendAsyncChatMessageRequest &&) = default ;
    SendAsyncChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAsyncChatMessageRequest() = default ;
    SendAsyncChatMessageRequest& operator=(const SendAsyncChatMessageRequest &) = default ;
    SendAsyncChatMessageRequest& operator=(SendAsyncChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskExecution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskExecution& obj) { 
        DARABONBA_PTR_TO_JSON(billingId, billingId_);
        DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_TO_JSON(executionId, executionId_);
        DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_TO_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskName, taskName_);
        DARABONBA_PTR_TO_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskExecution& obj) { 
        DARABONBA_PTR_FROM_JSON(billingId, billingId_);
        DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
        DARABONBA_PTR_FROM_JSON(executionId, executionId_);
        DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
        DARABONBA_PTR_FROM_JSON(skillCodes, skillCodes_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskName, taskName_);
        DARABONBA_PTR_FROM_JSON(taskUnderstand, taskUnderstand_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
      };
      TaskExecution() = default ;
      TaskExecution(const TaskExecution &) = default ;
      TaskExecution(TaskExecution &&) = default ;
      TaskExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskExecution() = default ;
      TaskExecution& operator=(const TaskExecution &) = default ;
      TaskExecution& operator=(TaskExecution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingId_ == nullptr
        && this->enableWebSearch_ == nullptr && this->executionId_ == nullptr && this->operatingObjectName_ == nullptr && this->skillCodes_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr && this->taskUnderstand_ == nullptr && this->tenantId_ == nullptr && this->userId_ == nullptr; };
      // billingId Field Functions 
      bool hasBillingId() const { return this->billingId_ != nullptr;};
      void deleteBillingId() { this->billingId_ = nullptr;};
      inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
      inline TaskExecution& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


      // enableWebSearch Field Functions 
      bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
      void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
      inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
      inline TaskExecution& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline TaskExecution& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // operatingObjectName Field Functions 
      bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
      void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
      inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
      inline TaskExecution& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


      // skillCodes Field Functions 
      bool hasSkillCodes() const { return this->skillCodes_ != nullptr;};
      void deleteSkillCodes() { this->skillCodes_ = nullptr;};
      inline const vector<string> & getSkillCodes() const { DARABONBA_PTR_GET_CONST(skillCodes_, vector<string>) };
      inline vector<string> getSkillCodes() { DARABONBA_PTR_GET(skillCodes_, vector<string>) };
      inline TaskExecution& setSkillCodes(const vector<string> & skillCodes) { DARABONBA_PTR_SET_VALUE(skillCodes_, skillCodes) };
      inline TaskExecution& setSkillCodes(vector<string> && skillCodes) { DARABONBA_PTR_SET_RVALUE(skillCodes_, skillCodes) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskExecution& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskExecution& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // taskUnderstand Field Functions 
      bool hasTaskUnderstand() const { return this->taskUnderstand_ != nullptr;};
      void deleteTaskUnderstand() { this->taskUnderstand_ = nullptr;};
      inline string getTaskUnderstand() const { DARABONBA_PTR_GET_DEFAULT(taskUnderstand_, "") };
      inline TaskExecution& setTaskUnderstand(string taskUnderstand) { DARABONBA_PTR_SET_VALUE(taskUnderstand_, taskUnderstand) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TaskExecution& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TaskExecution& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The billing ID.
      shared_ptr<string> billingId_ {};
      // Specifies whether to enable web search.
      shared_ptr<bool> enableWebSearch_ {};
      // The execution record ID.
      // 
      // This parameter is required.
      shared_ptr<string> executionId_ {};
      // The digital employee name.
      shared_ptr<string> operatingObjectName_ {};
      // The list of associated skill codes.
      shared_ptr<vector<string>> skillCodes_ {};
      // The task ID.
      // 
      // This parameter is required.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
      // The task understanding content.
      shared_ptr<string> taskUnderstand_ {};
      // The tenant ID to which the task belongs.
      shared_ptr<string> tenantId_ {};
      // The user ID to which the task belongs.
      shared_ptr<string> userId_ {};
    };

    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(fileId, fileId_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(fileId, fileId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->type_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Files& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Files& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The file ID returned by uploadChatFile.
      // 
      // This parameter is required.
      shared_ptr<string> fileId_ {};
      // The file type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->digitalEmployeeName_ == nullptr && this->directChat_ == nullptr && this->files_ == nullptr && this->model_ == nullptr
        && this->reuseLastSession_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->taskExecution_ == nullptr && this->tenantId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendAsyncChatMessageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendAsyncChatMessageRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
    inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
    inline SendAsyncChatMessageRequest& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
    inline SendAsyncChatMessageRequest& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


    // directChat Field Functions 
    bool hasDirectChat() const { return this->directChat_ != nullptr;};
    void deleteDirectChat() { this->directChat_ = nullptr;};
    inline bool getDirectChat() const { DARABONBA_PTR_GET_DEFAULT(directChat_, false) };
    inline SendAsyncChatMessageRequest& setDirectChat(bool directChat) { DARABONBA_PTR_SET_VALUE(directChat_, directChat) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<SendAsyncChatMessageRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<SendAsyncChatMessageRequest::Files>) };
    inline vector<SendAsyncChatMessageRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<SendAsyncChatMessageRequest::Files>) };
    inline SendAsyncChatMessageRequest& setFiles(const vector<SendAsyncChatMessageRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SendAsyncChatMessageRequest& setFiles(vector<SendAsyncChatMessageRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SendAsyncChatMessageRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // reuseLastSession Field Functions 
    bool hasReuseLastSession() const { return this->reuseLastSession_ != nullptr;};
    void deleteReuseLastSession() { this->reuseLastSession_ = nullptr;};
    inline bool getReuseLastSession() const { DARABONBA_PTR_GET_DEFAULT(reuseLastSession_, false) };
    inline SendAsyncChatMessageRequest& setReuseLastSession(bool reuseLastSession) { DARABONBA_PTR_SET_VALUE(reuseLastSession_, reuseLastSession) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendAsyncChatMessageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline SendAsyncChatMessageRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskExecution Field Functions 
    bool hasTaskExecution() const { return this->taskExecution_ != nullptr;};
    void deleteTaskExecution() { this->taskExecution_ = nullptr;};
    inline const SendAsyncChatMessageRequest::TaskExecution & getTaskExecution() const { DARABONBA_PTR_GET_CONST(taskExecution_, SendAsyncChatMessageRequest::TaskExecution) };
    inline SendAsyncChatMessageRequest::TaskExecution getTaskExecution() { DARABONBA_PTR_GET(taskExecution_, SendAsyncChatMessageRequest::TaskExecution) };
    inline SendAsyncChatMessageRequest& setTaskExecution(const SendAsyncChatMessageRequest::TaskExecution & taskExecution) { DARABONBA_PTR_SET_VALUE(taskExecution_, taskExecution) };
    inline SendAsyncChatMessageRequest& setTaskExecution(SendAsyncChatMessageRequest::TaskExecution && taskExecution) { DARABONBA_PTR_SET_RVALUE(taskExecution_, taskExecution) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SendAsyncChatMessageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The message body from the user.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The message type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // The list of digital employee names. A single string can be passed for backward compatibility with the legacy format.
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    // Specifies whether to enable direct chat mode. If set to true, the regular scenario routing is skipped and the direct chat scenario is entered.
    shared_ptr<bool> directChat_ {};
    // The list of file references. Each item is an object in which fileId is required and is returned by uploadChatFile.
    shared_ptr<vector<SendAsyncChatMessageRequest::Files>> files_ {};
    // The abstract model tier. Valid values: quick, standard, and flagship. If not specified, a new session uses standard, and an existing session retains its current tier.
    shared_ptr<string> model_ {};
    // Specifies whether to reuse the most recent session of the digital employee when sessionId is not specified. This is designed for CLI scenarios. Default value: false, which creates a new session.
    shared_ptr<bool> reuseLastSession_ {};
    // The session ID. If not specified, a new session is created.
    shared_ptr<string> sessionId_ {};
    // Specifies whether to use streaming generation. This operation always generates backend content in streaming mode and writes it to the message stream. The value does not change the response structure.
    shared_ptr<bool> stream_ {};
    // The task execution metadata returned by executeScheduledTask. If specified, the request is processed through the task execution pipeline.
    shared_ptr<SendAsyncChatMessageRequest::TaskExecution> taskExecution_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
