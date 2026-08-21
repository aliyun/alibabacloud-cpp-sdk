// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIMEDIAAUDITJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIMEDIAAUDITJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIMediaAuditJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIMediaAuditJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditConfiguration, mediaAuditConfiguration_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIMediaAuditJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditConfiguration, mediaAuditConfiguration_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAIMediaAuditJobRequest() = default ;
    SubmitAIMediaAuditJobRequest(const SubmitAIMediaAuditJobRequest &) = default ;
    SubmitAIMediaAuditJobRequest(SubmitAIMediaAuditJobRequest &&) = default ;
    SubmitAIMediaAuditJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIMediaAuditJobRequest() = default ;
    SubmitAIMediaAuditJobRequest& operator=(const SubmitAIMediaAuditJobRequest &) = default ;
    SubmitAIMediaAuditJobRequest& operator=(SubmitAIMediaAuditJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaAuditConfiguration_ == nullptr
        && this->mediaId_ == nullptr && this->mediaType_ == nullptr && this->templateId_ == nullptr && this->userData_ == nullptr; };
    // mediaAuditConfiguration Field Functions 
    bool hasMediaAuditConfiguration() const { return this->mediaAuditConfiguration_ != nullptr;};
    void deleteMediaAuditConfiguration() { this->mediaAuditConfiguration_ = nullptr;};
    inline string getMediaAuditConfiguration() const { DARABONBA_PTR_GET_DEFAULT(mediaAuditConfiguration_, "") };
    inline SubmitAIMediaAuditJobRequest& setMediaAuditConfiguration(string mediaAuditConfiguration) { DARABONBA_PTR_SET_VALUE(mediaAuditConfiguration_, mediaAuditConfiguration) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitAIMediaAuditJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline SubmitAIMediaAuditJobRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitAIMediaAuditJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIMediaAuditJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The configuration of the review job.
    // - Other configuration items of the review job. Currently, only the ResourceType field is supported, which is used to specify the media file type. You can adjust the review standards and rules for this type.
    // - To adjust the review standards and rules for ResourceType, submit a ticket for technical support. For information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    // - Usage notes for ResourceType: Only letters, digits, and underscores (_) are allowed.
    shared_ptr<string> mediaAuditConfiguration_ {};
    // The audio or video ID. Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Review Management** > **Video Review** to view the audio or video ID.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
    // The media type. Currently, only **video** is supported.
    shared_ptr<string> mediaType_ {};
    // The AI template ID. You can obtain the ID by using one of the following methods:
    // - When you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, the AI template ID is the value of the TemplateId response parameter.
    // - After the AI template is added, call the [ListAITemplate](https://help.aliyun.com/document_detail/102936.html) operation to query the AI template ID, which is the value of the TemplateId response parameter.
    // 
    // > If you do not specify an AI template ID, the default AI template ID for automated review is used.
    shared_ptr<string> templateId_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // > To use the message callback in this parameter, you must configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. For information about how to configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
