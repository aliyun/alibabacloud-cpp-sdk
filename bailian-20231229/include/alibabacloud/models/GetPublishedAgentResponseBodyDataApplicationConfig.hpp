// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPUBLISHEDAGENTRESPONSEBODYDATAAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigParameters.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigRagConfig.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigSecurity.hpp>
#include <vector>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigTools.hpp>
#include <alibabacloud/models/GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetPublishedAgentResponseBodyDataApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPublishedAgentResponseBodyDataApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_TO_JSON(security, security_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
    };
    friend void from_json(const Darabonba::Json& j, GetPublishedAgentResponseBodyDataApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_FROM_JSON(security, security_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
    };
    GetPublishedAgentResponseBodyDataApplicationConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfig(const GetPublishedAgentResponseBodyDataApplicationConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfig(GetPublishedAgentResponseBodyDataApplicationConfig &&) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPublishedAgentResponseBodyDataApplicationConfig() = default ;
    GetPublishedAgentResponseBodyDataApplicationConfig& operator=(const GetPublishedAgentResponseBodyDataApplicationConfig &) = default ;
    GetPublishedAgentResponseBodyDataApplicationConfig& operator=(GetPublishedAgentResponseBodyDataApplicationConfig &&) = default ;
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
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig & historyConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig historyConfig() { DARABONBA_PTR_GET(historyConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setHistoryConfig(const Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setHistoryConfig(Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


    // longTermMemory Field Functions 
    bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
    void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory & longTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory longTermMemory() { DARABONBA_PTR_GET(longTermMemory_, Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setLongTermMemory(const Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setLongTermMemory(Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setParameters(const Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setParameters(Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragConfig Field Functions 
    bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
    void deleteRagConfig() { this->ragConfig_ = nullptr;};
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig & ragConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig ragConfig() { DARABONBA_PTR_GET(ragConfig_, Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setRagConfig(const Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setRagConfig(Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    // security Field Functions 
    bool hasSecurity() const { return this->security_ != nullptr;};
    void deleteSecurity() { this->security_ = nullptr;};
    inline const Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity & security() const { DARABONBA_PTR_GET_CONST(security_, Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity) };
    inline Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity security() { DARABONBA_PTR_GET(security_, Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setSecurity(const Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setSecurity(Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools>) };
    inline vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools>) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setTools(const vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setTools(vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // workFlows Field Functions 
    bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
    void deleteWorkFlows() { this->workFlows_ = nullptr;};
    inline const vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows> & workFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows>) };
    inline vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows> workFlows() { DARABONBA_PTR_GET(workFlows_, vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows>) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setWorkFlows(const vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
    inline GetPublishedAgentResponseBodyDataApplicationConfig& setWorkFlows(vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


  protected:
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig> historyConfig_ = nullptr;
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory> longTermMemory_ = nullptr;
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfigParameters> parameters_ = nullptr;
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfigRagConfig> ragConfig_ = nullptr;
    std::shared_ptr<Models::GetPublishedAgentResponseBodyDataApplicationConfigSecurity> security_ = nullptr;
    std::shared_ptr<vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigTools>> tools_ = nullptr;
    std::shared_ptr<vector<Models::GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows>> workFlows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
