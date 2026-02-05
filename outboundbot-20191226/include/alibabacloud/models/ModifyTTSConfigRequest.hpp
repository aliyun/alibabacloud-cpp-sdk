// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTTSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTTSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyTTSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTTSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTTSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
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
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->instanceId_ == nullptr && this->nlsServiceType_ == nullptr && this->pitchRate_ == nullptr && this->scriptId_ == nullptr && this->speechRate_ == nullptr
        && this->voice_ == nullptr && this->volume_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ModifyTTSConfigRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


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


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyTTSConfigRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline string getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
    inline ModifyTTSConfigRequest& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


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
    shared_ptr<string> appKey_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nlsServiceType_ {};
    // 语调 [-500,500]之间整数。默认值为0。
    // 
    // 大于0表示升高音高。
    // 
    // 小于0表示降低音高。
    shared_ptr<string> pitchRate_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> speechRate_ {};
    shared_ptr<string> voice_ {};
    shared_ptr<string> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
