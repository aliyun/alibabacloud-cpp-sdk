// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTVIEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTVIEWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartViewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartViewShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ViewSubscribers, viewSubscribersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartViewShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ViewSubscribers, viewSubscribersShrink_);
    };
    StartViewShrinkRequest() = default ;
    StartViewShrinkRequest(const StartViewShrinkRequest &) = default ;
    StartViewShrinkRequest(StartViewShrinkRequest &&) = default ;
    StartViewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartViewShrinkRequest() = default ;
    StartViewShrinkRequest& operator=(const StartViewShrinkRequest &) = default ;
    StartViewShrinkRequest& operator=(StartViewShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionColor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionColor& obj) { 
        DARABONBA_PTR_TO_JSON(B, b_);
        DARABONBA_PTR_TO_JSON(G, g_);
        DARABONBA_PTR_TO_JSON(R, r_);
      };
      friend void from_json(const Darabonba::Json& j, RegionColor& obj) { 
        DARABONBA_PTR_FROM_JSON(B, b_);
        DARABONBA_PTR_FROM_JSON(G, g_);
        DARABONBA_PTR_FROM_JSON(R, r_);
      };
      RegionColor() = default ;
      RegionColor(const RegionColor &) = default ;
      RegionColor(RegionColor &&) = default ;
      RegionColor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionColor() = default ;
      RegionColor& operator=(const RegionColor &) = default ;
      RegionColor& operator=(RegionColor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
      // b Field Functions 
      bool hasB() const { return this->b_ != nullptr;};
      void deleteB() { this->b_ = nullptr;};
      inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
      inline RegionColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


      // g Field Functions 
      bool hasG() const { return this->g_ != nullptr;};
      void deleteG() { this->g_ = nullptr;};
      inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
      inline RegionColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


      // r Field Functions 
      bool hasR() const { return this->r_ != nullptr;};
      void deleteR() { this->r_ = nullptr;};
      inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
      inline RegionColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


    protected:
      // B。
      shared_ptr<int32_t> b_ {};
      // G。
      shared_ptr<int32_t> g_ {};
      // R。
      shared_ptr<int32_t> r_ {};
    };

    class BgColor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgColor& obj) { 
        DARABONBA_PTR_TO_JSON(B, b_);
        DARABONBA_PTR_TO_JSON(G, g_);
        DARABONBA_PTR_TO_JSON(R, r_);
      };
      friend void from_json(const Darabonba::Json& j, BgColor& obj) { 
        DARABONBA_PTR_FROM_JSON(B, b_);
        DARABONBA_PTR_FROM_JSON(G, g_);
        DARABONBA_PTR_FROM_JSON(R, r_);
      };
      BgColor() = default ;
      BgColor(const BgColor &) = default ;
      BgColor(BgColor &&) = default ;
      BgColor(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgColor() = default ;
      BgColor& operator=(const BgColor &) = default ;
      BgColor& operator=(BgColor &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->b_ == nullptr
        && this->g_ == nullptr && this->r_ == nullptr; };
      // b Field Functions 
      bool hasB() const { return this->b_ != nullptr;};
      void deleteB() { this->b_ = nullptr;};
      inline int32_t getB() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
      inline BgColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


      // g Field Functions 
      bool hasG() const { return this->g_ != nullptr;};
      void deleteG() { this->g_ = nullptr;};
      inline int32_t getG() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
      inline BgColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


      // r Field Functions 
      bool hasR() const { return this->r_ != nullptr;};
      void deleteR() { this->r_ = nullptr;};
      inline int32_t getR() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
      inline BgColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


    protected:
      // B。
      shared_ptr<int32_t> b_ {};
      // G。
      shared_ptr<int32_t> g_ {};
      // R。
      shared_ptr<int32_t> r_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->bgColor_ == nullptr && this->channelId_ == nullptr && this->cropMode_ == nullptr && this->regionColor_ == nullptr && this->startWithoutChannel_ == nullptr
        && this->startWithoutChannelWaitTime_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->viewContent_ == nullptr && this->viewSubscribersShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartViewShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartViewShrinkRequest::BgColor & getBgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartViewShrinkRequest::BgColor) };
    inline StartViewShrinkRequest::BgColor getBgColor() { DARABONBA_PTR_GET(bgColor_, StartViewShrinkRequest::BgColor) };
    inline StartViewShrinkRequest& setBgColor(const StartViewShrinkRequest::BgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartViewShrinkRequest& setBgColor(StartViewShrinkRequest::BgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartViewShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t getCropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartViewShrinkRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartViewShrinkRequest::RegionColor & getRegionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartViewShrinkRequest::RegionColor) };
    inline StartViewShrinkRequest::RegionColor getRegionColor() { DARABONBA_PTR_GET(regionColor_, StartViewShrinkRequest::RegionColor) };
    inline StartViewShrinkRequest& setRegionColor(const StartViewShrinkRequest::RegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartViewShrinkRequest& setRegionColor(StartViewShrinkRequest::RegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool getStartWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartViewShrinkRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t getStartWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartViewShrinkRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartViewShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartViewShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // viewContent Field Functions 
    bool hasViewContent() const { return this->viewContent_ != nullptr;};
    void deleteViewContent() { this->viewContent_ = nullptr;};
    inline string getViewContent() const { DARABONBA_PTR_GET_DEFAULT(viewContent_, "") };
    inline StartViewShrinkRequest& setViewContent(string viewContent) { DARABONBA_PTR_SET_VALUE(viewContent_, viewContent) };


    // viewSubscribersShrink Field Functions 
    bool hasViewSubscribersShrink() const { return this->viewSubscribersShrink_ != nullptr;};
    void deleteViewSubscribersShrink() { this->viewSubscribersShrink_ = nullptr;};
    inline string getViewSubscribersShrink() const { DARABONBA_PTR_GET_DEFAULT(viewSubscribersShrink_, "") };
    inline StartViewShrinkRequest& setViewSubscribersShrink(string viewSubscribersShrink) { DARABONBA_PTR_SET_VALUE(viewSubscribersShrink_, viewSubscribersShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<StartViewShrinkRequest::BgColor> bgColor_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<int32_t> cropMode_ {};
    shared_ptr<StartViewShrinkRequest::RegionColor> regionColor_ {};
    shared_ptr<bool> startWithoutChannel_ {};
    shared_ptr<int32_t> startWithoutChannelWaitTime_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<string> viewContent_ {};
    shared_ptr<string> viewSubscribersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
