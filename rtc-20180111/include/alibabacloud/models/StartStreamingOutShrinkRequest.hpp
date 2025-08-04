// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartStreamingOutShrinkRequestBackgrounds.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestBgColor.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestClockWidgets.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestImages.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestPanes.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestRegionColor.hpp>
#include <alibabacloud/models/StartStreamingOutShrinkRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartStreamingOutShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
      DARABONBA_PTR_TO_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_TO_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_TO_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_TO_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_TO_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, StartStreamingOutShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
      DARABONBA_PTR_FROM_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_FROM_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_FROM_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_FROM_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_FROM_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    StartStreamingOutShrinkRequest() = default ;
    StartStreamingOutShrinkRequest(const StartStreamingOutShrinkRequest &) = default ;
    StartStreamingOutShrinkRequest(StartStreamingOutShrinkRequest &&) = default ;
    StartStreamingOutShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutShrinkRequest() = default ;
    StartStreamingOutShrinkRequest& operator=(const StartStreamingOutShrinkRequest &) = default ;
    StartStreamingOutShrinkRequest& operator=(StartStreamingOutShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotation_ != nullptr
        && this->appId_ != nullptr && this->backgrounds_ != nullptr && this->bgColor_ != nullptr && this->channelId_ != nullptr && this->clockWidgets_ != nullptr
        && this->cropMode_ != nullptr && this->images_ != nullptr && this->layoutSpecifiedUsersShrink_ != nullptr && this->panes_ != nullptr && this->regionColor_ != nullptr
        && this->reservePaneForNoCameraUser_ != nullptr && this->showDefaultBackgroundOnMute_ != nullptr && this->specMixedUserList_ != nullptr && this->startWithoutChannel_ != nullptr && this->startWithoutChannelWaitTime_ != nullptr
        && this->subHighResolutionStream_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr && this->texts_ != nullptr && this->url_ != nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string annotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline StartStreamingOutShrinkRequest& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartStreamingOutShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartStreamingOutShrinkRequestBackgrounds>) };
    inline vector<StartStreamingOutShrinkRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartStreamingOutShrinkRequestBackgrounds>) };
    inline StartStreamingOutShrinkRequest& setBackgrounds(const vector<StartStreamingOutShrinkRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartStreamingOutShrinkRequest& setBackgrounds(vector<StartStreamingOutShrinkRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartStreamingOutShrinkRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartStreamingOutShrinkRequestBgColor) };
    inline StartStreamingOutShrinkRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, StartStreamingOutShrinkRequestBgColor) };
    inline StartStreamingOutShrinkRequest& setBgColor(const StartStreamingOutShrinkRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartStreamingOutShrinkRequest& setBgColor(StartStreamingOutShrinkRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartStreamingOutShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartStreamingOutShrinkRequestClockWidgets>) };
    inline vector<StartStreamingOutShrinkRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartStreamingOutShrinkRequestClockWidgets>) };
    inline StartStreamingOutShrinkRequest& setClockWidgets(const vector<StartStreamingOutShrinkRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartStreamingOutShrinkRequest& setClockWidgets(vector<StartStreamingOutShrinkRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartStreamingOutShrinkRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<StartStreamingOutShrinkRequestImages>) };
    inline vector<StartStreamingOutShrinkRequestImages> images() { DARABONBA_PTR_GET(images_, vector<StartStreamingOutShrinkRequestImages>) };
    inline StartStreamingOutShrinkRequest& setImages(const vector<StartStreamingOutShrinkRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartStreamingOutShrinkRequest& setImages(vector<StartStreamingOutShrinkRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string layoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline StartStreamingOutShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<StartStreamingOutShrinkRequestPanes>) };
    inline vector<StartStreamingOutShrinkRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<StartStreamingOutShrinkRequestPanes>) };
    inline StartStreamingOutShrinkRequest& setPanes(const vector<StartStreamingOutShrinkRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline StartStreamingOutShrinkRequest& setPanes(vector<StartStreamingOutShrinkRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartStreamingOutShrinkRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartStreamingOutShrinkRequestRegionColor) };
    inline StartStreamingOutShrinkRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, StartStreamingOutShrinkRequestRegionColor) };
    inline StartStreamingOutShrinkRequest& setRegionColor(const StartStreamingOutShrinkRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartStreamingOutShrinkRequest& setRegionColor(StartStreamingOutShrinkRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // reservePaneForNoCameraUser Field Functions 
    bool hasReservePaneForNoCameraUser() const { return this->reservePaneForNoCameraUser_ != nullptr;};
    void deleteReservePaneForNoCameraUser() { this->reservePaneForNoCameraUser_ = nullptr;};
    inline bool reservePaneForNoCameraUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForNoCameraUser_, false) };
    inline StartStreamingOutShrinkRequest& setReservePaneForNoCameraUser(bool reservePaneForNoCameraUser) { DARABONBA_PTR_SET_VALUE(reservePaneForNoCameraUser_, reservePaneForNoCameraUser) };


    // showDefaultBackgroundOnMute Field Functions 
    bool hasShowDefaultBackgroundOnMute() const { return this->showDefaultBackgroundOnMute_ != nullptr;};
    void deleteShowDefaultBackgroundOnMute() { this->showDefaultBackgroundOnMute_ = nullptr;};
    inline bool showDefaultBackgroundOnMute() const { DARABONBA_PTR_GET_DEFAULT(showDefaultBackgroundOnMute_, false) };
    inline StartStreamingOutShrinkRequest& setShowDefaultBackgroundOnMute(bool showDefaultBackgroundOnMute) { DARABONBA_PTR_SET_VALUE(showDefaultBackgroundOnMute_, showDefaultBackgroundOnMute) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & specMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> specMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline StartStreamingOutShrinkRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline StartStreamingOutShrinkRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool startWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartStreamingOutShrinkRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t startWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartStreamingOutShrinkRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // subHighResolutionStream Field Functions 
    bool hasSubHighResolutionStream() const { return this->subHighResolutionStream_ != nullptr;};
    void deleteSubHighResolutionStream() { this->subHighResolutionStream_ = nullptr;};
    inline bool subHighResolutionStream() const { DARABONBA_PTR_GET_DEFAULT(subHighResolutionStream_, false) };
    inline StartStreamingOutShrinkRequest& setSubHighResolutionStream(bool subHighResolutionStream) { DARABONBA_PTR_SET_VALUE(subHighResolutionStream_, subHighResolutionStream) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartStreamingOutShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartStreamingOutShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<StartStreamingOutShrinkRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<StartStreamingOutShrinkRequestTexts>) };
    inline vector<StartStreamingOutShrinkRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<StartStreamingOutShrinkRequestTexts>) };
    inline StartStreamingOutShrinkRequest& setTexts(const vector<StartStreamingOutShrinkRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartStreamingOutShrinkRequest& setTexts(vector<StartStreamingOutShrinkRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartStreamingOutShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> annotation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutShrinkRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<StartStreamingOutShrinkRequestBgColor> bgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutShrinkRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutShrinkRequestImages>> images_ = nullptr;
    std::shared_ptr<string> layoutSpecifiedUsersShrink_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutShrinkRequestPanes>> panes_ = nullptr;
    std::shared_ptr<StartStreamingOutShrinkRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<bool> reservePaneForNoCameraUser_ = nullptr;
    std::shared_ptr<bool> showDefaultBackgroundOnMute_ = nullptr;
    std::shared_ptr<vector<string>> specMixedUserList_ = nullptr;
    std::shared_ptr<bool> startWithoutChannel_ = nullptr;
    std::shared_ptr<int32_t> startWithoutChannelWaitTime_ = nullptr;
    std::shared_ptr<bool> subHighResolutionStream_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutShrinkRequestTexts>> texts_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
