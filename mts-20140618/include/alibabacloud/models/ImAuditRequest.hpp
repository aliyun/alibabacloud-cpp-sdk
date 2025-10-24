// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scenes, scenes_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
    };
    ImAuditRequest() = default ;
    ImAuditRequest(const ImAuditRequest &) = default ;
    ImAuditRequest(ImAuditRequest &&) = default ;
    ImAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditRequest() = default ;
    ImAuditRequest& operator=(const ImAuditRequest &) = default ;
    ImAuditRequest& operator=(ImAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->contents_ == nullptr && return this->images_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->scenes_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ImAuditRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline string contents() const { DARABONBA_PTR_GET_DEFAULT(contents_, "") };
    inline ImAuditRequest& setContents(string contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline string images() const { DARABONBA_PTR_GET_DEFAULT(images_, "") };
    inline ImAuditRequest& setImages(string images) { DARABONBA_PTR_SET_VALUE(images_, images) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ImAuditRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ImAuditRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ImAuditRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scenes Field Functions 
    bool hasScenes() const { return this->scenes_ != nullptr;};
    void deleteScenes() { this->scenes_ = nullptr;};
    inline string scenes() const { DARABONBA_PTR_GET_DEFAULT(scenes_, "") };
    inline ImAuditRequest& setScenes(string scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };


  protected:
    // The business type. By default, the public business type is used.
    std::shared_ptr<string> bizType_ = nullptr;
    // The custom text entries. You can specify up to 5 text entries. The value must be a JSON array. You must specify at least one of the Images and Contents parameters.
    std::shared_ptr<string> contents_ = nullptr;
    // The image URLs. You can specify up to 5 image URLs. The value must be a JSON array. To view the URLs of the images, you can log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Media Management** > **Media List** in the left-side navigation pane. You must set at least one of the Images and Contents parameters. The image to be moderated must meet the following limits. Otherwise, the moderation task may fail.
    // 
    // *   The image size cannot exceed 20 MB, the height or width of the image cannot exceed 30,000 pixels, and the image cannot exceed 0.25 billion pixels.
    // *   We recommend that you upload images of at least 256 × 256 pixels to ensure required moderation result.
    std::shared_ptr<string> images_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The moderation scenarios. Separate multiple scenarios with commas (,). For example, if you specify {"porn","terrorism"} for this parameter, both pornographic content detection and terrorist content detection are performed on the images and text. Valid values:
    // 
    // *   porn: pornography
    // *   terrorism: terrorist content
    // *   ad: ad violation
    // *   qrcode: QR code
    // *   live: undesirable scene
    // *   logo: special logo
    // *   antispam: text anti-spam (valid only for text)
    // 
    // This parameter is required.
    std::shared_ptr<string> scenes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
