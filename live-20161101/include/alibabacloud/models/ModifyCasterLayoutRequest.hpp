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
      // The scaling mode of the video layer. Valid values:
      // 
      // *   **none** (default): indicates that the video layer is not scaled. The video layer is displayed based on its original size.
      // *   **fit**: indicates that the video layer is adapted to the fill area. In this case, the video layer is scaled proportionally, with its original aspect ratio retained. The video layer is placed in the center, with its longer sides aligned with the fill area. If the aspect ratio of the video layer is different from that of the fill area, the content of the lower layer is displayed alongside the shorter sides. If there is no lower layer, black bars are displayed instead.
      shared_ptr<string> fillMode_ {};
      // The fixed delay of the video layer. This parameter is used to synchronize the video with subtitles. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The normalized value of the height of the video layer.
      // 
      // *   If the FillMode parameter of the video layer is set to none, the width of the video layer is proportionally scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
      // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
      shared_ptr<float> heightNormalized_ {};
      // The normalized value of the position of the video layer, in the format of `[x,y]`. Default value: `[0,0]`.
      // 
      // >  The values of x and y are normalized.
      shared_ptr<vector<float>> positionNormalized_ {};
      // The reference coordinates of the video layer. Valid values:
      // 
      // *   **topLeft** (default): the upper-left corner
      // *   **topRight**: the upper-right corner
      // *   **bottomLeft**: the lower-left corner
      // *   **bottomRight**: the lower-right corner
      // *   **center**: the center
      // *   **topCenter**: the upper center
      // *   **bottomCenter**: the lower center
      // *   **leftCenter**: the left center
      // *   **rightCenter**: the right center
      shared_ptr<string> positionRefer_ {};
      // The normalized value of the width of the video layer.
      // 
      // *   If the FillMode parameter of the video layer is set to none, the height of the video layer is proportionally scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
      // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
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
      // The fixed delay of the audio layer. This parameter is used to synchronize the audio with subtitles. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The sound channels that are used for volume input in the audio layer. Valid values:
      // 
      // *   **leftChannel**: the left channel
      // *   **rightChannel**: the right channel
      // *   **all** (default): both the left and right channels
      shared_ptr<string> validChannel_ {};
      // The normalized value of the height of the audio layer. The width of the audio layer is proportionally scaled based on this parameter.
      // 
      // The default value is **0**, which indicates that the audio layer is not scaled.
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
    // The audio layers.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyCasterLayoutRequest::AudioLayer>> audioLayer_ {};
    // The location IDs of the video layers, which are in the same order as the video layers.
    // 
    // For more information, see [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> blendList_ {};
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The ID of the layout. If the layout was added by calling the [AddCasterLayout](https://help.aliyun.com/document_detail/2848025.html) operation, check the value of the response parameter LayoutId to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> layoutId_ {};
    // The location IDs of the audio layers, which are in the same order as the audio layers.
    // 
    // For more information, see [AddCasterVideoResource](https://help.aliyun.com/document_detail/2848020.html).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> mixList_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The video layers.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyCasterLayoutRequest::VideoLayer>> videoLayer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
