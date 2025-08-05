// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentServiceConfigDifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceConfigDifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(botType, botType_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceConfigDifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(botType, botType_);
    };
    AgentServiceConfigDifyConfig() = default ;
    AgentServiceConfigDifyConfig(const AgentServiceConfigDifyConfig &) = default ;
    AgentServiceConfigDifyConfig(AgentServiceConfigDifyConfig &&) = default ;
    AgentServiceConfigDifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceConfigDifyConfig() = default ;
    AgentServiceConfigDifyConfig& operator=(const AgentServiceConfigDifyConfig &) = default ;
    AgentServiceConfigDifyConfig& operator=(AgentServiceConfigDifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->botType_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline AgentServiceConfigDifyConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // botType Field Functions 
    bool hasBotType() const { return this->botType_ != nullptr;};
    void deleteBotType() { this->botType_ = nullptr;};
    inline string botType() const { DARABONBA_PTR_GET_DEFAULT(botType_, "") };
    inline AgentServiceConfigDifyConfig& setBotType(string botType) { DARABONBA_PTR_SET_VALUE(botType_, botType) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> botType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
