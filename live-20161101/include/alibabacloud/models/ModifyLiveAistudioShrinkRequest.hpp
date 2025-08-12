// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEAISTUDIOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEAISTUDIOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveAIStudioShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveAIStudioShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_TO_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_TO_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MattingLayout, mattingLayoutShrink_);
      DARABONBA_PTR_TO_JSON(MattingType, mattingType_);
      DARABONBA_PTR_TO_JSON(MediaLayout, mediaLayoutShrink_);
      DARABONBA_PTR_TO_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_TO_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveAIStudioShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundResourceId, backgroundResourceId_);
      DARABONBA_PTR_FROM_JSON(BackgroundResourceUrl, backgroundResourceUrl_);
      DARABONBA_PTR_FROM_JSON(BackgroundType, backgroundType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MattingLayout, mattingLayoutShrink_);
      DARABONBA_PTR_FROM_JSON(MattingType, mattingType_);
      DARABONBA_PTR_FROM_JSON(MediaLayout, mediaLayoutShrink_);
      DARABONBA_PTR_FROM_JSON(MediaResourceId, mediaResourceId_);
      DARABONBA_PTR_FROM_JSON(MediaResourceUrl, mediaResourceUrl_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    ModifyLiveAIStudioShrinkRequest() = default ;
    ModifyLiveAIStudioShrinkRequest(const ModifyLiveAIStudioShrinkRequest &) = default ;
    ModifyLiveAIStudioShrinkRequest(ModifyLiveAIStudioShrinkRequest &&) = default ;
    ModifyLiveAIStudioShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveAIStudioShrinkRequest() = default ;
    ModifyLiveAIStudioShrinkRequest& operator=(const ModifyLiveAIStudioShrinkRequest &) = default ;
    ModifyLiveAIStudioShrinkRequest& operator=(ModifyLiveAIStudioShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgroundResourceId_ != nullptr
        && this->backgroundResourceUrl_ != nullptr && this->backgroundType_ != nullptr && this->description_ != nullptr && this->height_ != nullptr && this->mattingLayoutShrink_ != nullptr
        && this->mattingType_ != nullptr && this->mediaLayoutShrink_ != nullptr && this->mediaResourceId_ != nullptr && this->mediaResourceUrl_ != nullptr && this->mediaType_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->studioName_ != nullptr && this->width_ != nullptr; };
    // backgroundResourceId Field Functions 
    bool hasBackgroundResourceId() const { return this->backgroundResourceId_ != nullptr;};
    void deleteBackgroundResourceId() { this->backgroundResourceId_ = nullptr;};
    inline string backgroundResourceId() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceId_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setBackgroundResourceId(string backgroundResourceId) { DARABONBA_PTR_SET_VALUE(backgroundResourceId_, backgroundResourceId) };


    // backgroundResourceUrl Field Functions 
    bool hasBackgroundResourceUrl() const { return this->backgroundResourceUrl_ != nullptr;};
    void deleteBackgroundResourceUrl() { this->backgroundResourceUrl_ = nullptr;};
    inline string backgroundResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundResourceUrl_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setBackgroundResourceUrl(string backgroundResourceUrl) { DARABONBA_PTR_SET_VALUE(backgroundResourceUrl_, backgroundResourceUrl) };


    // backgroundType Field Functions 
    bool hasBackgroundType() const { return this->backgroundType_ != nullptr;};
    void deleteBackgroundType() { this->backgroundType_ = nullptr;};
    inline string backgroundType() const { DARABONBA_PTR_GET_DEFAULT(backgroundType_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setBackgroundType(string backgroundType) { DARABONBA_PTR_SET_VALUE(backgroundType_, backgroundType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ModifyLiveAIStudioShrinkRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mattingLayoutShrink Field Functions 
    bool hasMattingLayoutShrink() const { return this->mattingLayoutShrink_ != nullptr;};
    void deleteMattingLayoutShrink() { this->mattingLayoutShrink_ = nullptr;};
    inline string mattingLayoutShrink() const { DARABONBA_PTR_GET_DEFAULT(mattingLayoutShrink_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMattingLayoutShrink(string mattingLayoutShrink) { DARABONBA_PTR_SET_VALUE(mattingLayoutShrink_, mattingLayoutShrink) };


    // mattingType Field Functions 
    bool hasMattingType() const { return this->mattingType_ != nullptr;};
    void deleteMattingType() { this->mattingType_ = nullptr;};
    inline string mattingType() const { DARABONBA_PTR_GET_DEFAULT(mattingType_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMattingType(string mattingType) { DARABONBA_PTR_SET_VALUE(mattingType_, mattingType) };


    // mediaLayoutShrink Field Functions 
    bool hasMediaLayoutShrink() const { return this->mediaLayoutShrink_ != nullptr;};
    void deleteMediaLayoutShrink() { this->mediaLayoutShrink_ = nullptr;};
    inline string mediaLayoutShrink() const { DARABONBA_PTR_GET_DEFAULT(mediaLayoutShrink_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMediaLayoutShrink(string mediaLayoutShrink) { DARABONBA_PTR_SET_VALUE(mediaLayoutShrink_, mediaLayoutShrink) };


    // mediaResourceId Field Functions 
    bool hasMediaResourceId() const { return this->mediaResourceId_ != nullptr;};
    void deleteMediaResourceId() { this->mediaResourceId_ = nullptr;};
    inline string mediaResourceId() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceId_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMediaResourceId(string mediaResourceId) { DARABONBA_PTR_SET_VALUE(mediaResourceId_, mediaResourceId) };


    // mediaResourceUrl Field Functions 
    bool hasMediaResourceUrl() const { return this->mediaResourceUrl_ != nullptr;};
    void deleteMediaResourceUrl() { this->mediaResourceUrl_ = nullptr;};
    inline string mediaResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaResourceUrl_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMediaResourceUrl(string mediaResourceUrl) { DARABONBA_PTR_SET_VALUE(mediaResourceUrl_, mediaResourceUrl) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLiveAIStudioShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string studioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline ModifyLiveAIStudioShrinkRequest& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ModifyLiveAIStudioShrinkRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The ID of the background material in ApsaraVideo VOD. You can obtain the ID from the ApsaraVideo VOD console.
    std::shared_ptr<string> backgroundResourceId_ = nullptr;
    // The URL of the background material.
    std::shared_ptr<string> backgroundResourceUrl_ = nullptr;
    // The type of the background material. Valid values:
    // 
    // *   VOD: a video in ApsaraVideo VOD
    // *   PIC: an image
    // *   LIVE: a live stream
    std::shared_ptr<string> backgroundType_ = nullptr;
    // The custom description.
    std::shared_ptr<string> description_ = nullptr;
    // The preview height. Unit: pixels.
    // 
    // The following preview specifications (width × height) are supported:
    // 
    // *   Landscape low definition 360p (640×360)
    // *   Portrait low definition 360p (360×640)
    // *   Landscape standard definition 480p (854×480)
    // *   Portrait standard definition 480p (480×854)
    // *   Landscape high definition 720p (1280×720)
    // *   Portrait high definition 720p (720×1280)
    // *   Landscape ultra-high definition 1080p (1920×1080)
    // *   Portrait ultra-high definition 1080p (1080×1920)
    std::shared_ptr<int32_t> height_ = nullptr;
    // The layout information of the chroma-keyed material.
    // 
    // This parameter is required.
    std::shared_ptr<string> mattingLayoutShrink_ = nullptr;
    // The type of chroma key. Valid values:
    // 
    // *   green: green-screen chroma key
    // *   blue: blue-screen chroma key
    // *   complex: background replacement
    // 
    // This parameter is required.
    std::shared_ptr<string> mattingType_ = nullptr;
    // The layout information of the multimedia material.
    std::shared_ptr<string> mediaLayoutShrink_ = nullptr;
    // The ID of the multimedia material in ApsaraVideo VOD. You can obtain the ID from the ApsaraVideo VOD console.
    std::shared_ptr<string> mediaResourceId_ = nullptr;
    // The URL of the multimedia material. Specify either this parameter or the MediaResourceId parameter.
    std::shared_ptr<string> mediaResourceUrl_ = nullptr;
    // The type of the multimedia material. Valid values:
    // 
    // *   VOD: a video in ApsaraVideo VOD
    // *   PIC: an image
    // *   LIVE: a live stream
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the virtual studio template. The name is the same as the value of the StudioName parameter that was specified when you called the CreateLiveAIStudio operation to create the virtual studio template.
    // 
    // This parameter is required.
    std::shared_ptr<string> studioName_ = nullptr;
    // The preview width. Unit: pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
