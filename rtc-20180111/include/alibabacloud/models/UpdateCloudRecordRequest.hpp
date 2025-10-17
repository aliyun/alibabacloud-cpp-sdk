// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCloudRecordRequestBackgrounds.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestClockWidgets.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestImages.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestLayoutSpecifiedUsers.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestPanes.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestTexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateCloudRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudRecordRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateCloudRecordRequest& obj) { 
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
    UpdateCloudRecordRequest() = default ;
    UpdateCloudRecordRequest(const UpdateCloudRecordRequest &) = default ;
    UpdateCloudRecordRequest(UpdateCloudRecordRequest &&) = default ;
    UpdateCloudRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudRecordRequest() = default ;
    UpdateCloudRecordRequest& operator=(const UpdateCloudRecordRequest &) = default ;
    UpdateCloudRecordRequest& operator=(UpdateCloudRecordRequest &&) = default ;
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
    inline UpdateCloudRecordRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<UpdateCloudRecordRequestBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<UpdateCloudRecordRequestBackgrounds>) };
    inline vector<UpdateCloudRecordRequestBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<UpdateCloudRecordRequestBackgrounds>) };
    inline UpdateCloudRecordRequest& setBackgrounds(const vector<UpdateCloudRecordRequestBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateCloudRecordRequest& setBackgrounds(vector<UpdateCloudRecordRequestBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateCloudRecordRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clockWidgets Field Functions 
    bool hasClockWidgets() const { return this->clockWidgets_ != nullptr;};
    void deleteClockWidgets() { this->clockWidgets_ = nullptr;};
    inline const vector<UpdateCloudRecordRequestClockWidgets> & clockWidgets() const { DARABONBA_PTR_GET_CONST(clockWidgets_, vector<UpdateCloudRecordRequestClockWidgets>) };
    inline vector<UpdateCloudRecordRequestClockWidgets> clockWidgets() { DARABONBA_PTR_GET(clockWidgets_, vector<UpdateCloudRecordRequestClockWidgets>) };
    inline UpdateCloudRecordRequest& setClockWidgets(const vector<UpdateCloudRecordRequestClockWidgets> & clockWidgets) { DARABONBA_PTR_SET_VALUE(clockWidgets_, clockWidgets) };
    inline UpdateCloudRecordRequest& setClockWidgets(vector<UpdateCloudRecordRequestClockWidgets> && clockWidgets) { DARABONBA_PTR_SET_RVALUE(clockWidgets_, clockWidgets) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<UpdateCloudRecordRequestImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<UpdateCloudRecordRequestImages>) };
    inline vector<UpdateCloudRecordRequestImages> images() { DARABONBA_PTR_GET(images_, vector<UpdateCloudRecordRequestImages>) };
    inline UpdateCloudRecordRequest& setImages(const vector<UpdateCloudRecordRequestImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateCloudRecordRequest& setImages(vector<UpdateCloudRecordRequestImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // layoutSpecifiedUsers Field Functions 
    bool hasLayoutSpecifiedUsers() const { return this->layoutSpecifiedUsers_ != nullptr;};
    void deleteLayoutSpecifiedUsers() { this->layoutSpecifiedUsers_ = nullptr;};
    inline const UpdateCloudRecordRequestLayoutSpecifiedUsers & layoutSpecifiedUsers() const { DARABONBA_PTR_GET_CONST(layoutSpecifiedUsers_, UpdateCloudRecordRequestLayoutSpecifiedUsers) };
    inline UpdateCloudRecordRequestLayoutSpecifiedUsers layoutSpecifiedUsers() { DARABONBA_PTR_GET(layoutSpecifiedUsers_, UpdateCloudRecordRequestLayoutSpecifiedUsers) };
    inline UpdateCloudRecordRequest& setLayoutSpecifiedUsers(const UpdateCloudRecordRequestLayoutSpecifiedUsers & layoutSpecifiedUsers) { DARABONBA_PTR_SET_VALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };
    inline UpdateCloudRecordRequest& setLayoutSpecifiedUsers(UpdateCloudRecordRequestLayoutSpecifiedUsers && layoutSpecifiedUsers) { DARABONBA_PTR_SET_RVALUE(layoutSpecifiedUsers_, layoutSpecifiedUsers) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<UpdateCloudRecordRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<UpdateCloudRecordRequestPanes>) };
    inline vector<UpdateCloudRecordRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<UpdateCloudRecordRequestPanes>) };
    inline UpdateCloudRecordRequest& setPanes(const vector<UpdateCloudRecordRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline UpdateCloudRecordRequest& setPanes(vector<UpdateCloudRecordRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateCloudRecordRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudRecordRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<UpdateCloudRecordRequestTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UpdateCloudRecordRequestTexts>) };
    inline vector<UpdateCloudRecordRequestTexts> texts() { DARABONBA_PTR_GET(texts_, vector<UpdateCloudRecordRequestTexts>) };
    inline UpdateCloudRecordRequest& setTexts(const vector<UpdateCloudRecordRequestTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateCloudRecordRequest& setTexts(vector<UpdateCloudRecordRequestTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordRequestBackgrounds>> backgrounds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordRequestClockWidgets>> clockWidgets_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordRequestImages>> images_ = nullptr;
    std::shared_ptr<UpdateCloudRecordRequestLayoutSpecifiedUsers> layoutSpecifiedUsers_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordRequestPanes>> panes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<UpdateCloudRecordRequestTexts>> texts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
