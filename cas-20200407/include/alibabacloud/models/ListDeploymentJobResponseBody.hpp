// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListDeploymentJobResponseBody() = default ;
    ListDeploymentJobResponseBody(const ListDeploymentJobResponseBody &) = default ;
    ListDeploymentJobResponseBody(ListDeploymentJobResponseBody &&) = default ;
    ListDeploymentJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobResponseBody() = default ;
    ListDeploymentJobResponseBody& operator=(const ListDeploymentJobResponseBody &) = default ;
    ListDeploymentJobResponseBody& operator=(ListDeploymentJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certDomain_ == nullptr
        && this->certType_ == nullptr && this->del_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->instanceId_ == nullptr && this->jobType_ == nullptr && this->name_ == nullptr && this->productName_ == nullptr
        && this->rollback_ == nullptr && this->scheduleTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
      // certDomain Field Functions 
      bool hasCertDomain() const { return this->certDomain_ != nullptr;};
      void deleteCertDomain() { this->certDomain_ = nullptr;};
      inline string getCertDomain() const { DARABONBA_PTR_GET_DEFAULT(certDomain_, "") };
      inline Data& setCertDomain(string certDomain) { DARABONBA_PTR_SET_VALUE(certDomain_, certDomain) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline Data& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // del Field Functions 
      bool hasDel() const { return this->del_ != nullptr;};
      void deleteDel() { this->del_ = nullptr;};
      inline int32_t getDel() const { DARABONBA_PTR_GET_DEFAULT(del_, 0) };
      inline Data& setDel(int32_t del) { DARABONBA_PTR_SET_VALUE(del_, del) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline Data& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // rollback Field Functions 
      bool hasRollback() const { return this->rollback_ != nullptr;};
      void deleteRollback() { this->rollback_ = nullptr;};
      inline int32_t getRollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, 0) };
      inline Data& setRollback(int32_t rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


      // scheduleTime Field Functions 
      bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
      void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
      inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
      inline Data& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Data& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The domain names bound to the certificate of the deployment task.
      shared_ptr<string> certDomain_ {};
      // The type of the certificate. Valid values:
      // 
      // *   **upload**: uploaded certificate
      // *   **buy**: purchased certificate
      // *   **free**: free certificate, available only on the China site (aliyun.com)
      shared_ptr<string> certType_ {};
      // Indicates whether the deployment task is deleted. Valid values:
      // 
      // *   **0**: not deleted
      // *   **1**: deleted
      shared_ptr<int32_t> del_ {};
      // The end time of the deployment task.
      shared_ptr<string> endTime_ {};
      // The time when the deployment task was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the deployment task was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the deployment task. You can use the ID to query the details and status of the deployment task.
      shared_ptr<int64_t> id_ {};
      // The instance ID of the deployment task.
      shared_ptr<string> instanceId_ {};
      // The type of the deployment task.
      // 
      // *   **cloud**: multi-cloud deployment task.
      // *   **user**: cloud service deployment task. This type of task does not support ECS instances.
      shared_ptr<string> jobType_ {};
      // The name of the deployment task.
      shared_ptr<string> name_ {};
      // The cloud service included in the resources of the deployment task.
      shared_ptr<string> productName_ {};
      // Indicates whether the rollback worker is included. For example, if a cloud service involved in a deployment task has been rolled back, **1** is returned. Valid values:
      // 
      // *   **0**: The rollback worker is not included.
      // *   **1**: The rollback worker is included.
      shared_ptr<int32_t> rollback_ {};
      // The time when the deployment task was scheduled.
      shared_ptr<string> scheduleTime_ {};
      // The start time of the deployment task.
      shared_ptr<string> startTime_ {};
      // The status of the deployment task. Valid values:
      // 
      // *   **pending**
      // *   **editing**
      // *   **scheduling**
      // *   **processing**
      // *   **error**
      // *   **success**
      shared_ptr<string> status_ {};
      // The ID of the user.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->total_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDeploymentJobResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDeploymentJobResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDeploymentJobResponseBody::Data>) };
    inline vector<ListDeploymentJobResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDeploymentJobResponseBody::Data>) };
    inline ListDeploymentJobResponseBody& setData(const vector<ListDeploymentJobResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentJobResponseBody& setData(vector<ListDeploymentJobResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListDeploymentJobResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListDeploymentJobResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The data returned for the request.
    shared_ptr<vector<ListDeploymentJobResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of deployment tasks per page. Default value: **50**.
    shared_ptr<int32_t> showSize_ {};
    // The total number of deployment tasks returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
