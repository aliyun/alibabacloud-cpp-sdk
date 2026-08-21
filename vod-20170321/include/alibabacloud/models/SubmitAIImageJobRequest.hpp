// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIIMAGEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIIMAGEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIImageJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIImageJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIPipelineId, AIPipelineId_);
      DARABONBA_PTR_TO_JSON(AITemplateId, AITemplateId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIImageJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIPipelineId, AIPipelineId_);
      DARABONBA_PTR_FROM_JSON(AITemplateId, AITemplateId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    SubmitAIImageJobRequest() = default ;
    SubmitAIImageJobRequest(const SubmitAIImageJobRequest &) = default ;
    SubmitAIImageJobRequest(SubmitAIImageJobRequest &&) = default ;
    SubmitAIImageJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIImageJobRequest() = default ;
    SubmitAIImageJobRequest& operator=(const SubmitAIImageJobRequest &) = default ;
    SubmitAIImageJobRequest& operator=(SubmitAIImageJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIPipelineId_ == nullptr
        && this->AITemplateId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->userData_ == nullptr && this->videoId_ == nullptr; };
    // AIPipelineId Field Functions 
    bool hasAIPipelineId() const { return this->AIPipelineId_ != nullptr;};
    void deleteAIPipelineId() { this->AIPipelineId_ = nullptr;};
    inline string getAIPipelineId() const { DARABONBA_PTR_GET_DEFAULT(AIPipelineId_, "") };
    inline SubmitAIImageJobRequest& setAIPipelineId(string AIPipelineId) { DARABONBA_PTR_SET_VALUE(AIPipelineId_, AIPipelineId) };


    // AITemplateId Field Functions 
    bool hasAITemplateId() const { return this->AITemplateId_ != nullptr;};
    void deleteAITemplateId() { this->AITemplateId_ = nullptr;};
    inline string getAITemplateId() const { DARABONBA_PTR_GET_DEFAULT(AITemplateId_, "") };
    inline SubmitAIImageJobRequest& setAITemplateId(string AITemplateId) { DARABONBA_PTR_SET_VALUE(AITemplateId_, AITemplateId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitAIImageJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SubmitAIImageJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitAIImageJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline SubmitAIImageJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIImageJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitAIImageJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The AI task pipeline ID.
    // 
    // > A default ID is available, so this parameter is optional. If you need to perform batch imports, use a separate task pipeline. Submit a ticket to request configuration or contact Alibaba Cloud after-sales support for configuration. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    shared_ptr<string> AIPipelineId_ {};
    // The AI image template ID. You can obtain the template ID by using one of the following methods:
    // - When you create an image template by calling the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation, the template ID is the value of the TemplateId parameter in the response.
    // - After the template is created, you can call the [ListAITemplate](https://help.aliyun.com/document_detail/102936.html) operation to query the AI image template ID, which is the value of the TemplateId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> AITemplateId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<string> resourceOwnerId_ {};
    // The custom settings.
    // - The value must be a JSON string.
    // - The value must contain the MessageCallback or Extend parameter.
    // - The maximum length is 512 bytes.
    // 
    // For more information about the parameter structure, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    shared_ptr<string> userData_ {};
    // The video ID. You can obtain the video ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - When you upload a video by calling the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation, the video ID is the value of the VideoId parameter in the response.
    // - After the video is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID, which is the value of the VideoId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
