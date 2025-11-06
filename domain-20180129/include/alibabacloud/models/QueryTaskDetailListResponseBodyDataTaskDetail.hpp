// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILLISTRESPONSEBODYDATATASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILLISTRESPONSEBODYDATATASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailListResponseBodyDataTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailListResponseBodyDataTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatusCode, taskStatusCode_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TaskTypeDescription, taskTypeDescription_);
      DARABONBA_PTR_TO_JSON(TryCount, tryCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailListResponseBodyDataTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatusCode, taskStatusCode_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TaskTypeDescription, taskTypeDescription_);
      DARABONBA_PTR_FROM_JSON(TryCount, tryCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    QueryTaskDetailListResponseBodyDataTaskDetail() = default ;
    QueryTaskDetailListResponseBodyDataTaskDetail(const QueryTaskDetailListResponseBodyDataTaskDetail &) = default ;
    QueryTaskDetailListResponseBodyDataTaskDetail(QueryTaskDetailListResponseBodyDataTaskDetail &&) = default ;
    QueryTaskDetailListResponseBodyDataTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailListResponseBodyDataTaskDetail() = default ;
    QueryTaskDetailListResponseBodyDataTaskDetail& operator=(const QueryTaskDetailListResponseBodyDataTaskDetail &) = default ;
    QueryTaskDetailListResponseBodyDataTaskDetail& operator=(QueryTaskDetailListResponseBodyDataTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->domainName_ == nullptr && return this->errorMsg_ == nullptr && return this->failReason_ == nullptr && return this->instanceId_ == nullptr && return this->taskDetailNo_ == nullptr
        && return this->taskNo_ == nullptr && return this->taskResult_ == nullptr && return this->taskStatus_ == nullptr && return this->taskStatusCode_ == nullptr && return this->taskType_ == nullptr
        && return this->taskTypeDescription_ == nullptr && return this->tryCount_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string failReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskDetailNo Field Functions 
    bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
    void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
    inline string taskDetailNo() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNo_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskDetailNo(string taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusCode Field Functions 
    bool hasTaskStatusCode() const { return this->taskStatusCode_ != nullptr;};
    void deleteTaskStatusCode() { this->taskStatusCode_ = nullptr;};
    inline int32_t taskStatusCode() const { DARABONBA_PTR_GET_DEFAULT(taskStatusCode_, 0) };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskStatusCode(int32_t taskStatusCode) { DARABONBA_PTR_SET_VALUE(taskStatusCode_, taskStatusCode) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // taskTypeDescription Field Functions 
    bool hasTaskTypeDescription() const { return this->taskTypeDescription_ != nullptr;};
    void deleteTaskTypeDescription() { this->taskTypeDescription_ = nullptr;};
    inline string taskTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(taskTypeDescription_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTaskTypeDescription(string taskTypeDescription) { DARABONBA_PTR_SET_VALUE(taskTypeDescription_, taskTypeDescription) };


    // tryCount Field Functions 
    bool hasTryCount() const { return this->tryCount_ != nullptr;};
    void deleteTryCount() { this->tryCount_ = nullptr;};
    inline int32_t tryCount() const { DARABONBA_PTR_GET_DEFAULT(tryCount_, 0) };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setTryCount(int32_t tryCount) { DARABONBA_PTR_SET_VALUE(tryCount_, tryCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryTaskDetailListResponseBodyDataTaskDetail& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The error message returned when the task failed.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The cause of a domain name task failure.
    std::shared_ptr<string> failReason_ = nullptr;
    // The instance ID of the domain name.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the task details.
    std::shared_ptr<string> taskDetailNo_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskNo_ = nullptr;
    // The result of the task.
    std::shared_ptr<string> taskResult_ = nullptr;
    // The task status. Valid values:
    // 
    // *   **WAITING_EXECUTE**: To be executed
    // *   **EXECUTING**: being executed
    // *   **EXECUTE_SUCCESS**: successful
    // *   **EXECUTE_FAILURE**: failed
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The status code of the task. Valid values:
    // 
    // *   **0**: waiting for execution
    // *   **1**: being executed
    // *   **2**: successful
    // *   **3**: failed
    std::shared_ptr<int32_t> taskStatusCode_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **CHG_HOLDER**: The task is run to modify the domain name registrant.
    // *   **CHG_DNS**: The task is run to change the Domain Name System (DNS) servers.
    // *   **SET_WHOIS_PROTECT**: The task is run to configure privacy protection for the domain name.
    // *   **UPDATE_ADMIN_CONTACT**: The task is run to modify the information about the administrator of the domain name.
    // *   **UPDATE_BILLING_CONTACT**: The task is run to modify the information about the payer for the domain name.
    // *   **UPDATE_TECH_CONTACT**: The task is run to modify the information about the technical support for the domain name.
    // *   **SET_UPDATE_PROHIBITED**: The task is run to configure the security lock for the domain name.
    // *   **SET_TRANSFER_PROHIBITED**: The task is run to configure the transfer lock for the domain name.
    // *   **ORDER_ACTIVATE**: The task is run to create a registration order for the domain name.
    // *   **ORDER_RENEW**: The task is run to create a renewal order for the domain name.
    // *   **ORDER_REDEEM**: The task is run to create a redemption order for the domain name.
    // *   **CREATE_DNSHOST**: The task is run to create a DNS server for the domain name.
    // *   **UPDATE_DNSHOST**: The task is run to update the information about a DNS server for the domain name.
    // *   **SYNC_DNSHOST**: The task is run to synchronize a DNS server for the domain name.
    std::shared_ptr<string> taskType_ = nullptr;
    // The description of the task type.
    std::shared_ptr<string> taskTypeDescription_ = nullptr;
    // The number of times the task was retried.
    std::shared_ptr<int32_t> tryCount_ = nullptr;
    // The last time when the task was run.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
