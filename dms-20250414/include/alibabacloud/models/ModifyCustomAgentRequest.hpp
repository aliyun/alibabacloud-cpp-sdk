// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ModifyCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(DataJson, dataJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionConfig, executionConfig_);
      DARABONBA_PTR_TO_JSON(Instruction, instruction_);
      DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(KnowledgeConfigList, knowledgeConfigList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleTaskConfig, scheduleTaskConfig_);
      DARABONBA_PTR_TO_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_TO_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(DataJson, dataJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionConfig, executionConfig_);
      DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(KnowledgeConfigList, knowledgeConfigList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleTaskConfig, scheduleTaskConfig_);
      DARABONBA_PTR_FROM_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_FROM_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ModifyCustomAgentRequest() = default ;
    ModifyCustomAgentRequest(const ModifyCustomAgentRequest &) = default ;
    ModifyCustomAgentRequest(ModifyCustomAgentRequest &&) = default ;
    ModifyCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomAgentRequest() = default ;
    ModifyCustomAgentRequest& operator=(const ModifyCustomAgentRequest &) = default ;
    ModifyCustomAgentRequest& operator=(ModifyCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleTaskConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleTaskConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_TO_JSON(Query, query_);
        DARABONBA_PTR_TO_JSON(RelatedSessionId, relatedSessionId_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleTaskConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
        DARABONBA_PTR_FROM_JSON(RelatedSessionId, relatedSessionId_);
      };
      ScheduleTaskConfig() = default ;
      ScheduleTaskConfig(const ScheduleTaskConfig &) = default ;
      ScheduleTaskConfig(ScheduleTaskConfig &&) = default ;
      ScheduleTaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleTaskConfig() = default ;
      ScheduleTaskConfig& operator=(const ScheduleTaskConfig &) = default ;
      ScheduleTaskConfig& operator=(ScheduleTaskConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->query_ == nullptr && this->relatedSessionId_ == nullptr; };
      // cronExpression Field Functions 
      bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
      void deleteCronExpression() { this->cronExpression_ = nullptr;};
      inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
      inline ScheduleTaskConfig& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline ScheduleTaskConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


      // relatedSessionId Field Functions 
      bool hasRelatedSessionId() const { return this->relatedSessionId_ != nullptr;};
      void deleteRelatedSessionId() { this->relatedSessionId_ = nullptr;};
      inline string getRelatedSessionId() const { DARABONBA_PTR_GET_DEFAULT(relatedSessionId_, "") };
      inline ScheduleTaskConfig& setRelatedSessionId(string relatedSessionId) { DARABONBA_PTR_SET_VALUE(relatedSessionId_, relatedSessionId) };


    protected:
      shared_ptr<string> cronExpression_ {};
      shared_ptr<string> query_ {};
      shared_ptr<string> relatedSessionId_ {};
    };

    class KnowledgeConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KnowledgeConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
      };
      friend void from_json(const Darabonba::Json& j, KnowledgeConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(McpServerId, mcpServerId_);
      };
      KnowledgeConfigList() = default ;
      KnowledgeConfigList(const KnowledgeConfigList &) = default ;
      KnowledgeConfigList(KnowledgeConfigList &&) = default ;
      KnowledgeConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KnowledgeConfigList() = default ;
      KnowledgeConfigList& operator=(const KnowledgeConfigList &) = default ;
      KnowledgeConfigList& operator=(KnowledgeConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->mcpServerId_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline KnowledgeConfigList& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // mcpServerId Field Functions 
      bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
      void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
      inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
      inline KnowledgeConfigList& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


    protected:
      shared_ptr<string> accessType_ {};
      shared_ptr<string> mcpServerId_ {};
    };

    class ExecutionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SkipAskHuman, skipAskHuman_);
        DARABONBA_PTR_TO_JSON(SkipPlan, skipPlan_);
        DARABONBA_PTR_TO_JSON(SkipSqlConfirm, skipSqlConfirm_);
        DARABONBA_PTR_TO_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SkipAskHuman, skipAskHuman_);
        DARABONBA_PTR_FROM_JSON(SkipPlan, skipPlan_);
        DARABONBA_PTR_FROM_JSON(SkipSqlConfirm, skipSqlConfirm_);
        DARABONBA_PTR_FROM_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
      };
      ExecutionConfig() = default ;
      ExecutionConfig(const ExecutionConfig &) = default ;
      ExecutionConfig(ExecutionConfig &&) = default ;
      ExecutionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutionConfig() = default ;
      ExecutionConfig& operator=(const ExecutionConfig &) = default ;
      ExecutionConfig& operator=(ExecutionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->skipAskHuman_ == nullptr
        && this->skipPlan_ == nullptr && this->skipSqlConfirm_ == nullptr && this->skipWebReportConfirm_ == nullptr; };
      // skipAskHuman Field Functions 
      bool hasSkipAskHuman() const { return this->skipAskHuman_ != nullptr;};
      void deleteSkipAskHuman() { this->skipAskHuman_ = nullptr;};
      inline bool getSkipAskHuman() const { DARABONBA_PTR_GET_DEFAULT(skipAskHuman_, false) };
      inline ExecutionConfig& setSkipAskHuman(bool skipAskHuman) { DARABONBA_PTR_SET_VALUE(skipAskHuman_, skipAskHuman) };


      // skipPlan Field Functions 
      bool hasSkipPlan() const { return this->skipPlan_ != nullptr;};
      void deleteSkipPlan() { this->skipPlan_ = nullptr;};
      inline bool getSkipPlan() const { DARABONBA_PTR_GET_DEFAULT(skipPlan_, false) };
      inline ExecutionConfig& setSkipPlan(bool skipPlan) { DARABONBA_PTR_SET_VALUE(skipPlan_, skipPlan) };


      // skipSqlConfirm Field Functions 
      bool hasSkipSqlConfirm() const { return this->skipSqlConfirm_ != nullptr;};
      void deleteSkipSqlConfirm() { this->skipSqlConfirm_ = nullptr;};
      inline bool getSkipSqlConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipSqlConfirm_, false) };
      inline ExecutionConfig& setSkipSqlConfirm(bool skipSqlConfirm) { DARABONBA_PTR_SET_VALUE(skipSqlConfirm_, skipSqlConfirm) };


      // skipWebReportConfirm Field Functions 
      bool hasSkipWebReportConfirm() const { return this->skipWebReportConfirm_ != nullptr;};
      void deleteSkipWebReportConfirm() { this->skipWebReportConfirm_ = nullptr;};
      inline bool getSkipWebReportConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipWebReportConfirm_, false) };
      inline ExecutionConfig& setSkipWebReportConfirm(bool skipWebReportConfirm) { DARABONBA_PTR_SET_VALUE(skipWebReportConfirm_, skipWebReportConfirm) };


    protected:
      shared_ptr<bool> skipAskHuman_ {};
      shared_ptr<bool> skipPlan_ {};
      shared_ptr<bool> skipSqlConfirm_ {};
      shared_ptr<bool> skipWebReportConfirm_ {};
    };

    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->DMSUnit_ == nullptr && this->dataJson_ == nullptr && this->description_ == nullptr && this->executionConfig_ == nullptr && this->instruction_ == nullptr
        && this->knowledge_ == nullptr && this->knowledgeConfigList_ == nullptr && this->name_ == nullptr && this->scheduleTaskConfig_ == nullptr && this->textReportConfig_ == nullptr
        && this->webReportConfig_ == nullptr && this->workspaceId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline ModifyCustomAgentRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline ModifyCustomAgentRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // dataJson Field Functions 
    bool hasDataJson() const { return this->dataJson_ != nullptr;};
    void deleteDataJson() { this->dataJson_ = nullptr;};
    inline string getDataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
    inline ModifyCustomAgentRequest& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCustomAgentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionConfig Field Functions 
    bool hasExecutionConfig() const { return this->executionConfig_ != nullptr;};
    void deleteExecutionConfig() { this->executionConfig_ = nullptr;};
    inline const ModifyCustomAgentRequest::ExecutionConfig & getExecutionConfig() const { DARABONBA_PTR_GET_CONST(executionConfig_, ModifyCustomAgentRequest::ExecutionConfig) };
    inline ModifyCustomAgentRequest::ExecutionConfig getExecutionConfig() { DARABONBA_PTR_GET(executionConfig_, ModifyCustomAgentRequest::ExecutionConfig) };
    inline ModifyCustomAgentRequest& setExecutionConfig(const ModifyCustomAgentRequest::ExecutionConfig & executionConfig) { DARABONBA_PTR_SET_VALUE(executionConfig_, executionConfig) };
    inline ModifyCustomAgentRequest& setExecutionConfig(ModifyCustomAgentRequest::ExecutionConfig && executionConfig) { DARABONBA_PTR_SET_RVALUE(executionConfig_, executionConfig) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline ModifyCustomAgentRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
    inline ModifyCustomAgentRequest& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


    // knowledgeConfigList Field Functions 
    bool hasKnowledgeConfigList() const { return this->knowledgeConfigList_ != nullptr;};
    void deleteKnowledgeConfigList() { this->knowledgeConfigList_ = nullptr;};
    inline const vector<ModifyCustomAgentRequest::KnowledgeConfigList> & getKnowledgeConfigList() const { DARABONBA_PTR_GET_CONST(knowledgeConfigList_, vector<ModifyCustomAgentRequest::KnowledgeConfigList>) };
    inline vector<ModifyCustomAgentRequest::KnowledgeConfigList> getKnowledgeConfigList() { DARABONBA_PTR_GET(knowledgeConfigList_, vector<ModifyCustomAgentRequest::KnowledgeConfigList>) };
    inline ModifyCustomAgentRequest& setKnowledgeConfigList(const vector<ModifyCustomAgentRequest::KnowledgeConfigList> & knowledgeConfigList) { DARABONBA_PTR_SET_VALUE(knowledgeConfigList_, knowledgeConfigList) };
    inline ModifyCustomAgentRequest& setKnowledgeConfigList(vector<ModifyCustomAgentRequest::KnowledgeConfigList> && knowledgeConfigList) { DARABONBA_PTR_SET_RVALUE(knowledgeConfigList_, knowledgeConfigList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCustomAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleTaskConfig Field Functions 
    bool hasScheduleTaskConfig() const { return this->scheduleTaskConfig_ != nullptr;};
    void deleteScheduleTaskConfig() { this->scheduleTaskConfig_ = nullptr;};
    inline const ModifyCustomAgentRequest::ScheduleTaskConfig & getScheduleTaskConfig() const { DARABONBA_PTR_GET_CONST(scheduleTaskConfig_, ModifyCustomAgentRequest::ScheduleTaskConfig) };
    inline ModifyCustomAgentRequest::ScheduleTaskConfig getScheduleTaskConfig() { DARABONBA_PTR_GET(scheduleTaskConfig_, ModifyCustomAgentRequest::ScheduleTaskConfig) };
    inline ModifyCustomAgentRequest& setScheduleTaskConfig(const ModifyCustomAgentRequest::ScheduleTaskConfig & scheduleTaskConfig) { DARABONBA_PTR_SET_VALUE(scheduleTaskConfig_, scheduleTaskConfig) };
    inline ModifyCustomAgentRequest& setScheduleTaskConfig(ModifyCustomAgentRequest::ScheduleTaskConfig && scheduleTaskConfig) { DARABONBA_PTR_SET_RVALUE(scheduleTaskConfig_, scheduleTaskConfig) };


    // textReportConfig Field Functions 
    bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
    void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
    inline string getTextReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
    inline ModifyCustomAgentRequest& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


    // webReportConfig Field Functions 
    bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
    void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
    inline string getWebReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
    inline ModifyCustomAgentRequest& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ModifyCustomAgentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> customAgentId_ {};
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> dataJson_ {};
    shared_ptr<string> description_ {};
    shared_ptr<ModifyCustomAgentRequest::ExecutionConfig> executionConfig_ {};
    shared_ptr<string> instruction_ {};
    shared_ptr<string> knowledge_ {};
    shared_ptr<vector<ModifyCustomAgentRequest::KnowledgeConfigList>> knowledgeConfigList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<ModifyCustomAgentRequest::ScheduleTaskConfig> scheduleTaskConfig_ {};
    shared_ptr<string> textReportConfig_ {};
    shared_ptr<string> webReportConfig_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
