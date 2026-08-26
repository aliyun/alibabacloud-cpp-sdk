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
      // Specifies whether to enable the features provided by the 3A audio algorithm. This parameter consists of the following fields:
      // 
      // - **enableAgc**: (Optional) Specifies whether to enable the automatic gain control (AGC) feature of the 3A algorithm. Valid values: **0** (disabled, default) and **1** (enabled).
      // 
      // - **enableAns**: (Optional) Specifies whether to enable the intelligent noise reduction feature of the 3A algorithm. Valid values: **0** (disabled, default) and **1** (enabled).
      // 
      // - **ansMode**: (Optional) The mode of the intelligent noise reduction feature. This field is active only when **enableAns** is set to **1**. Valid values: **0** (speech noise reduction, default) and **1** (music noise reduction).
      // 
      // > For better noise reduction, set ansMode to 1.
      // 
      // - **enableBeautify**: (Optional) Specifies whether to enable voice beautification. Valid values: **0** (disabled, default) and **1** (enabled).
      // 
      // - **voiceBeautifyMode**: (Optional) The voice beautification mode. This field is active only when **enableBeautify** is set to **1**. Valid values: **0** (magnetic male voice, default) and **1** (fresh female voice).
      shared_ptr<string> filter_ {};
      // The fixed latency of the audio layer. This parameter is used to synchronize the audio with captions.
      // 
      // Unit: milliseconds. Valid values: 0 to **5000**. Default value: **0**.
      shared_ptr<int32_t> fixedDelayDuration_ {};
      // The sound channels that are used for volume input. Valid values:
      // 
      // - **leftChannel**: the left sound channel.
      // 
      // - **rightChannel**: the right sound channel.
      // 
      // - **all** (default): both sound channels.
      shared_ptr<string> validChannel_ {};
      // The volume multiplier for the audio stream. Valid values: 0 to **10.0**. Default value: **1.0**.
      // 
      // - **1.0**: The original volume is used.
      // 
      // - A value less than **1** decreases the volume.
      // 
      // - A value greater than **1** increases the volume.
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
    // - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, you can obtain the ID from the CasterId parameter in the response.
    // 
    // - If you create a production studio in the LIVE console, go to the **LIVE Console** > **Production Studio** > **Cloud Production Studio** page to view the ID.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is the ID of the production studio.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // Specifies whether to enable the AFV mode. If you leave this parameter empty, the last configuration is retained. Valid values:
    // 
    // - **0**: audio mixing mode.
    // 
    // - **1**: audio-follows-video mode.
    shared_ptr<int32_t> followEnable_ {};
    // The list of associated location IDs. The order of the location IDs must be the same as the order of the audio layers.
    shared_ptr<vector<string>> mixList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the scene. If you query the list of scenes in a production studio by calling the [DescribeCasterScenes](https://help.aliyun.com/document_detail/2848039.html) operation, you can obtain the ID from the ComponentId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
