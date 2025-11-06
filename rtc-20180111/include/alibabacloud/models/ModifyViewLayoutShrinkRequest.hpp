// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyViewLayoutShrinkRequestBackgrounds.hpp>
#include <alibabacloud/models/ModifyViewLayoutShrinkRequestClockWidgets.hpp>
#include <alibabacloud/models/ModifyViewLayoutShrinkRequestImages.hpp>
#include <alibabacloud/models/ModifyViewLayoutShrinkRequestPanes.hpp>
#include <alibabacloud/models/ModifyViewLayoutShrinkRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyViewLayoutShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyViewLayoutShrinkRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyViewLayoutShrinkRequest& obj) { 
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
    ModifyViewLayoutShrinkRequest() = default ;
    ModifyViewLayoutShrinkRequest(const ModifyViewLayoutShrinkRequest &) = default ;
    ModifyViewLayoutShrinkRequest(ModifyViewLayoutShrinkRequest &&) = default ;
    ModifyViewLayoutShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyViewLayoutShrinkRequest() = default ;
    ModifyViewLayoutShrinkRequest& operator=(const ModifyViewLayoutShrinkRequest &) = default ;
    ModifyViewLayoutShrinkRequest& operator=(ModifyViewLayoutShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->backgrounds_ == nullptr && return this->channelId_ == nullptr && return this->clockWidgets_ == nullptr && return this->images_ == nullptr && return this->layoutSpecifiedUsersShrink_ == nullptr
        && return this->panes_ == nullptr && return this->taskId_ == nullptr && return this->templateId_ == nullptr && return this->texts_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyViewLayoutShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<ModifyViewLayoutShrinkRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<ModifyViewLayoutShrinkRequestBackgrounds>) };
    inline vector<ModifyViewLayoutShrinkRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<ModifyViewLayoutShrinkRequestBackgrounds>) };
    inline ModifyViewLayoutShrinkRequest& setBackgrounds(const vector<ModifyViewLayoutShrinkRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline ModifyViewLayoutShrinkRequest& setBackgrounds(vector<ModifyViewLayoutShrinkRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ModifyViewLayoutShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<ModifyViewLayoutShrinkRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<ModifyViewLayoutShrinkRequestClockWidgets>) };
    inline vector<ModifyViewLayoutShrinkRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<ModifyViewLayoutShrinkRequestClockWidgets>) };
    inline ModifyViewLayoutShrinkRequest& setClockWidgets(const vector<ModifyViewLayoutShrinkRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline ModifyViewLayoutShrinkRequest& setClockWidgets(vector<ModifyViewLayoutShrinkRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ModifyViewLayoutShrinkRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<ModifyViewLayoutShrinkRequestImages>) };
    inline vector<ModifyViewLayoutShrinkRequestImages> images() { DARABONBA_PTR_GET(images_, vector<ModifyViewLayoutShrinkRequestImages>) };
    inline ModifyViewLayoutShrinkRequest& setImages(const vector<ModifyViewLayoutShrinkRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ModifyViewLayoutShrinkRequest& setImages(vector<ModifyViewLayoutShrinkRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsersShrink Field Functions 
    bool hasLayoutSpecifiedUsersShrink() const { return this->layoutSpecifiedUsersShrink_ != nullptr;};
    void deleteLayoutSpecifiedUsersShrink() { this->layoutSpecifiedUsersShrink_ = nullptr;};
    inline string layoutSpecifiedUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutSpecifiedUsersShrink_, "") };
    inline ModifyViewLayoutShrinkRequest& setLayoutSpecifiedUsersShrink(string layoutSpecifiedUsersShrink) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsersShrink_, layoutSpecifiedUsersShrink) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<ModifyViewLayoutShrinkRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<ModifyViewLayoutShrinkRequestPanes>) };
    inline vector<ModifyViewLayoutShrinkRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<ModifyViewLayoutShrinkRequestPanes>) };
    inline ModifyViewLayoutShrinkRequest& setPanes(const vector<ModifyViewLayoutShrinkRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline ModifyViewLayoutShrinkRequest& setPanes(vector<ModifyViewLayoutShrinkRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyViewLayoutShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifyViewLayoutShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<ModifyViewLayoutShrinkRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<ModifyViewLayoutShrinkRequestTexts>) };
    inline vector<ModifyViewLayoutShrinkRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<ModifyViewLayoutShrinkRequestTexts>) };
    inline ModifyViewLayoutShrinkRequest& setTexts(const vector<ModifyViewLayoutShrinkRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline ModifyViewLayoutShrinkRequest& setTexts(vector<ModifyViewLayoutShrinkRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutShrinkRequestBackgrounds>> backgrounds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutShrinkRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutShrinkRequestImages>> images_ = nullptr;
    std::shared_ptr<string> layoutSpecifiedUsersShrink_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutShrinkRequestPanes>> panes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutShrinkRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
