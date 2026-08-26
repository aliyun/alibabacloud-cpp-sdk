// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEAISTUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEAISTUDIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveAIStudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_TO_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_TO_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MattingLayout, mattingLayout_);
      DARABONBA_PTR_TO_JSON(MattingType, mattingType_);
      DARABONBA_PTR_TO_JSON(MediaLayout, mediaLayout_);
      DARABONBA_PTR_TO_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_TO_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveAIStudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_FROM_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_FROM_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MattingLayout, mattingLayout_);
      DARABONBA_PTR_FROM_JSON(MattingType, mattingType_);
      DARABONBA_PTR_FROM_JSON(MediaLayout, mediaLayout_);
      DARABONBA_PTR_FROM_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_FROM_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ModifyLiveAIStudioRequest() = default ;
    ModifyLiveAIStudioRequest(const ModifyLiveAIStudioRequest &) = default ;
    ModifyLiveAIStudioRequest(ModifyLiveAIStudioRequest &&) = default ;
    ModifyLiveAIStudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveAIStudioRequest() = default ;
    ModifyLiveAIStudioRequest& operator=(const ModifyLiveAIStudioRequest &) = default ;
    ModifyLiveAIStudioRequest& operator=(ModifyLiveAIStudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaLayout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaLayout& obj) { 
        DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_TO_JSON(PositionX, positionX_);
        DARABONBA_PTR_TO_JSON(PositionY, positionY_);
      };
      friend void from_json(const Darabonba::Json& j, MediaLayout& obj) { 
        DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_FROM_JSON(PositionX, positionX_);
        DARABONBA_PTR_FROM_JSON(PositionY, positionY_);
      };
      MediaLayout() = default ;
      MediaLayout(const MediaLayout &) = default ;
      MediaLayout(MediaLayout &&) = default ;
      MediaLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaLayout() = default ;
      MediaLayout& operator=(const MediaLayout &) = default ;
      MediaLayout& operator=(MediaLayout &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->heightNormalized_ == nullptr
        && this->positionX_ == nullptr && this->positionY_ == nullptr; };
      // heightNormalized Field Functions 
      bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
      void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
      inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
      inline MediaLayout& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


      // positionX Field Functions 
      bool hasPositionX() const { return this->positionX_ != nullptr;};
      void deletePositionX() { this->positionX_ = nullptr;};
      inline float getPositionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0.0) };
      inline MediaLayout& setPositionX(float positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


      // positionY Field Functions 
      bool hasPositionY() const { return this->positionY_ != nullptr;};
      void deletePositionY() { this->positionY_ = nullptr;};
      inline float getPositionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0.0) };
      inline MediaLayout& setPositionY(float positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    protected:
      // Normalized height value of the material, which is the height ratio of the material to the background. Value range: **0~1**.
      shared_ptr<float> heightNormalized_ {};
      // Position parameter, X coordinate. Value range: **0~1**. The material position uses the upper-left corner as the reference point.
      shared_ptr<float> positionX_ {};
      // Position parameter, Y coordinate. Value range: **0~1**. The material position uses the upper-left corner as the reference point.
      shared_ptr<float> positionY_ {};
    };

    class MattingLayout : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MattingLayout& obj) { 
        DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_TO_JSON(PositionX, positionX_);
        DARABONBA_PTR_TO_JSON(PositionY, positionY_);
      };
      friend void from_json(const Darabonba::Json& j, MattingLayout& obj) { 
        DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_FROM_JSON(PositionX, positionX_);
        DARABONBA_PTR_FROM_JSON(PositionY, positionY_);
      };
      MattingLayout() = default ;
      MattingLayout(const MattingLayout &) = default ;
      MattingLayout(MattingLayout &&) = default ;
      MattingLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MattingLayout() = default ;
      MattingLayout& operator=(const MattingLayout &) = default ;
      MattingLayout& operator=(MattingLayout &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->heightNormalized_ == nullptr
        && this->positionX_ == nullptr && this->positionY_ == nullptr; };
      // heightNormalized Field Functions 
      bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
      void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
      inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
      inline MattingLayout& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


      // positionX Field Functions 
      bool hasPositionX() const { return this->positionX_ != nullptr;};
      void deletePositionX() { this->positionX_ = nullptr;};
      inline float getPositionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, 0.0) };
      inline MattingLayout& setPositionX(float positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


      // positionY Field Functions 
      bool hasPositionY() const { return this->positionY_ != nullptr;};
      void deletePositionY() { this->positionY_ = nullptr;};
      inline float getPositionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, 0.0) };
      inline MattingLayout& setPositionY(float positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    protected:
      // Normalized height value, which is the height ratio of the matted portrait to the background. Value range: **0~1**.
      shared_ptr<float> heightNormalized_ {};
      // Position parameter, X coordinate. Value range: **0~1**. The material position uses the upper-left corner as the reference point.
      shared_ptr<float> positionX_ {};
      // Position parameter, Y coordinate. Value range: **0~1**. The material position uses the upper-left corner as the reference point.
      shared_ptr<float> positionY_ {};
    };

    virtual bool empty() const override { return this->backgroundResourceId_ == nullptr
        && this->backgroundResourceUrl_ == nullptr && this->backgroundType_ == nullptr && this->description_ == nullptr && this->height_ == nullptr && this->mattingLayout_ == nullptr
        && this->mattingType_ == nullptr && this->mediaLayout_ == nullptr && this->mediaResourceId_ == nullptr && this->mediaResourceUrl_ == nullptr && this->mediaType_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->studioName_ == nullptr && this->width_ == nullptr; };
    // backgroundResourceId Field Functions 
    bool hasBackgroundResourceId() const { return this->backgroundResourceId_ != nullptr;};
    void deleteBackgroundResourceId() { this->backgroundResourceId_ = nullptr;};
    inline string getBackgroundResourceId() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceId_, "") };
    inline ModifyLiveAIStudioRequest& setBackgroundResourceId(string backgroundResourceId) { DARABONBA_PTR_SET_VALUE(backgroundResourceId_, backgroundResourceId) };


    // backgroundResourceUrl Field Functions 
    bool hasBackgroundResourceUrl() const { return this->backgroundResourceUrl_ != nullptr;};
    void deleteBackgroundResourceUrl() { this->backgroundResourceUrl_ = nullptr;};
    inline string getBackgroundResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceUrl_, "") };
    inline ModifyLiveAIStudioRequest& setBackgroundResourceUrl(string backgroundResourceUrl) { DARABONBA_PTR_SET_VALUE(backgroundResourceUrl_, backgroundResourceUrl) };


    // backgroundType Field Functions 
    bool hasBackgroundType() const { return this->backgroundType_ != nullptr;};
    void deleteBackgroundType() { this->backgroundType_ = nullptr;};
    inline string getBackgroundType() const { DARABONBA_PTR_GET_DEFAULT(backgroundType_, "") };
    inline ModifyLiveAIStudioRequest& setBackgroundType(string backgroundType) { DARABONBA_PTR_SET_VALUE(backgroundType_, backgroundType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyLiveAIStudioRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ModifyLiveAIStudioRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mattingLayout Field Functions 
    bool hasMattingLayout() const { return this->mattingLayout_ != nullptr;};
    void deleteMattingLayout() { this->mattingLayout_ = nullptr;};
    inline const ModifyLiveAIStudioRequest::MattingLayout & getMattingLayout() const { DARABONBA_PTR_GET_CONST(mattingLayout_, ModifyLiveAIStudioRequest::MattingLayout) };
    inline ModifyLiveAIStudioRequest::MattingLayout getMattingLayout() { DARABONBA_PTR_GET(mattingLayout_, ModifyLiveAIStudioRequest::MattingLayout) };
    inline ModifyLiveAIStudioRequest& setMattingLayout(const ModifyLiveAIStudioRequest::MattingLayout & mattingLayout) { DARABONBA_PTR_SET_VALUE(mattingLayout_, mattingLayout) };
    inline ModifyLiveAIStudioRequest& setMattingLayout(ModifyLiveAIStudioRequest::MattingLayout && mattingLayout) { DARABONBA_PTR_SET_RVALUE(mattingLayout_, mattingLayout) };


    // mattingType Field Functions 
    bool hasMattingType() const { return this->mattingType_ != nullptr;};
    void deleteMattingType() { this->mattingType_ = nullptr;};
    inline string getMattingType() const { DARABONBA_PTR_GET_DEFAULT(mattingType_, "") };
    inline ModifyLiveAIStudioRequest& setMattingType(string mattingType) { DARABONBA_PTR_SET_VALUE(mattingType_, mattingType) };


    // mediaLayout Field Functions 
    bool hasMediaLayout() const { return this->mediaLayout_ != nullptr;};
    void deleteMediaLayout() { this->mediaLayout_ = nullptr;};
    inline const ModifyLiveAIStudioRequest::MediaLayout & getMediaLayout() const { DARABONBA_PTR_GET_CONST(mediaLayout_, ModifyLiveAIStudioRequest::MediaLayout) };
    inline ModifyLiveAIStudioRequest::MediaLayout getMediaLayout() { DARABONBA_PTR_GET(mediaLayout_, ModifyLiveAIStudioRequest::MediaLayout) };
    inline ModifyLiveAIStudioRequest& setMediaLayout(const ModifyLiveAIStudioRequest::MediaLayout & mediaLayout) { DARABONBA_PTR_SET_VALUE(mediaLayout_, mediaLayout) };
    inline ModifyLiveAIStudioRequest& setMediaLayout(ModifyLiveAIStudioRequest::MediaLayout && mediaLayout) { DARABONBA_PTR_SET_RVALUE(mediaLayout_, mediaLayout) };


    // mediaResourceId Field Functions 
    bool hasMediaResourceId() const { return this->mediaResourceId_ != nullptr;};
    void deleteMediaResourceId() { this->mediaResourceId_ = nullptr;};
    inline string getMediaResourceId() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceId_, "") };
    inline ModifyLiveAIStudioRequest& setMediaResourceId(string mediaResourceId) { DARABONBA_PTR_SET_VALUE(mediaResourceId_, mediaResourceId) };


    // mediaResourceUrl Field Functions 
    bool hasMediaResourceUrl() const { return this->mediaResourceUrl_ != nullptr;};
    void deleteMediaResourceUrl() { this->mediaResourceUrl_ = nullptr;};
    inline string getMediaResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceUrl_, "") };
    inline ModifyLiveAIStudioRequest& setMediaResourceUrl(string mediaResourceUrl) { DARABONBA_PTR_SET_VALUE(mediaResourceUrl_, mediaResourceUrl) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ModifyLiveAIStudioRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLiveAIStudioRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLiveAIStudioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string getStudioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline ModifyLiveAIStudioRequest& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ModifyLiveAIStudioRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // VOD resource ID of the background material, obtained from the VOD console.
    shared_ptr<string> backgroundResourceId_ {};
    // Resource access URL of the background material.
    shared_ptr<string> backgroundResourceUrl_ {};
    // Background material type:
    // - VOD: Video on demand
    // - PIC: Image
    // - LIVE: Live stream
    shared_ptr<string> backgroundType_ {};
    // Custom description.
    shared_ptr<string> description_ {};
    // Preview screen height, unit: px.
    // 
    // The preview screen width x height only supports the following specifications:
    // 
    // - Landscape Smooth 360P 640x360
    // - Portrait Smooth 360P 360x640
    // - Landscape Standard Definition 480P 854x480
    // - Portrait Standard Definition 480P 480x854
    // - Landscape HD 720P 1280x720
    // - Portrait HD 720P 720x1280
    // - Landscape Full HD 1080P 1920x1080
    // - Portrait Full HD 1080P 1080x1920
    shared_ptr<int32_t> height_ {};
    // Layout position information of the source stream after matting.
    // 
    // This parameter is required.
    shared_ptr<ModifyLiveAIStudioRequest::MattingLayout> mattingLayout_ {};
    // Matting type:
    // - green: Green screen matting
    // - blue: Blue screen matting
    // - complex: Real-scene matting
    // 
    // This parameter is required.
    shared_ptr<string> mattingType_ {};
    // Layout position information of the multimedia material.
    shared_ptr<ModifyLiveAIStudioRequest::MediaLayout> mediaLayout_ {};
    // VOD resource ID of the multimedia material, obtained from the VOD console.
    shared_ptr<string> mediaResourceId_ {};
    // Resource access URL of the multimedia material. Either this or the resource ID should be provided.
    shared_ptr<string> mediaResourceUrl_ {};
    // Multimedia material type:
    // - VOD: Video on demand
    // - PIC: Image
    // - LIVE: Live stream
    shared_ptr<string> mediaType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Virtual studio template name, same as the StudioName parameter in the create API.
    // 
    // This parameter is required.
    shared_ptr<string> studioName_ {};
    // Preview screen width, unit: px.
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
