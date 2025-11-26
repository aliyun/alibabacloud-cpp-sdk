// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODYTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODYTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTTSConfigResponseBodyTTSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTTSConfigResponseBodyTTSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTTSConfigResponseBodyTTSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    DescribeTTSConfigResponseBodyTTSConfig() = default ;
    DescribeTTSConfigResponseBodyTTSConfig(const DescribeTTSConfigResponseBodyTTSConfig &) = default ;
    DescribeTTSConfigResponseBodyTTSConfig(DescribeTTSConfigResponseBodyTTSConfig &&) = default ;
    DescribeTTSConfigResponseBodyTTSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTTSConfigResponseBodyTTSConfig() = default ;
    DescribeTTSConfigResponseBodyTTSConfig& operator=(const DescribeTTSConfigResponseBodyTTSConfig &) = default ;
    DescribeTTSConfigResponseBodyTTSConfig& operator=(DescribeTTSConfigResponseBodyTTSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->nlsServiceType_ == nullptr && return this->speechRate_ == nullptr && return this->voice_ == nullptr && return this->volume_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nlsServiceType Field Functions 
    bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
    void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
    inline string nlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline string speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline DescribeTTSConfigResponseBodyTTSConfig& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nlsServiceType_ = nullptr;
    std::shared_ptr<string> speechRate_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<string> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
