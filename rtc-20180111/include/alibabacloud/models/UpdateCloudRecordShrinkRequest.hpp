// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDRECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDRECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCloudRecordShrinkRequestBackgrounds.hpp>
#include <alibabacloud/models/UpdateCloudRecordShrinkRequestClockWidgets.hpp>
#include <alibabacloud/models/UpdateCloudRecordShrinkRequestImages.hpp>
#include <alibabacloud/models/UpdateCloudRecordShrinkRequestPanes.hpp>
#include <alibabacloud/models/UpdateCloudRecordShrinkRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateCloudRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsersShrink_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    UpdateCloudRecordShrinkRequest() = default ;
    UpdateCloudRecordShrinkRequest(const UpdateCloudRecordShrinkRequest &) = default ;
    UpdateCloudRecordShrinkRequest(UpdateCloudRecordShrinkRequest &&) = default ;
    UpdateCloudRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudRecordShrinkRequest() = default ;
    UpdateCloudRecordShrinkRequest& operator=(const UpdateCloudRecordShrinkRequest &) = default ;
    UpdateCloudRecordShrinkRequest& operator=(UpdateCloudRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->backgrounds_ != nullptr && this->channelId_ != nullptr && this->clockWidgets_ != nullptr && this->images_ != nullptr && this->layoutSpecifiedUsersShrink_ != nullptr
        && this->panes_ != nullptr && this->taskId_ != nullptr && this->templateId_ != nullptr && this->texts_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCloudRecordShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<UpdateCloudRecordShrinkRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<UpdateCloudRecordShrinkRequestBackgrounds>) };
    inline vector<UpdateCloudRecordShrinkRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<UpdateCloudRecordShrinkRequestBackgrounds>) };
    inline UpdateCloudRecordShrinkRequest& setBackgrounds(const vector<UpdateCloudRecordShrinkRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateCloudRecordShrinkRequest& setBackgrounds(vector<UpdateCloudRecordShrinkRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateCloudRecordShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<UpdateCloudRecordShrinkRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<UpdateCloudRecordShrinkRequestClockWidgets>) };
    inline vector<UpdateCloudRecordShrinkRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<UpdateCloudRecordShrinkRequestClockWidgets>) };
    inline UpdateCloudRecordShrinkRequest& setClockWidgets(const vector<UpdateCloudRecordShrinkRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline UpdateCloudRecordShrinkRequest& setClockWidgets(vector<UpdateCloudRecordShrinkRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<UpdateCloudRecordShrinkRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<UpdateCloudRecordShrinkRequestImages>) };
    inline vector<UpdateCloudRecordShrinkRequestImages> images() { DARABONBA_PTR_GET(images_, vector<UpdateCloudRecordShrinkRequestImages>) };
    inline UpdateCloudRecordShrinkRequest& setImages(const vector<UpdateCloudRecordShrinkRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateCloudRecordShrinkRequest& setImages(vector<UpdateCloudRecordShrinkRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string layoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline UpdateCloudRecordShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<UpdateCloudRecordShrinkRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<UpdateCloudRecordShrinkRequestPanes>) };
    inline vector<UpdateCloudRecordShrinkRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<UpdateCloudRecordShrinkRequestPanes>) };
    inline UpdateCloudRecordShrinkRequest& setPanes(const vector<UpdateCloudRecordShrinkRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline UpdateCloudRecordShrinkRequest& setPanes(vector<UpdateCloudRecordShrinkRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateCloudRecordShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudRecordShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<UpdateCloudRecordShrinkRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UpdateCloudRecordShrinkRequestTexts>) };
    inline vector<UpdateCloudRecordShrinkRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<UpdateCloudRecordShrinkRequestTexts>) };
    inline UpdateCloudRecordShrinkRequest& setTexts(const vector<UpdateCloudRecordShrinkRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateCloudRecordShrinkRequest& setTexts(vector<UpdateCloudRecordShrinkRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordShrinkRequestBackgrounds>> backgrounds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordShrinkRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordShrinkRequestImages>> images_ = nullptr;
    std::shared_ptr<string> layoutSpecifiedUsersShrink_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordShrinkRequestPanes>> panes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordShrinkRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
