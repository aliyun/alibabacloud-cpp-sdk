// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODYDAGINSTANCELISTDAGINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODYDAGINSTANCELISTDAGINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance() = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance(const ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance &) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance(ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance &&) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance() = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& operator=(const ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance &) = default ;
    ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& operator=(ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessTime_ == nullptr
        && return this->dagId_ == nullptr && return this->dagName_ == nullptr && return this->dagVersion_ == nullptr && return this->endTime_ == nullptr && return this->historyDagId_ == nullptr
        && return this->id_ == nullptr && return this->message_ == nullptr && return this->ownerName_ == nullptr && return this->status_ == nullptr && return this->triggerType_ == nullptr
        && return this->startTime_ == nullptr; };
    // businessTime Field Functions 
    bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
    void deleteBusinessTime() { this->businessTime_ = nullptr;};
    inline string businessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline string dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setDagId(string dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string dagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // historyDagId Field Functions 
    bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
    void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
    inline int64_t historyDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline int32_t triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTaskFlowInstanceResponseBodyDAGInstanceListDAGInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The business time of the task flow. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> businessTime_ = nullptr;
    // The ID of the task flow.
    std::shared_ptr<string> dagId_ = nullptr;
    // The name of the task flow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The version of the task flow.
    std::shared_ptr<string> dagVersion_ = nullptr;
    // The time when the execution of the task flow was complete. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the previously published version of the task flow.
    std::shared_ptr<int64_t> historyDagId_ = nullptr;
    // The ID of the execution record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> message_ = nullptr;
    // The name of the task flow owner.
    std::shared_ptr<string> ownerName_ = nullptr;
    // The status of the task flow. Valid values:
    // 
    // *   **0**: The task flow is waiting to be scheduled.
    // *   **1**: The task flow is being executed.
    // *   **2**: The task flow is paused.
    // *   **3**: The task flow failed.
    // *   **4**: The task flow is executed.
    // *   **5**: The task flow is complete.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The mode in which the task flow is triggered. Valid values:
    // 
    // *   **0**: The task flow is automatically triggered based on periodic scheduling.
    // *   **1**: The task flow is manually triggered.
    std::shared_ptr<int32_t> triggerType_ = nullptr;
    // The time when the execution of the task flow was start. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
