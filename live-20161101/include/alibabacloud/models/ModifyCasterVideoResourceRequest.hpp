// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERVIDEORESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERVIDEORESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterVideoResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
    };
    ModifyCasterVideoResourceRequest() = default ;
    ModifyCasterVideoResourceRequest(const ModifyCasterVideoResourceRequest &) = default ;
    ModifyCasterVideoResourceRequest(ModifyCasterVideoResourceRequest &&) = default ;
    ModifyCasterVideoResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterVideoResourceRequest() = default ;
    ModifyCasterVideoResourceRequest& operator=(const ModifyCasterVideoResourceRequest &) = default ;
    ModifyCasterVideoResourceRequest& operator=(ModifyCasterVideoResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginOffset_ == nullptr
        && this->casterId_ == nullptr && this->endOffset_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr && this->liveStreamUrl_ == nullptr
        && this->materialId_ == nullptr && this->ownerId_ == nullptr && this->ptsCallbackInterval_ == nullptr && this->regionId_ == nullptr && this->repeatNum_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->vodUrl_ == nullptr; };
    // beginOffset Field Functions 
    bool hasBeginOffset() const { return this->beginOffset_ != nullptr;};
    void deleteBeginOffset() { this->beginOffset_ = nullptr;};
    inline int32_t getBeginOffset() const { DARABONBA_PTR_GET_DEFAULT(beginOffset_, 0) };
    inline ModifyCasterVideoResourceRequest& setBeginOffset(int32_t beginOffset) { DARABONBA_PTR_SET_VALUE(beginOffset_, beginOffset) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyCasterVideoResourceRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // endOffset Field Functions 
    bool hasEndOffset() const { return this->endOffset_ != nullptr;};
    void deleteEndOffset() { this->endOffset_ = nullptr;};
    inline int32_t getEndOffset() const { DARABONBA_PTR_GET_DEFAULT(endOffset_, 0) };
    inline ModifyCasterVideoResourceRequest& setEndOffset(int32_t endOffset) { DARABONBA_PTR_SET_VALUE(endOffset_, endOffset) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyCasterVideoResourceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ModifyCasterVideoResourceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // liveStreamUrl Field Functions 
    bool hasLiveStreamUrl() const { return this->liveStreamUrl_ != nullptr;};
    void deleteLiveStreamUrl() { this->liveStreamUrl_ = nullptr;};
    inline string getLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(liveStreamUrl_, "") };
    inline ModifyCasterVideoResourceRequest& setLiveStreamUrl(string liveStreamUrl) { DARABONBA_PTR_SET_VALUE(liveStreamUrl_, liveStreamUrl) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline ModifyCasterVideoResourceRequest& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCasterVideoResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ptsCallbackInterval Field Functions 
    bool hasPtsCallbackInterval() const { return this->ptsCallbackInterval_ != nullptr;};
    void deletePtsCallbackInterval() { this->ptsCallbackInterval_ = nullptr;};
    inline int32_t getPtsCallbackInterval() const { DARABONBA_PTR_GET_DEFAULT(ptsCallbackInterval_, 0) };
    inline ModifyCasterVideoResourceRequest& setPtsCallbackInterval(int32_t ptsCallbackInterval) { DARABONBA_PTR_SET_VALUE(ptsCallbackInterval_, ptsCallbackInterval) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCasterVideoResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNum Field Functions 
    bool hasRepeatNum() const { return this->repeatNum_ != nullptr;};
    void deleteRepeatNum() { this->repeatNum_ = nullptr;};
    inline int32_t getRepeatNum() const { DARABONBA_PTR_GET_DEFAULT(repeatNum_, 0) };
    inline ModifyCasterVideoResourceRequest& setRepeatNum(int32_t repeatNum) { DARABONBA_PTR_SET_VALUE(repeatNum_, repeatNum) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ModifyCasterVideoResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ModifyCasterVideoResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // vodUrl Field Functions 
    bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
    void deleteVodUrl() { this->vodUrl_ = nullptr;};
    inline string getVodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
    inline ModifyCasterVideoResourceRequest& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


  protected:
    // The offset of the position where the system starts to read the video resource.
    // 
    // This parameter takes effect only when the video resource is a video file. Unit: milliseconds.
    // 
    // >  A value greater than 0 indicates an offset from the first frame.
    shared_ptr<int32_t> beginOffset_ {};
    // The ID of the production studio.
    // 
    // If you create a production studio through the [CreateCaster](~~69338#doc-api-live-CreateCaster~~ "Creates a production studio.") interface, check the value of the CasterId parameter in the response.
    // 
    // If you create a production studio through the ApsaraVideo Live Console, log in to the console, then check the ID of the production studio through the following path:
    // 
    // Production Studios > Production Studio Management
    // 
    // >  The CasterId is reflected in the Name column on the Production Studio Management page.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // This parameter takes effect only when the video resource is a video file. Unit: milliseconds.
    // 
    // *   A value greater than **0** indicates an offset from the first frame.
    // *   A value smaller than **0** indicates an offset from the last frame.
    shared_ptr<int32_t> endOffset_ {};
    // ID of the media library image material.
    // > This parameter is only available and must be provided when the video source type is an image.
    shared_ptr<string> imageId_ {};
    // Image material URL. 
    // >This parameter is only available when the video source type is an image and the image file has not been imported into the material library. Supports uploading images in jpg, png formats, with a maximum file size of 10MB.
    shared_ptr<string> imageUrl_ {};
    // The URL of the live stream.
    // 
    // This parameter takes effect and is required only when the video resource is a live stream.
    shared_ptr<string> liveStreamUrl_ {};
    // The ID of the material.
    shared_ptr<string> materialId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The interval between presentation timestamp (PTS) callbacks. Unit: milliseconds. This parameter takes effect only when the video resource is a VOD file.
    shared_ptr<int32_t> ptsCallbackInterval_ {};
    shared_ptr<string> regionId_ {};
    // The number of playback times after the first playback is complete. This parameter takes effect only when the video resource is a file. Valid values:
    // 
    // *   **0**: indicates that the video is played only once. This is the default value.
    // *   **-1**: indicates that the video is played in loop mode.
    shared_ptr<int32_t> repeatNum_ {};
    // The ID of the video resource. It is reflected in the ResourceId parameter when you call the [AddCasterVideoResource](~~60250#doc-api-live-AddCasterVideoResource~~ "Adds a video resource to a production studio.") operation.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The name of the video resource.
    shared_ptr<string> resourceName_ {};
    // The URL of the video-on-demand (VOD) file. This parameter takes effect only when the video resource is a video file that is not from the media library.
    // 
    // >  The VOD file must be in the MP4, FLV, or TS format.
    shared_ptr<string> vodUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
