// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartStreamingOutRequestBackgrounds.hpp>
#include <alibabacloud/models/StartStreamingOutRequestBgColor.hpp>
#include <alibabacloud/models/StartStreamingOutRequestClockWidgets.hpp>
#include <alibabacloud/models/StartStreamingOutRequestImages.hpp>
#include <alibabacloud/models/StartStreamingOutRequestLayoutSpecifiedUsers.hpp>
#include <alibabacloud/models/StartStreamingOutRequestPanes.hpp>
#include <alibabacloud/models/StartStreamingOutRequestRegionColor.hpp>
#include <alibabacloud/models/StartStreamingOutRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartStreamingOutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotation, annotation_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
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
    friend void from_json(const Darabonba::Json& j, StartStreamingOutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
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
    StartStreamingOutRequest() = default ;
    StartStreamingOutRequest(const StartStreamingOutRequest &) = default ;
    StartStreamingOutRequest(StartStreamingOutRequest &&) = default ;
    StartStreamingOutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutRequest() = default ;
    StartStreamingOutRequest& operator=(const StartStreamingOutRequest &) = default ;
    StartStreamingOutRequest& operator=(StartStreamingOutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotation_ == nullptr
        && return this->appId_ == nullptr && return this->backgrounds_ == nullptr && return this->bgColor_ == nullptr && return this->channelId_ == nullptr && return this->clockWidgets_ == nullptr
        && return this->cropMode_ == nullptr && return this->images_ == nullptr && return this->layoutSpecifiedUsers_ == nullptr && return this->panes_ == nullptr && return this->regionColor_ == nullptr
        && return this->reservePaneForNoCameraUser_ == nullptr && return this->showDefaultBackgroundOnMute_ == nullptr && return this->specMixedUserList_ == nullptr && return this->startWithoutChannel_ == nullptr && return this->startWithoutChannelWaitTime_ == nullptr
        && return this->subHighResolutionStream_ == nullptr && return this->taskId_ == nullptr && return this->templateId_ == nullptr && return this->texts_ == nullptr && return this->url_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string annotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline StartStreamingOutRequest& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartStreamingOutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartStreamingOutRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartStreamingOutRequestBackgrounds>) };
    inline vector<StartStreamingOutRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartStreamingOutRequestBackgrounds>) };
    inline StartStreamingOutRequest& setBackgrounds(const vector<StartStreamingOutRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartStreamingOutRequest& setBackgrounds(vector<StartStreamingOutRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartStreamingOutRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartStreamingOutRequestBgColor) };
    inline StartStreamingOutRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, StartStreamingOutRequestBgColor) };
    inline StartStreamingOutRequest& setBgColor(const StartStreamingOutRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartStreamingOutRequest& setBgColor(StartStreamingOutRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartStreamingOutRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartStreamingOutRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartStreamingOutRequestClockWidgets>) };
    inline vector<StartStreamingOutRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartStreamingOutRequestClockWidgets>) };
    inline StartStreamingOutRequest& setClockWidgets(const vector<StartStreamingOutRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartStreamingOutRequest& setClockWidgets(vector<StartStreamingOutRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartStreamingOutRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<StartStreamingOutRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<StartStreamingOutRequestImages>) };
    inline vector<StartStreamingOutRequestImages> images() { DARABONBA_PTR_GET(images_, vector<StartStreamingOutRequestImages>) };
    inline StartStreamingOutRequest& setImages(const vector<StartStreamingOutRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartStreamingOutRequest& setImages(vector<StartStreamingOutRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsers Field Functions 
    bool hasLayoutSpecifiedUsers() const { return this->layoutSpecifiedUsers_ != nullptr;};
    void deleteLayoutSpecifiedUsers() { this->layoutSpecifiedUsers_ = nullptr;};
    inline const StartStreamingOutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers() const { DARABONBA_PTR_GET_CONST(layoutSpecifiedUsers_, StartStreamingOutRequestLayoutSpecifiedUsers) };
    inline StartStreamingOutRequestLayoutSpecifiedUsers layoutSpecifiedUsers() { DARABONBA_PTR_GET(layoutSpecifiedUsers_, StartStreamingOutRequestLayoutSpecifiedUsers) };
    inline StartStreamingOutRequest& setLayoutSpecifiedUsers(const StartStreamingOutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };
    inline StartStreamingOutRequest& setLayoutSpecifiedUsers(StartStreamingOutRequestLayoutSpecifiedUsers && layoutSpecifiedUsers) { DARABONBA_PTR_SET_RVALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<StartStreamingOutRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<StartStreamingOutRequestPanes>) };
    inline vector<StartStreamingOutRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<StartStreamingOutRequestPanes>) };
    inline StartStreamingOutRequest& setPanes(const vector<StartStreamingOutRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline StartStreamingOutRequest& setPanes(vector<StartStreamingOutRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartStreamingOutRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartStreamingOutRequestRegionColor) };
    inline StartStreamingOutRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, StartStreamingOutRequestRegionColor) };
    inline StartStreamingOutRequest& setRegionColor(const StartStreamingOutRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartStreamingOutRequest& setRegionColor(StartStreamingOutRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // reservePaneForNoCameraUser Field Functions 
    bool hasReservePaneForNoCameraUser() const { return this->reservePaneForNoCameraUser_ != nullptr;};
    void deleteReservePaneForNoCameraUser() { this->reservePaneForNoCameraUser_ = nullptr;};
    inline bool reservePaneForNoCameraUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForNoCameraUser_, false) };
    inline StartStreamingOutRequest& setReservePaneForNoCameraUser(bool reservePaneForNoCameraUser) { DARABONBA_PTR_SET_VALUE(reservePaneForNoCameraUser_, reservePaneForNoCameraUser) };


    // showDefaultBackgroundOnMute Field Functions 
    bool hasShowDefaultBackgroundOnMute() const { return this->showDefaultBackgroundOnMute_ != nullptr;};
    void deleteShowDefaultBackgroundOnMute() { this->showDefaultBackgroundOnMute_ = nullptr;};
    inline bool showDefaultBackgroundOnMute() const { DARABONBA_PTR_GET_DEFAULT(showDefaultBackgroundOnMute_, false) };
    inline StartStreamingOutRequest& setShowDefaultBackgroundOnMute(bool showDefaultBackgroundOnMute) { DARABONBA_PTR_SET_VALUE(showDefaultBackgroundOnMute_, showDefaultBackgroundOnMute) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & specMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> specMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline StartStreamingOutRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline StartStreamingOutRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool startWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartStreamingOutRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t startWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartStreamingOutRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // subHighResolutionStream Field Functions 
    bool hasSubHighResolutionStream() const { return this->subHighResolutionStream_ != nullptr;};
    void deleteSubHighResolutionStream() { this->subHighResolutionStream_ = nullptr;};
    inline bool subHighResolutionStream() const { DARABONBA_PTR_GET_DEFAULT(subHighResolutionStream_, false) };
    inline StartStreamingOutRequest& setSubHighResolutionStream(bool subHighResolutionStream) { DARABONBA_PTR_SET_VALUE(subHighResolutionStream_, subHighResolutionStream) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartStreamingOutRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartStreamingOutRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<StartStreamingOutRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<StartStreamingOutRequestTexts>) };
    inline vector<StartStreamingOutRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<StartStreamingOutRequestTexts>) };
    inline StartStreamingOutRequest& setTexts(const vector<StartStreamingOutRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartStreamingOutRequest& setTexts(vector<StartStreamingOutRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartStreamingOutRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> annotation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<StartStreamingOutRequestBgColor> bgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutRequestImages>> images_ = nullptr;
    std::shared_ptr<StartStreamingOutRequestLayoutSpecifiedUsers> layoutSpecifiedUsers_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutRequestPanes>> panes_ = nullptr;
    std::shared_ptr<StartStreamingOutRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<bool> reservePaneForNoCameraUser_ = nullptr;
    std::shared_ptr<bool> showDefaultBackgroundOnMute_ = nullptr;
    std::shared_ptr<vector<string>> specMixedUserList_ = nullptr;
    std::shared_ptr<bool> startWithoutChannel_ = nullptr;
    std::shared_ptr<int32_t> startWithoutChannelWaitTime_ = nullptr;
    std::shared_ptr<bool> subHighResolutionStream_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<StartStreamingOutRequestTexts>> texts_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
