// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATADAGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATADAGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_TO_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_TO_JSON(CronTrigger, cronTrigger_);
      DARABONBA_PTR_TO_JSON(DWDevelop, DWDevelop_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EditDagId, editDagId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(Legacy, legacy_);
      DARABONBA_PTR_TO_JSON(System, system_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TriggerOnce, triggerOnce_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CronBeginDate, cronBeginDate_);
      DARABONBA_PTR_FROM_JSON(CronEndDate, cronEndDate_);
      DARABONBA_PTR_FROM_JSON(CronTrigger, cronTrigger_);
      DARABONBA_PTR_FROM_JSON(DWDevelop, DWDevelop_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EditDagId, editDagId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
      DARABONBA_PTR_FROM_JSON(System, system_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TriggerOnce, triggerOnce_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creatorId_ != nullptr
        && this->cronBeginDate_ != nullptr && this->cronEndDate_ != nullptr && this->cronTrigger_ != nullptr && this->DWDevelop_ != nullptr && this->dagName_ != nullptr
        && this->dagOwnerId_ != nullptr && this->deployId_ != nullptr && this->description_ != nullptr && this->editDagId_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->isPublic_ != nullptr && this->legacy_ != nullptr && this->system_ != nullptr
        && this->tenantId_ != nullptr && this->triggerOnce_ != nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // cronBeginDate Field Functions 
    bool hasCronBeginDate() const { return this->cronBeginDate_ != nullptr;};
    void deleteCronBeginDate() { this->cronBeginDate_ = nullptr;};
    inline string cronBeginDate() const { DARABONBA_PTR_GET_DEFAULT(cronBeginDate_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setCronBeginDate(string cronBeginDate) { DARABONBA_PTR_SET_VALUE(cronBeginDate_, cronBeginDate) };


    // cronEndDate Field Functions 
    bool hasCronEndDate() const { return this->cronEndDate_ != nullptr;};
    void deleteCronEndDate() { this->cronEndDate_ = nullptr;};
    inline string cronEndDate() const { DARABONBA_PTR_GET_DEFAULT(cronEndDate_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setCronEndDate(string cronEndDate) { DARABONBA_PTR_SET_VALUE(cronEndDate_, cronEndDate) };


    // cronTrigger Field Functions 
    bool hasCronTrigger() const { return this->cronTrigger_ != nullptr;};
    void deleteCronTrigger() { this->cronTrigger_ = nullptr;};
    inline bool cronTrigger() const { DARABONBA_PTR_GET_DEFAULT(cronTrigger_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setCronTrigger(bool cronTrigger) { DARABONBA_PTR_SET_VALUE(cronTrigger_, cronTrigger) };


    // DWDevelop Field Functions 
    bool hasDWDevelop() const { return this->DWDevelop_ != nullptr;};
    void deleteDWDevelop() { this->DWDevelop_ = nullptr;};
    inline bool DWDevelop() const { DARABONBA_PTR_GET_DEFAULT(DWDevelop_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setDWDevelop(bool DWDevelop) { DARABONBA_PTR_SET_VALUE(DWDevelop_, DWDevelop) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // dagOwnerId Field Functions 
    bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
    void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
    inline string dagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline int64_t deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // editDagId Field Functions 
    bool hasEditDagId() const { return this->editDagId_ != nullptr;};
    void deleteEditDagId() { this->editDagId_ = nullptr;};
    inline int64_t editDagId() const { DARABONBA_PTR_GET_DEFAULT(editDagId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setEditDagId(int64_t editDagId) { DARABONBA_PTR_SET_VALUE(editDagId_, editDagId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline int64_t isPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setIsPublic(int64_t isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // legacy Field Functions 
    bool hasLegacy() const { return this->legacy_ != nullptr;};
    void deleteLegacy() { this->legacy_ = nullptr;};
    inline bool legacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool system() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerOnce Field Functions 
    bool hasTriggerOnce() const { return this->triggerOnce_ != nullptr;};
    void deleteTriggerOnce() { this->triggerOnce_ = nullptr;};
    inline bool triggerOnce() const { DARABONBA_PTR_GET_DEFAULT(triggerOnce_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo& setTriggerOnce(bool triggerOnce) { DARABONBA_PTR_SET_VALUE(triggerOnce_, triggerOnce) };


  protected:
    // The ID of the user who created the task flow.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The start time for scheduling. The task flow is not scheduled before this point in time.
    std::shared_ptr<string> cronBeginDate_ = nullptr;
    // The end time for scheduling. The task flow is not scheduled after this point in time.
    std::shared_ptr<string> cronEndDate_ = nullptr;
    // Indicates whether the archiving task is a scheduled task. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> cronTrigger_ = nullptr;
    // Indicates whether the task is used to develop warehouses.
    // 
    // >  This field is a retained field that is not in use.
    std::shared_ptr<bool> DWDevelop_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The ID of the owner of the workflow.
    std::shared_ptr<string> dagOwnerId_ = nullptr;
    // The ID of the deployment record.
    std::shared_ptr<int64_t> deployId_ = nullptr;
    // The description of the workflow.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the editable workflow version.
    std::shared_ptr<int64_t> editDagId_ = nullptr;
    // The time when the workflow was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the workflow was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the task flow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the workflow is public. Valid values:
    // 
    // *   **0**: not public.
    // *   **1**: public.
    std::shared_ptr<int64_t> isPublic_ = nullptr;
    // Indicates whether the task is a historical task. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> legacy_ = nullptr;
    // Indicates whether the task was created by the system. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> system_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Indicates whether the workflow is triggered to run once. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> triggerOnce_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
