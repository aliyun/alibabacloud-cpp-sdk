// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODY_HPP_
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
  class DescribeCasterSceneAudioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterSceneAudioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterSceneAudioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayers, audioLayers_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCasterSceneAudioResponseBody() = default ;
    DescribeCasterSceneAudioResponseBody(const DescribeCasterSceneAudioResponseBody &) = default ;
    DescribeCasterSceneAudioResponseBody(DescribeCasterSceneAudioResponseBody &&) = default ;
    DescribeCasterSceneAudioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterSceneAudioResponseBody() = default ;
    DescribeCasterSceneAudioResponseBody& operator=(const DescribeCasterSceneAudioResponseBody &) = default ;
    DescribeCasterSceneAudioResponseBody& operator=(DescribeCasterSceneAudioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MixList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MixList& obj) { 
        DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      };
      friend void from_json(const Darabonba::Json& j, MixList& obj) { 
        DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      };
      MixList() = default ;
      MixList(const MixList &) = default ;
      MixList(MixList &&) = default ;
      MixList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MixList() = default ;
      MixList& operator=(const MixList &) = default ;
      MixList& operator=(MixList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->locationId_ == nullptr; };
      // locationId Field Functions 
      bool hasLocationId() const { return this->locationId_ != nullptr;};
      void deleteLocationId() { this->locationId_ = nullptr;};
      inline const vector<string> & getLocationId() const { DARABONBA_PTR_GET_CONST(locationId_, vector<string>) };
      inline vector<string> getLocationId() { DARABONBA_PTR_GET(locationId_, vector<string>) };
      inline MixList& setLocationId(const vector<string> & locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };
      inline MixList& setLocationId(vector<string> && locationId) { DARABONBA_PTR_SET_RVALUE(locationId_, locationId) };


    protected:
      shared_ptr<vector<string>> locationId_ {};
    };

    class AudioLayers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AudioLayers& obj) { 
        DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      };
      friend void from_json(const Darabonba::Json& j, AudioLayers& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      };
      AudioLayers() = default ;
      AudioLayers(const AudioLayers &) = default ;
      AudioLayers(AudioLayers &&) = default ;
      AudioLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AudioLayers() = default ;
      AudioLayers& operator=(const AudioLayers &) = default ;
      AudioLayers& operator=(AudioLayers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The fixed delay of the audio layer. Unit: milliseconds.
        shared_ptr<int32_t> fixedDelayDuration_ {};
        // The sound channel type of the audio layer. Valid values:
        // 
        // *   **left**: the left channel
        // *   **right**: the right channel
        // *   **all** (default): both the left and right channels
        shared_ptr<string> validChannel_ {};
        // The volume of the audio layer.
        shared_ptr<float> volumeRate_ {};
      };

      virtual bool empty() const override { return this->audioLayer_ == nullptr; };
      // audioLayer Field Functions 
      bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
      void deleteAudioLayer() { this->audioLayer_ = nullptr;};
      inline const vector<AudioLayers::AudioLayer> & getAudioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<AudioLayers::AudioLayer>) };
      inline vector<AudioLayers::AudioLayer> getAudioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<AudioLayers::AudioLayer>) };
      inline AudioLayers& setAudioLayer(const vector<AudioLayers::AudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
      inline AudioLayers& setAudioLayer(vector<AudioLayers::AudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    protected:
      shared_ptr<vector<AudioLayers::AudioLayer>> audioLayer_ {};
    };

    virtual bool empty() const override { return this->audioLayers_ == nullptr
        && this->casterId_ == nullptr && this->followEnable_ == nullptr && this->mixList_ == nullptr && this->requestId_ == nullptr; };
    // audioLayers Field Functions 
    bool hasAudioLayers() const { return this->audioLayers_ != nullptr;};
    void deleteAudioLayers() { this->audioLayers_ = nullptr;};
    inline const DescribeCasterSceneAudioResponseBody::AudioLayers & getAudioLayers() const { DARABONBA_PTR_GET_CONST(audioLayers_, DescribeCasterSceneAudioResponseBody::AudioLayers) };
    inline DescribeCasterSceneAudioResponseBody::AudioLayers getAudioLayers() { DARABONBA_PTR_GET(audioLayers_, DescribeCasterSceneAudioResponseBody::AudioLayers) };
    inline DescribeCasterSceneAudioResponseBody& setAudioLayers(const DescribeCasterSceneAudioResponseBody::AudioLayers & audioLayers) { DARABONBA_PTR_SET_VALUE(audioLayers_, audioLayers) };
    inline DescribeCasterSceneAudioResponseBody& setAudioLayers(DescribeCasterSceneAudioResponseBody::AudioLayers && audioLayers) { DARABONBA_PTR_SET_RVALUE(audioLayers_, audioLayers) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterSceneAudioResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // followEnable Field Functions 
    bool hasFollowEnable() const { return this->followEnable_ != nullptr;};
    void deleteFollowEnable() { this->followEnable_ = nullptr;};
    inline int32_t getFollowEnable() const { DARABONBA_PTR_GET_DEFAULT(followEnable_, 0) };
    inline DescribeCasterSceneAudioResponseBody& setFollowEnable(int32_t followEnable) { DARABONBA_PTR_SET_VALUE(followEnable_, followEnable) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const DescribeCasterSceneAudioResponseBody::MixList & getMixList() const { DARABONBA_PTR_GET_CONST(mixList_, DescribeCasterSceneAudioResponseBody::MixList) };
    inline DescribeCasterSceneAudioResponseBody::MixList getMixList() { DARABONBA_PTR_GET(mixList_, DescribeCasterSceneAudioResponseBody::MixList) };
    inline DescribeCasterSceneAudioResponseBody& setMixList(const DescribeCasterSceneAudioResponseBody::MixList & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline DescribeCasterSceneAudioResponseBody& setMixList(DescribeCasterSceneAudioResponseBody::MixList && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterSceneAudioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations of the audio layers.
    shared_ptr<DescribeCasterSceneAudioResponseBody::AudioLayers> audioLayers_ {};
    // The ID of the production studio. You can specify the ID in a request to start a scene in the production studio.
    shared_ptr<string> casterId_ {};
    // The audio mode. By default, the audio follows video (AFV) mode is used. Valid values:
    // 
    // *   **0**: the audio mixing mode
    // *   **1**: the AFV mode
    shared_ptr<int32_t> followEnable_ {};
    shared_ptr<DescribeCasterSceneAudioResponseBody::MixList> mixList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
