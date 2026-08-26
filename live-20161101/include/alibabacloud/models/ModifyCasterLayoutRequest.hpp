// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(BlendList, blendList_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
    };
    ModifyCasterLayoutRequest() = default ;
    ModifyCasterLayoutRequest(const ModifyCasterLayoutRequest &) = default ;
    ModifyCasterLayoutRequest(ModifyCasterLayoutRequest &&) = default ;
    ModifyCasterLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterLayoutRequest() = default ;
    ModifyCasterLayoutRequest& operator=(const ModifyCasterLayoutRequest &) = default ;
    ModifyCasterLayoutRequest& operator=(ModifyCasterLayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VideoLayer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VideoLayer& obj) { 
        DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
        DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
        DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
        DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
        DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
      };
      friend void from_json(const Darabonba::Json& j, VideoLayer& obj) { 
        DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
        DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
        DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
        DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
        DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
        DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
      };
      VideoLayer() = default ;
      VideoLayer(const VideoLayer &) = default ;
      VideoLayer(VideoLayer &&) = default ;
      VideoLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VideoLayer() = default ;
      VideoLayer& operator=(const VideoLayer &) = default ;
      VideoLayer& operator=(VideoLayer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fillMode_ == nullptr
        && this->fixedDelayDuration_ == nullptr && this->heightNormalized_ == nullptr && this->positionNormalized_ == nullptr && this->positionRefer_ == nullptr && this->widthNormalized_ == nullptr; };
      // fillMode Field Functions 
      bool hasFillMode() const { return this->fillMode_ != nullptr;};
      void deleteFillMode() { this->fillMode_ = nullptr;};
      inline string getFillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
      inline VideoLayer& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


      // fixedDelayDuration Field Functions 
      bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
      void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
      inline int32_t getFixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
      inline VideoLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


      // heightNormalized Field Functions 
      bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
      void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
      inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
      inline VideoLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


      // positionNormalized Field Functions 
      bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
      void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
      inline const vector<float> & getPositionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
      inline vector<float> getPositionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
      inline VideoLayer& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
      inline VideoLayer& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


      // positionRefer Field Functions 
      bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
      void deletePositionRefer() { this->positionRefer_ = nullptr;};
      inline string getPositionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
      inline VideoLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


      // widthNormalized Field Functions 
      bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
      void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
      inline float getWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
      inline VideoLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


    protected:
      // The element fill mode. 
      // 
      // - **none** (default): no fill. The Layer settings are configured with the image as the target.
      // - **fit**: adaptive. The Layer settings are configured with the fill area (box) as the target. The image is scaled based on the original aspect ratio and centered within the fill area (box) using a long-edge alignment method. If the aspect ratio of the fill area does not match the image, the short edges are not filled (the lower Layer image is displayed. If no lower Layer is configured, the default black background is displayed).
      shared_ptr<string> fillMode_ {};
      // The fixed delay for the video. This can be used for subtitle synchronization. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The normalized height ratio of the Layer element. 
      //           
      // - If the no-fill mode is used, the width of the element is proportionally scaled based on this height. Default value: **0**, which indicates that the image is displayed at its original size.
      // - If the adaptive mode is used, this field is required and must be greater than **0**. It specifies the normalized height ratio of the fill area (box).
      shared_ptr<float> heightNormalized_ {};
      // The normalized position values `[x,y]` of the Layer element. Default value: `[0,0]`.
      // 
      // >Note: The x and y values must be normalized.
      shared_ptr<vector<float>> positionNormalized_ {};
      // The reference coordinate for the position of the element. Valid values:
      // - **topLeft** (default): top-left.
      // - **topRight**: top-right.
      // - **bottomLeft**: bottom-left.
      // - **bottomRight**: bottom-right.
      // - **center**: center.
      // - **topCenter**: top-center.
      // - **bottomCenter**: bottom-center.
      // - **leftCenter**: left-center.
      // - **rightCenter**: right-center.
      shared_ptr<string> positionRefer_ {};
      // The normalized width ratio of the Layer element. 
      // 
      // - If the no-fill mode is used, the height of the element is proportionally scaled based on this width. Default value: **0**, which indicates that the image is displayed at its original size.
      // - If the adaptive mode is used, this field is required and must be greater than **0**. It specifies the normalized width ratio of the fill area (box).
      shared_ptr<float> widthNormalized_ {};
    };

    class AudioLayer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioLayer& obj) { 
        DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
        DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
        DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
      };
      friend void from_json(const Darabonba::Json& j, AudioLayer& obj) { 
        DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
        DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
        DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
      };
      AudioLayer() = default ;
      AudioLayer(const AudioLayer &) = default ;
      AudioLayer(AudioLayer &&) = default ;
      AudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioLayer() = default ;
      AudioLayer& operator=(const AudioLayer &) = default ;
      AudioLayer& operator=(AudioLayer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fixedDelayDuration_ == nullptr
        && this->validChannel_ == nullptr && this->volumeRate_ == nullptr; };
      // fixedDelayDuration Field Functions 
      bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
      void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
      inline int32_t getFixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
      inline AudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


      // validChannel Field Functions 
      bool hasValidChannel() const { return this->validChannel_ != nullptr;};
      void deleteValidChannel() { this->validChannel_ = nullptr;};
      inline string getValidChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
      inline AudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


      // volumeRate Field Functions 
      bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
      void deleteVolumeRate() { this->volumeRate_ = nullptr;};
      inline float getVolumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
      inline AudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


    protected:
      // The fixed delay for the audio. This can be used for subtitle synchronization. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The audio channels that can be used as volume input. Valid values:
      // - **leftChannel**: left channel.
      // - **rightChannel**: right channel.
      // - **all** (default): both channels.
      shared_ptr<string> validChannel_ {};
      // The normalized height ratio of the Layer element. The width of the element is proportionally scaled based on this height. 
      // 
      // Default value: **0**, which indicates that the element is displayed at its original size.
      shared_ptr<float> volumeRate_ {};
    };

    virtual bool empty() const override { return this->audioLayer_ == nullptr
        && this->blendList_ == nullptr && this->casterId_ == nullptr && this->layoutId_ == nullptr && this->mixList_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->videoLayer_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<ModifyCasterLayoutRequest::AudioLayer> & getAudioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<ModifyCasterLayoutRequest::AudioLayer>) };
    inline vector<ModifyCasterLayoutRequest::AudioLayer> getAudioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<ModifyCasterLayoutRequest::AudioLayer>) };
    inline ModifyCasterLayoutRequest& setAudioLayer(const vector<ModifyCasterLayoutRequest::AudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline ModifyCasterLayoutRequest& setAudioLayer(vector<ModifyCasterLayoutRequest::AudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // blendList Field Functions 
    bool hasBlendList() const { return this->blendList_ != nullptr;};
    void deleteBlendList() { this->blendList_ = nullptr;};
    inline const vector<string> & getBlendList() const { DARABONBA_PTR_GET_CONST(blendList_, vector<string>) };
    inline vector<string> getBlendList() { DARABONBA_PTR_GET(blendList_, vector<string>) };
    inline ModifyCasterLayoutRequest& setBlendList(const vector<string> & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
    inline ModifyCasterLayoutRequest& setBlendList(vector<string> && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline ModifyCasterLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline ModifyCasterLayoutRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & getMixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> getMixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline ModifyCasterLayoutRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline ModifyCasterLayoutRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCasterLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCasterLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // videoLayer Field Functions 
    bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
    void deleteVideoLayer() { this->videoLayer_ = nullptr;};
    inline const vector<ModifyCasterLayoutRequest::VideoLayer> & getVideoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<ModifyCasterLayoutRequest::VideoLayer>) };
    inline vector<ModifyCasterLayoutRequest::VideoLayer> getVideoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<ModifyCasterLayoutRequest::VideoLayer>) };
    inline ModifyCasterLayoutRequest& setVideoLayer(const vector<ModifyCasterLayoutRequest::VideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
    inline ModifyCasterLayoutRequest& setVideoLayer(vector<ModifyCasterLayoutRequest::VideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


  protected:
    // The audio information.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyCasterLayoutRequest::AudioLayer>> audioLayer_ {};
    // The location ID (LocationId) of the video resource element.
    // 
    // For the LocationId, see [Add a video source](https://help.aliyun.com/document_detail/2848020.html). The elements correspond to the VideoLayers elements in order.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> blendList_ {};
    // The production studio ID.
    // 
    // - If you created the production studio by calling the [CreateCaster operation](https://help.aliyun.com/document_detail/2848009.html), check the CasterId parameter returned by the CreateCaster operation.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, go to **ApsaraVideo Live console** > **Production Studio** > **Cloud Production Studio** to view the ID.
    // 
    // > The production studio name in the production studio list on the Cloud Production Studio page of the ApsaraVideo Live console is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The layout ID. If you added the production studio layout by calling the [AddCasterLayout operation](https://help.aliyun.com/document_detail/2848025.html), check the LayoutId parameter returned by the AddCasterLayout operation.
    // 
    // This parameter is required.
    shared_ptr<string> layoutId_ {};
    // The location ID (LocationId) of the audio resource element.
    // 
    // For the LocationId, see [Add a video source](https://help.aliyun.com/document_detail/2848020.html). The elements correspond to the AudioLayers elements in order.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> mixList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The video information.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyCasterLayoutRequest::VideoLayer>> videoLayer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
