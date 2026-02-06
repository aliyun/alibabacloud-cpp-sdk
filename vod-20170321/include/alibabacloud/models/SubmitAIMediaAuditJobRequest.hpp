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
    // The configuration information about the review job.
    // 
    // *   Other configuration items of the review job. Only the ResourceType field is supported. This field is used to specify the type of media files. You can adjust review standards and rules based on the type of media files.
    // *   If you want to modify the review standard and rules based on ResourceType, submit a ticket. For more information, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    // *   The value of ResourceType can contain only letters, digits, and underscores (_).
    shared_ptr<string> mediaAuditConfiguration_ {};
    // The ID of the video file. To obtain the file ID, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Review Management** > **Content Moderation** in the left-side navigation pane.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
    // The type of the media file. Only **video** is supported.
    shared_ptr<string> mediaType_ {};
    // The ID of the AI template. You can use one of the following methods to obtain the ID of the AI template:
    // 
    // *   Obtain the value of TemplateId from the response to the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation that you call to create an AI template.
    // *   Obtain the value of TemplateId from the response to the [ListAITemplate](https://help.aliyun.com/document_detail/102936.html) operation that you call to create an AI template.
    // 
    // >  If you do not specify an ID, the ID of the default AI template is used.
    shared_ptr<string> templateId_ {};
    // The custom settings. The value must be a JSON string. You can configure settings such as message callbacks. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // >  To use the callback configurations specified by this parameter, you must configure an HTTP callback URL and specify the types of the callback events in the ApsaraVideo VOD console. Otherwise, the callback configurations do not take effect. For more information about how to configure HTTP callback settings in the ApsaraVideo VOD console, see [Configure callback settings](https://help.aliyun.com/document_detail/86071.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
