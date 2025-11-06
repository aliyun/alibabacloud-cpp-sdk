// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTREAMINGPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTREAMINGPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyStreamingPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStreamingPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_TO_JSON(ViewSubscribers, viewSubscribers_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStreamingPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_FROM_JSON(ViewSubscribers, viewSubscribers_);
    };
    ModifyStreamingPropertyRequest() = default ;
    ModifyStreamingPropertyRequest(const ModifyStreamingPropertyRequest &) = default ;
    ModifyStreamingPropertyRequest(ModifyStreamingPropertyRequest &&) = default ;
    ModifyStreamingPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStreamingPropertyRequest() = default ;
    ModifyStreamingPropertyRequest& operator=(const ModifyStreamingPropertyRequest &) = default ;
    ModifyStreamingPropertyRequest& operator=(ModifyStreamingPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->taskId_ == nullptr && return this->viewContent_ == nullptr && return this->viewSubscribers_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyStreamingPropertyRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ModifyStreamingPropertyRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyStreamingPropertyRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // viewContent Field Functions 
    bool hasViewContent() const { return this->viewContent_ != nullptr;};
    void deleteViewContent() { this->viewContent_ = nullptr;};
    inline string viewContent() const { DARABONBA_PTR_GET_DEFAULT(viewContent_, "") };
    inline ModifyStreamingPropertyRequest& setViewContent(string viewContent) { DARABONBA_PTR_SET_VALUE(viewContent_, viewContent) };


    // viewSubscribers Field Functions 
    bool hasViewSubscribers() const { return this->viewSubscribers_ != nullptr;};
    void deleteViewSubscribers() { this->viewSubscribers_ = nullptr;};
    inline const vector<string> & viewSubscribers() const { DARABONBA_PTR_GET_CONST(viewSubscribers_, vector<string>) };
    inline vector<string> viewSubscribers() { DARABONBA_PTR_GET(viewSubscribers_, vector<string>) };
    inline ModifyStreamingPropertyRequest& setViewSubscribers(const vector<string> & viewSubscribers) { DARABONBA_PTR_SET_VALUE(viewSubscribers_, viewSubscribers) };
    inline ModifyStreamingPropertyRequest& setViewSubscribers(vector<string> && viewSubscribers) { DARABONBA_PTR_SET_RVALUE(viewSubscribers_, viewSubscribers) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> viewContent_ = nullptr;
    // ViewSubscribers。
    std::shared_ptr<vector<string>> viewSubscribers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
