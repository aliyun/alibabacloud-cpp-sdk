// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTTSCONFIGRESPONSEBODYTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTTSCONFIGRESPONSEBODYTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyTTSConfigResponseBodyTTSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTTSConfigResponseBodyTTSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(TTSConfigId, TTSConfigId_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTTSConfigResponseBodyTTSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(TTSConfigId, TTSConfigId_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    ModifyTTSConfigResponseBodyTTSConfig() = default ;
    ModifyTTSConfigResponseBodyTTSConfig(const ModifyTTSConfigResponseBodyTTSConfig &) = default ;
    ModifyTTSConfigResponseBodyTTSConfig(ModifyTTSConfigResponseBodyTTSConfig &&) = default ;
    ModifyTTSConfigResponseBodyTTSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTTSConfigResponseBodyTTSConfig() = default ;
    ModifyTTSConfigResponseBodyTTSConfig& operator=(const ModifyTTSConfigResponseBodyTTSConfig &) = default ;
    ModifyTTSConfigResponseBodyTTSConfig& operator=(ModifyTTSConfigResponseBodyTTSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->pitchRate_ == nullptr && return this->scriptId_ == nullptr && return this->speechRate_ == nullptr && return this->TTSConfigId_ == nullptr && return this->voice_ == nullptr
        && return this->volume_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline string pitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline string speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // TTSConfigId Field Functions 
    bool hasTTSConfigId() const { return this->TTSConfigId_ != nullptr;};
    void deleteTTSConfigId() { this->TTSConfigId_ = nullptr;};
    inline string TTSConfigId() const { DARABONBA_PTR_GET_DEFAULT(TTSConfigId_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setTTSConfigId(string TTSConfigId) { DARABONBA_PTR_SET_VALUE(TTSConfigId_, TTSConfigId) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline ModifyTTSConfigResponseBodyTTSConfig& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    // 语调
    // [-500,500]之间整数。默认值为0。
    // 
    // 大于0表示升高音高。
    // 
    // 小于0表示降低音高。
    std::shared_ptr<string> pitchRate_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> speechRate_ = nullptr;
    std::shared_ptr<string> TTSConfigId_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<string> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
