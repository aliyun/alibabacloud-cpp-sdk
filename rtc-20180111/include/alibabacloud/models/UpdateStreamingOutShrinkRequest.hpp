// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestBackgrounds.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestBgColor.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestClockWidgets.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestImages.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestPanes.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestRegionColor.hpp>
#include <alibabacloud/models/UpdateStreamingOutShrinkRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateStreamingOutShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStreamingOutShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStreamingOutShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    UpdateStreamingOutShrinkRequest() = default ;
    UpdateStreamingOutShrinkRequest(const UpdateStreamingOutShrinkRequest &) = default ;
    UpdateStreamingOutShrinkRequest(UpdateStreamingOutShrinkRequest &&) = default ;
    UpdateStreamingOutShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStreamingOutShrinkRequest() = default ;
    UpdateStreamingOutShrinkRequest& operator=(const UpdateStreamingOutShrinkRequest &) = default ;
    UpdateStreamingOutShrinkRequest& operator=(UpdateStreamingOutShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->backgrounds_ != nullptr && this->bgColor_ != nullptr && this->channelId_ != nullptr && this->clockWidgets_ != nullptr && this->cropMode_ != nullptr
        && this->images_ != nullptr && this->layoutSpecifiedUsersShrink_ != nullptr && this->panes_ != nullptr && this->regionColor_ != nullptr && this->specMixedUserList_ != nullptr
        && this->taskId_ != nullptr && this->templateId_ != nullptr && this->texts_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateStreamingOutShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<UpdateStreamingOutShrinkRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<UpdateStreamingOutShrinkRequestBackgrounds>) };
    inline vector<UpdateStreamingOutShrinkRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<UpdateStreamingOutShrinkRequestBackgrounds>) };
    inline UpdateStreamingOutShrinkRequest& setBackgrounds(const vector<UpdateStreamingOutShrinkRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateStreamingOutShrinkRequest& setBackgrounds(vector<UpdateStreamingOutShrinkRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const UpdateStreamingOutShrinkRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, UpdateStreamingOutShrinkRequestBgColor) };
    inline UpdateStreamingOutShrinkRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, UpdateStreamingOutShrinkRequestBgColor) };
    inline UpdateStreamingOutShrinkRequest& setBgColor(const UpdateStreamingOutShrinkRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline UpdateStreamingOutShrinkRequest& setBgColor(UpdateStreamingOutShrinkRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateStreamingOutShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<UpdateStreamingOutShrinkRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<UpdateStreamingOutShrinkRequestClockWidgets>) };
    inline vector<UpdateStreamingOutShrinkRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<UpdateStreamingOutShrinkRequestClockWidgets>) };
    inline UpdateStreamingOutShrinkRequest& setClockWidgets(const vector<UpdateStreamingOutShrinkRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline UpdateStreamingOutShrinkRequest& setClockWidgets(vector<UpdateStreamingOutShrinkRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline UpdateStreamingOutShrinkRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<UpdateStreamingOutShrinkRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<UpdateStreamingOutShrinkRequestImages>) };
    inline vector<UpdateStreamingOutShrinkRequestImages> images() { DARABONBA_PTR_GET(images_, vector<UpdateStreamingOutShrinkRequestImages>) };
    inline UpdateStreamingOutShrinkRequest& setImages(const vector<UpdateStreamingOutShrinkRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateStreamingOutShrinkRequest& setImages(vector<UpdateStreamingOutShrinkRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string layoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline UpdateStreamingOutShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<UpdateStreamingOutShrinkRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<UpdateStreamingOutShrinkRequestPanes>) };
    inline vector<UpdateStreamingOutShrinkRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<UpdateStreamingOutShrinkRequestPanes>) };
    inline UpdateStreamingOutShrinkRequest& setPanes(const vector<UpdateStreamingOutShrinkRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline UpdateStreamingOutShrinkRequest& setPanes(vector<UpdateStreamingOutShrinkRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const UpdateStreamingOutShrinkRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, UpdateStreamingOutShrinkRequestRegionColor) };
    inline UpdateStreamingOutShrinkRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, UpdateStreamingOutShrinkRequestRegionColor) };
    inline UpdateStreamingOutShrinkRequest& setRegionColor(const UpdateStreamingOutShrinkRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline UpdateStreamingOutShrinkRequest& setRegionColor(UpdateStreamingOutShrinkRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & specMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> specMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline UpdateStreamingOutShrinkRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline UpdateStreamingOutShrinkRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateStreamingOutShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStreamingOutShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<UpdateStreamingOutShrinkRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UpdateStreamingOutShrinkRequestTexts>) };
    inline vector<UpdateStreamingOutShrinkRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<UpdateStreamingOutShrinkRequestTexts>) };
    inline UpdateStreamingOutShrinkRequest& setTexts(const vector<UpdateStreamingOutShrinkRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateStreamingOutShrinkRequest& setTexts(vector<UpdateStreamingOutShrinkRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutShrinkRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<UpdateStreamingOutShrinkRequestBgColor> bgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutShrinkRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutShrinkRequestImages>> images_ = nullptr;
    std::shared_ptr<string> layoutSpecifiedUsersShrink_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutShrinkRequestPanes>> panes_ = nullptr;
    std::shared_ptr<UpdateStreamingOutShrinkRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<vector<string>> specMixedUserList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutShrinkRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
