// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigTools.hpp>
#include <alibabacloud/models/UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentSelectiveRequestApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentSelectiveRequestApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_TO_JSON(security, security_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentSelectiveRequestApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_FROM_JSON(security, security_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
    };
    UpdateAndPublishAgentSelectiveRequestApplicationConfig() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfig(const UpdateAndPublishAgentSelectiveRequestApplicationConfig &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfig(UpdateAndPublishAgentSelectiveRequestApplicationConfig &&) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfig() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfig& operator=(const UpdateAndPublishAgentSelectiveRequestApplicationConfig &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfig& operator=(UpdateAndPublishAgentSelectiveRequestApplicationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyConfig_ == nullptr
        && return this->longTermMemory_ == nullptr && return this->parameters_ == nullptr && return this->ragConfig_ == nullptr && return this->security_ == nullptr && return this->tools_ == nullptr
        && return this->workFlows_ == nullptr; };
    // historyConfig Field Functions 
    bool hasHistoryConfig() const { return this->historyConfig_ != nullptr;};
    void deleteHistoryConfig() { this->historyConfig_ = nullptr;};
    inline const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig & historyConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig) };
    inline Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig historyConfig() { DARABONBA_PTR_GET(historyConfig_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setHistoryConfig(const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setHistoryConfig(Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


    // longTermMemory Field Functions 
    bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
    void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
    inline const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory & longTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory) };
    inline Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory longTermMemory() { DARABONBA_PTR_GET(longTermMemory_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setLongTermMemory(const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setLongTermMemory(Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters) };
    inline Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setParameters(const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setParameters(Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragConfig Field Functions 
    bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
    void deleteRagConfig() { this->ragConfig_ = nullptr;};
    inline const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig & ragConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig) };
    inline Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig ragConfig() { DARABONBA_PTR_GET(ragConfig_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setRagConfig(const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setRagConfig(Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    // security Field Functions 
    bool hasSecurity() const { return this->security_ != nullptr;};
    void deleteSecurity() { this->security_ = nullptr;};
    inline const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity & security() const { DARABONBA_PTR_GET_CONST(security_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity) };
    inline Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity security() { DARABONBA_PTR_GET(security_, Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setSecurity(const Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setSecurity(Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools>) };
    inline vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools>) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setTools(const vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setTools(vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // workFlows Field Functions 
    bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
    void deleteWorkFlows() { this->workFlows_ = nullptr;};
    inline const vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows> & workFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows>) };
    inline vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows> workFlows() { DARABONBA_PTR_GET(workFlows_, vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows>) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setWorkFlows(const vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfig& setWorkFlows(vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


  protected:
    std::shared_ptr<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig> historyConfig_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory> longTermMemory_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters> parameters_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig> ragConfig_ = nullptr;
    std::shared_ptr<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity> security_ = nullptr;
    std::shared_ptr<vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigTools>> tools_ = nullptr;
    std::shared_ptr<vector<Models::UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows>> workFlows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
