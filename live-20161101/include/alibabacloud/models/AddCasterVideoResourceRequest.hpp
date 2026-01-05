// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERVIDEORESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERVIDEORESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterVideoResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
    };
    AddCasterVideoResourceRequest() = default ;
    AddCasterVideoResourceRequest(const AddCasterVideoResourceRequest &) = default ;
    AddCasterVideoResourceRequest(AddCasterVideoResourceRequest &&) = default ;
    AddCasterVideoResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterVideoResourceRequest() = default ;
    AddCasterVideoResourceRequest& operator=(const AddCasterVideoResourceRequest &) = default ;
    AddCasterVideoResourceRequest& operator=(AddCasterVideoResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginOffset_ == nullptr
        && this->casterId_ == nullptr && this->endOffset_ == nullptr && this->fixedDelayDuration_ == nullptr && this->imageId_ == nullptr && this->imageUrl_ == nullptr
        && this->liveStreamUrl_ == nullptr && this->locationId_ == nullptr && this->materialId_ == nullptr && this->ownerId_ == nullptr && this->ptsCallbackInterval_ == nullptr
        && this->regionId_ == nullptr && this->repeatNum_ == nullptr && this->resourceName_ == nullptr && this->vodUrl_ == nullptr; };
    // beginOffset Field Functions 
    bool hasBeginOffset() const { return this->beginOffset_ != nullptr;};
    void deleteBeginOffset() { this->beginOffset_ = nullptr;};
    inline int32_t getBeginOffset() const { DARABONBA_PTR_GET_DEFAULT(beginOffset_, 0) };
    inline AddCasterVideoResourceRequest& setBeginOffset(int32_t beginOffset) { DARABONBA_PTR_SET_VALUE(beginOffset_, beginOffset) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterVideoResourceRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // endOffset Field Functions 
    bool hasEndOffset() const { return this->endOffset_ != nullptr;};
    void deleteEndOffset() { this->endOffset_ = nullptr;};
    inline int32_t getEndOffset() const { DARABONBA_PTR_GET_DEFAULT(endOffset_, 0) };
    inline AddCasterVideoResourceRequest& setEndOffset(int32_t endOffset) { DARABONBA_PTR_SET_VALUE(endOffset_, endOffset) };


    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t getFixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline AddCasterVideoResourceRequest& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AddCasterVideoResourceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline AddCasterVideoResourceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // liveStreamUrl Field Functions 
    bool hasLiveStreamUrl() const { return this->liveStreamUrl_ != nullptr;};
    void deleteLiveStreamUrl() { this->liveStreamUrl_ = nullptr;};
    inline string getLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(liveStreamUrl_, "") };
    inline AddCasterVideoResourceRequest& setLiveStreamUrl(string liveStreamUrl) { DARABONBA_PTR_SET_VALUE(liveStreamUrl_, liveStreamUrl) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline AddCasterVideoResourceRequest& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline AddCasterVideoResourceRequest& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterVideoResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ptsCallbackInterval Field Functions 
    bool hasPtsCallbackInterval() const { return this->ptsCallbackInterval_ != nullptr;};
    void deletePtsCallbackInterval() { this->ptsCallbackInterval_ = nullptr;};
    inline int32_t getPtsCallbackInterval() const { DARABONBA_PTR_GET_DEFAULT(ptsCallbackInterval_, 0) };
    inline AddCasterVideoResourceRequest& setPtsCallbackInterval(int32_t ptsCallbackInterval) { DARABONBA_PTR_SET_VALUE(ptsCallbackInterval_, ptsCallbackInterval) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterVideoResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNum Field Functions 
    bool hasRepeatNum() const { return this->repeatNum_ != nullptr;};
    void deleteRepeatNum() { this->repeatNum_ = nullptr;};
    inline int32_t getRepeatNum() const { DARABONBA_PTR_GET_DEFAULT(repeatNum_, 0) };
    inline AddCasterVideoResourceRequest& setRepeatNum(int32_t repeatNum) { DARABONBA_PTR_SET_VALUE(repeatNum_, repeatNum) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline AddCasterVideoResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // vodUrl Field Functions 
    bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
    void deleteVodUrl() { this->vodUrl_ = nullptr;};
    inline string getVodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
    inline AddCasterVideoResourceRequest& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


  protected:
    // The offset of the position where the system starts to read the video source. Unit: milliseconds.
    // 
    // **
    // 
    // **Important** This parameter takes effect only if the video source is a file.
    // 
    // > A value greater than **0** specifies an offset from the first frame.
    shared_ptr<int32_t> beginOffset_ {};
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/69338.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // > You can find the ID of the production studio in the Instance Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The offset of the position where the system stops reading the video source. Unit: milliseconds.
    // 
    // **
    // 
    // **Important** This parameter takes effect only if the video source is a file.
    // 
    // *   A value greater than **0** specifies an offset from the first frame.
    // *   A value less than **0** specifies an offset from the last frame.
    shared_ptr<int32_t> endOffset_ {};
    // The fixed delay of the video layer. This parameter is used to synchronize the video with subtitles. Unit: milliseconds. Default value: 0. Valid values: `0 to 5000`.
    shared_ptr<int32_t> fixedDelayDuration_ {};
    // ID of the media library image material. 
    // >This parameter is only available and must be provided when the video source type is an image.
    shared_ptr<string> imageId_ {};
    // Image material URL. 
    // >This parameter is available only when the video source type is an image and the image file has not been imported into the material library. Supports uploading images in jpg, png formats, with a maximum file size of 10MB.
    shared_ptr<string> imageUrl_ {};
    // The streaming URL.
    // 
    // **
    // 
    // **Important** This parameter is required if the video source is a live stream.
    // 
    // > Do not specify this parameter in the request if the video source is not a live stream.
    shared_ptr<string> liveStreamUrl_ {};
    // The ID that is used to identify the position of the video source.
    // 
    // Define the reference numbers in the layout. Each reference number is associated with only one resource. The value of this parameter must be in the RV[Number] format, where Number is `01 to 99`.
    shared_ptr<string> locationId_ {};
    // The ID of the material from the media library.
    // 
    // **
    // 
    // **Important** This parameter takes effect and is required only if the video source is a material.
    // 
    // If you query the configurations of the production studio by calling the [DescribeCasterConfig](https://help.aliyun.com/document_detail/60259.html) operation, obtain the value of the response parameter UrgentMaterialId.
    // 
    // > The value of the UrgentMaterialId parameter is the ID of the material from the media library.
    shared_ptr<string> materialId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The interval between presentation timestamp (PTS) callbacks. Unit: milliseconds.
    shared_ptr<int32_t> ptsCallbackInterval_ {};
    shared_ptr<string> regionId_ {};
    // The number of playbacks after the first playback is complete. Valid values:
    // 
    // **
    // 
    // **Important** This parameter takes effect only if the video source is a file.
    // 
    // *   **0**: specifies that the video source is played only once. This is the default value.
    // *   **-1**: specifies that the video source is played in loop mode.
    shared_ptr<int32_t> repeatNum_ {};
    // The name of the video source.
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // The URL of the VOD file.
    // 
    // **
    // 
    // **Important** This parameter takes effect only if the video source is a file that is not from the media library.
    // 
    // > The VOD file must be in the MP4, FLV, or TS format.
    shared_ptr<string> vodUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
