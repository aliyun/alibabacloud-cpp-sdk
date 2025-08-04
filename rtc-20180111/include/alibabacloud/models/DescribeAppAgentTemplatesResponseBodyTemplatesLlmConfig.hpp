// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATESLLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODYTEMPLATESLLMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AgentAppId, agentAppId_);
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(HistoryDepth, historyDepth_);
      DARABONBA_PTR_TO_JSON(MaxToken, maxToken_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentAppId, agentAppId_);
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(HistoryDepth, historyDepth_);
      DARABONBA_PTR_FROM_JSON(MaxToken, maxToken_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig(const DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig(DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig &&) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig() = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& operator=(const DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig &) = default ;
    DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& operator=(DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentAppId_ != nullptr
        && this->apiKey_ != nullptr && this->historyDepth_ != nullptr && this->maxToken_ != nullptr && this->model_ != nullptr && this->name_ != nullptr
        && this->prompt_ != nullptr && this->temperature_ != nullptr && this->topP_ != nullptr && this->url_ != nullptr && this->vendor_ != nullptr; };
    // agentAppId Field Functions 
    bool hasAgentAppId() const { return this->agentAppId_ != nullptr;};
    void deleteAgentAppId() { this->agentAppId_ = nullptr;};
    inline string agentAppId() const { DARABONBA_PTR_GET_DEFAULT(agentAppId_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setAgentAppId(string agentAppId) { DARABONBA_PTR_SET_VALUE(agentAppId_, agentAppId) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // historyDepth Field Functions 
    bool hasHistoryDepth() const { return this->historyDepth_ != nullptr;};
    void deleteHistoryDepth() { this->historyDepth_ = nullptr;};
    inline int32_t historyDepth() const { DARABONBA_PTR_GET_DEFAULT(historyDepth_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setHistoryDepth(int32_t historyDepth) { DARABONBA_PTR_SET_VALUE(historyDepth_, historyDepth) };


    // maxToken Field Functions 
    bool hasMaxToken() const { return this->maxToken_ != nullptr;};
    void deleteMaxToken() { this->maxToken_ = nullptr;};
    inline int32_t maxToken() const { DARABONBA_PTR_GET_DEFAULT(maxToken_, 0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setMaxToken(int32_t maxToken) { DARABONBA_PTR_SET_VALUE(maxToken_, maxToken) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeAppAgentTemplatesResponseBodyTemplatesLlmConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    std::shared_ptr<string> agentAppId_ = nullptr;
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<int32_t> historyDepth_ = nullptr;
    std::shared_ptr<int32_t> maxToken_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<float> temperature_ = nullptr;
    std::shared_ptr<float> topP_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
