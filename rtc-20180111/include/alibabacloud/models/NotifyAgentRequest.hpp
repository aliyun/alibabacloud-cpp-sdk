// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class NotifyAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BackgroundMusic, backgroundMusic_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CustomAttribute, customAttribute_);
      DARABONBA_PTR_TO_JSON(Interruptable, interruptable_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BackgroundMusic, backgroundMusic_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CustomAttribute, customAttribute_);
      DARABONBA_PTR_FROM_JSON(Interruptable, interruptable_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    NotifyAgentRequest() = default ;
    NotifyAgentRequest(const NotifyAgentRequest &) = default ;
    NotifyAgentRequest(NotifyAgentRequest &&) = default ;
    NotifyAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyAgentRequest() = default ;
    NotifyAgentRequest& operator=(const NotifyAgentRequest &) = default ;
    NotifyAgentRequest& operator=(NotifyAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackgroundMusic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackgroundMusic& obj) { 
        DARABONBA_PTR_TO_JSON(format, format_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, BackgroundMusic& obj) { 
        DARABONBA_PTR_FROM_JSON(format, format_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      BackgroundMusic() = default ;
      BackgroundMusic(const BackgroundMusic &) = default ;
      BackgroundMusic(BackgroundMusic &&) = default ;
      BackgroundMusic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackgroundMusic() = default ;
      BackgroundMusic& operator=(const BackgroundMusic &) = default ;
      BackgroundMusic& operator=(BackgroundMusic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->format_ == nullptr
        && this->url_ == nullptr; };
      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline BackgroundMusic& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline BackgroundMusic& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> format_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->backgroundMusic_ == nullptr && this->channelId_ == nullptr && this->customAttribute_ == nullptr && this->interruptable_ == nullptr && this->message_ == nullptr
        && this->priority_ == nullptr && this->taskId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline NotifyAgentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgroundMusic Field Functions 
    bool hasBackgroundMusic() const { return this->backgroundMusic_ != nullptr;};
    void deleteBackgroundMusic() { this->backgroundMusic_ = nullptr;};
    inline const NotifyAgentRequest::BackgroundMusic & getBackgroundMusic() const { DARABONBA_PTR_GET_CONST(backgroundMusic_, NotifyAgentRequest::BackgroundMusic) };
    inline NotifyAgentRequest::BackgroundMusic getBackgroundMusic() { DARABONBA_PTR_GET(backgroundMusic_, NotifyAgentRequest::BackgroundMusic) };
    inline NotifyAgentRequest& setBackgroundMusic(const NotifyAgentRequest::BackgroundMusic & backgroundMusic) { DARABONBA_PTR_SET_VALUE(backgroundMusic_, backgroundMusic) };
    inline NotifyAgentRequest& setBackgroundMusic(NotifyAgentRequest::BackgroundMusic && backgroundMusic) { DARABONBA_PTR_SET_RVALUE(backgroundMusic_, backgroundMusic) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline NotifyAgentRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // customAttribute Field Functions 
    bool hasCustomAttribute() const { return this->customAttribute_ != nullptr;};
    void deleteCustomAttribute() { this->customAttribute_ = nullptr;};
    inline string getCustomAttribute() const { DARABONBA_PTR_GET_DEFAULT(customAttribute_, "") };
    inline NotifyAgentRequest& setCustomAttribute(string customAttribute) { DARABONBA_PTR_SET_VALUE(customAttribute_, customAttribute) };


    // interruptable Field Functions 
    bool hasInterruptable() const { return this->interruptable_ != nullptr;};
    void deleteInterruptable() { this->interruptable_ = nullptr;};
    inline bool getInterruptable() const { DARABONBA_PTR_GET_DEFAULT(interruptable_, false) };
    inline NotifyAgentRequest& setInterruptable(bool interruptable) { DARABONBA_PTR_SET_VALUE(interruptable_, interruptable) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline NotifyAgentRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline NotifyAgentRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline NotifyAgentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<NotifyAgentRequest::BackgroundMusic> backgroundMusic_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<string> customAttribute_ {};
    shared_ptr<bool> interruptable_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
