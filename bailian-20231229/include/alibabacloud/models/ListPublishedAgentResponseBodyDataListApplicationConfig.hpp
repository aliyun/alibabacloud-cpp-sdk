// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALISTAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODYDATALISTAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigParameters.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigSecurity.hpp>
#include <vector>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigTools.hpp>
#include <alibabacloud/models/ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListPublishedAgentResponseBodyDataListApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentResponseBodyDataListApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_TO_JSON(security, security_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
      DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentResponseBodyDataListApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
      DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
      DARABONBA_PTR_FROM_JSON(security, security_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
      DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
    };
    ListPublishedAgentResponseBodyDataListApplicationConfig() = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfig(const ListPublishedAgentResponseBodyDataListApplicationConfig &) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfig(ListPublishedAgentResponseBodyDataListApplicationConfig &&) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentResponseBodyDataListApplicationConfig() = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfig& operator=(const ListPublishedAgentResponseBodyDataListApplicationConfig &) = default ;
    ListPublishedAgentResponseBodyDataListApplicationConfig& operator=(ListPublishedAgentResponseBodyDataListApplicationConfig &&) = default ;
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
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig & historyConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig historyConfig() { DARABONBA_PTR_GET(historyConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setHistoryConfig(const Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setHistoryConfig(Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


    // longTermMemory Field Functions 
    bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
    void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory & longTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory longTermMemory() { DARABONBA_PTR_GET(longTermMemory_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setLongTermMemory(const Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setLongTermMemory(Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters parameters() { DARABONBA_PTR_GET(parameters_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setParameters(const Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setParameters(Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // ragConfig Field Functions 
    bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
    void deleteRagConfig() { this->ragConfig_ = nullptr;};
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig & ragConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig ragConfig() { DARABONBA_PTR_GET(ragConfig_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setRagConfig(const Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setRagConfig(Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


    // security Field Functions 
    bool hasSecurity() const { return this->security_ != nullptr;};
    void deleteSecurity() { this->security_ = nullptr;};
    inline const Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity & security() const { DARABONBA_PTR_GET_CONST(security_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity) };
    inline Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity security() { DARABONBA_PTR_GET(security_, Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setSecurity(const Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setSecurity(Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools>) };
    inline vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools> tools() { DARABONBA_PTR_GET(tools_, vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools>) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setTools(const vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setTools(vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    // workFlows Field Functions 
    bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
    void deleteWorkFlows() { this->workFlows_ = nullptr;};
    inline const vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows> & workFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows>) };
    inline vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows> workFlows() { DARABONBA_PTR_GET(workFlows_, vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows>) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setWorkFlows(const vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
    inline ListPublishedAgentResponseBodyDataListApplicationConfig& setWorkFlows(vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


  protected:
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig> historyConfig_ = nullptr;
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory> longTermMemory_ = nullptr;
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfigParameters> parameters_ = nullptr;
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig> ragConfig_ = nullptr;
    std::shared_ptr<Models::ListPublishedAgentResponseBodyDataListApplicationConfigSecurity> security_ = nullptr;
    std::shared_ptr<vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigTools>> tools_ = nullptr;
    std::shared_ptr<vector<Models::ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows>> workFlows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
