// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLERULE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLERULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Workflow.hpp>
#include <alibabacloud/models/WorkflowInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleRule& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(ColdArchiveDays, coldArchiveDays_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IaDays, iaDays_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScheduleStatus, scheduleStatus_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstance, workflowInstance_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveDays, archiveDays_);
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(ColdArchiveDays, coldArchiveDays_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IaDays, iaDays_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScheduleStatus, scheduleStatus_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstance, workflowInstance_);
    };
    LifecycleRule() = default ;
    LifecycleRule(const LifecycleRule &) = default ;
    LifecycleRule(LifecycleRule &&) = default ;
    LifecycleRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleRule() = default ;
    LifecycleRule& operator=(const LifecycleRule &) = default ;
    LifecycleRule& operator=(LifecycleRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveDays_ == nullptr
        && return this->bindCount_ == nullptr && return this->bizId_ == nullptr && return this->catalogId_ == nullptr && return this->coldArchiveDays_ == nullptr && return this->config_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->iaDays_ == nullptr && return this->name_ == nullptr
        && return this->resourceType_ == nullptr && return this->ruleType_ == nullptr && return this->scheduleStatus_ == nullptr && return this->workflow_ == nullptr && return this->workflowId_ == nullptr
        && return this->workflowInstance_ == nullptr; };
    // archiveDays Field Functions 
    bool hasArchiveDays() const { return this->archiveDays_ != nullptr;};
    void deleteArchiveDays() { this->archiveDays_ = nullptr;};
    inline int32_t archiveDays() const { DARABONBA_PTR_GET_DEFAULT(archiveDays_, 0) };
    inline LifecycleRule& setArchiveDays(int32_t archiveDays) { DARABONBA_PTR_SET_VALUE(archiveDays_, archiveDays) };


    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int32_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
    inline LifecycleRule& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline LifecycleRule& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline LifecycleRule& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // coldArchiveDays Field Functions 
    bool hasColdArchiveDays() const { return this->coldArchiveDays_ != nullptr;};
    void deleteColdArchiveDays() { this->coldArchiveDays_ = nullptr;};
    inline int32_t coldArchiveDays() const { DARABONBA_PTR_GET_DEFAULT(coldArchiveDays_, 0) };
    inline LifecycleRule& setColdArchiveDays(int32_t coldArchiveDays) { DARABONBA_PTR_SET_VALUE(coldArchiveDays_, coldArchiveDays) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline LifecycleRule& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LifecycleRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline LifecycleRule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline LifecycleRule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // iaDays Field Functions 
    bool hasIaDays() const { return this->iaDays_ != nullptr;};
    void deleteIaDays() { this->iaDays_ = nullptr;};
    inline int32_t iaDays() const { DARABONBA_PTR_GET_DEFAULT(iaDays_, 0) };
    inline LifecycleRule& setIaDays(int32_t iaDays) { DARABONBA_PTR_SET_VALUE(iaDays_, iaDays) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LifecycleRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline LifecycleRule& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline LifecycleRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scheduleStatus Field Functions 
    bool hasScheduleStatus() const { return this->scheduleStatus_ != nullptr;};
    void deleteScheduleStatus() { this->scheduleStatus_ = nullptr;};
    inline string scheduleStatus() const { DARABONBA_PTR_GET_DEFAULT(scheduleStatus_, "") };
    inline LifecycleRule& setScheduleStatus(string scheduleStatus) { DARABONBA_PTR_SET_VALUE(scheduleStatus_, scheduleStatus) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const Workflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, Workflow) };
    inline Workflow workflow() { DARABONBA_PTR_GET(workflow_, Workflow) };
    inline LifecycleRule& setWorkflow(const Workflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline LifecycleRule& setWorkflow(Workflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline LifecycleRule& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstance Field Functions 
    bool hasWorkflowInstance() const { return this->workflowInstance_ != nullptr;};
    void deleteWorkflowInstance() { this->workflowInstance_ = nullptr;};
    inline const WorkflowInstance & workflowInstance() const { DARABONBA_PTR_GET_CONST(workflowInstance_, WorkflowInstance) };
    inline WorkflowInstance workflowInstance() { DARABONBA_PTR_GET(workflowInstance_, WorkflowInstance) };
    inline LifecycleRule& setWorkflowInstance(const WorkflowInstance & workflowInstance) { DARABONBA_PTR_SET_VALUE(workflowInstance_, workflowInstance) };
    inline LifecycleRule& setWorkflowInstance(WorkflowInstance && workflowInstance) { DARABONBA_PTR_SET_RVALUE(workflowInstance_, workflowInstance) };


  protected:
    std::shared_ptr<int32_t> archiveDays_ = nullptr;
    std::shared_ptr<int32_t> bindCount_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<int32_t> coldArchiveDays_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int32_t> iaDays_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<string> scheduleStatus_ = nullptr;
    std::shared_ptr<Workflow> workflow_ = nullptr;
    std::shared_ptr<string> workflowId_ = nullptr;
    std::shared_ptr<WorkflowInstance> workflowInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
