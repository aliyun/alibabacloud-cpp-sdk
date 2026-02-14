// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMAGENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMAGENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateCustomAgentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(DataJson, dataJson_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionConfig, executionConfigShrink_);
      DARABONBA_PTR_TO_JSON(Instruction, instruction_);
      DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_TO_JSON(KnowledgeConfigList, knowledgeConfigListShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScheduleTaskConfig, scheduleTaskConfigShrink_);
      DARABONBA_PTR_TO_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_TO_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomAgentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(DataJson, dataJson_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionConfig, executionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
      DARABONBA_PTR_FROM_JSON(KnowledgeConfigList, knowledgeConfigListShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScheduleTaskConfig, scheduleTaskConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TextReportConfig, textReportConfig_);
      DARABONBA_PTR_FROM_JSON(WebReportConfig, webReportConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCustomAgentShrinkRequest() = default ;
    CreateCustomAgentShrinkRequest(const CreateCustomAgentShrinkRequest &) = default ;
    CreateCustomAgentShrinkRequest(CreateCustomAgentShrinkRequest &&) = default ;
    CreateCustomAgentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomAgentShrinkRequest() = default ;
    CreateCustomAgentShrinkRequest& operator=(const CreateCustomAgentShrinkRequest &) = default ;
    CreateCustomAgentShrinkRequest& operator=(CreateCustomAgentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->dataJson_ == nullptr && this->description_ == nullptr && this->executionConfigShrink_ == nullptr && this->instruction_ == nullptr && this->knowledge_ == nullptr
        && this->knowledgeConfigListShrink_ == nullptr && this->name_ == nullptr && this->scheduleTaskConfigShrink_ == nullptr && this->textReportConfig_ == nullptr && this->webReportConfig_ == nullptr
        && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateCustomAgentShrinkRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // dataJson Field Functions 
    bool hasDataJson() const { return this->dataJson_ != nullptr;};
    void deleteDataJson() { this->dataJson_ = nullptr;};
    inline string getDataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
    inline CreateCustomAgentShrinkRequest& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomAgentShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionConfigShrink Field Functions 
    bool hasExecutionConfigShrink() const { return this->executionConfigShrink_ != nullptr;};
    void deleteExecutionConfigShrink() { this->executionConfigShrink_ = nullptr;};
    inline string getExecutionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(executionConfigShrink_, "") };
    inline CreateCustomAgentShrinkRequest& setExecutionConfigShrink(string executionConfigShrink) { DARABONBA_PTR_SET_VALUE(executionConfigShrink_, executionConfigShrink) };


    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateCustomAgentShrinkRequest& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // knowledge Field Functions 
    bool hasKnowledge() const { return this->knowledge_ != nullptr;};
    void deleteKnowledge() { this->knowledge_ = nullptr;};
    inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
    inline CreateCustomAgentShrinkRequest& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


    // knowledgeConfigListShrink Field Functions 
    bool hasKnowledgeConfigListShrink() const { return this->knowledgeConfigListShrink_ != nullptr;};
    void deleteKnowledgeConfigListShrink() { this->knowledgeConfigListShrink_ = nullptr;};
    inline string getKnowledgeConfigListShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeConfigListShrink_, "") };
    inline CreateCustomAgentShrinkRequest& setKnowledgeConfigListShrink(string knowledgeConfigListShrink) { DARABONBA_PTR_SET_VALUE(knowledgeConfigListShrink_, knowledgeConfigListShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomAgentShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scheduleTaskConfigShrink Field Functions 
    bool hasScheduleTaskConfigShrink() const { return this->scheduleTaskConfigShrink_ != nullptr;};
    void deleteScheduleTaskConfigShrink() { this->scheduleTaskConfigShrink_ = nullptr;};
    inline string getScheduleTaskConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleTaskConfigShrink_, "") };
    inline CreateCustomAgentShrinkRequest& setScheduleTaskConfigShrink(string scheduleTaskConfigShrink) { DARABONBA_PTR_SET_VALUE(scheduleTaskConfigShrink_, scheduleTaskConfigShrink) };


    // textReportConfig Field Functions 
    bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
    void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
    inline string getTextReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
    inline CreateCustomAgentShrinkRequest& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


    // webReportConfig Field Functions 
    bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
    void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
    inline string getWebReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
    inline CreateCustomAgentShrinkRequest& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCustomAgentShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<string> dataJson_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> executionConfigShrink_ {};
    shared_ptr<string> instruction_ {};
    shared_ptr<string> knowledge_ {};
    shared_ptr<string> knowledgeConfigListShrink_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> scheduleTaskConfigShrink_ {};
    shared_ptr<string> textReportConfig_ {};
    shared_ptr<string> webReportConfig_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
