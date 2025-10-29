// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODYVIDEORESOURCESVIDEORESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODYVIDEORESOURCESVIDEORESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& obj) { 
      DARABONBA_PTR_TO_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_TO_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_TO_JSON(FlvUrl, flvUrl_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_TO_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginOffset, beginOffset_);
      DARABONBA_PTR_FROM_JSON(EndOffset, endOffset_);
      DARABONBA_PTR_FROM_JSON(FlvUrl, flvUrl_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LiveStreamUrl, liveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(PtsCallbackInterval, ptsCallbackInterval_);
      DARABONBA_PTR_FROM_JSON(RepeatNum, repeatNum_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
    };
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource() = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource(const DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource &) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource(DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource &&) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource() = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& operator=(const DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource &) = default ;
    DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& operator=(DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginOffset_ == nullptr
        && return this->endOffset_ == nullptr && return this->flvUrl_ == nullptr && return this->imageId_ == nullptr && return this->imageUrl_ == nullptr && return this->liveStreamUrl_ == nullptr
        && return this->locationId_ == nullptr && return this->materialId_ == nullptr && return this->ptsCallbackInterval_ == nullptr && return this->repeatNum_ == nullptr && return this->resourceId_ == nullptr
        && return this->resourceName_ == nullptr && return this->vodUrl_ == nullptr; };
    // beginOffset Field Functions 
    bool hasBeginOffset() const { return this->beginOffset_ != nullptr;};
    void deleteBeginOffset() { this->beginOffset_ = nullptr;};
    inline int32_t beginOffset() const { DARABONBA_PTR_GET_DEFAULT(beginOffset_, 0) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setBeginOffset(int32_t beginOffset) { DARABONBA_PTR_SET_VALUE(beginOffset_, beginOffset) };


    // endOffset Field Functions 
    bool hasEndOffset() const { return this->endOffset_ != nullptr;};
    void deleteEndOffset() { this->endOffset_ = nullptr;};
    inline int32_t endOffset() const { DARABONBA_PTR_GET_DEFAULT(endOffset_, 0) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setEndOffset(int32_t endOffset) { DARABONBA_PTR_SET_VALUE(endOffset_, endOffset) };


    // flvUrl Field Functions 
    bool hasFlvUrl() const { return this->flvUrl_ != nullptr;};
    void deleteFlvUrl() { this->flvUrl_ = nullptr;};
    inline string flvUrl() const { DARABONBA_PTR_GET_DEFAULT(flvUrl_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setFlvUrl(string flvUrl) { DARABONBA_PTR_SET_VALUE(flvUrl_, flvUrl) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // liveStreamUrl Field Functions 
    bool hasLiveStreamUrl() const { return this->liveStreamUrl_ != nullptr;};
    void deleteLiveStreamUrl() { this->liveStreamUrl_ = nullptr;};
    inline string liveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(liveStreamUrl_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setLiveStreamUrl(string liveStreamUrl) { DARABONBA_PTR_SET_VALUE(liveStreamUrl_, liveStreamUrl) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string materialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // ptsCallbackInterval Field Functions 
    bool hasPtsCallbackInterval() const { return this->ptsCallbackInterval_ != nullptr;};
    void deletePtsCallbackInterval() { this->ptsCallbackInterval_ = nullptr;};
    inline int32_t ptsCallbackInterval() const { DARABONBA_PTR_GET_DEFAULT(ptsCallbackInterval_, 0) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setPtsCallbackInterval(int32_t ptsCallbackInterval) { DARABONBA_PTR_SET_VALUE(ptsCallbackInterval_, ptsCallbackInterval) };


    // repeatNum Field Functions 
    bool hasRepeatNum() const { return this->repeatNum_ != nullptr;};
    void deleteRepeatNum() { this->repeatNum_ = nullptr;};
    inline int32_t repeatNum() const { DARABONBA_PTR_GET_DEFAULT(repeatNum_, 0) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setRepeatNum(int32_t repeatNum) { DARABONBA_PTR_SET_VALUE(repeatNum_, repeatNum) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // vodUrl Field Functions 
    bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
    void deleteVodUrl() { this->vodUrl_ = nullptr;};
    inline string vodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
    inline DescribeCasterVideoResourcesResponseBodyVideoResourcesVideoResource& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


  protected:
    // The offset of the position where the system starts to read the video resource. This parameter takes effect only if the input source is a video file. Unit: milliseconds.
    // 
    // A value **greater than 0** indicates an offset from the first frame.
    std::shared_ptr<int32_t> beginOffset_ = nullptr;
    // The offset of the position where the system stops reading the video file. This parameter takes effect only if the input source is a video file. Unit: milliseconds.
    // 
    // *   A value greater than **0** indicates an offset from the first frame.
    // *   A value smaller than **0** indicates an offset from the last frame.
    std::shared_ptr<int32_t> endOffset_ = nullptr;
    // The source URL.
    std::shared_ptr<string> flvUrl_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image URL.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<string> liveStreamUrl_ = nullptr;
    // The position of the video resource.
    std::shared_ptr<string> locationId_ = nullptr;
    // The material ID.
    std::shared_ptr<string> materialId_ = nullptr;
    // The interval between presentation timestamp (PTS) callbacks. If you set the value to 0, the PTS callback is disabled. This parameter is returned only when the video resource is a video-on-demand (VOD) file.
    std::shared_ptr<int32_t> ptsCallbackInterval_ = nullptr;
    // The number of playback times after the first playback is complete. This parameter takes effect only when the input source is a video file. Valid values:
    // 
    // *   **0** (default): The video file is played only once.
    // *   **-1**: The video file is played in loop mode.
    std::shared_ptr<int32_t> repeatNum_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The URL of the VOD file.
    // 
    // This parameter is returned only when the video resource is an MP4, FLV, or TS file that is not from the media library.
    std::shared_ptr<string> vodUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
