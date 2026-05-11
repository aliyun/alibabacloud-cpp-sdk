// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTTSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTTSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class ModifyTTSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTTSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliCustomizedVoice, aliCustomizedVoice_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineXunfei, engineXunfei_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(TtsOverrides, ttsOverrides_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTTSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliCustomizedVoice, aliCustomizedVoice_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineXunfei, engineXunfei_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(TtsOverrides, ttsOverrides_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    ModifyTTSConfigRequest() = default ;
    ModifyTTSConfigRequest(const ModifyTTSConfigRequest &) = default ;
    ModifyTTSConfigRequest(ModifyTTSConfigRequest &&) = default ;
    ModifyTTSConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTTSConfigRequest() = default ;
    ModifyTTSConfigRequest& operator=(const ModifyTTSConfigRequest &) = default ;
    ModifyTTSConfigRequest& operator=(ModifyTTSConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliCustomizedVoice_ == nullptr
        && this->appKey_ == nullptr && this->engine_ == nullptr && this->engineXunfei_ == nullptr && this->instanceId_ == nullptr && this->nlsServiceType_ == nullptr
        && this->pitchRate_ == nullptr && this->speechRate_ == nullptr && this->ttsOverrides_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
    // aliCustomizedVoice Field Functions 
    bool hasAliCustomizedVoice() const { return this->aliCustomizedVoice_ != nullptr;};
    void deleteAliCustomizedVoice() { this->aliCustomizedVoice_ = nullptr;};
    inline string getAliCustomizedVoice() const { DARABONBA_PTR_GET_DEFAULT(aliCustomizedVoice_, "") };
    inline ModifyTTSConfigRequest& setAliCustomizedVoice(string aliCustomizedVoice) { DARABONBA_PTR_SET_VALUE(aliCustomizedVoice_, aliCustomizedVoice) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ModifyTTSConfigRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ModifyTTSConfigRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineXunfei Field Functions 
    bool hasEngineXunfei() const { return this->engineXunfei_ != nullptr;};
    void deleteEngineXunfei() { this->engineXunfei_ = nullptr;};
    inline string getEngineXunfei() const { DARABONBA_PTR_GET_DEFAULT(engineXunfei_, "") };
    inline ModifyTTSConfigRequest& setEngineXunfei(string engineXunfei) { DARABONBA_PTR_SET_VALUE(engineXunfei_, engineXunfei) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyTTSConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nlsServiceType Field Functions 
    bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
    void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
    inline string getNlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
    inline ModifyTTSConfigRequest& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline string getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
    inline ModifyTTSConfigRequest& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline string getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
    inline ModifyTTSConfigRequest& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // ttsOverrides Field Functions 
    bool hasTtsOverrides() const { return this->ttsOverrides_ != nullptr;};
    void deleteTtsOverrides() { this->ttsOverrides_ = nullptr;};
    inline string getTtsOverrides() const { DARABONBA_PTR_GET_DEFAULT(ttsOverrides_, "") };
    inline ModifyTTSConfigRequest& setTtsOverrides(string ttsOverrides) { DARABONBA_PTR_SET_VALUE(ttsOverrides_, ttsOverrides) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline ModifyTTSConfigRequest& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline ModifyTTSConfigRequest& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    shared_ptr<string> aliCustomizedVoice_ {};
    shared_ptr<string> appKey_ {};
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineXunfei_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nlsServiceType_ {};
    shared_ptr<string> pitchRate_ {};
    shared_ptr<string> speechRate_ {};
    shared_ptr<string> ttsOverrides_ {};
    shared_ptr<string> voice_ {};
    shared_ptr<string> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
