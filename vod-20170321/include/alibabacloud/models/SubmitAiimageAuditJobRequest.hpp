// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIIMAGEAUDITJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIIMAGEAUDITJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIImageAuditJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIImageAuditJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditConfiguration, mediaAuditConfiguration_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIImageAuditJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditConfiguration, mediaAuditConfiguration_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitAIImageAuditJobRequest() = default ;
    SubmitAIImageAuditJobRequest(const SubmitAIImageAuditJobRequest &) = default ;
    SubmitAIImageAuditJobRequest(SubmitAIImageAuditJobRequest &&) = default ;
    SubmitAIImageAuditJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIImageAuditJobRequest() = default ;
    SubmitAIImageAuditJobRequest& operator=(const SubmitAIImageAuditJobRequest &) = default ;
    SubmitAIImageAuditJobRequest& operator=(SubmitAIImageAuditJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaAuditConfiguration_ != nullptr
        && this->mediaId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->templateId_ != nullptr; };
    // mediaAuditConfiguration Field Functions 
    bool hasMediaAuditConfiguration() const { return this->mediaAuditConfiguration_ != nullptr;};
    void deleteMediaAuditConfiguration() { this->mediaAuditConfiguration_ = nullptr;};
    inline string mediaAuditConfiguration() const { DARABONBA_PTR_GET_DEFAULT(mediaAuditConfiguration_, "") };
    inline SubmitAIImageAuditJobRequest& setMediaAuditConfiguration(string mediaAuditConfiguration) { DARABONBA_PTR_SET_VALUE(mediaAuditConfiguration_, mediaAuditConfiguration) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitAIImageAuditJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitAIImageAuditJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SubmitAIImageAuditJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitAIImageAuditJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline SubmitAIImageAuditJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitAIImageAuditJobRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The configuration information about the review job.
    // 
    // *   Other configuration items of the review job. Only the ResourceType field is supported. This field is used to specify the type of media files. You can adjust review standards and rules based on the type of media files.
    // *   The value of ResourceType can contain only letters, digits, and underscores (_).
    // 
    // > *   You can specify a value for the ResourceType field based on the preceding limits. After you specify a value for the ResourceType field, you must [submit a ticket](https://yida.alibaba-inc.com/o/ticketapply). The value takes effect after Alibaba Cloud processes your ticket.
    // >*   If you want to change moderation policies and rules based on ResourceType, [submit a ticket](https://yida.alibaba-inc.com/o/ticketapply) to contact technical support.
    std::shared_ptr<string> mediaAuditConfiguration_ = nullptr;
    // The ID of the image.
    // 
    // The unique ID of the image is returned after the image is uploaded to ApsaraVideo VOD.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    // The ID of the AI template. You can use one of the following methods to obtain the ID:
    // 
    // *   Obtain the value of TemplateId from the response to the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation that you call to create an AI template.
    // *   Obtain the value of TemplateId from the response to the [ListAITemplate](https://help.aliyun.com/document_detail/102936.html) operation that you call to create an AI template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
