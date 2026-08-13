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
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(directChat, directChat_);
      DARABONBA_PTR_TO_JSON(files, filesShrink_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(taskExecution, taskExecutionShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(directChat, directChat_);
      DARABONBA_PTR_FROM_JSON(files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(reuseLastSession, reuseLastSession_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(taskExecution, taskExecutionShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
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
        && this->contentType_ == nullptr && this->digitalEmployeeNameShrink_ == nullptr && this->directChat_ == nullptr && this->filesShrink_ == nullptr && this->model_ == nullptr
        && this->reuseLastSession_ == nullptr && this->sessionId_ == nullptr && this->stream_ == nullptr && this->taskExecutionShrink_ == nullptr && this->tenantId_ == nullptr; };
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


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string getFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline SendChatMessageShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


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


  protected:
    // 用户消息正文
    // 
    // This parameter is required.
    shared_ptr<string> content_ {};
    // 消息类型: Text / Markdown
    shared_ptr<string> contentType_ {};
    // 数字员工名称列表（兼容旧格式可传单个字符串）
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // 是否启用直连模式；true 时跳过常规场景路由，直接进入直连对话场景
    shared_ptr<bool> directChat_ {};
    // 文件引用列表；每项为对象，fileId 必传（由 uploadChatFile 返回）
    shared_ptr<string> filesShrink_ {};
    // 抽象模型档位（quick / standard / flagship）；缺省时新会话用 standard，已有会话沿用会话当前档位
    shared_ptr<string> model_ {};
    // 不传 sessionId 时是否复用该数字员工下最近一个会话（CLI 场景），缺省 false 即新建会话
    shared_ptr<bool> reuseLastSession_ {};
    // 会话 ID
    shared_ptr<string> sessionId_ {};
    // 是否流式返回，默认True
    shared_ptr<bool> stream_ {};
    // executeScheduledTask 返回的任务执行元数据；传入后按任务执行链路处理
    shared_ptr<string> taskExecutionShrink_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
