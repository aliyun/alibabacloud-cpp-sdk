// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUESTAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigHistoryConfig.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigLongTermMemory.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigParameters.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigRagConfig.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigSecurityConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigTools.hpp>
#include <alibabacloud/models/CreateAndPulishAgentRequestApplicationConfigWorkFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentRequestApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentRequestApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_TO_JSON(securityConfig, securityConfig_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentRequestApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_FROM_JSON(securityConfig, securityConfig_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
    };
    CreateAndPulishAgentRequestApplicationConfig() = default ;
    CreateAndPulishAgentRequestApplicationConfig(const CreateAndPulishAgentRequestApplicationConfig &) = default ;
    CreateAndPulishAgentRequestApplicationConfig(CreateAndPulishAgentRequestApplicationConfig &&) = default ;
    CreateAndPulishAgentRequestApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentRequestApplicationConfig() = default ;
    CreateAndPulishAgentRequestApplicationConfig& operator=(const CreateAndPulishAgentRequestApplicationConfig &) = default ;
    CreateAndPulishAgentRequestApplicationConfig& operator=(CreateAndPulishAgentRequestApplicationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyConfig_ == nullptr
        && return this->longTermMemory_ == nullptr && return this->parameters_ == nullptr && return this->ragConfig_ == nullptr && return this->securityConfig_ == nullptr && return this->tools_ == nullptr
        && return this->workFlows_ == nullptr; };
    // historyConfig Field Functions 
    bool hasHistoryConfig() const { return this->historyConfig_ != nullptr;};
    void deleteHistoryConfig() { this->historyConfig_ = nullptr;};
    inline const Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig & historyConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig) };
    inline Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig historyConfig() { DARABONBA_PTR_GET(historyConfig_, Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setHistoryConfig(const Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setHistoryConfig(Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


    // longTermMemory Field Functions 
    bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
    void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
    inline const Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory & longTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory) };
    inline Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory longTermMemory() { DARABONBA_PTR_GET(longTermMemory_, Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory) };
    inline CreateAndPulishAgentRequestApplicationConfig& setLongTermMemory(const Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
    inline CreateAndPulishAgentRequestApplicationConfig& setLongTermMemory(Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::CreateAndPulishAgentRequestApplicationConfigParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::CreateAndPulishAgentRequestApplicationConfigParameters) };
    inline Models::CreateAndPulishAgentRequestApplicationConfigParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::CreateAndPulishAgentRequestApplicationConfigParameters) };
    inline CreateAndPulishAgentRequestApplicationConfig& setParameters(const Models::CreateAndPulishAgentRequestApplicationConfigParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateAndPulishAgentRequestApplicationConfig& setParameters(Models::CreateAndPulishAgentRequestApplicationConfigParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragConfig Field Functions 
    bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
    void deleteRagConfig() { this->ragConfig_ = nullptr;};
    inline const Models::CreateAndPulishAgentRequestApplicationConfigRagConfig & ragConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, Models::CreateAndPulishAgentRequestApplicationConfigRagConfig) };
    inline Models::CreateAndPulishAgentRequestApplicationConfigRagConfig ragConfig() { DARABONBA_PTR_GET(ragConfig_, Models::CreateAndPulishAgentRequestApplicationConfigRagConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setRagConfig(const Models::CreateAndPulishAgentRequestApplicationConfigRagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setRagConfig(Models::CreateAndPulishAgentRequestApplicationConfigRagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    // securityConfig Field Functions 
    bool hasSecurityConfig() const { return this->securityConfig_ != nullptr;};
    void deleteSecurityConfig() { this->securityConfig_ = nullptr;};
    inline const Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig & securityConfig() const { DARABONBA_PTR_GET_CONST(securityConfig_, Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig) };
    inline Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig securityConfig() { DARABONBA_PTR_GET(securityConfig_, Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setSecurityConfig(const Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig & securityConfig) { DARABONBA_PTR_SET_VALUE(securityConfig_, securityConfig) };
    inline CreateAndPulishAgentRequestApplicationConfig& setSecurityConfig(Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig && securityConfig) { DARABONBA_PTR_SET_RVALUE(securityConfig_, securityConfig) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::CreateAndPulishAgentRequestApplicationConfigTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::CreateAndPulishAgentRequestApplicationConfigTools>) };
    inline vector<Models::CreateAndPulishAgentRequestApplicationConfigTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::CreateAndPulishAgentRequestApplicationConfigTools>) };
    inline CreateAndPulishAgentRequestApplicationConfig& setTools(const vector<Models::CreateAndPulishAgentRequestApplicationConfigTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateAndPulishAgentRequestApplicationConfig& setTools(vector<Models::CreateAndPulishAgentRequestApplicationConfigTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // workFlows Field Functions 
    bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
    void deleteWorkFlows() { this->workFlows_ = nullptr;};
    inline const vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows> & workFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows>) };
    inline vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows> workFlows() { DARABONBA_PTR_GET(workFlows_, vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows>) };
    inline CreateAndPulishAgentRequestApplicationConfig& setWorkFlows(const vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
    inline CreateAndPulishAgentRequestApplicationConfig& setWorkFlows(vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


  protected:
    std::shared_ptr<Models::CreateAndPulishAgentRequestApplicationConfigHistoryConfig> historyConfig_ = nullptr;
    std::shared_ptr<Models::CreateAndPulishAgentRequestApplicationConfigLongTermMemory> longTermMemory_ = nullptr;
    std::shared_ptr<Models::CreateAndPulishAgentRequestApplicationConfigParameters> parameters_ = nullptr;
    std::shared_ptr<Models::CreateAndPulishAgentRequestApplicationConfigRagConfig> ragConfig_ = nullptr;
    std::shared_ptr<Models::CreateAndPulishAgentRequestApplicationConfigSecurityConfig> securityConfig_ = nullptr;
    std::shared_ptr<vector<Models::CreateAndPulishAgentRequestApplicationConfigTools>> tools_ = nullptr;
    std::shared_ptr<vector<Models::CreateAndPulishAgentRequestApplicationConfigWorkFlows>> workFlows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
