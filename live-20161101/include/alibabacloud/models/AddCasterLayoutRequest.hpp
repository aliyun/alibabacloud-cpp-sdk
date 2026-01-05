// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUEST_HPP_
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
  class AddCasterLayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterLayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(BlendList, blendList_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterLayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
    };
    AddCasterLayoutRequest() = default ;
    AddCasterLayoutRequest(const AddCasterLayoutRequest &) = default ;
    AddCasterLayoutRequest(AddCasterLayoutRequest &&) = default ;
    AddCasterLayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterLayoutRequest() = default ;
    AddCasterLayoutRequest& operator=(const AddCasterLayoutRequest &) = default ;
    AddCasterLayoutRequest& operator=(AddCasterLayoutRequest &&) = default ;
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
      // The scaling mode of video layer N. Valid values:
      // 
      // *   **none**: The image is not scaled to fill in the specified layout section. Set video layer N based on the image size of the video resource. This is the default value.
      // *   **fit**: The image is scaled with the original aspect ratio to fill in the specified layout section. Set video layer N based on the section size. The image is centered in the layout section with the long side of the image equaling that of the section. If the aspect ratio of the image is inconsistent with that of the section, the short side of the image may be shorter than that of the section. The area outside the image displays the next video layer or the background if no next video layer exists. By default, the background color is black.
      shared_ptr<string> fillMode_ {};
      // The fixed delay of video layer N. You can use this parameter to synchronize the video with subtitles. Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The normalized value of the height of the image of video layer N.
      // 
      // *   If the FillMode parameter of video layer N is set to none, the width of the video image is scaled based on this parameter. The default value is **0**, which indicates that the video image is displayed in the original size.
      // *   If the FillMode parameter of video layer N is set to fit, you must set this parameter to a value greater than **0**. In this case, the video image is scaled with the original aspect ratio to fill in the specified layout section based on this parameter.
      shared_ptr<float> heightNormalized_ {};
      // The normalized value of the `[x,y]` coordinates of video layer N in the production studio. The default coordinates are `[0,0]`.
      // 
      // >  The coordinates indicate the location of video layer N in the production studio. Set this parameter to the normalized value of the coordinates.
      shared_ptr<vector<float>> positionNormalized_ {};
      // The reference coordinates of video layer N in the production studio. Valid values:
      // 
      // *   **topLeft**: the upper-left corner. This is the default value.
      // *   **topRight**: the upper-right corner.
      // *   **bottomLeft**: the lower-left corner.
      // *   **bottomRight**: the lower-right corner.
      // *   **center**: the center position.
      // *   **topCenter**: the upper center position.
      // *   **bottomCenter**: the lower center position.
      // *   **leftCenter**: the left center position.
      // *   **rightCenter**: the right center position.
      shared_ptr<string> positionRefer_ {};
      // The normalized value of the width of the image of video layer N.
      // 
      // *   If the FillMode parameter of video layer N is set to none, the height of the video image is scaled based on this parameter. The default value is **0**, which indicates that the video image is displayed in the original size.
      // *   If the FillMode parameter of video layer N is set to fit, you must set this parameter to a value greater than **0**. In this case, the video image is scaled with the original aspect ratio to fill in the specified layout section based on this parameter.
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
      // The fixed delay of audio layer N. You can use this parameter to synchronize the audio with subtitles. Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The valid voice channels of audio layer N. Valid values:
      // 
      // *   **leftChannel**: the left channel.
      // *   **rightChannel**: the right channel.
      // *   **all**: both the left and right channels. This is the default value.
      shared_ptr<string> validChannel_ {};
      // The multiples of the original volume at which audio layer N plays audio streams. Valid values: **0 to 10.0**.
      // 
      // *   The default value **1.0** indicates that audio layer N plays audio streams at the original volume.
      // *   A value smaller than **1.0** indicates that audio layer N plays audio streams at a lower volume than the original one.
      // *   A value greater than **1.0** indicates that audio layer N plays audio streams at a higher volume than the original one.
      shared_ptr<float> volumeRate_ {};
    };

    virtual bool empty() const override { return this->audioLayer_ == nullptr
        && this->blendList_ == nullptr && this->casterId_ == nullptr && this->mixList_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->videoLayer_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<AddCasterLayoutRequest::AudioLayer> & getAudioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<AddCasterLayoutRequest::AudioLayer>) };
    inline vector<AddCasterLayoutRequest::AudioLayer> getAudioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<AddCasterLayoutRequest::AudioLayer>) };
    inline AddCasterLayoutRequest& setAudioLayer(const vector<AddCasterLayoutRequest::AudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline AddCasterLayoutRequest& setAudioLayer(vector<AddCasterLayoutRequest::AudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // blendList Field Functions 
    bool hasBlendList() const { return this->blendList_ != nullptr;};
    void deleteBlendList() { this->blendList_ = nullptr;};
    inline const vector<string> & getBlendList() const { DARABONBA_PTR_GET_CONST(blendList_, vector<string>) };
    inline vector<string> getBlendList() { DARABONBA_PTR_GET(blendList_, vector<string>) };
    inline AddCasterLayoutRequest& setBlendList(const vector<string> & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
    inline AddCasterLayoutRequest& setBlendList(vector<string> && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline AddCasterLayoutRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & getMixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> getMixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline AddCasterLayoutRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline AddCasterLayoutRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCasterLayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddCasterLayoutRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // videoLayer Field Functions 
    bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
    void deleteVideoLayer() { this->videoLayer_ = nullptr;};
    inline const vector<AddCasterLayoutRequest::VideoLayer> & getVideoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<AddCasterLayoutRequest::VideoLayer>) };
    inline vector<AddCasterLayoutRequest::VideoLayer> getVideoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<AddCasterLayoutRequest::VideoLayer>) };
    inline AddCasterLayoutRequest& setVideoLayer(const vector<AddCasterLayoutRequest::VideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
    inline AddCasterLayoutRequest& setVideoLayer(vector<AddCasterLayoutRequest::VideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


  protected:
    // Audio layout.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCasterLayoutRequest::AudioLayer>> audioLayer_ {};
    // The element represents the location ID of the video resource, i.e., LocationId. Refer to [Adding Video Source](https://help.aliyun.com/document_detail/60250.html) for LocationId, which corresponds in order with the VideoLayers elements.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> blendList_ {};
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
    // The element represents the location ID of the audio resource, i.e., LocationId.
    // LocationId is referred to in [Adding Video Source](https://help.aliyun.com/document_detail/60250.html), and corresponds in order with the AudioLayers elements.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> mixList_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // Video layout.
    // 
    // This parameter is required.
    shared_ptr<vector<AddCasterLayoutRequest::VideoLayer>> videoLayer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
