// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDIGITALWATERMARKEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDIGITALWATERMARKEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitDigitalWatermarkExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDigitalWatermarkExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtractType, extractType_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDigitalWatermarkExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtractType, extractType_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SubmitDigitalWatermarkExtractJobRequest() = default ;
    SubmitDigitalWatermarkExtractJobRequest(const SubmitDigitalWatermarkExtractJobRequest &) = default ;
    SubmitDigitalWatermarkExtractJobRequest(SubmitDigitalWatermarkExtractJobRequest &&) = default ;
    SubmitDigitalWatermarkExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDigitalWatermarkExtractJobRequest() = default ;
    SubmitDigitalWatermarkExtractJobRequest& operator=(const SubmitDigitalWatermarkExtractJobRequest &) = default ;
    SubmitDigitalWatermarkExtractJobRequest& operator=(SubmitDigitalWatermarkExtractJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extractType_ != nullptr
        && this->mediaId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // extractType Field Functions 
    bool hasExtractType() const { return this->extractType_ != nullptr;};
    void deleteExtractType() { this->extractType_ = nullptr;};
    inline string extractType() const { DARABONBA_PTR_GET_DEFAULT(extractType_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setExtractType(string extractType) { DARABONBA_PTR_SET_VALUE(extractType_, extractType) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline SubmitDigitalWatermarkExtractJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The type of the watermark that you want to extract. Valid values:
    // 
    // *   **TraceMark**: user-tracing watermark
    // *   **CopyrightMark**: copyright watermark
    // 
    // This parameter is required.
    std::shared_ptr<string> extractType_ = nullptr;
    // The ID of the video from which you want to extract the watermark. You can specify only one ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video** to view the video ID.
    // *   Obtain the VideoId from the response to the [SearchMedia](~~SearchMedia~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
