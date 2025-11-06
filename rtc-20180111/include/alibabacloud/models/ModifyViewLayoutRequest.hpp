// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVIEWLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyViewLayoutRequestBackgrounds.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestClockWidgets.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestImages.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestLayoutSpecifiedUsers.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestPanes.hpp>
#include <alibabacloud/models/ModifyViewLayoutRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyViewLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyViewLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyViewLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClockWidgets, clockWidgets_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(LayoutSpecifiedUsers, layoutSpecifiedUsers_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
    };
    ModifyViewLayoutRequest() = default ;
    ModifyViewLayoutRequest(const ModifyViewLayoutRequest &) = default ;
    ModifyViewLayoutRequest(ModifyViewLayoutRequest &&) = default ;
    ModifyViewLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyViewLayoutRequest() = default ;
    ModifyViewLayoutRequest& operator=(const ModifyViewLayoutRequest &) = default ;
    ModifyViewLayoutRequest& operator=(ModifyViewLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->backgrounds_ == nullptr && return this->channelId_ == nullptr && return this->clockWidgets_ == nullptr && return this->images_ == nullptr && return this->layoutSpecifiedUsers_ == nullptr
        && return this->panes_ == nullptr && return this->taskId_ == nullptr && return this->templateId_ == nullptr && return this->texts_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyViewLayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<ModifyViewLayoutRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<ModifyViewLayoutRequestBackgrounds>) };
    inline vector<ModifyViewLayoutRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<ModifyViewLayoutRequestBackgrounds>) };
    inline ModifyViewLayoutRequest& setBackgrounds(const vector<ModifyViewLayoutRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline ModifyViewLayoutRequest& setBackgrounds(vector<ModifyViewLayoutRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ModifyViewLayoutRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<ModifyViewLayoutRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<ModifyViewLayoutRequestClockWidgets>) };
    inline vector<ModifyViewLayoutRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<ModifyViewLayoutRequestClockWidgets>) };
    inline ModifyViewLayoutRequest& setClockWidgets(const vector<ModifyViewLayoutRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline ModifyViewLayoutRequest& setClockWidgets(vector<ModifyViewLayoutRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ModifyViewLayoutRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<ModifyViewLayoutRequestImages>) };
    inline vector<ModifyViewLayoutRequestImages> images() { DARABONBA_PTR_GET(images_, vector<ModifyViewLayoutRequestImages>) };
    inline ModifyViewLayoutRequest& setImages(const vector<ModifyViewLayoutRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ModifyViewLayoutRequest& setImages(vector<ModifyViewLayoutRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsers Field Functions 
    bool hasLayoutSpecifiedUsers() const { return this->layoutSpecifiedUsers_ != nullptr;};
    void deleteLayoutSpecifiedUsers() { this->layoutSpecifiedUsers_ = nullptr;};
    inline const ModifyViewLayoutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers() const { DARABONBA_PTR_GET_CONST(layoutSpecifiedUsers_, ModifyViewLayoutRequestLayoutSpecifiedUsers) };
    inline ModifyViewLayoutRequestLayoutSpecifiedUsers layoutSpecifiedUsers() { DARABONBA_PTR_GET(layoutSpecifiedUsers_, ModifyViewLayoutRequestLayoutSpecifiedUsers) };
    inline ModifyViewLayoutRequest& setLayoutSpecifiedUsers(const ModifyViewLayoutRequestLayoutSpecifiedUsers & layoutSpecifiedUsers) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };
    inline ModifyViewLayoutRequest& setLayoutSpecifiedUsers(ModifyViewLayoutRequestLayoutSpecifiedUsers && layoutSpecifiedUsers) { DARABONBA_PTR_SET_RVALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<ModifyViewLayoutRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<ModifyViewLayoutRequestPanes>) };
    inline vector<ModifyViewLayoutRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<ModifyViewLayoutRequestPanes>) };
    inline ModifyViewLayoutRequest& setPanes(const vector<ModifyViewLayoutRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline ModifyViewLayoutRequest& setPanes(vector<ModifyViewLayoutRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyViewLayoutRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifyViewLayoutRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<ModifyViewLayoutRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<ModifyViewLayoutRequestTexts>) };
    inline vector<ModifyViewLayoutRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<ModifyViewLayoutRequestTexts>) };
    inline ModifyViewLayoutRequest& setTexts(const vector<ModifyViewLayoutRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline ModifyViewLayoutRequest& setTexts(vector<ModifyViewLayoutRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutRequestBackgrounds>> backgrounds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutRequestImages>> images_ = nullptr;
    std::shared_ptr<ModifyViewLayoutRequestLayoutSpecifiedUsers> layoutSpecifiedUsers_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutRequestPanes>> panes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<ModifyViewLayoutRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
