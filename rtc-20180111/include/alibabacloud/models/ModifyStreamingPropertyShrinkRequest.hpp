// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGPROPERTYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGPROPERTYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyStreamingPropertyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingPropertyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_TO_JSON(ViewSubscribers, viewSubscribersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingPropertyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_FROM_JSON(ViewSubscribers, viewSubscribersShrink_);
    };
    ModifyStreamingPropertyShrinkRequest() = default ;
    ModifyStreamingPropertyShrinkRequest(const ModifyStreamingPropertyShrinkRequest &) = default ;
    ModifyStreamingPropertyShrinkRequest(ModifyStreamingPropertyShrinkRequest &&) = default ;
    ModifyStreamingPropertyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingPropertyShrinkRequest() = default ;
    ModifyStreamingPropertyShrinkRequest& operator=(const ModifyStreamingPropertyShrinkRequest &) = default ;
    ModifyStreamingPropertyShrinkRequest& operator=(ModifyStreamingPropertyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->taskId_ == nullptr && return this->viewContent_ == nullptr && return this->viewSubscribersShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyStreamingPropertyShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ModifyStreamingPropertyShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyStreamingPropertyShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // viewContent Field Functions 
    bool hasViewContent() const { return this->viewContent_ != nullptr;};
    void deleteViewContent() { this->viewContent_ = nullptr;};
    inline string viewContent() const { DARABONBA_PTR_GET_DEFAULT(viewContent_, "") };
    inline ModifyStreamingPropertyShrinkRequest& setViewContent(string viewContent) { DARABONBA_PTR_SET_VALUE(viewContent_, viewContent) };


    // viewSubscribersShrink Field Functions 
    bool hasViewSubscribersShrink() const { return this->viewSubscribersShrink_ != nullptr;};
    void deleteViewSubscribersShrink() { this->viewSubscribersShrink_ = nullptr;};
    inline string viewSubscribersShrink() const { DARABONBA_PTR_GET_DEFAULT(viewSubscribersShrink_, "") };
    inline ModifyStreamingPropertyShrinkRequest& setViewSubscribersShrink(string viewSubscribersShrink) { DARABONBA_PTR_SET_VALUE(viewSubscribersShrink_, viewSubscribersShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> viewContent_ = nullptr;
    // ViewSubscribers。
    std::shared_ptr<string> viewSubscribersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
