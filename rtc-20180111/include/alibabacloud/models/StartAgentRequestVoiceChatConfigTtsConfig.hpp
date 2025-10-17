// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfigTTSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfigTTSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(FilterBrackets, filterBrackets_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Pitch, pitch_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfigTTSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(FilterBrackets, filterBrackets_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    StartAgentRequestVoiceChatConfigTTSConfig() = default ;
    StartAgentRequestVoiceChatConfigTTSConfig(const StartAgentRequestVoiceChatConfigTTSConfig &) = default ;
    StartAgentRequestVoiceChatConfigTTSConfig(StartAgentRequestVoiceChatConfigTTSConfig &&) = default ;
    StartAgentRequestVoiceChatConfigTTSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfigTTSConfig() = default ;
    StartAgentRequestVoiceChatConfigTTSConfig& operator=(const StartAgentRequestVoiceChatConfigTTSConfig &) = default ;
    StartAgentRequestVoiceChatConfigTTSConfig& operator=(StartAgentRequestVoiceChatConfigTTSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->filterBrackets_ == nullptr && return this->model_ == nullptr && return this->pitch_ == nullptr && return this->rate_ == nullptr && return this->vendor_ == nullptr
        && return this->voice_ == nullptr && return this->volume_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // filterBrackets Field Functions 
    bool hasFilterBrackets() const { return this->filterBrackets_ != nullptr;};
    void deleteFilterBrackets() { this->filterBrackets_ = nullptr;};
    inline const vector<int32_t> & filterBrackets() const { DARABONBA_PTR_GET_CONST(filterBrackets_, vector<int32_t>) };
    inline vector<int32_t> filterBrackets() { DARABONBA_PTR_GET(filterBrackets_, vector<int32_t>) };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setFilterBrackets(const vector<int32_t> & filterBrackets) { DARABONBA_PTR_SET_VALUE(filterBrackets_, filterBrackets) };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setFilterBrackets(vector<int32_t> && filterBrackets) { DARABONBA_PTR_SET_RVALUE(filterBrackets_, filterBrackets) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // pitch Field Functions 
    bool hasPitch() const { return this->pitch_ != nullptr;};
    void deletePitch() { this->pitch_ = nullptr;};
    inline double pitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setPitch(double pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline StartAgentRequestVoiceChatConfigTTSConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<vector<int32_t>> filterBrackets_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<double> pitch_ = nullptr;
    std::shared_ptr<double> rate_ = nullptr;
    std::shared_ptr<string> vendor_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
