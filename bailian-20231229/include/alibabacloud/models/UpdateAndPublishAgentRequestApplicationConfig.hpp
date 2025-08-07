// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTREQUESTAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTREQUESTAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigHistoryConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigLongTermMemory.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigParameters.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigRagConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigSecurity.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigTools.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentRequestApplicationConfigWorkFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentRequestApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentRequestApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_TO_JSON(security, security_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentRequestApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_FROM_JSON(security, security_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
    };
    UpdateAndPublishAgentRequestApplicationConfig() = default ;
    UpdateAndPublishAgentRequestApplicationConfig(const UpdateAndPublishAgentRequestApplicationConfig &) = default ;
    UpdateAndPublishAgentRequestApplicationConfig(UpdateAndPublishAgentRequestApplicationConfig &&) = default ;
    UpdateAndPublishAgentRequestApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentRequestApplicationConfig() = default ;
    UpdateAndPublishAgentRequestApplicationConfig& operator=(const UpdateAndPublishAgentRequestApplicationConfig &) = default ;
    UpdateAndPublishAgentRequestApplicationConfig& operator=(UpdateAndPublishAgentRequestApplicationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->historyConfig_ != nullptr
        && this->longTermMemory_ != nullptr && this->parameters_ != nullptr && this->ragConfig_ != nullptr && this->security_ != nullptr && this->tools_ != nullptr
        && this->workFlows_ != nullptr; };
    // historyConfig Field Functions 
    bool hasHistoryConfig() const { return this->historyConfig_ != nullptr;};
    void deleteHistoryConfig() { this->historyConfig_ = nullptr;};
    inline const Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig & historyConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig) };
    inline Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig historyConfig() { DARABONBA_PTR_GET(historyConfig_, Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setHistoryConfig(const Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setHistoryConfig(Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


    // longTermMemory Field Functions 
    bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
    void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
    inline const Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory & longTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory) };
    inline Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory longTermMemory() { DARABONBA_PTR_GET(longTermMemory_, Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setLongTermMemory(const Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setLongTermMemory(Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::UpdateAndPublishAgentRequestApplicationConfigParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::UpdateAndPublishAgentRequestApplicationConfigParameters) };
    inline Models::UpdateAndPublishAgentRequestApplicationConfigParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::UpdateAndPublishAgentRequestApplicationConfigParameters) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setParameters(const Models::UpdateAndPublishAgentRequestApplicationConfigParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setParameters(Models::UpdateAndPublishAgentRequestApplicationConfigParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragConfig Field Functions 
    bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
    void deleteRagConfig() { this->ragConfig_ = nullptr;};
    inline const Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig & ragConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig) };
    inline Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig ragConfig() { DARABONBA_PTR_GET(ragConfig_, Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setRagConfig(const Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setRagConfig(Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    // security Field Functions 
    bool hasSecurity() const { return this->security_ != nullptr;};
    void deleteSecurity() { this->security_ = nullptr;};
    inline const Models::UpdateAndPublishAgentRequestApplicationConfigSecurity & security() const { DARABONBA_PTR_GET_CONST(security_, Models::UpdateAndPublishAgentRequestApplicationConfigSecurity) };
    inline Models::UpdateAndPublishAgentRequestApplicationConfigSecurity security() { DARABONBA_PTR_GET(security_, Models::UpdateAndPublishAgentRequestApplicationConfigSecurity) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setSecurity(const Models::UpdateAndPublishAgentRequestApplicationConfigSecurity & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setSecurity(Models::UpdateAndPublishAgentRequestApplicationConfigSecurity && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools>) };
    inline vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools>) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setTools(const vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setTools(vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // workFlows Field Functions 
    bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
    void deleteWorkFlows() { this->workFlows_ = nullptr;};
    inline const vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows> & workFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows>) };
    inline vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows> workFlows() { DARABONBA_PTR_GET(workFlows_, vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows>) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setWorkFlows(const vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
    inline UpdateAndPublishAgentRequestApplicationConfig& setWorkFlows(vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


  protected:
    std::shared_ptr<Models::UpdateAndPublishAgentRequestApplicationConfigHistoryConfig> historyConfig_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentRequestApplicationConfigLongTermMemory> longTermMemory_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentRequestApplicationConfigParameters> parameters_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentRequestApplicationConfigRagConfig> ragConfig_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentRequestApplicationConfigSecurity> security_ = nullptr;
    std::shared_ptr<vector<Models::UpdateAndPublishAgentRequestApplicationConfigTools>> tools_ = nullptr;
    std::shared_ptr<vector<Models::UpdateAndPublishAgentRequestApplicationConfigWorkFlows>> workFlows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
