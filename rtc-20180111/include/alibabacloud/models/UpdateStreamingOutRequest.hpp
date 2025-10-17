// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStreamingOutRequestBackgrounds.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestBgColor.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestClockWidgets.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestImages.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestLayoutSpecifiedUsers.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestPanes.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestRegionColor.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateStreamingOutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStreamingOutRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStreamingOutRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SpecMixedUserList, specMixedUserList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    UpdateStreamingOutRequest() = default ;
    UpdateStreamingOutRequest(const UpdateStreamingOutRequest &) = default ;
    UpdateStreamingOutRequest(UpdateStreamingOutRequest &&) = default ;
    UpdateStreamingOutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStreamingOutRequest() = default ;
    UpdateStreamingOutRequest& operator=(const UpdateStreamingOutRequest &) = default ;
    UpdateStreamingOutRequest& operator=(UpdateStreamingOutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->backgrounds_ == nullptr && return this->bgColor_ == nullptr && return this->channelId_ == nullptr && return this->clockWidgets_ == nullptr && return this->cropMode_ == nullptr
        && return this->images_ == nullptr && return this->layoutSpecifiedUsers_ == nullptr && return this->panes_ == nullptr && return this->regionColor_ == nullptr && return this->specMixedUserList_ == nullptr
        && return this->taskId_ == nullptr && return this->templateId_ == nullptr && return this->texts_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateStreamingOutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<UpdateStreamingOutRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<UpdateStreamingOutRequestBackgrounds>) };
    inline vector<UpdateStreamingOutRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<UpdateStreamingOutRequestBackgrounds>) };
    inline UpdateStreamingOutRequest& setBackgrounds(const vector<UpdateStreamingOutRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateStreamingOutRequest& setBackgrounds(vector<UpdateStreamingOutRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline const UpdateStreamingOutRequestBgColor & bgColor() const { DARABONBA_PTR_GET_CONST(bgColor_, UpdateStreamingOutRequestBgColor) };
    inline UpdateStreamingOutRequestBgColor bgColor() { DARABONBA_PTR_GET(bgColor_, UpdateStreamingOutRequestBgColor) };
    inline UpdateStreamingOutRequest& setBgColor(const UpdateStreamingOutRequestBgColor & bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };
    inline UpdateStreamingOutRequest& setBgColor(UpdateStreamingOutRequestBgColor && bgColor) { DARABONBA_PTR_SET_RVALUE(bgColor_, bgColor) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateStreamingOutRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<UpdateStreamingOutRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<UpdateStreamingOutRequestClockWidgets>) };
    inline vector<UpdateStreamingOutRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<UpdateStreamingOutRequestClockWidgets>) };
    inline UpdateStreamingOutRequest& setClockWidgets(const vector<UpdateStreamingOutRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline UpdateStreamingOutRequest& setClockWidgets(vector<UpdateStreamingOutRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int32_t cropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0) };
    inline UpdateStreamingOutRequest& setCropMode(int32_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<UpdateStreamingOutRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<UpdateStreamingOutRequestImages>) };
    inline vector<UpdateStreamingOutRequestImages> images() { DARABONBA_PTR_GET(images_, vector<UpdateStreamingOutRequestImages>) };
    inline UpdateStreamingOutRequest& setImages(const vector<UpdateStreamingOutRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateStreamingOutRequest& setImages(vector<UpdateStreamingOutRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsers Field Functions 
    bool hasLayoutSpecifiedUsers() const { return this->layoutSpecifiedUsers_ != nullptr;};
    void deleteLayoutSpecifiedUsers() { this->layoutSpecifiedUsers_ = nullptr;};
    inline const UpdateStreamingOutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers() const { DARABONBA_PTR_GET_CONST(layoutSpecifiedUsers_, UpdateStreamingOutRequestLayoutSpecifiedUsers) };
    inline UpdateStreamingOutRequestLayoutSpecifiedUsers layoutSpecifiedUsers() { DARABONBA_PTR_GET(layoutSpecifiedUsers_, UpdateStreamingOutRequestLayoutSpecifiedUsers) };
    inline UpdateStreamingOutRequest& setLayoutSpecifiedUsers(const UpdateStreamingOutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };
    inline UpdateStreamingOutRequest& setLayoutSpecifiedUsers(UpdateStreamingOutRequestLayoutSpecifiedUsers && layoutSpecifiedUsers) { DARABONBA_PTR_SET_RVALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<UpdateStreamingOutRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<UpdateStreamingOutRequestPanes>) };
    inline vector<UpdateStreamingOutRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<UpdateStreamingOutRequestPanes>) };
    inline UpdateStreamingOutRequest& setPanes(const vector<UpdateStreamingOutRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline UpdateStreamingOutRequest& setPanes(vector<UpdateStreamingOutRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // regionColor Field Functions 
    bool hasRegionColor() const { return this->regionColor_ != nullptr;};
    void deleteRegionColor() { this->regionColor_ = nullptr;};
    inline const UpdateStreamingOutRequestRegionColor & regionColor() const { DARABONBA_PTR_GET_CONST(regionColor_, UpdateStreamingOutRequestRegionColor) };
    inline UpdateStreamingOutRequestRegionColor regionColor() { DARABONBA_PTR_GET(regionColor_, UpdateStreamingOutRequestRegionColor) };
    inline UpdateStreamingOutRequest& setRegionColor(const UpdateStreamingOutRequestRegionColor & regionColor) { DARABONBA_PTR_SET_VALUE(regionColor_, regionColor) };
    inline UpdateStreamingOutRequest& setRegionColor(UpdateStreamingOutRequestRegionColor && regionColor) { DARABONBA_PTR_SET_RVALUE(regionColor_, regionColor) };


    // specMixedUserList Field Functions 
    bool hasSpecMixedUserList() const { return this->specMixedUserList_ != nullptr;};
    void deleteSpecMixedUserList() { this->specMixedUserList_ = nullptr;};
    inline const vector<string> & specMixedUserList() const { DARABONBA_PTR_GET_CONST(specMixedUserList_, vector<string>) };
    inline vector<string> specMixedUserList() { DARABONBA_PTR_GET(specMixedUserList_, vector<string>) };
    inline UpdateStreamingOutRequest& setSpecMixedUserList(const vector<string> & specMixedUserList) { DARABONBA_PTR_SET_VALUE(specMixedUserList_, specMixedUserList) };
    inline UpdateStreamingOutRequest& setSpecMixedUserList(vector<string> && specMixedUserList) { DARABONBA_PTR_SET_RVALUE(specMixedUserList_, specMixedUserList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateStreamingOutRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStreamingOutRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<UpdateStreamingOutRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UpdateStreamingOutRequestTexts>) };
    inline vector<UpdateStreamingOutRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<UpdateStreamingOutRequestTexts>) };
    inline UpdateStreamingOutRequest& setTexts(const vector<UpdateStreamingOutRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateStreamingOutRequest& setTexts(vector<UpdateStreamingOutRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutRequestBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<UpdateStreamingOutRequestBgColor> bgColor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<int32_t> cropMode_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutRequestImages>> images_ = nullptr;
    std::shared_ptr<UpdateStreamingOutRequestLayoutSpecifiedUsers> layoutSpecifiedUsers_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutRequestPanes>> panes_ = nullptr;
    std::shared_ptr<UpdateStreamingOutRequestRegionColor> regionColor_ = nullptr;
    std::shared_ptr<vector<string>> specMixedUserList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<UpdateStreamingOutRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
