// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SendChatMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageShrinkRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SendChatMessageShrinkRequest& obj) { 
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
    SendChatMessageShrinkRequest() = default ;
    SendChatMessageShrinkRequest(const SendChatMessageShrinkRequest &) = default ;
    SendChatMessageShrinkRequest(SendChatMessageShrinkRequest &&) = default ;
    SendChatMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageShrinkRequest() = default ;
    SendChatMessageShrinkRequest& operator=(const SendChatMessageShrinkRequest &) = default ;
    SendChatMessageShrinkRequest& operator=(SendChatMessageShrinkRequest &&) = default ;
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
    inline SendChatMessageShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline SendChatMessageShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // contextItemsShrink Field Functions 
    bool hasContextItemsShrink() const { return this->contextItemsShrink_ != nullptr;};
    void deleteContextItemsShrink() { this->contextItemsShrink_ = nullptr;};
    inline string getContextItemsShrink() const { DARABONBA_PTR_GET_DEFAULT(contextItemsShrink_, "") };
    inline SendChatMessageShrinkRequest& setContextItemsShrink(string contextItemsShrink) { DARABONBA_PTR_SET_VALUE(contextItemsShrink_, contextItemsShrink) };


    // digitalEmployeeNameShrink Field Functions 
    bool hasDigitalEmployeeNameShrink() const { return this->digitalEmployeeNameShrink_ != nullptr;};
    void deleteDigitalEmployeeNameShrink() { this->digitalEmployeeNameShrink_ = nullptr;};
    inline string getDigitalEmployeeNameShrink() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeNameShrink_, "") };
    inline SendChatMessageShrinkRequest& setDigitalEmployeeNameShrink(string digitalEmployeeNameShrink) { DARABONBA_PTR_SET_VALUE(digitalEmployeeNameShrink_, digitalEmployeeNameShrink) };


    // directChat Field Functions 
    bool hasDirectChat() const { return this->directChat_ != nullptr;};
    void deleteDirectChat() { this->directChat_ = nullptr;};
    inline bool getDirectChat() const { DARABONBA_PTR_GET_DEFAULT(directChat_, false) };
    inline SendChatMessageShrinkRequest& setDirectChat(bool directChat) { DARABONBA_PTR_SET_VALUE(directChat_, directChat) };


    // directMaxHistoryRounds Field Functions 
    bool hasDirectMaxHistoryRounds() const { return this->directMaxHistoryRounds_ != nullptr;};
    void deleteDirectMaxHistoryRounds() { this->directMaxHistoryRounds_ = nullptr;};
    inline     const Darabonba::Json & getDirectMaxHistoryRounds() const { DARABONBA_GET(directMaxHistoryRounds_) };
    Darabonba::Json & getDirectMaxHistoryRounds() { DARABONBA_GET(directMaxHistoryRounds_) };
    inline SendChatMessageShrinkRequest& setDirectMaxHistoryRounds(const Darabonba::Json & directMaxHistoryRounds) { DARABONBA_SET_VALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };
    inline SendChatMessageShrinkRequest& setDirectMaxHistoryRounds(Darabonba::Json && directMaxHistoryRounds) { DARABONBA_SET_RVALUE(directMaxHistoryRounds_, directMaxHistoryRounds) };


    // enableWebSearch Field Functions 
    bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
    void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
    inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
    inline SendChatMessageShrinkRequest& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string getFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline SendChatMessageShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // locale Field Functions 
    bool hasLocale() const { return this->locale_ != nullptr;};
    void deleteLocale() { this->locale_ = nullptr;};
    inline string getLocale() const { DARABONBA_PTR_GET_DEFAULT(locale_, "") };
    inline SendChatMessageShrinkRequest& setLocale(string locale) { DARABONBA_PTR_SET_VALUE(locale_, locale) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SendChatMessageShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // reuseLastSession Field Functions 
    bool hasReuseLastSession() const { return this->reuseLastSession_ != nullptr;};
    void deleteReuseLastSession() { this->reuseLastSession_ = nullptr;};
    inline bool getReuseLastSession() const { DARABONBA_PTR_GET_DEFAULT(reuseLastSession_, false) };
    inline SendChatMessageShrinkRequest& setReuseLastSession(bool reuseLastSession) { DARABONBA_PTR_SET_VALUE(reuseLastSession_, reuseLastSession) };


    // segmentsShrink Field Functions 
    bool hasSegmentsShrink() const { return this->segmentsShrink_ != nullptr;};
    void deleteSegmentsShrink() { this->segmentsShrink_ = nullptr;};
    inline string getSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(segmentsShrink_, "") };
    inline SendChatMessageShrinkRequest& setSegmentsShrink(string segmentsShrink) { DARABONBA_PTR_SET_VALUE(segmentsShrink_, segmentsShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendChatMessageShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline SendChatMessageShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskExecutionShrink Field Functions 
    bool hasTaskExecutionShrink() const { return this->taskExecutionShrink_ != nullptr;};
    void deleteTaskExecutionShrink() { this->taskExecutionShrink_ = nullptr;};
    inline string getTaskExecutionShrink() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionShrink_, "") };
    inline SendChatMessageShrinkRequest& setTaskExecutionShrink(string taskExecutionShrink) { DARABONBA_PTR_SET_VALUE(taskExecutionShrink_, taskExecutionShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SendChatMessageShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workMode Field Functions 
    bool hasWorkMode() const { return this->workMode_ != nullptr;};
    void deleteWorkMode() { this->workMode_ = nullptr;};
    inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
    inline SendChatMessageShrinkRequest& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


  protected:
    // The body of the user message.
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // The message type. Valid values: Text and Markdown.
    shared_ptr<string> contentType_ {};
    // The message or file entries referenced as context for the current turn.
    shared_ptr<string> contextItemsShrink_ {};
    // The list of digital employee names. For compatibility with the legacy format, a single string can be passed.
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // Specifies whether to enable direct connection mode. If set to true, regular scenario routing is skipped and the direct conversation scenario is entered directly.
    shared_ptr<bool> directChat_ {};
    // The number of recent complete direct Q&A rounds carried in the current turn, excluding the input of the current turn. This parameter takes effect only when workMode is set to direct or directChat is set to true. Valid values: JSON integers from 0 to 100. If omitted, the backend processes it as 0, carrying no history but still saving the current turn. Null, Boolean, string, decimal, and out-of-bounds values are processed through the original direct path, and the gateway retains the original values for backend determination. This field is ignored in work and ask modes. This parameter does not limit the history range when converted to the work mode.
    Darabonba::Json directMaxHistoryRounds_ {};
    // Specifies whether to enable web search. Default value: false. In the task execution scenario where taskExecution is passed, the task configuration prevails.
    shared_ptr<bool> enableWebSearch_ {};
    // The list of file references. Each item is an object, and the fileId parameter is required, which is returned by uploadChatFile.
    shared_ptr<string> filesShrink_ {};
    // The language for the current turn. Valid values: zh-CN and en-US. This parameter is used for API error messages and passed through to CodeAgent. If omitted, the current language behavior is retained and user settings are not modified.
    shared_ptr<string> locale_ {};
    // The abstract model tier. Valid values: quick, standard, and flagship. If omitted, standard is used for new sessions, and the current tier is retained for existing sessions.
    shared_ptr<string> model_ {};
    // Specifies whether to reuse the most recent session under the digital employee when sessionId is not passed, which applies to CLI scenarios. Default value: false, which indicates that a new session is created.
    shared_ptr<bool> reuseLastSession_ {};
    // The structured segments in the message, such as session or object mentions.
    shared_ptr<string> segmentsShrink_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
    // Specifies whether streaming output is enabled.
    shared_ptr<bool> stream_ {};
    // The task execution metadata returned by executeScheduledTask. If passed, the request is processed through the task execution pipeline.
    shared_ptr<string> taskExecutionShrink_ {};
    // The effective tenant ID.
    shared_ptr<string> tenantId_ {};
    // The session work mode. Valid values: ask (quick Q&A, which trims tools, skills, and connectors for single-turn direct answers), work (deep work, which is the default), and direct (direct connection mode at the request level, which does not start a sandbox and prevents context pollution, equivalent to directChat=true). The ask and work modes are session-level. The mode is fixed when a new session is created. Subsequent chats inherit the session mode by default. If the explicitly passed value is inconsistent with the session mode, a parameter error is returned. To switch modes, create a new session or fork the session. If ask is passed in multi-digital employee or task execution scenarios, it takes effect as work. This parameter is ignored when directChat is set to true.
    shared_ptr<string> workMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
