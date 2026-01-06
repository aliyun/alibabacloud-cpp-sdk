// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBRESPONSEBODY_HPP_
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
  class DescribeDeploymentJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasContacts, casContacts_);
      DARABONBA_PTR_TO_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Del, del_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rollback, rollback_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasContacts, casContacts_);
      DARABONBA_PTR_FROM_JSON(CertDomain, certDomain_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Del, del_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rollback, rollback_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeDeploymentJobResponseBody() = default ;
    DescribeDeploymentJobResponseBody(const DescribeDeploymentJobResponseBody &) = default ;
    DescribeDeploymentJobResponseBody(DescribeDeploymentJobResponseBody &&) = default ;
    DescribeDeploymentJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentJobResponseBody() = default ;
    DescribeDeploymentJobResponseBody& operator=(const DescribeDeploymentJobResponseBody &) = default ;
    DescribeDeploymentJobResponseBody& operator=(DescribeDeploymentJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CasContacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CasContacts& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CasContacts& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      CasContacts() = default ;
      CasContacts(const CasContacts &) = default ;
      CasContacts(CasContacts &&) = default ;
      CasContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CasContacts() = default ;
      CasContacts& operator=(const CasContacts &) = default ;
      CasContacts& operator=(CasContacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->id_ == nullptr && this->mobile_ == nullptr && this->name_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline CasContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline CasContacts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline CasContacts& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CasContacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The email address of the contact.
      shared_ptr<string> email_ {};
      // The ID of the contact.
      shared_ptr<string> id_ {};
      // The phone number of the contact.
      shared_ptr<string> mobile_ {};
      // The name of the contact.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->casContacts_ == nullptr
        && this->certDomain_ == nullptr && this->certType_ == nullptr && this->config_ == nullptr && this->del_ == nullptr && this->endTime_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->jobType_ == nullptr
        && this->name_ == nullptr && this->productName_ == nullptr && this->requestId_ == nullptr && this->rollback_ == nullptr && this->scheduleTime_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
    // casContacts Field Functions 
    bool hasCasContacts() const { return this->casContacts_ != nullptr;};
    void deleteCasContacts() { this->casContacts_ = nullptr;};
    inline const vector<DescribeDeploymentJobResponseBody::CasContacts> & getCasContacts() const { DARABONBA_PTR_GET_CONST(casContacts_, vector<DescribeDeploymentJobResponseBody::CasContacts>) };
    inline vector<DescribeDeploymentJobResponseBody::CasContacts> getCasContacts() { DARABONBA_PTR_GET(casContacts_, vector<DescribeDeploymentJobResponseBody::CasContacts>) };
    inline DescribeDeploymentJobResponseBody& setCasContacts(const vector<DescribeDeploymentJobResponseBody::CasContacts> & casContacts) { DARABONBA_PTR_SET_VALUE(casContacts_, casContacts) };
    inline DescribeDeploymentJobResponseBody& setCasContacts(vector<DescribeDeploymentJobResponseBody::CasContacts> && casContacts) { DARABONBA_PTR_SET_RVALUE(casContacts_, casContacts) };


    // certDomain Field Functions 
    bool hasCertDomain() const { return this->certDomain_ != nullptr;};
    void deleteCertDomain() { this->certDomain_ = nullptr;};
    inline string getCertDomain() const { DARABONBA_PTR_GET_DEFAULT(certDomain_, "") };
    inline DescribeDeploymentJobResponseBody& setCertDomain(string certDomain) { DARABONBA_PTR_SET_VALUE(certDomain_, certDomain) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeDeploymentJobResponseBody& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDeploymentJobResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // del Field Functions 
    bool hasDel() const { return this->del_ != nullptr;};
    void deleteDel() { this->del_ = nullptr;};
    inline int32_t getDel() const { DARABONBA_PTR_GET_DEFAULT(del_, 0) };
    inline DescribeDeploymentJobResponseBody& setDel(int32_t del) { DARABONBA_PTR_SET_VALUE(del_, del) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDeploymentJobResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeDeploymentJobResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDeploymentJobResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDeploymentJobResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDeploymentJobResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline DescribeDeploymentJobResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDeploymentJobResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeDeploymentJobResponseBody& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeploymentJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rollback Field Functions 
    bool hasRollback() const { return this->rollback_ != nullptr;};
    void deleteRollback() { this->rollback_ = nullptr;};
    inline int32_t getRollback() const { DARABONBA_PTR_GET_DEFAULT(rollback_, 0) };
    inline DescribeDeploymentJobResponseBody& setRollback(int32_t rollback) { DARABONBA_PTR_SET_VALUE(rollback_, rollback) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline DescribeDeploymentJobResponseBody& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDeploymentJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDeploymentJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeDeploymentJobResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The information about the contact.
    shared_ptr<vector<DescribeDeploymentJobResponseBody::CasContacts>> casContacts_ {};
    // The domain names bound to the certificate of the deployment task.
    shared_ptr<string> certDomain_ {};
    // The type of the certificate. Valid values:
    // 
    // *   **upload**: uploaded certificate
    // *   **buy**: purchased certificate
    // *   **free**: free certificate available only on the China site (aliyun.com)
    shared_ptr<string> certType_ {};
    // The configurations of the deployment task.
    shared_ptr<string> config_ {};
    // Indicates whether the deployment job was deleted. Valid values:
    // 
    // *   **0**: not deleted
    // *   **1**: deleted
    shared_ptr<int32_t> del_ {};
    // The end time of the deployment job. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> endTime_ {};
    // The time when the deployment job was created. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> gmtCreate_ {};
    // The time when the deployment job was last modified. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> gmtModified_ {};
    // The ID of the deployment job.
    shared_ptr<int64_t> id_ {};
    // The instance ID of the deployment task.
    shared_ptr<string> instanceId_ {};
    // The type of the deployment job. Valid values:
    // 
    // *   **cloud**: multi-cloud deployment job.
    // *   **trustee**: hosted deployment job available only on the China site (aliyun.com).
    // *   **user**: cloud service deployment job. The cloud server is not included.
    shared_ptr<string> jobType_ {};
    // The name of the deployment task.
    shared_ptr<string> name_ {};
    // The cloud services included in the deployment task.
    shared_ptr<string> productName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the deployment job includes the rollback worker. For example, if a cloud service in a deployment job has been rolled back, **1** is returned. Valid values:
    // 
    // *   **0**: The rollback worker is not included.
    // *   **1**: The rollback worker is included.
    shared_ptr<int32_t> rollback_ {};
    // The time when the deployment job was scheduled. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> scheduleTime_ {};
    // The start time of the deployment job. The value is a UNIX timestamp. Unit: seconds.
    shared_ptr<string> startTime_ {};
    // The status of the deployment job. Valid values:
    // 
    // *   **pending**
    // *   **editing**
    // *   **scheduling**
    // *   **processing**
    // *   **error**
    // *   **success**
    shared_ptr<string> status_ {};
    // The ID of the Alibaba Cloud account in which the deployment job is created.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
