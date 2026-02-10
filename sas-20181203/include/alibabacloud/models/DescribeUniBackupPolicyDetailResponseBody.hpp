// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIBACKUPPOLICYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniBackupPolicyDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniBackupPolicyDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UniBackupPolicyDTO, uniBackupPolicyDTO_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniBackupPolicyDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UniBackupPolicyDTO, uniBackupPolicyDTO_);
    };
    DescribeUniBackupPolicyDetailResponseBody() = default ;
    DescribeUniBackupPolicyDetailResponseBody(const DescribeUniBackupPolicyDetailResponseBody &) = default ;
    DescribeUniBackupPolicyDetailResponseBody(DescribeUniBackupPolicyDetailResponseBody &&) = default ;
    DescribeUniBackupPolicyDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniBackupPolicyDetailResponseBody() = default ;
    DescribeUniBackupPolicyDetailResponseBody& operator=(const DescribeUniBackupPolicyDetailResponseBody &) = default ;
    DescribeUniBackupPolicyDetailResponseBody& operator=(DescribeUniBackupPolicyDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UniBackupPolicyDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UniBackupPolicyDTO& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(FullPlan, fullPlan_);
        DARABONBA_PTR_TO_JSON(IncPlan, incPlan_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(SpeedLimiter, speedLimiter_);
      };
      friend void from_json(const Darabonba::Json& j, UniBackupPolicyDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(FullPlan, fullPlan_);
        DARABONBA_PTR_FROM_JSON(IncPlan, incPlan_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(SpeedLimiter, speedLimiter_);
      };
      UniBackupPolicyDTO() = default ;
      UniBackupPolicyDTO(const UniBackupPolicyDTO &) = default ;
      UniBackupPolicyDTO(UniBackupPolicyDTO &&) = default ;
      UniBackupPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UniBackupPolicyDTO() = default ;
      UniBackupPolicyDTO& operator=(const UniBackupPolicyDTO &) = default ;
      UniBackupPolicyDTO& operator=(UniBackupPolicyDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IncPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IncPlan& obj) { 
          DARABONBA_PTR_TO_JSON(Days, days_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(PlanType, planType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, IncPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(Days, days_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(PlanType, planType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        IncPlan() = default ;
        IncPlan(const IncPlan &) = default ;
        IncPlan(IncPlan &&) = default ;
        IncPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IncPlan() = default ;
        IncPlan& operator=(const IncPlan &) = default ;
        IncPlan& operator=(IncPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->days_ == nullptr
        && this->interval_ == nullptr && this->planType_ == nullptr && this->startTime_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline const vector<string> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<string>) };
        inline vector<string> getDays() { DARABONBA_PTR_GET(days_, vector<string>) };
        inline IncPlan& setDays(const vector<string> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
        inline IncPlan& setDays(vector<string> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline IncPlan& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // planType Field Functions 
        bool hasPlanType() const { return this->planType_ != nullptr;};
        void deletePlanType() { this->planType_ = nullptr;};
        inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
        inline IncPlan& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline IncPlan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // An array that consists of the days of a week on which the backup is performed.
        shared_ptr<vector<string>> days_ {};
        // The interval of backup tasks.
        shared_ptr<int32_t> interval_ {};
        // The unit of the interval. Valid values:
        // 
        // *   **hourly**: hour
        // *   **daily**: day
        // *   **weekly**: week
        shared_ptr<string> planType_ {};
        // The time when the incremental data backup starts. The time is in the hh:mm:ss format.
        shared_ptr<string> startTime_ {};
      };

      class FullPlan : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FullPlan& obj) { 
          DARABONBA_PTR_TO_JSON(Days, days_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(PlanType, planType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, FullPlan& obj) { 
          DARABONBA_PTR_FROM_JSON(Days, days_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(PlanType, planType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        FullPlan() = default ;
        FullPlan(const FullPlan &) = default ;
        FullPlan(FullPlan &&) = default ;
        FullPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FullPlan() = default ;
        FullPlan& operator=(const FullPlan &) = default ;
        FullPlan& operator=(FullPlan &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->days_ == nullptr
        && this->interval_ == nullptr && this->planType_ == nullptr && this->startTime_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline const vector<string> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<string>) };
        inline vector<string> getDays() { DARABONBA_PTR_GET(days_, vector<string>) };
        inline FullPlan& setDays(const vector<string> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
        inline FullPlan& setDays(vector<string> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline FullPlan& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // planType Field Functions 
        bool hasPlanType() const { return this->planType_ != nullptr;};
        void deletePlanType() { this->planType_ = nullptr;};
        inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
        inline FullPlan& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline FullPlan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // An array that consists of the days of a week on which the backup is performed.
        shared_ptr<vector<string>> days_ {};
        // The interval of backup tasks.
        shared_ptr<int32_t> interval_ {};
        // The unit of the interval. Valid values:
        // 
        // *   **hourly**: hour
        // *   **daily**: day
        // *   **weekly**: week
        shared_ptr<string> planType_ {};
        // The time when the full backup started. The time is in the HH:mm:ss format.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->agentStatus_ == nullptr && this->databaseType_ == nullptr && this->fullPlan_ == nullptr && this->incPlan_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyStatus_ == nullptr && this->retention_ == nullptr
        && this->speedLimiter_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline UniBackupPolicyDTO& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline UniBackupPolicyDTO& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline UniBackupPolicyDTO& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // fullPlan Field Functions 
      bool hasFullPlan() const { return this->fullPlan_ != nullptr;};
      void deleteFullPlan() { this->fullPlan_ = nullptr;};
      inline const UniBackupPolicyDTO::FullPlan & getFullPlan() const { DARABONBA_PTR_GET_CONST(fullPlan_, UniBackupPolicyDTO::FullPlan) };
      inline UniBackupPolicyDTO::FullPlan getFullPlan() { DARABONBA_PTR_GET(fullPlan_, UniBackupPolicyDTO::FullPlan) };
      inline UniBackupPolicyDTO& setFullPlan(const UniBackupPolicyDTO::FullPlan & fullPlan) { DARABONBA_PTR_SET_VALUE(fullPlan_, fullPlan) };
      inline UniBackupPolicyDTO& setFullPlan(UniBackupPolicyDTO::FullPlan && fullPlan) { DARABONBA_PTR_SET_RVALUE(fullPlan_, fullPlan) };


      // incPlan Field Functions 
      bool hasIncPlan() const { return this->incPlan_ != nullptr;};
      void deleteIncPlan() { this->incPlan_ = nullptr;};
      inline const UniBackupPolicyDTO::IncPlan & getIncPlan() const { DARABONBA_PTR_GET_CONST(incPlan_, UniBackupPolicyDTO::IncPlan) };
      inline UniBackupPolicyDTO::IncPlan getIncPlan() { DARABONBA_PTR_GET(incPlan_, UniBackupPolicyDTO::IncPlan) };
      inline UniBackupPolicyDTO& setIncPlan(const UniBackupPolicyDTO::IncPlan & incPlan) { DARABONBA_PTR_SET_VALUE(incPlan_, incPlan) };
      inline UniBackupPolicyDTO& setIncPlan(UniBackupPolicyDTO::IncPlan && incPlan) { DARABONBA_PTR_SET_RVALUE(incPlan_, incPlan) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UniBackupPolicyDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline UniBackupPolicyDTO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline UniBackupPolicyDTO& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline UniBackupPolicyDTO& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyStatus Field Functions 
      bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
      void deletePolicyStatus() { this->policyStatus_ = nullptr;};
      inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
      inline UniBackupPolicyDTO& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
      inline UniBackupPolicyDTO& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // speedLimiter Field Functions 
      bool hasSpeedLimiter() const { return this->speedLimiter_ != nullptr;};
      void deleteSpeedLimiter() { this->speedLimiter_ = nullptr;};
      inline int64_t getSpeedLimiter() const { DARABONBA_PTR_GET_DEFAULT(speedLimiter_, 0L) };
      inline UniBackupPolicyDTO& setSpeedLimiter(int64_t speedLimiter) { DARABONBA_PTR_SET_VALUE(speedLimiter_, speedLimiter) };


    protected:
      // The name of the database account.
      shared_ptr<string> accountName_ {};
      // The status of the database client. Valid values:
      // 
      // *   **UNKNOWN**: unknown
      // *   **INSTALLED**: installed
      // *   **INSTALL_FAILED**: installation failed
      // *   **UNINSTALL_FAILED**: uninstallation failed
      shared_ptr<string> agentStatus_ {};
      // The type of the database. Valid values:
      // 
      // *   **MYSQL**
      // *   **MSSQL**
      // *   **Oracle**
      shared_ptr<string> databaseType_ {};
      // The details of the policy for full backup.
      shared_ptr<UniBackupPolicyDTO::FullPlan> fullPlan_ {};
      // The policy for incremental data backup.
      shared_ptr<UniBackupPolicyDTO::IncPlan> incPlan_ {};
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The ID of the anti-ransomware policy.
      shared_ptr<int64_t> policyId_ {};
      // The name of the anti-ransomware policy.
      shared_ptr<string> policyName_ {};
      // The status of the anti-ransomware policy. Valid values:
      // 
      // *   **initiating**: initializing
      // *   **opening**: enabled
      // *   **closing**: disabled
      // *   **deleting**: deleting
      shared_ptr<string> policyStatus_ {};
      // The retention period of the backup snapshot.
      shared_ptr<int32_t> retention_ {};
      // The maximum network bandwidth that is allowed during data backup. Unit: bytes.
      shared_ptr<int64_t> speedLimiter_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uniBackupPolicyDTO_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniBackupPolicyDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uniBackupPolicyDTO Field Functions 
    bool hasUniBackupPolicyDTO() const { return this->uniBackupPolicyDTO_ != nullptr;};
    void deleteUniBackupPolicyDTO() { this->uniBackupPolicyDTO_ = nullptr;};
    inline const DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO & getUniBackupPolicyDTO() const { DARABONBA_PTR_GET_CONST(uniBackupPolicyDTO_, DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO getUniBackupPolicyDTO() { DARABONBA_PTR_GET(uniBackupPolicyDTO_, DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBody& setUniBackupPolicyDTO(const DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO & uniBackupPolicyDTO) { DARABONBA_PTR_SET_VALUE(uniBackupPolicyDTO_, uniBackupPolicyDTO) };
    inline DescribeUniBackupPolicyDetailResponseBody& setUniBackupPolicyDTO(DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO && uniBackupPolicyDTO) { DARABONBA_PTR_SET_RVALUE(uniBackupPolicyDTO_, uniBackupPolicyDTO) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The details of the anti-ransomware policy.
    shared_ptr<DescribeUniBackupPolicyDetailResponseBody::UniBackupPolicyDTO> uniBackupPolicyDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
