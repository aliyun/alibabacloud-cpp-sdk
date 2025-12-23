// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(Del, del_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Rollback, rollback_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(Del, del_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Rollback, rollback_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListDeploymentJobResponseBodyData() = default ;
    ListDeploymentJobResponseBodyData(const ListDeploymentJobResponseBodyData &) = default ;
    ListDeploymentJobResponseBodyData(ListDeploymentJobResponseBodyData &&) = default ;
    ListDeploymentJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobResponseBodyData() = default ;
    ListDeploymentJobResponseBodyData& operator=(const ListDeploymentJobResponseBodyData &) = default ;
    ListDeploymentJobResponseBodyData& operator=(ListDeploymentJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certDomain_ == nullptr
        && return this->certType_ == nullptr && return this->del_ == nullptr && return this->endTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->jobType_ == nullptr && return this->name_ == nullptr && return this->productName_ == nullptr
        && return this->rollback_ == nullptr && return this->scheduleTime_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr; };
    // certDomain Field Functions 
    bool hasCertDomain() const { return this->certDomain_ != nullptr;};
    void deleteCertDomain() { this->certDomain_ = nullptr;};
    inline string certDomain() const { DARABONBA_PTR_GET_DEFAULT(certDomain_, "") };
    inline ListDeploymentJobResponseBodyData& setCertDomain(string certDomain) { DARABONBA_PTR_SET_VALUE(certDomain_, certDomain) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ListDeploymentJobResponseBodyData& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // del Field Functions 
    bool hasDel() const { return this->del_ != nullptr;};
    void deleteDel() { this->del_ = nullptr;};
    inline int32_t del() const { DARABONBA_PTR_GET_DEFAULT(del_, 0) };
    inline ListDeploymentJobResponseBodyData& setDel(int32_t del) { DARABONBA_PTR_SET_VALUE(del_, del) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDeploymentJobResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListDeploymentJobResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListDeploymentJobResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDeploymentJobResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDeploymentJobResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListDeploymentJobResponseBodyData& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeploymentJobResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListDeploymentJobResponseBodyData& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // rollback Field Functions 
    bool hasRollback() const { return this->rollback_ != nullptr;};
    void deleteRollback() { this->rollback_ = nullptr;};
    inline int32_t rollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, 0) };
    inline ListDeploymentJobResponseBodyData& setRollback(int32_t rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline ListDeploymentJobResponseBodyData& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDeploymentJobResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeploymentJobResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListDeploymentJobResponseBodyData& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The domain names bound to the certificate of the deployment task.
    std::shared_ptr<string> certDomain_ = nullptr;
    // The type of the certificate. Valid values:
    // 
    // *   **upload**: uploaded certificate
    // *   **buy**: purchased certificate
    // *   **free**: free certificate, available only on the China site (aliyun.com)
    std::shared_ptr<string> certType_ = nullptr;
    // Indicates whether the deployment task is deleted. Valid values:
    // 
    // *   **0**: not deleted
    // *   **1**: deleted
    std::shared_ptr<int32_t> del_ = nullptr;
    // The end time of the deployment task.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time when the deployment task was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the deployment task was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the deployment task. You can use the ID to query the details and status of the deployment task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID of the deployment task.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the deployment task.
    // 
    // *   **cloud**: multi-cloud deployment task.
    // *   **user**: cloud service deployment task. This type of task does not support ECS instances.
    std::shared_ptr<string> jobType_ = nullptr;
    // The name of the deployment task.
    std::shared_ptr<string> name_ = nullptr;
    // The cloud service included in the resources of the deployment task.
    std::shared_ptr<string> productName_ = nullptr;
    // Indicates whether the rollback worker is included. For example, if a cloud service involved in a deployment task has been rolled back, **1** is returned. Valid values:
    // 
    // *   **0**: The rollback worker is not included.
    // *   **1**: The rollback worker is included.
    std::shared_ptr<int32_t> rollback_ = nullptr;
    // The time when the deployment task was scheduled.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The start time of the deployment task.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the deployment task. Valid values:
    // 
    // *   **pending**
    // *   **editing**
    // *   **scheduling**
    // *   **processing**
    // *   **error**
    // *   **success**
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
