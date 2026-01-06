// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HanaBackupPlans, hanaBackupPlans_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HanaBackupPlans, hanaBackupPlans_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHanaBackupPlansResponseBody() = default ;
    DescribeHanaBackupPlansResponseBody(const DescribeHanaBackupPlansResponseBody &) = default ;
    DescribeHanaBackupPlansResponseBody(DescribeHanaBackupPlansResponseBody &&) = default ;
    DescribeHanaBackupPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupPlansResponseBody() = default ;
    DescribeHanaBackupPlansResponseBody& operator=(const DescribeHanaBackupPlansResponseBody &) = default ;
    DescribeHanaBackupPlansResponseBody& operator=(DescribeHanaBackupPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HanaBackupPlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HanaBackupPlans& obj) { 
        DARABONBA_PTR_TO_JSON(HanaBackupPlan, hanaBackupPlan_);
      };
      friend void from_json(const Darabonba::Json& j, HanaBackupPlans& obj) { 
        DARABONBA_PTR_FROM_JSON(HanaBackupPlan, hanaBackupPlan_);
      };
      HanaBackupPlans() = default ;
      HanaBackupPlans(const HanaBackupPlans &) = default ;
      HanaBackupPlans(HanaBackupPlans &&) = default ;
      HanaBackupPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HanaBackupPlans() = default ;
      HanaBackupPlans& operator=(const HanaBackupPlans &) = default ;
      HanaBackupPlans& operator=(HanaBackupPlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HanaBackupPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HanaBackupPlan& obj) { 
          DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(PlanId, planId_);
          DARABONBA_PTR_TO_JSON(PlanName, planName_);
          DARABONBA_PTR_TO_JSON(Schedule, schedule_);
          DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
        };
        friend void from_json(const Darabonba::Json& j, HanaBackupPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(PlanId, planId_);
          DARABONBA_PTR_FROM_JSON(PlanName, planName_);
          DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
          DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
        };
        HanaBackupPlan() = default ;
        HanaBackupPlan(const HanaBackupPlan &) = default ;
        HanaBackupPlan(HanaBackupPlan &&) = default ;
        HanaBackupPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HanaBackupPlan() = default ;
        HanaBackupPlan& operator=(const HanaBackupPlan &) = default ;
        HanaBackupPlan& operator=(HanaBackupPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupPrefix_ == nullptr
        && this->backupType_ == nullptr && this->businessStatus_ == nullptr && this->clusterId_ == nullptr && this->databaseName_ == nullptr && this->disabled_ == nullptr
        && this->planId_ == nullptr && this->planName_ == nullptr && this->schedule_ == nullptr && this->vaultId_ == nullptr; };
        // backupPrefix Field Functions 
        bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
        void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
        inline string getBackupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
        inline HanaBackupPlan& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline HanaBackupPlan& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline HanaBackupPlan& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline HanaBackupPlan& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline HanaBackupPlan& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline HanaBackupPlan& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
        inline HanaBackupPlan& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // planName Field Functions 
        bool hasPlanName() const { return this->planName_ != nullptr;};
        void deletePlanName() { this->planName_ = nullptr;};
        inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
        inline HanaBackupPlan& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


        // schedule Field Functions 
        bool hasSchedule() const { return this->schedule_ != nullptr;};
        void deleteSchedule() { this->schedule_ = nullptr;};
        inline string getSchedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
        inline HanaBackupPlan& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline HanaBackupPlan& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The backup prefix.
        shared_ptr<string> backupPrefix_ {};
        // The backup type. Valid values:
        // 
        // *   COMPLETE: full backup
        // *   INCREMENTAL: incremental backup
        // *   DIFFERENTIAL: differential backup
        shared_ptr<string> backupType_ {};
        shared_ptr<string> businessStatus_ {};
        // The ID of the SAP HANA instance.
        shared_ptr<string> clusterId_ {};
        // The database name.
        shared_ptr<string> databaseName_ {};
        // Indicates whether the backup plan is disabled. Valid values:
        // 
        // *   true: The backup plan is disabled.
        // *   false: The backup plan is enabled.
        shared_ptr<bool> disabled_ {};
        // The ID of the backup plan.
        shared_ptr<string> planId_ {};
        // The name of the backup plan.
        shared_ptr<string> planName_ {};
        // The backup policy. Format: `I|{startTime}|{interval}`. The system runs the first backup job at a point in time that is specified in the {startTime} parameter and the subsequent backup jobs at an interval that is specified in the {interval} parameter. The system does not run a backup job before the specified point in time. Each backup job, except the first one, starts only after the previous backup job is completed. For example, `I|1631685600|P1D` indicates that the system runs the first backup job at 14:00:00 on September 15, 2021 and the subsequent backup jobs once a day.
        // 
        // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
        // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour. P1D indicates an interval of one day.
        shared_ptr<string> schedule_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->hanaBackupPlan_ == nullptr; };
      // hanaBackupPlan Field Functions 
      bool hasHanaBackupPlan() const { return this->hanaBackupPlan_ != nullptr;};
      void deleteHanaBackupPlan() { this->hanaBackupPlan_ = nullptr;};
      inline const vector<HanaBackupPlans::HanaBackupPlan> & getHanaBackupPlan() const { DARABONBA_PTR_GET_CONST(hanaBackupPlan_, vector<HanaBackupPlans::HanaBackupPlan>) };
      inline vector<HanaBackupPlans::HanaBackupPlan> getHanaBackupPlan() { DARABONBA_PTR_GET(hanaBackupPlan_, vector<HanaBackupPlans::HanaBackupPlan>) };
      inline HanaBackupPlans& setHanaBackupPlan(const vector<HanaBackupPlans::HanaBackupPlan> & hanaBackupPlan) { DARABONBA_PTR_SET_VALUE(hanaBackupPlan_, hanaBackupPlan) };
      inline HanaBackupPlans& setHanaBackupPlan(vector<HanaBackupPlans::HanaBackupPlan> && hanaBackupPlan) { DARABONBA_PTR_SET_RVALUE(hanaBackupPlan_, hanaBackupPlan) };


    protected:
      shared_ptr<vector<HanaBackupPlans::HanaBackupPlan>> hanaBackupPlan_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hanaBackupPlans_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHanaBackupPlansResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hanaBackupPlans Field Functions 
    bool hasHanaBackupPlans() const { return this->hanaBackupPlans_ != nullptr;};
    void deleteHanaBackupPlans() { this->hanaBackupPlans_ = nullptr;};
    inline const DescribeHanaBackupPlansResponseBody::HanaBackupPlans & getHanaBackupPlans() const { DARABONBA_PTR_GET_CONST(hanaBackupPlans_, DescribeHanaBackupPlansResponseBody::HanaBackupPlans) };
    inline DescribeHanaBackupPlansResponseBody::HanaBackupPlans getHanaBackupPlans() { DARABONBA_PTR_GET(hanaBackupPlans_, DescribeHanaBackupPlansResponseBody::HanaBackupPlans) };
    inline DescribeHanaBackupPlansResponseBody& setHanaBackupPlans(const DescribeHanaBackupPlansResponseBody::HanaBackupPlans & hanaBackupPlans) { DARABONBA_PTR_SET_VALUE(hanaBackupPlans_, hanaBackupPlans) };
    inline DescribeHanaBackupPlansResponseBody& setHanaBackupPlans(DescribeHanaBackupPlansResponseBody::HanaBackupPlans && hanaBackupPlans) { DARABONBA_PTR_SET_RVALUE(hanaBackupPlans_, hanaBackupPlans) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaBackupPlansResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaBackupPlansResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaBackupPlansResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHanaBackupPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHanaBackupPlansResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHanaBackupPlansResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of the backup plan.
    shared_ptr<DescribeHanaBackupPlansResponseBody::HanaBackupPlans> hanaBackupPlans_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
