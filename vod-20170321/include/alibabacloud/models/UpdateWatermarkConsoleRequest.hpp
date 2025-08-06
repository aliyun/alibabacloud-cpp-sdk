// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateWatermarkConsoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWatermarkConsoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(HorizontalOffet, horizontalOffet_);
      DARABONBA_PTR_TO_JSON(HorizontalOffset, horizontalOffset_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Object, object_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_TO_JSON(ScreenMode, screenMode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VerticalOffset, verticalOffset_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
      DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWatermarkConsoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(HorizontalOffet, horizontalOffet_);
      DARABONBA_PTR_FROM_JSON(HorizontalOffset, horizontalOffset_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Object, object_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScreenMode, screenMode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VerticalOffset, verticalOffset_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
      DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateWatermarkConsoleRequest() = default ;
    UpdateWatermarkConsoleRequest(const UpdateWatermarkConsoleRequest &) = default ;
    UpdateWatermarkConsoleRequest(UpdateWatermarkConsoleRequest &&) = default ;
    UpdateWatermarkConsoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWatermarkConsoleRequest() = default ;
    UpdateWatermarkConsoleRequest& operator=(const UpdateWatermarkConsoleRequest &) = default ;
    UpdateWatermarkConsoleRequest& operator=(UpdateWatermarkConsoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucket_ != nullptr
        && this->fileName_ != nullptr && this->height_ != nullptr && this->horizontalOffet_ != nullptr && this->horizontalOffset_ != nullptr && this->name_ != nullptr
        && this->object_ != nullptr && this->ownerId_ != nullptr && this->position_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->resourceRealOwnerId_ != nullptr && this->screenMode_ != nullptr && this->type_ != nullptr && this->verticalOffset_ != nullptr && this->videoHeight_ != nullptr
        && this->videoWidth_ != nullptr && this->watermarkConfig_ != nullptr && this->watermarkId_ != nullptr && this->width_ != nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline UpdateWatermarkConsoleRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpdateWatermarkConsoleRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateWatermarkConsoleRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // horizontalOffet Field Functions 
    bool hasHorizontalOffet() const { return this->horizontalOffet_ != nullptr;};
    void deleteHorizontalOffet() { this->horizontalOffet_ = nullptr;};
    inline string horizontalOffet() const { DARABONBA_PTR_GET_DEFAULT(horizontalOffet_, "") };
    inline UpdateWatermarkConsoleRequest& setHorizontalOffet(string horizontalOffet) { DARABONBA_PTR_SET_VALUE(horizontalOffet_, horizontalOffet) };


    // horizontalOffset Field Functions 
    bool hasHorizontalOffset() const { return this->horizontalOffset_ != nullptr;};
    void deleteHorizontalOffset() { this->horizontalOffset_ = nullptr;};
    inline string horizontalOffset() const { DARABONBA_PTR_GET_DEFAULT(horizontalOffset_, "") };
    inline UpdateWatermarkConsoleRequest& setHorizontalOffset(string horizontalOffset) { DARABONBA_PTR_SET_VALUE(horizontalOffset_, horizontalOffset) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWatermarkConsoleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // object Field Functions 
    bool hasObject() const { return this->object_ != nullptr;};
    void deleteObject() { this->object_ = nullptr;};
    inline string object() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
    inline UpdateWatermarkConsoleRequest& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateWatermarkConsoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline UpdateWatermarkConsoleRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateWatermarkConsoleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateWatermarkConsoleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline UpdateWatermarkConsoleRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


    // screenMode Field Functions 
    bool hasScreenMode() const { return this->screenMode_ != nullptr;};
    void deleteScreenMode() { this->screenMode_ = nullptr;};
    inline string screenMode() const { DARABONBA_PTR_GET_DEFAULT(screenMode_, "") };
    inline UpdateWatermarkConsoleRequest& setScreenMode(string screenMode) { DARABONBA_PTR_SET_VALUE(screenMode_, screenMode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateWatermarkConsoleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // verticalOffset Field Functions 
    bool hasVerticalOffset() const { return this->verticalOffset_ != nullptr;};
    void deleteVerticalOffset() { this->verticalOffset_ = nullptr;};
    inline string verticalOffset() const { DARABONBA_PTR_GET_DEFAULT(verticalOffset_, "") };
    inline UpdateWatermarkConsoleRequest& setVerticalOffset(string verticalOffset) { DARABONBA_PTR_SET_VALUE(verticalOffset_, verticalOffset) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int32_t videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0) };
    inline UpdateWatermarkConsoleRequest& setVideoHeight(int32_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int32_t videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0) };
    inline UpdateWatermarkConsoleRequest& setVideoWidth(int32_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


    // watermarkConfig Field Functions 
    bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
    void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
    inline string watermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
    inline UpdateWatermarkConsoleRequest& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline UpdateWatermarkConsoleRequest& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateWatermarkConsoleRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> bucket_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> horizontalOffet_ = nullptr;
    std::shared_ptr<string> horizontalOffset_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> object_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
    std::shared_ptr<string> screenMode_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> verticalOffset_ = nullptr;
    std::shared_ptr<int32_t> videoHeight_ = nullptr;
    std::shared_ptr<int32_t> videoWidth_ = nullptr;
    std::shared_ptr<string> watermarkConfig_ = nullptr;
    std::shared_ptr<string> watermarkId_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
