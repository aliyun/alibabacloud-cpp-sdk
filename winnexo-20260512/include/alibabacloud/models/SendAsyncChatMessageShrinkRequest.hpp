// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDASYNCCHATMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendAsyncChatMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAsyncChatMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(contextItems, contextItemsShrink_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(directChat, directChat_);
      DARABONBA_ANY_TO_JSON(directMaxHistoryRounds, directMaxHistoryRounds_);
      DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_TO_JSON(files, filesShrink_);
      DARABONBA_PTR_TO_JSON(locale, locale_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_TO_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecutionShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(workMode, workMode_);
    };
    friend void from_json(const Darabonba::Json& j, SendAsyncChatMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(contextItems, contextItemsShrink_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(directChat, directChat_);
      DARABONBA_ANY_FROM_JSON(directMaxHistoryRounds, directMaxHistoryRounds_);
      DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
      DARABONBA_PTR_FROM_JSON(files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(locale, locale_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_FROM_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecutionShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(workMode, workMode_);
    };
    SendAsyncChatMessageShrinkRequest() = default ;
    SendAsyncChatMessageShrinkRequest(const SendAsyncChatMessageShrinkRequest &) = default ;
    SendAsyncChatMessageShrinkRequest(SendAsyncChatMessageShrinkRequest &&) = default ;
    SendAsyncChatMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAsyncChatMessageShrinkRequest() = default ;
    SendAsyncChatMessageShrinkRequest& operator=(const SendAsyncChatMessageShrinkRequest &) = default ;
    SendAsyncChatMessageShrinkRequest& operator=(SendAsyncChatMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->contextItemsShrink_ == nullptr && this->digitalEmployeeNameShrink_ == nullptr && this->directChat_ == nullptr && this->directMaxHistoryRounds_ == nullptr
        && this->enableWebSearch_ == nullptr && this->filesShrink_ == nullptr && this->locale_ == nullptr && this->model_ == nullptr && this->reuseLastSession_ == nullptr
        && this->segmentsShrink_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->taskExecutionShrink_ == nullptr && this->tenantId_ == nullptr
        && this->workMode_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SendAsyncChatMessageShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendAsyncChatMessageShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // contextItemsShrink Field Functions 
    bool hasContextItemsShrink() const { return this->contextItemsShrink_ != nullptr;};
    void deleteContextItemsShrink() { this->contextItemsShrink_ = nullptr;};
    inline string getContextItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(contextItemsShrink_, "") };
    inline SendAsyncChatMessageShrinkRequest& setContextItemsShrink(string contextItemsShrink) { DARABONBA_PTR_SET_VALUE(contextItemsShrink_, contextItemsShrink) };


    // digitalEmployeeNameShrink Field Functions 
    bool hasDigitalEmployeeNameShrink() const { return this->digitalEmployeeNameShrink_ != nullptr;};
    void deleteDigitalEmployeeNameShrink() { this->digitalEmployeeNameShrink_ = nullptr;};
    inline string getDigitalEmployeeNameShrink() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeNameShrink_, "") };
    inline SendAsyncChatMessageShrinkRequest& setDigitalEmployeeNameShrink(string digitalEmployeeNameShrink) { DARABONBA_PTR_SET_VALUE(digitalEmployeeNameShrink_, digitalEmployeeNameShrink) };


    // directChat Field Functions 
    bool hasDirectChat() const { return this->directChat_ != nullptr;};
    void deleteDirectChat() { this->directChat_ = nullptr;};
    inline bool getDirectChat() const { DARABONBA_PTR_GET_DEFAULT(directChat_, false) };
    inline SendAsyncChatMessageShrinkRequest& setDirectChat(bool directChat) { DARABONBA_PTR_SET_VALUE(directChat_, directChat) };


    // directMaxHistoryRounds Field Functions 
    bool hasDirectMaxHistoryRounds() const { return this->directMaxHistoryRounds_ != nullptr;};
    void deleteDirectMaxHistoryRounds() { this->directMaxHistoryRounds_ = nullptr;};
    inline     const Darabonba::Json & getDirectMaxHistoryRounds() const { DARABONBA_GET(directMaxHistoryRounds_) };
    Darabonba::Json & getDirectMaxHistoryRounds() { DARABONBA_GET(directMaxHistoryRounds_) };
    inline SendAsyncChatMessageShrinkRequest& setDirectMaxHistoryRounds(const Darabonba::Json & directMaxHistoryRounds) { DARABONBA_SET_VALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };
    inline SendAsyncChatMessageShrinkRequest& setDirectMaxHistoryRounds(Darabonba::Json && directMaxHistoryRounds) { DARABONBA_SET_RVALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };


    // enableWebSearch Field Functions 
    bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
    void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
    inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
    inline SendAsyncChatMessageShrinkRequest& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string getFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline SendAsyncChatMessageShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline SendAsyncChatMessageShrinkRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SendAsyncChatMessageShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // reuseLastSession Field Functions 
    bool hasReuseLastSession() const { return this->reuseLastSession_ != nullptr;};
    void deleteReuseLastSession() { this->reuseLastSession_ = nullptr;};
    inline bool getReuseLastSession() const { DARABONBA_PTR_GET_DEFAULT(reuseLastSession_, false) };
    inline SendAsyncChatMessageShrinkRequest& setReuseLastSession(bool reuseLastSession) { DARABONBA_PTR_SET_VALUE(reuseLastSession_, reuseLastSession) };


    // segmentsShrink Field Functions 
    bool hasSegmentsShrink() const { return this->segmentsShrink_ != nullptr;};
    void deleteSegmentsShrink() { this->segmentsShrink_ = nullptr;};
    inline string getSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(segmentsShrink_, "") };
    inline SendAsyncChatMessageShrinkRequest& setSegmentsShrink(string segmentsShrink) { DARABONBA_PTR_SET_VALUE(segmentsShrink_, segmentsShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendAsyncChatMessageShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline SendAsyncChatMessageShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskExecutionShrink Field Functions 
    bool hasTaskExecutionShrink() const { return this->taskExecutionShrink_ != nullptr;};
    void deleteTaskExecutionShrink() { this->taskExecutionShrink_ = nullptr;};
    inline string getTaskExecutionShrink() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionShrink_, "") };
    inline SendAsyncChatMessageShrinkRequest& setTaskExecutionShrink(string taskExecutionShrink) { DARABONBA_PTR_SET_VALUE(taskExecutionShrink_, taskExecutionShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SendAsyncChatMessageShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline SendAsyncChatMessageShrinkRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // The body of the user message.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The message type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // 作为本轮上下文引用的消息或文件条目
    shared_ptr<string> contextItemsShrink_ {};
    // The list of digital employee names. For compatibility with the legacy format, a single string can also be passed.
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // Specifies whether to enable direct connection mode. If set to true, regular scenario routing is skipped and the direct conversation scenario is used.
    shared_ptr<bool> directChat_ {};
    // 本轮携带的最近完整 direct 问答轮数，不含本轮输入。仅 workMode=direct 或 directChat=true 时生效。有效值为 0–100 的 JSON 整数，省略时由后端按 0 处理，不携带历史但仍保存当前轮。null、布尔值、字符串、小数及越界值按原 direct 路径处理，网关保留原始值供后端判定。work/ask 忽略此字段。该参数不限制转换为 work 时的历史范围
    Darabonba::Json directMaxHistoryRounds_ {};
    // Specifies whether to enable web search. Default value: false. In the task execution scenario where taskExecution is passed, the task configuration prevails.
    shared_ptr<bool> enableWebSearch_ {};
    // The list of file references. Each item is an object, and the fileId parameter is required. The fileId is returned by the uploadChatFile operation.
    shared_ptr<string> filesShrink_ {};
    // 本轮语言，可选 zh-CN、en-US，用于接口错误文案并透传给 CodeAgent；省略时沿用当前语言行为，不修改用户设置
    shared_ptr<string> locale_ {};
    // The abstract model tier. Valid values: quick, standard, and flagship. If not specified, standard is used for new sessions, and the current tier is retained for existing sessions.
    shared_ptr<string> model_ {};
    // Specifies whether to reuse the most recent session under the digital employee when sessionId is not specified. This is typically used in CLI scenarios. Default value: false, which means a new session is created.
    shared_ptr<bool> reuseLastSession_ {};
    // 消息中的结构化片段，例如会话或对象提及
    shared_ptr<string> segmentsShrink_ {};
    // The session ID. If not specified, a new session is created.
    shared_ptr<string> sessionId_ {};
    // Specifies whether to use streaming generation. This operation always generates backend content in streaming mode and writes it to the message stream. The value of this parameter does not change the response structure.
    shared_ptr<bool> stream_ {};
    // The task execution metadata returned by the executeScheduledTask operation. If passed, the request is processed through the task execution pipeline.
    shared_ptr<string> taskExecutionShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The session work mode. Valid values: ask (quick Q&A, which trims tools, skills, and connectors for single-turn direct answers), work (deep work, default), and direct (direct connection mode at the request level, which does not start a sandbox and prevents context pollution, equivalent to directChat=true). The ask and work modes are session-level. The mode is fixed when a new session is created and inherited by default in subsequent chats. If the explicitly passed value is inconsistent with the session mode, a parameter error is returned. To switch modes, create a new session or fork the current one. If ask is passed in multi-digital-employee or task execution scenarios, it takes effect as work. This parameter is ignored when directChat is set to true.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
