// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONDETAILRESPONSEBODY_HPP_
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
  class GetScheduledTaskExecutionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskExecutionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(completedAt, completedAt_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(executionId, executionId_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(outputContent, outputContent_);
      DARABONBA_PTR_TO_JSON(pushResult, pushResult_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skillCodes, skillCodes_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(triggerInfo, triggerInfo_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskExecutionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(completedAt, completedAt_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(executionId, executionId_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(outputContent, outputContent_);
      DARABONBA_PTR_FROM_JSON(pushResult, pushResult_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skillCodes, skillCodes_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(triggerInfo, triggerInfo_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    GetScheduledTaskExecutionDetailResponseBody() = default ;
    GetScheduledTaskExecutionDetailResponseBody(const GetScheduledTaskExecutionDetailResponseBody &) = default ;
    GetScheduledTaskExecutionDetailResponseBody(GetScheduledTaskExecutionDetailResponseBody &&) = default ;
    GetScheduledTaskExecutionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskExecutionDetailResponseBody() = default ;
    GetScheduledTaskExecutionDetailResponseBody& operator=(const GetScheduledTaskExecutionDetailResponseBody &) = default ;
    GetScheduledTaskExecutionDetailResponseBody& operator=(GetScheduledTaskExecutionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TriggerInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TriggerInfo& obj) { 
        DARABONBA_PTR_TO_JSON(triggeredBy, triggeredBy_);
      };
      friend void from_json(const Darabonba::Json& j, TriggerInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(triggeredBy, triggeredBy_);
      };
      TriggerInfo() = default ;
      TriggerInfo(const TriggerInfo &) = default ;
      TriggerInfo(TriggerInfo &&) = default ;
      TriggerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TriggerInfo() = default ;
      TriggerInfo& operator=(const TriggerInfo &) = default ;
      TriggerInfo& operator=(TriggerInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->triggeredBy_ == nullptr; };
      // triggeredBy Field Functions 
      bool hasTriggeredBy() const { return this->triggeredBy_ != nullptr;};
      void deleteTriggeredBy() { this->triggeredBy_ = nullptr;};
      inline string getTriggeredBy() const { DARABONBA_PTR_GET_DEFAULT(triggeredBy_, "") };
      inline TriggerInfo& setTriggeredBy(string triggeredBy) { DARABONBA_PTR_SET_VALUE(triggeredBy_, triggeredBy) };


    protected:
      // 触发执行的用户标识
      shared_ptr<string> triggeredBy_ {};
    };

    class Metadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metadata& obj) { 
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_ANY_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Metadata& obj) { 
        DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
        DARABONBA_ANY_FROM_JSON(usage, usage_);
      };
      Metadata() = default ;
      Metadata(const Metadata &) = default ;
      Metadata(Metadata &&) = default ;
      Metadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metadata() = default ;
      Metadata& operator=(const Metadata &) = default ;
      Metadata& operator=(Metadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->usage_ == nullptr; };
      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Metadata& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline       const Darabonba::Json & getUsage() const { DARABONBA_GET(usage_) };
      Darabonba::Json & getUsage() { DARABONBA_GET(usage_) };
      inline Metadata& setUsage(const Darabonba::Json & usage) { DARABONBA_SET_VALUE(usage_, usage) };
      inline Metadata& setUsage(Darabonba::Json && usage) { DARABONBA_SET_RVALUE(usage_, usage) };


    protected:
      // 会话 ID
      shared_ptr<string> sessionId_ {};
      // 执行结果推送状态（多频道时为列表）
      Darabonba::Json usage_ {};
    };

    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(path, path_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Files& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // 文件名
      shared_ptr<string> name_ {};
      // 文件 OSS URL
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->completedAt_ == nullptr && this->content_ == nullptr && this->creator_ == nullptr && this->digitalEmployeeName_ == nullptr && this->errorMessage_ == nullptr
        && this->executionId_ == nullptr && this->files_ == nullptr && this->gmtCreate_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr
        && this->outputContent_ == nullptr && this->pushResult_ == nullptr && this->requestId_ == nullptr && this->skillCodes_ == nullptr && this->startedAt_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->title_ == nullptr && this->triggerInfo_ == nullptr && this->triggerType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // completedAt Field Functions 
    bool hasCompletedAt() const { return this->completedAt_ != nullptr;};
    void deleteCompletedAt() { this->completedAt_ = nullptr;};
    inline string getCompletedAt() const { DARABONBA_PTR_GET_DEFAULT(completedAt_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setCompletedAt(string completedAt) { DARABONBA_PTR_SET_VALUE(completedAt_, completedAt) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline const vector<string> & getDigitalEmployeeName() const { DARABONBA_PTR_GET_CONST(digitalEmployeeName_, vector<string>) };
    inline vector<string> getDigitalEmployeeName() { DARABONBA_PTR_GET(digitalEmployeeName_, vector<string>) };
    inline GetScheduledTaskExecutionDetailResponseBody& setDigitalEmployeeName(const vector<string> & digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };
    inline GetScheduledTaskExecutionDetailResponseBody& setDigitalEmployeeName(vector<string> && digitalEmployeeName) { DARABONBA_PTR_SET_RVALUE(digitalEmployeeName_, digitalEmployeeName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<GetScheduledTaskExecutionDetailResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<GetScheduledTaskExecutionDetailResponseBody::Files>) };
    inline vector<GetScheduledTaskExecutionDetailResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<GetScheduledTaskExecutionDetailResponseBody::Files>) };
    inline GetScheduledTaskExecutionDetailResponseBody& setFiles(const vector<GetScheduledTaskExecutionDetailResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline GetScheduledTaskExecutionDetailResponseBody& setFiles(vector<GetScheduledTaskExecutionDetailResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const GetScheduledTaskExecutionDetailResponseBody::Metadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, GetScheduledTaskExecutionDetailResponseBody::Metadata) };
    inline GetScheduledTaskExecutionDetailResponseBody::Metadata getMetadata() { DARABONBA_PTR_GET(metadata_, GetScheduledTaskExecutionDetailResponseBody::Metadata) };
    inline GetScheduledTaskExecutionDetailResponseBody& setMetadata(const GetScheduledTaskExecutionDetailResponseBody::Metadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline GetScheduledTaskExecutionDetailResponseBody& setMetadata(GetScheduledTaskExecutionDetailResponseBody::Metadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // outputContent Field Functions 
    bool hasOutputContent() const { return this->outputContent_ != nullptr;};
    void deleteOutputContent() { this->outputContent_ = nullptr;};
    inline string getOutputContent() const { DARABONBA_PTR_GET_DEFAULT(outputContent_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setOutputContent(string outputContent) { DARABONBA_PTR_SET_VALUE(outputContent_, outputContent) };


    // pushResult Field Functions 
    bool hasPushResult() const { return this->pushResult_ != nullptr;};
    void deletePushResult() { this->pushResult_ = nullptr;};
    inline string getPushResult() const { DARABONBA_PTR_GET_DEFAULT(pushResult_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setPushResult(string pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillCodes Field Functions 
    bool hasSkillCodes() const { return this->skillCodes_ != nullptr;};
    void deleteSkillCodes() { this->skillCodes_ = nullptr;};
    inline const vector<string> & getSkillCodes() const { DARABONBA_PTR_GET_CONST(skillCodes_, vector<string>) };
    inline vector<string> getSkillCodes() { DARABONBA_PTR_GET(skillCodes_, vector<string>) };
    inline GetScheduledTaskExecutionDetailResponseBody& setSkillCodes(const vector<string> & skillCodes) { DARABONBA_PTR_SET_VALUE(skillCodes_, skillCodes) };
    inline GetScheduledTaskExecutionDetailResponseBody& setSkillCodes(vector<string> && skillCodes) { DARABONBA_PTR_SET_RVALUE(skillCodes_, skillCodes) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // triggerInfo Field Functions 
    bool hasTriggerInfo() const { return this->triggerInfo_ != nullptr;};
    void deleteTriggerInfo() { this->triggerInfo_ = nullptr;};
    inline const GetScheduledTaskExecutionDetailResponseBody::TriggerInfo & getTriggerInfo() const { DARABONBA_PTR_GET_CONST(triggerInfo_, GetScheduledTaskExecutionDetailResponseBody::TriggerInfo) };
    inline GetScheduledTaskExecutionDetailResponseBody::TriggerInfo getTriggerInfo() { DARABONBA_PTR_GET(triggerInfo_, GetScheduledTaskExecutionDetailResponseBody::TriggerInfo) };
    inline GetScheduledTaskExecutionDetailResponseBody& setTriggerInfo(const GetScheduledTaskExecutionDetailResponseBody::TriggerInfo & triggerInfo) { DARABONBA_PTR_SET_VALUE(triggerInfo_, triggerInfo) };
    inline GetScheduledTaskExecutionDetailResponseBody& setTriggerInfo(GetScheduledTaskExecutionDetailResponseBody::TriggerInfo && triggerInfo) { DARABONBA_PTR_SET_RVALUE(triggerInfo_, triggerInfo) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline GetScheduledTaskExecutionDetailResponseBody& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 完成时间 ISO8601
    shared_ptr<string> completedAt_ {};
    // 执行完整内容
    shared_ptr<string> content_ {};
    // 创建人
    shared_ptr<string> creator_ {};
    // digitalEmployeeName
    shared_ptr<vector<string>> digitalEmployeeName_ {};
    // 错误信息
    shared_ptr<string> errorMessage_ {};
    // 执行 ID
    shared_ptr<string> executionId_ {};
    shared_ptr<vector<GetScheduledTaskExecutionDetailResponseBody::Files>> files_ {};
    // 创建时间 ISO8601
    shared_ptr<string> gmtCreate_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    shared_ptr<GetScheduledTaskExecutionDetailResponseBody::Metadata> metadata_ {};
    // 结构化输出内容
    shared_ptr<string> outputContent_ {};
    shared_ptr<string> pushResult_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // skillCodes
    shared_ptr<vector<string>> skillCodes_ {};
    // 开始时间 ISO8601
    shared_ptr<string> startedAt_ {};
    // 执行状态
    shared_ptr<string> status_ {};
    // 任务 ID
    shared_ptr<string> taskId_ {};
    // 执行结果标题
    shared_ptr<string> title_ {};
    shared_ptr<GetScheduledTaskExecutionDetailResponseBody::TriggerInfo> triggerInfo_ {};
    // 触发类型
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
