// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETTSDEMOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETTSDEMOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTTSDemoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTTSDemoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AliCustomizedVoice, aliCustomizedVoice_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(ExtParams, extParams_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTTSDemoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AliCustomizedVoice, aliCustomizedVoice_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(ExtParams, extParams_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    DescribeTTSDemoRequest() = default ;
    DescribeTTSDemoRequest(const DescribeTTSDemoRequest &) = default ;
    DescribeTTSDemoRequest(DescribeTTSDemoRequest &&) = default ;
    DescribeTTSDemoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTTSDemoRequest() = default ;
    DescribeTTSDemoRequest& operator=(const DescribeTTSDemoRequest &) = default ;
    DescribeTTSDemoRequest& operator=(DescribeTTSDemoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->aliCustomizedVoice_ == nullptr && this->appKey_ == nullptr && this->engine_ == nullptr && this->extParams_ == nullptr && this->instanceId_ == nullptr
        && this->nlsServiceType_ == nullptr && this->pitchRate_ == nullptr && this->scriptId_ == nullptr && this->secretKey_ == nullptr && this->speechRate_ == nullptr
        && this->text_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline DescribeTTSDemoRequest& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // aliCustomizedVoice Field Functions 
    bool hasAliCustomizedVoice() const { return this->aliCustomizedVoice_ != nullptr;};
    void deleteAliCustomizedVoice() { this->aliCustomizedVoice_ = nullptr;};
    inline string getAliCustomizedVoice() const { DARABONBA_PTR_GET_DEFAULT(aliCustomizedVoice_, "") };
    inline DescribeTTSDemoRequest& setAliCustomizedVoice(string aliCustomizedVoice) { DARABONBA_PTR_SET_VALUE(aliCustomizedVoice_, aliCustomizedVoice) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeTTSDemoRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeTTSDemoRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline string getExtParams() const { DARABONBA_PTR_GET_DEFAULT(extParams_, "") };
    inline DescribeTTSDemoRequest& setExtParams(string extParams) { DARABONBA_PTR_SET_VALUE(extParams_, extParams) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTTSDemoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nlsServiceType Field Functions 
    bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
    void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
    inline string getNlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
    inline DescribeTTSDemoRequest& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline int32_t getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0) };
    inline DescribeTTSDemoRequest& setPitchRate(int32_t pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeTTSDemoRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline DescribeTTSDemoRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline DescribeTTSDemoRequest& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeTTSDemoRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline DescribeTTSDemoRequest& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline DescribeTTSDemoRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // The AccessKey (AK) for this namespace.
    // > When the engine is set to xunfei, you must enter the AK.
    shared_ptr<string> accessKey_ {};
    // Alibaba Cloud customized voice, which is the voice call ID.
    shared_ptr<string> aliCustomizedVoice_ {};
    // Voice service type.
    // 
    // - When using **ali** as the custom service, this field stores the appKey of the Intelligent Speech Interaction product project.
    // 
    // - When using **xunfei** as the custom service provider, this field stores the corresponding appKey.
    shared_ptr<string> appKey_ {};
    // Storage engine. Valid values: ali, volc, and xunfei.
    // 
    // - When using the default service or selecting Alibaba Cloud as the custom service, set this parameter to **ali**.
    // 
    // - When using the Doubao service, set this parameter to **volc**.
    // - When using xunfei as the service provider, set this parameter to **xunfei**. This value can only be used in small model scenarios.
    shared_ptr<string> engine_ {};
    shared_ptr<string> extParams_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Service type.
    // Managed: The default Intelligent Speech Interaction product service of the Outbound Bot product (public service).
    // Authorized: The Intelligent Speech Interaction product service purchased by the public cloud customer (customer\\"s private service), authorized through Script Management > Edit > Call Service > Custom Service.
    // 
    // > When using Alibaba Cloud Intelligent Speech Interaction, that is, when using Alibaba Cloud as the custom service provider, set this parameter to Authorized.
    shared_ptr<string> nlsServiceType_ {};
    // Pitch.
    // An integer between [-500, 500]. Default value: 0.
    // 
    // A value greater than 0 indicates a higher pitch.
    // 
    // A value less than 0 indicates a lower pitch.
    shared_ptr<int32_t> pitchRate_ {};
    // Script ID.
    shared_ptr<string> scriptId_ {};
    // The AccessKey Secret (SK) for this namespace.
    // 
    // > When the engine is set to xunfei, you must enter the SK.
    shared_ptr<string> secretKey_ {};
    // Speech rate.
    // An integer between [-500, 500]. Default value: 0.
    // 
    // A value greater than 0 indicates a faster speech rate.
    // 
    // A value less than 0 indicates a slower speech rate.
    shared_ptr<int32_t> speechRate_ {};
    // Text content.
    // 
    // This parameter is required.
    shared_ptr<string> text_ {};
    // Voice information, such as aixia, siyue, or xiaoyun. For the complete list of available voices, refer to the voice list below.
    // 
    // > Because the Voice value of a cloned voice is a unique, non-fixed value generated during voice cloning, the specific Voice value cannot be provided at this stage. You must obtain the specific VoiceID from the voice cloning page by calling the ListVoiceClone API.
    shared_ptr<string> voice_ {};
    // Volume.
    // An integer between [0, 100]. Default value: 50.
    // 
    // A value greater than 50 indicates a higher volume.
    // 
    // A value less than 50 indicates a lower volume.
    shared_ptr<int32_t> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
