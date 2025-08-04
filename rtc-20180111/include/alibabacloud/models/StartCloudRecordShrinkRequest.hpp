// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartCloudRecordShrinkRequestBackgrounds.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestBgColor.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestClockWidgets.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestImages.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestPanes.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestRegionColor.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestStorageConfig.hpp>
#include <alibabacloud/models/StartCloudRecordShrinkRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_TO_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_TO_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_TO_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_TO_JSON(SingleStreamingRecord, singleStreamingRecordShrink_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_TO_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_TO_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_TO_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RecordMode, recordMode_);
      DARABONBA_PTR_FROM_JSON(RegionColor, regionColor_);
      DARABONBA_PTR_FROM_JSON(ReservePaneForNoCameraUser, reservePaneForNoCameraUser_);
      DARABONBA_PTR_FROM_JSON(ShowDefaultBackgroundOnMute, showDefaultBackgroundOnMute_);
      DARABONBA_PTR_FROM_JSON(SingleStreamingRecord, singleStreamingRecordShrink_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannel, startWithoutChannel_);
      DARABONBA_PTR_FROM_JSON(StartWithoutChannelWaitTime, startWithoutChannelWaitTime_);
      DARABONBA_PTR_FROM_JSON(StorageConfig, storageConfig_);
      DARABONBA_PTR_FROM_JSON(SubHighResolutionStream, subHighResolutionStream_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    StartCloudRecordShrinkRequest() = default ;
    StartCloudRecordShrinkRequest(const StartCloudRecordShrinkRequest &) = default ;
    StartCloudRecordShrinkRequest(StartCloudRecordShrinkRequest &&) = default ;
    StartCloudRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordShrinkRequest() = default ;
    StartCloudRecordShrinkRequest& operator=(const StartCloudRecordShrinkRequest &) = default ;
    StartCloudRecordShrinkRequest& operator=(StartCloudRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->annotation_ != nullptr
        && this->appId_ != nullptr && this->backgrounds_ != nullptr && this->bgColor_ != nullptr && this->channelId_ != nullptr && this->clockWidgets_ != nullptr
        && this->cropMode_ != nullptr && this->images_ != nullptr && this->layoutSpecifiedUsersShrink_ != nullptr && this->panes_ != nullptr && this->recordMode_ != nullptr
        && this->regionColor_ != nullptr && this->reservePaneForNoCameraUser_ != nullptr && this->showDefaultBackgroundOnMute_ != nullptr && this->singleStreamingRecordShrink_ != nullptr && this->startWithoutChannel_ != nullptr
        && this->startWithoutChannelWaitTime_ != nullptr && this->storageConfig_ != nullptr && this->subHighResolutionStream_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr
        && this->texts_ != nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline string annotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
    inline StartCloudRecordShrinkRequest& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCloudRecordShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<StartCloudRecordShrinkRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<StartCloudRecordShrinkRequestBackgrounds>) };
    inline vector<StartCloudRecordShrinkRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<StartCloudRecordShrinkRequestBackgrounds>) };
    inline StartCloudRecordShrinkRequest& setBackgrounds(const vector<StartCloudRecordShrinkRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartCloudRecordShrinkRequest& setBackgrounds(vector<StartCloudRecordShrinkRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const StartCloudRecordShrinkRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, StartCloudRecordShrinkRequestBgColor) };
    inline StartCloudRecordShrinkRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, StartCloudRecordShrinkRequestBgColor) };
    inline StartCloudRecordShrinkRequest& setBgColor(const StartCloudRecordShrinkRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline StartCloudRecordShrinkRequest& setBgColor(StartCloudRecordShrinkRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartCloudRecordShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<StartCloudRecordShrinkRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<StartCloudRecordShrinkRequestClockWidgets>) };
    inline vector<StartCloudRecordShrinkRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<StartCloudRecordShrinkRequestClockWidgets>) };
    inline StartCloudRecordShrinkRequest& setClockWidgets(const vector<StartCloudRecordShrinkRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline StartCloudRecordShrinkRequest& setClockWidgets(vector<StartCloudRecordShrinkRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline StartCloudRecordShrinkRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<StartCloudRecordShrinkRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<StartCloudRecordShrinkRequestImages>) };
    inline vector<StartCloudRecordShrinkRequestImages> images() { DARABONBA_PTR_GET(images_, vector<StartCloudRecordShrinkRequestImages>) };
    inline StartCloudRecordShrinkRequest& setImages(const vector<StartCloudRecordShrinkRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartCloudRecordShrinkRequest& setImages(vector<StartCloudRecordShrinkRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string layoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline StartCloudRecordShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<StartCloudRecordShrinkRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<StartCloudRecordShrinkRequestPanes>) };
    inline vector<StartCloudRecordShrinkRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<StartCloudRecordShrinkRequestPanes>) };
    inline StartCloudRecordShrinkRequest& setPanes(const vector<StartCloudRecordShrinkRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline StartCloudRecordShrinkRequest& setPanes(vector<StartCloudRecordShrinkRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // recordMode Field Functions 
    bool hasRecordMode() const { return this->recordMode_ != nullptr;};
    void deleteRecordMode() { this->recordMode_ = nullptr;};
    inline int32_t recordMode() const { DARABONBA_PTR_GET_DEFAULT(recordMode_, 0) };
    inline StartCloudRecordShrinkRequest& setRecordMode(int32_t recordMode) { DARABONBA_PTR_SET_VALUE(recordMode_, recordMode) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const StartCloudRecordShrinkRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, StartCloudRecordShrinkRequestRegionColor) };
    inline StartCloudRecordShrinkRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, StartCloudRecordShrinkRequestRegionColor) };
    inline StartCloudRecordShrinkRequest& setRegionColor(const StartCloudRecordShrinkRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline StartCloudRecordShrinkRequest& setRegionColor(StartCloudRecordShrinkRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // reservePaneForNoCameraUser Field Functions 
    bool hasReservePaneForNoCameraUser() const { return this->reservePaneForNoCameraUser_ != nullptr;};
    void deleteReservePaneForNoCameraUser() { this->reservePaneForNoCameraUser_ = nullptr;};
    inline bool reservePaneForNoCameraUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForNoCameraUser_, false) };
    inline StartCloudRecordShrinkRequest& setReservePaneForNoCameraUser(bool reservePaneForNoCameraUser) { DARABONBA_PTR_SET_VALUE(reservePaneForNoCameraUser_, reservePaneForNoCameraUser) };


    // showDefaultBackgroundOnMute Field Functions 
    bool hasShowDefaultBackgroundOnMute() const { return this->showDefaultBackgroundOnMute_ != nullptr;};
    void deleteShowDefaultBackgroundOnMute() { this->showDefaultBackgroundOnMute_ = nullptr;};
    inline bool showDefaultBackgroundOnMute() const { DARABONBA_PTR_GET_DEFAULT(showDefaultBackgroundOnMute_, false) };
    inline StartCloudRecordShrinkRequest& setShowDefaultBackgroundOnMute(bool showDefaultBackgroundOnMute) { DARABONBA_PTR_SET_VALUE(showDefaultBackgroundOnMute_, showDefaultBackgroundOnMute) };


    // singleStreamingRecordShrink Field Functions 
    bool hasSingleStreamingRecordShrink() const { return this->singleStreamingRecordShrink_ != nullptr;};
    void deleteSingleStreamingRecordShrink() { this->singleStreamingRecordShrink_ = nullptr;};
    inline string singleStreamingRecordShrink() const { DARABONBA_PTR_GET_DEFAULT(singleStreamingRecordShrink_, "") };
    inline StartCloudRecordShrinkRequest& setSingleStreamingRecordShrink(string singleStreamingRecordShrink) { DARABONBA_PTR_SET_VALUE(singleStreamingRecordShrink_, singleStreamingRecordShrink) };


    // startWithoutChannel Field Functions 
    bool hasStartWithoutChannel() const { return this->startWithoutChannel_ != nullptr;};
    void deleteStartWithoutChannel() { this->startWithoutChannel_ = nullptr;};
    inline bool startWithoutChannel() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannel_, false) };
    inline StartCloudRecordShrinkRequest& setStartWithoutChannel(bool startWithoutChannel) { DARABONBA_PTR_SET_VALUE(startWithoutChannel_, startWithoutChannel) };


    // startWithoutChannelWaitTime Field Functions 
    bool hasStartWithoutChannelWaitTime() const { return this->startWithoutChannelWaitTime_ != nullptr;};
    void deleteStartWithoutChannelWaitTime() { this->startWithoutChannelWaitTime_ = nullptr;};
    inline int32_t startWithoutChannelWaitTime() const { DARABONBA_PTR_GET_DEFAULT(startWithoutChannelWaitTime_, 0) };
    inline StartCloudRecordShrinkRequest& setStartWithoutChannelWaitTime(int32_t startWithoutChannelWaitTime) { DARABONBA_PTR_SET_VALUE(startWithoutChannelWaitTime_, startWithoutChannelWaitTime) };


    // storageConfig Field Functions 
    bool hasStorageConfig() const { return this->storageConfig_ != nullptr;};
    void deleteStorageConfig() { this->storageConfig_ = nullptr;};
    inline const StartCloudRecordShrinkRequestStorageConfig & storageConfig() const { DARABONBA_PTR_GET_CONST(storageConfig_, StartCloudRecordShrinkRequestStorageConfig) };
    inline StartCloudRecordShrinkRequestStorageConfig storageConfig() { DARABONBA_PTR_GET(storageConfig_, StartCloudRecordShrinkRequestStorageConfig) };
    inline StartCloudRecordShrinkRequest& setStorageConfig(const StartCloudRecordShrinkRequestStorageConfig & storageConfig) { DARABONBA_PTR_SET_VALUE(storageConfig_, storageConfig) };
    inline StartCloudRecordShrinkRequest& setStorageConfig(StartCloudRecordShrinkRequestStorageConfig && storageConfig) { DARABONBA_PTR_SET_RVALUE(storageConfig_, storageConfig) };


    // subHighResolutionStream Field Functions 
    bool hasSubHighResolutionStream() const { return this->subHighResolutionStream_ != nullptr;};
    void deleteSubHighResolutionStream() { this->subHighResolutionStream_ = nullptr;};
    inline bool subHighResolutionStream() const { DARABONBA_PTR_GET_DEFAULT(subHighResolutionStream_, false) };
    inline StartCloudRecordShrinkRequest& setSubHighResolutionStream(bool subHighResolutionStream) { DARABONBA_PTR_SET_VALUE(subHighResolutionStream_, subHighResolutionStream) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartCloudRecordShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartCloudRecordShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<StartCloudRecordShrinkRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<StartCloudRecordShrinkRequestTexts>) };
    inline vector<StartCloudRecordShrinkRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<StartCloudRecordShrinkRequestTexts>) };
    inline StartCloudRecordShrinkRequest& setTexts(const vector<StartCloudRecordShrinkRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartCloudRecordShrinkRequest& setTexts(vector<StartCloudRecordShrinkRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    std::shared_ptr<string> annotation_ = nullptr;
    // appId
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<StartCloudRecordShrinkRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<StartCloudRecordShrinkRequestBgColor> bgColor_ = nullptr;
    // channelName
    // 
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<StartCloudRecordShrinkRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<vector<StartCloudRecordShrinkRequestImages>> images_ = nullptr;
    std::shared_ptr<string> layoutSpecifiedUsersShrink_ = nullptr;
    // panes
    std::shared_ptr<vector<StartCloudRecordShrinkRequestPanes>> panes_ = nullptr;
    std::shared_ptr<int32_t> recordMode_ = nullptr;
    std::shared_ptr<StartCloudRecordShrinkRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<bool> reservePaneForNoCameraUser_ = nullptr;
    std::shared_ptr<bool> showDefaultBackgroundOnMute_ = nullptr;
    std::shared_ptr<string> singleStreamingRecordShrink_ = nullptr;
    std::shared_ptr<bool> startWithoutChannel_ = nullptr;
    std::shared_ptr<int32_t> startWithoutChannelWaitTime_ = nullptr;
    // storageConfig
    // 
    // This parameter is required.
    std::shared_ptr<StartCloudRecordShrinkRequestStorageConfig> storageConfig_ = nullptr;
    std::shared_ptr<bool> subHighResolutionStream_ = nullptr;
    // taskId
    std::shared_ptr<string> taskId_ = nullptr;
    // templateId
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<StartCloudRecordShrinkRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
