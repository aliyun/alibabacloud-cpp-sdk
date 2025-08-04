// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGLLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGLLMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfigLLMConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfigLLMConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(HistoryDepth, historyDepth_);
      DARABONBA_PTR_TO_JSON(MaxToken, maxToken_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfigLLMConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(HistoryDepth, historyDepth_);
      DARABONBA_PTR_FROM_JSON(MaxToken, maxToken_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    StartAgentRequestVoiceChatConfigLLMConfig() = default ;
    StartAgentRequestVoiceChatConfigLLMConfig(const StartAgentRequestVoiceChatConfigLLMConfig &) = default ;
    StartAgentRequestVoiceChatConfigLLMConfig(StartAgentRequestVoiceChatConfigLLMConfig &&) = default ;
    StartAgentRequestVoiceChatConfigLLMConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfigLLMConfig() = default ;
    StartAgentRequestVoiceChatConfigLLMConfig& operator=(const StartAgentRequestVoiceChatConfigLLMConfig &) = default ;
    StartAgentRequestVoiceChatConfigLLMConfig& operator=(StartAgentRequestVoiceChatConfigLLMConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->appId_ != nullptr && this->historyDepth_ != nullptr && this->maxToken_ != nullptr && this->model_ != nullptr && this->params_ != nullptr
        && this->prompt_ != nullptr && this->temperature_ != nullptr && this->topP_ != nullptr && this->url_ != nullptr && this->vendor_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // historyDepth Field Functions 
    bool hasHistoryDepth() const { return this->historyDepth_ != nullptr;};
    void deleteHistoryDepth() { this->historyDepth_ = nullptr;};
    inline int32_t historyDepth() const { DARABONBA_PTR_GET_DEFAULT(historyDepth_, 0) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setHistoryDepth(int32_t historyDepth) { DARABONBA_PTR_SET_VALUE(historyDepth_, historyDepth) };


    // maxToken Field Functions 
    bool hasMaxToken() const { return this->maxToken_ != nullptr;};
    void deleteMaxToken() { this->maxToken_ = nullptr;};
    inline int32_t maxToken() const { DARABONBA_PTR_GET_DEFAULT(maxToken_, 0) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setMaxToken(int32_t maxToken) { DARABONBA_PTR_SET_VALUE(maxToken_, maxToken) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & params() const { DARABONBA_GET(params_) };
    Darabonba::Json & params() { DARABONBA_GET(params_) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setParams(Darabonba::Json & params) { DARABONBA_SET_RVALUE(params_, params) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline StartAgentRequestVoiceChatConfigLLMConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> historyDepth_ = nullptr;
    std::shared_ptr<int32_t> maxToken_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    Darabonba::Json params_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<double> temperature_ = nullptr;
    std::shared_ptr<double> topP_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
