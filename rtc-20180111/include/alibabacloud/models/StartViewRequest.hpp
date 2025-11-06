// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartViewRequestBgColor.hpp>
#include <alibabacloud/models/StartViewRequestRegionColor.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_TO_JSON(ViewSubscribers, viewSubscribers_);
    };
    friend void from_json(const Darabonba::Json& j, StartViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(ViewContent, viewContent_);
      DARABONBA_PTR_FROM_JSON(ViewSubscribers, viewSubscribers_);
    };
    StartViewRequest() = default ;
    StartViewRequest(const StartViewRequest &) = default ;
    StartViewRequest(StartViewRequest &&) = default ;
    StartViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartViewRequest() = default ;
    StartViewRequest& operator=(const StartViewRequest &) = default ;
    StartViewRequest& operator=(StartViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->bgColor_ == nullptr && return this->channelId_ == nullptr && return this->cropMode_ == nullptr && return this->regionColor_ == nullptr && return this->startWithoutChannel_ == nullptr
        && return this->startWithoutChannelWaitTime_ == nullptr && return this->taskId_ == nullptr && return this->templateId_ == nullptr && return this->viewContent_ == nullptr && return this->viewSubscribers_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartViewRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartViewRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartViewRequestBgColor) };
    inline StartViewRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, StartViewRequestBgColor) };
    inline StartViewRequest& setBgColor(const StartViewRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartViewRequest& setBgColor(StartViewRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartViewRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartViewRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartViewRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartViewRequestRegionColor) };
    inline StartViewRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, StartViewRequestRegionColor) };
    inline StartViewRequest& setRegionColor(const StartViewRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartViewRequest& setRegionColor(StartViewRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool startWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartViewRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t startWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartViewRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartViewRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartViewRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // viewContent Field Functions 
    bool hasViewContent() const { return this->viewContent_ != nullptr;};
    void deleteViewContent() { this->viewContent_ = nullptr;};
    inline string viewContent() const { DARABONBA_PTR_GET_DEFAULT(viewContent_, "") };
    inline StartViewRequest& setViewContent(string viewContent) { DARABONBA_PTR_SET_VALUE(viewContent_, viewContent) };


    // viewSubscribers Field Functions 
    bool hasViewSubscribers() const { return this->viewSubscribers_ != nullptr;};
    void deleteViewSubscribers() { this->viewSubscribers_ = nullptr;};
    inline const vector<string> & viewSubscribers() const { DARABONBA_PTR_GET_CONST(viewSubscribers_, vector<string>) };
    inline vector<string> viewSubscribers() { DARABONBA_PTR_GET(viewSubscribers_, vector<string>) };
    inline StartViewRequest& setViewSubscribers(const vector<string> & viewSubscribers) { DARABONBA_PTR_SET_VALUE(viewSubscribers_, viewSubscribers) };
    inline StartViewRequest& setViewSubscribers(vector<string> && viewSubscribers) { DARABONBA_PTR_SET_RVALUE(viewSubscribers_, viewSubscribers) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<StartViewRequestBgColor> bgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<StartViewRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<bool> startWithoutChannel_ = nullptr;
    std::shared_ptr<int32_t> startWithoutChannelWaitTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> viewContent_ = nullptr;
    std::shared_ptr<vector<string>> viewSubscribers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
