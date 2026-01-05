// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUEST_HPP_
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
  class UpdateCasterSceneAudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCasterSceneAudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCasterSceneAudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    UpdateCasterSceneAudioRequest() = default ;
    UpdateCasterSceneAudioRequest(const UpdateCasterSceneAudioRequest &) = default ;
    UpdateCasterSceneAudioRequest(UpdateCasterSceneAudioRequest &&) = default ;
    UpdateCasterSceneAudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCasterSceneAudioRequest() = default ;
    UpdateCasterSceneAudioRequest& operator=(const UpdateCasterSceneAudioRequest &) = default ;
    UpdateCasterSceneAudioRequest& operator=(UpdateCasterSceneAudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AudioLayer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioLayer& obj) { 
        DARABONBA_PTR_TO_JSON(Filter, filter_);
        DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
        DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
        DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
      };
      friend void from_json(const Darabonba::Json& j, AudioLayer& obj) { 
        DARABONBA_PTR_FROM_JSON(Filter, filter_);
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
      virtual bool empty() const override { return this->filter_ == nullptr
        && this->fixedDelayDuration_ == nullptr && this->validChannel_ == nullptr && this->volumeRate_ == nullptr; };
      // filter Field Functions 
      bool hasFilter() const { return this->filter_ != nullptr;};
      void deleteFilter() { this->filter_ = nullptr;};
      inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
      inline AudioLayer& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


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
      // Specifies whether to enable the features provided by the audio 3A algorithms. This parameter consists of the following fields:
      // 
      // *   **enableAgc**: specifies whether to enable automatic gain control (AGC). This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that AGC is disabled. **1** specifies that AGC is enabled.
      // *   **enableAns**: specifies whether to enable active noise suppression (ANS). This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that ANS is disabled. **1** specifies that ANS is enabled.
      // *   **ansMode**: specifies the mode for ANS. This field is optional and takes effect only if you set **enableAns** to **1**. Valid values: 0 and 1. **0** is the default value, which specifies the speech noise reduction mode. **1** specifies the music noise reduction mode.
      // 
      // >  To ensure a better noise reduction effect, we recommend that you set ansMode to 1.
      // 
      // *   **enableBeautify**: specifies whether to enable voice change. This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that voice change is disabled. **1** specifies that voice change is enabled.
      // *   **voiceBeautifyMode**: specifies the mode for voice change. This field is optional and takes effect only if you set **enableBeautify** to **1**. Valid values: 0 and 1. **0** is the default value, which specifies the magnetic male voice mode. **1** specifies the fresh female voice mode.
      shared_ptr<string> filter_ {};
      // The fixed delay of the audio layer. This parameter is used to synchronize the audio with subtitles.
      // 
      // Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The sound channels that are used for volume input in the audio layer. Valid values:
      // 
      // *   **leftChannel**: the left channel
      // *   **rightChannel**: the right channel
      // *   **all** (default): both the left and right channels
      shared_ptr<string> validChannel_ {};
      // The multiple of the original volume at which the audio layer plays audio. Valid values: **0 to 10.0**. Default value: **1.0**.
      // 
      // *   **1.0**: specifies that the audio layer plays audio at the original volume.
      // *   A value smaller than **1**: specifies that the audio layer plays audio at a volume that is less than the original volume.
      // *   A value greater than **1**: specifies that the audio layer plays audio at a volume that is more than the original volume.
      shared_ptr<float> volumeRate_ {};
    };

    virtual bool empty() const override { return this->audioLayer_ == nullptr
        && this->casterId_ == nullptr && this->followEnable_ == nullptr && this->mixList_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->sceneId_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<UpdateCasterSceneAudioRequest::AudioLayer> & getAudioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<UpdateCasterSceneAudioRequest::AudioLayer>) };
    inline vector<UpdateCasterSceneAudioRequest::AudioLayer> getAudioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<UpdateCasterSceneAudioRequest::AudioLayer>) };
    inline UpdateCasterSceneAudioRequest& setAudioLayer(const vector<UpdateCasterSceneAudioRequest::AudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline UpdateCasterSceneAudioRequest& setAudioLayer(vector<UpdateCasterSceneAudioRequest::AudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline UpdateCasterSceneAudioRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // followEnable Field Functions 
    bool hasFollowEnable() const { return this->followEnable_ != nullptr;};
    void deleteFollowEnable() { this->followEnable_ = nullptr;};
    inline int32_t getFollowEnable() const { DARABONBA_PTR_GET_DEFAULT(followEnable_, 0) };
    inline UpdateCasterSceneAudioRequest& setFollowEnable(int32_t followEnable) { DARABONBA_PTR_SET_VALUE(followEnable_, followEnable) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & getMixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> getMixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline UpdateCasterSceneAudioRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline UpdateCasterSceneAudioRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCasterSceneAudioRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCasterSceneAudioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateCasterSceneAudioRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The audio configurations.
    shared_ptr<vector<UpdateCasterSceneAudioRequest::AudioLayer>> audioLayer_ {};
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The audio mode. By default, the AFV mode is used. If you do not specify this parameter, the scene retains the last configuration. Valid values:
    // 
    // *   **0**: the audio mixing mode.
    // *   **1**: the AFV mode.
    shared_ptr<int32_t> followEnable_ {};
    // The location IDs of the audio layers, which are in the same order as the audio layers.
    shared_ptr<vector<string>> mixList_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the scene. If you call the [DescribeCasterScenes](https://help.aliyun.com/document_detail/2848039.html) operation to query scenes of the production studio, check the value of the response parameter ComponentId to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
