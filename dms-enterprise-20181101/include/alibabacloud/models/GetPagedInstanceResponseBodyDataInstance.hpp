// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODYDATAINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEDINSTANCERESPONSEBODYDATAINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPagedInstanceResponseBodyDataInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPagedInstanceResponseBodyDataInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Delete, delete_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastRunningContext, lastRunningContext_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetPagedInstanceResponseBodyDataInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Delete, delete_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastRunningContext, lastRunningContext_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetPagedInstanceResponseBodyDataInstance() = default ;
    GetPagedInstanceResponseBodyDataInstance(const GetPagedInstanceResponseBodyDataInstance &) = default ;
    GetPagedInstanceResponseBodyDataInstance(GetPagedInstanceResponseBodyDataInstance &&) = default ;
    GetPagedInstanceResponseBodyDataInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPagedInstanceResponseBodyDataInstance() = default ;
    GetPagedInstanceResponseBodyDataInstance& operator=(const GetPagedInstanceResponseBodyDataInstance &) = default ;
    GetPagedInstanceResponseBodyDataInstance& operator=(GetPagedInstanceResponseBodyDataInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessTime_ != nullptr
        && this->checkStatus_ != nullptr && this->dagId_ != nullptr && this->delete_ != nullptr && this->endTime_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->historyDagId_ != nullptr && this->id_ != nullptr && this->lastRunningContext_ != nullptr && this->msg_ != nullptr
        && this->status_ != nullptr && this->taskType_ != nullptr && this->tenantId_ != nullptr && this->triggerType_ != nullptr && this->version_ != nullptr; };
    // businessTime Field Functions 
    bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
    void deleteBusinessTime() { this->businessTime_ = nullptr;};
    inline string businessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline int64_t checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setCheckStatus(int64_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline string _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setDelete(string _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // historyDagId Field Functions 
    bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
    void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
    inline int64_t historyDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastRunningContext Field Functions 
    bool hasLastRunningContext() const { return this->lastRunningContext_ != nullptr;};
    void deleteLastRunningContext() { this->lastRunningContext_ = nullptr;};
    inline string lastRunningContext() const { DARABONBA_PTR_GET_DEFAULT(lastRunningContext_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setLastRunningContext(string lastRunningContext) { DARABONBA_PTR_SET_VALUE(lastRunningContext_, lastRunningContext) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int64_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setTaskType(int64_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int64_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0L) };
    inline GetPagedInstanceResponseBodyDataInstance& setTriggerType(int64_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPagedInstanceResponseBodyDataInstance& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> businessTime_ = nullptr;
    std::shared_ptr<int64_t> checkStatus_ = nullptr;
    std::shared_ptr<int64_t> dagId_ = nullptr;
    std::shared_ptr<string> delete_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> historyDagId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastRunningContext_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<int64_t> status_ = nullptr;
    std::shared_ptr<int64_t> taskType_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int64_t> triggerType_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
