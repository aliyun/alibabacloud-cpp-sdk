// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastRunningContext, lastRunningContext_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastRunningContext, lastRunningContext_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessTime_ == nullptr
        && return this->dagId_ == nullptr && return this->endTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->historyDagId_ == nullptr
        && return this->id_ == nullptr && return this->lastRunningContext_ == nullptr && return this->msg_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr
        && return this->triggerType_ == nullptr && return this->version_ == nullptr; };
    // businessTime Field Functions 
    bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
    void deleteBusinessTime() { this->businessTime_ = nullptr;};
    inline string businessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // historyDagId Field Functions 
    bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
    void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
    inline int64_t historyDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastRunningContext Field Functions 
    bool hasLastRunningContext() const { return this->lastRunningContext_ != nullptr;};
    void deleteLastRunningContext() { this->lastRunningContext_ = nullptr;};
    inline string lastRunningContext() const { DARABONBA_PTR_GET_DEFAULT(lastRunningContext_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setLastRunningContext(string lastRunningContext) { DARABONBA_PTR_SET_VALUE(lastRunningContext_, lastRunningContext) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int64_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setTriggerType(int64_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The business time of the task flow. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> businessTime_ = nullptr;
    // The task flow ID. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the value of this parameter.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The time when the task flow ended. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the task flow was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the task flow was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the historical task flow.
    std::shared_ptr<int64_t> historyDagId_ = nullptr;
    // The ID of the instance in the task flow that is executed.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The context of the previous execution of the task flow.
    std::shared_ptr<string> lastRunningContext_ = nullptr;
    // The context of the current execution of the task flow.
    std::shared_ptr<string> msg_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **0**: The task is waiting for execution.
    // *   **1**: The task is in progress.
    // *   **2**: The task is suspended.
    // *   **3**: The task failed.
    // *   **4**: The task is successful.
    // *   **5**: The task is complete.
    std::shared_ptr<int64_t> status_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The mode in which the task flow was triggered. Valid values:
    // 
    // *   **0**: The task flow was triggered based on a schedule.
    // *   **1**: The task flow was manually triggered.
    std::shared_ptr<int64_t> triggerType_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
