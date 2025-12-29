// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Violation, violation_);
      DARABONBA_PTR_TO_JSON(admit_log, admitLog_);
      DARABONBA_PTR_TO_JSON(on_state, onState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Violation, violation_);
      DARABONBA_PTR_FROM_JSON(admit_log, admitLog_);
      DARABONBA_PTR_FROM_JSON(on_state, onState_);
    };
    DescribePolicyGovernanceInClusterResponseBody() = default ;
    DescribePolicyGovernanceInClusterResponseBody(const DescribePolicyGovernanceInClusterResponseBody &) = default ;
    DescribePolicyGovernanceInClusterResponseBody(DescribePolicyGovernanceInClusterResponseBody &&) = default ;
    DescribePolicyGovernanceInClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBody() = default ;
    DescribePolicyGovernanceInClusterResponseBody& operator=(const DescribePolicyGovernanceInClusterResponseBody &) = default ;
    DescribePolicyGovernanceInClusterResponseBody& operator=(DescribePolicyGovernanceInClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnState : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnState& obj) { 
        DARABONBA_PTR_TO_JSON(enabled_count, enabledCount_);
        DARABONBA_PTR_TO_JSON(severity, severity_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, OnState& obj) { 
        DARABONBA_PTR_FROM_JSON(enabled_count, enabledCount_);
        DARABONBA_PTR_FROM_JSON(severity, severity_);
        DARABONBA_PTR_FROM_JSON(total, total_);
      };
      OnState() = default ;
      OnState(const OnState &) = default ;
      OnState(OnState &&) = default ;
      OnState(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnState() = default ;
      OnState& operator=(const OnState &) = default ;
      OnState& operator=(OnState &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabledCount_ == nullptr
        && this->severity_ == nullptr && this->total_ == nullptr; };
      // enabledCount Field Functions 
      bool hasEnabledCount() const { return this->enabledCount_ != nullptr;};
      void deleteEnabledCount() { this->enabledCount_ = nullptr;};
      inline int32_t getEnabledCount() const { DARABONBA_PTR_GET_DEFAULT(enabledCount_, 0) };
      inline OnState& setEnabledCount(int32_t enabledCount) { DARABONBA_PTR_SET_VALUE(enabledCount_, enabledCount) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline OnState& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline OnState& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The number of policies that are enabled.
      shared_ptr<int32_t> enabledCount_ {};
      // The severity level of the policy.
      shared_ptr<string> severity_ {};
      // The total number of policies of the severity level.
      shared_ptr<int32_t> total_ {};
    };

    class AdmitLog : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdmitLog& obj) { 
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(log_project, logProject_);
        DARABONBA_PTR_TO_JSON(log_store, logStore_);
        DARABONBA_PTR_TO_JSON(logs, logs_);
        DARABONBA_PTR_TO_JSON(progress, progress_);
      };
      friend void from_json(const Darabonba::Json& j, AdmitLog& obj) { 
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(log_project, logProject_);
        DARABONBA_PTR_FROM_JSON(log_store, logStore_);
        DARABONBA_PTR_FROM_JSON(logs, logs_);
        DARABONBA_PTR_FROM_JSON(progress, progress_);
      };
      AdmitLog() = default ;
      AdmitLog(const AdmitLog &) = default ;
      AdmitLog(AdmitLog &&) = default ;
      AdmitLog(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdmitLog() = default ;
      AdmitLog& operator=(const AdmitLog &) = default ;
      AdmitLog& operator=(AdmitLog &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
          DARABONBA_PTR_TO_JSON(constraint_action, constraintAction_);
          DARABONBA_PTR_TO_JSON(constraint_api_version, constraintApiVersion_);
          DARABONBA_PTR_TO_JSON(constraint_category, constraintCategory_);
          DARABONBA_PTR_TO_JSON(constraint_group, constraintGroup_);
          DARABONBA_PTR_TO_JSON(constraint_kind, constraintKind_);
          DARABONBA_PTR_TO_JSON(constraint_name, constraintName_);
          DARABONBA_PTR_TO_JSON(event_msg, eventMsg_);
          DARABONBA_PTR_TO_JSON(event_type, eventType_);
          DARABONBA_PTR_TO_JSON(request_uid, requestUid_);
          DARABONBA_PTR_TO_JSON(request_userinfo, requestUserinfo_);
          DARABONBA_PTR_TO_JSON(request_username, requestUsername_);
          DARABONBA_PTR_TO_JSON(resource_kind, resourceKind_);
          DARABONBA_PTR_TO_JSON(resource_name, resourceName_);
          DARABONBA_PTR_TO_JSON(time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
          DARABONBA_PTR_FROM_JSON(constraint_action, constraintAction_);
          DARABONBA_PTR_FROM_JSON(constraint_api_version, constraintApiVersion_);
          DARABONBA_PTR_FROM_JSON(constraint_category, constraintCategory_);
          DARABONBA_PTR_FROM_JSON(constraint_group, constraintGroup_);
          DARABONBA_PTR_FROM_JSON(constraint_kind, constraintKind_);
          DARABONBA_PTR_FROM_JSON(constraint_name, constraintName_);
          DARABONBA_PTR_FROM_JSON(event_msg, eventMsg_);
          DARABONBA_PTR_FROM_JSON(event_type, eventType_);
          DARABONBA_PTR_FROM_JSON(request_uid, requestUid_);
          DARABONBA_PTR_FROM_JSON(request_userinfo, requestUserinfo_);
          DARABONBA_PTR_FROM_JSON(request_username, requestUsername_);
          DARABONBA_PTR_FROM_JSON(resource_kind, resourceKind_);
          DARABONBA_PTR_FROM_JSON(resource_name, resourceName_);
          DARABONBA_PTR_FROM_JSON(time, time_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->constraintAction_ == nullptr && this->constraintApiVersion_ == nullptr && this->constraintCategory_ == nullptr && this->constraintGroup_ == nullptr && this->constraintKind_ == nullptr
        && this->constraintName_ == nullptr && this->eventMsg_ == nullptr && this->eventType_ == nullptr && this->requestUid_ == nullptr && this->requestUserinfo_ == nullptr
        && this->requestUsername_ == nullptr && this->resourceKind_ == nullptr && this->resourceName_ == nullptr && this->time_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Logs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // constraintAction Field Functions 
        bool hasConstraintAction() const { return this->constraintAction_ != nullptr;};
        void deleteConstraintAction() { this->constraintAction_ = nullptr;};
        inline string getConstraintAction() const { DARABONBA_PTR_GET_DEFAULT(constraintAction_, "") };
        inline Logs& setConstraintAction(string constraintAction) { DARABONBA_PTR_SET_VALUE(constraintAction_, constraintAction) };


        // constraintApiVersion Field Functions 
        bool hasConstraintApiVersion() const { return this->constraintApiVersion_ != nullptr;};
        void deleteConstraintApiVersion() { this->constraintApiVersion_ = nullptr;};
        inline string getConstraintApiVersion() const { DARABONBA_PTR_GET_DEFAULT(constraintApiVersion_, "") };
        inline Logs& setConstraintApiVersion(string constraintApiVersion) { DARABONBA_PTR_SET_VALUE(constraintApiVersion_, constraintApiVersion) };


        // constraintCategory Field Functions 
        bool hasConstraintCategory() const { return this->constraintCategory_ != nullptr;};
        void deleteConstraintCategory() { this->constraintCategory_ = nullptr;};
        inline string getConstraintCategory() const { DARABONBA_PTR_GET_DEFAULT(constraintCategory_, "") };
        inline Logs& setConstraintCategory(string constraintCategory) { DARABONBA_PTR_SET_VALUE(constraintCategory_, constraintCategory) };


        // constraintGroup Field Functions 
        bool hasConstraintGroup() const { return this->constraintGroup_ != nullptr;};
        void deleteConstraintGroup() { this->constraintGroup_ = nullptr;};
        inline string getConstraintGroup() const { DARABONBA_PTR_GET_DEFAULT(constraintGroup_, "") };
        inline Logs& setConstraintGroup(string constraintGroup) { DARABONBA_PTR_SET_VALUE(constraintGroup_, constraintGroup) };


        // constraintKind Field Functions 
        bool hasConstraintKind() const { return this->constraintKind_ != nullptr;};
        void deleteConstraintKind() { this->constraintKind_ = nullptr;};
        inline string getConstraintKind() const { DARABONBA_PTR_GET_DEFAULT(constraintKind_, "") };
        inline Logs& setConstraintKind(string constraintKind) { DARABONBA_PTR_SET_VALUE(constraintKind_, constraintKind) };


        // constraintName Field Functions 
        bool hasConstraintName() const { return this->constraintName_ != nullptr;};
        void deleteConstraintName() { this->constraintName_ = nullptr;};
        inline string getConstraintName() const { DARABONBA_PTR_GET_DEFAULT(constraintName_, "") };
        inline Logs& setConstraintName(string constraintName) { DARABONBA_PTR_SET_VALUE(constraintName_, constraintName) };


        // eventMsg Field Functions 
        bool hasEventMsg() const { return this->eventMsg_ != nullptr;};
        void deleteEventMsg() { this->eventMsg_ = nullptr;};
        inline string getEventMsg() const { DARABONBA_PTR_GET_DEFAULT(eventMsg_, "") };
        inline Logs& setEventMsg(string eventMsg) { DARABONBA_PTR_SET_VALUE(eventMsg_, eventMsg) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline Logs& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // requestUid Field Functions 
        bool hasRequestUid() const { return this->requestUid_ != nullptr;};
        void deleteRequestUid() { this->requestUid_ = nullptr;};
        inline string getRequestUid() const { DARABONBA_PTR_GET_DEFAULT(requestUid_, "") };
        inline Logs& setRequestUid(string requestUid) { DARABONBA_PTR_SET_VALUE(requestUid_, requestUid) };


        // requestUserinfo Field Functions 
        bool hasRequestUserinfo() const { return this->requestUserinfo_ != nullptr;};
        void deleteRequestUserinfo() { this->requestUserinfo_ = nullptr;};
        inline string getRequestUserinfo() const { DARABONBA_PTR_GET_DEFAULT(requestUserinfo_, "") };
        inline Logs& setRequestUserinfo(string requestUserinfo) { DARABONBA_PTR_SET_VALUE(requestUserinfo_, requestUserinfo) };


        // requestUsername Field Functions 
        bool hasRequestUsername() const { return this->requestUsername_ != nullptr;};
        void deleteRequestUsername() { this->requestUsername_ = nullptr;};
        inline string getRequestUsername() const { DARABONBA_PTR_GET_DEFAULT(requestUsername_, "") };
        inline Logs& setRequestUsername(string requestUsername) { DARABONBA_PTR_SET_VALUE(requestUsername_, requestUsername) };


        // resourceKind Field Functions 
        bool hasResourceKind() const { return this->resourceKind_ != nullptr;};
        void deleteResourceKind() { this->resourceKind_ = nullptr;};
        inline string getResourceKind() const { DARABONBA_PTR_GET_DEFAULT(resourceKind_, "") };
        inline Logs& setResourceKind(string resourceKind) { DARABONBA_PTR_SET_VALUE(resourceKind_, resourceKind) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline Logs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Logs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> clusterId_ {};
        shared_ptr<string> constraintAction_ {};
        shared_ptr<string> constraintApiVersion_ {};
        shared_ptr<string> constraintCategory_ {};
        shared_ptr<string> constraintGroup_ {};
        shared_ptr<string> constraintKind_ {};
        shared_ptr<string> constraintName_ {};
        shared_ptr<string> eventMsg_ {};
        shared_ptr<string> eventType_ {};
        shared_ptr<string> requestUid_ {};
        shared_ptr<string> requestUserinfo_ {};
        shared_ptr<string> requestUsername_ {};
        shared_ptr<string> resourceKind_ {};
        shared_ptr<string> resourceName_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->logProject_ == nullptr && this->logStore_ == nullptr && this->logs_ == nullptr && this->progress_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline AdmitLog& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // logProject Field Functions 
      bool hasLogProject() const { return this->logProject_ != nullptr;};
      void deleteLogProject() { this->logProject_ = nullptr;};
      inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
      inline AdmitLog& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline AdmitLog& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<AdmitLog::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<AdmitLog::Logs>) };
      inline vector<AdmitLog::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<AdmitLog::Logs>) };
      inline AdmitLog& setLogs(const vector<AdmitLog::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline AdmitLog& setLogs(vector<AdmitLog::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline AdmitLog& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    protected:
      // The number of audit log entries.
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> logProject_ {};
      shared_ptr<string> logStore_ {};
      shared_ptr<vector<AdmitLog::Logs>> logs_ {};
      // The status of the query. Valid values:
      // 
      // *   `Complete`: The query succeeded and the complete query result is returned.
      // *   `Incomplete`: The query succeeded but the query result is incomplete. To obtain the complete query result, you must repeat the request.
      shared_ptr<string> progress_ {};
    };

    class Violation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Violation& obj) { 
        DARABONBA_PTR_TO_JSON(totalViolations, totalViolations_);
        DARABONBA_PTR_TO_JSON(violations, violations_);
      };
      friend void from_json(const Darabonba::Json& j, Violation& obj) { 
        DARABONBA_PTR_FROM_JSON(totalViolations, totalViolations_);
        DARABONBA_PTR_FROM_JSON(violations, violations_);
      };
      Violation() = default ;
      Violation(const Violation &) = default ;
      Violation(Violation &&) = default ;
      Violation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Violation() = default ;
      Violation& operator=(const Violation &) = default ;
      Violation& operator=(Violation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Violations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Violations& obj) { 
          DARABONBA_PTR_TO_JSON(deny, deny_);
          DARABONBA_PTR_TO_JSON(warn, warn_);
        };
        friend void from_json(const Darabonba::Json& j, Violations& obj) { 
          DARABONBA_PTR_FROM_JSON(deny, deny_);
          DARABONBA_PTR_FROM_JSON(warn, warn_);
        };
        Violations() = default ;
        Violations(const Violations &) = default ;
        Violations(Violations &&) = default ;
        Violations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Violations() = default ;
        Violations& operator=(const Violations &) = default ;
        Violations& operator=(Violations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Warn : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Warn& obj) { 
            DARABONBA_PTR_TO_JSON(policyDescription, policyDescription_);
            DARABONBA_PTR_TO_JSON(policyName, policyName_);
            DARABONBA_PTR_TO_JSON(severity, severity_);
            DARABONBA_PTR_TO_JSON(violations, violations_);
          };
          friend void from_json(const Darabonba::Json& j, Warn& obj) { 
            DARABONBA_PTR_FROM_JSON(policyDescription, policyDescription_);
            DARABONBA_PTR_FROM_JSON(policyName, policyName_);
            DARABONBA_PTR_FROM_JSON(severity, severity_);
            DARABONBA_PTR_FROM_JSON(violations, violations_);
          };
          Warn() = default ;
          Warn(const Warn &) = default ;
          Warn(Warn &&) = default ;
          Warn(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Warn() = default ;
          Warn& operator=(const Warn &) = default ;
          Warn& operator=(Warn &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->policyDescription_ == nullptr
        && this->policyName_ == nullptr && this->severity_ == nullptr && this->violations_ == nullptr; };
          // policyDescription Field Functions 
          bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
          void deletePolicyDescription() { this->policyDescription_ = nullptr;};
          inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
          inline Warn& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


          // policyName Field Functions 
          bool hasPolicyName() const { return this->policyName_ != nullptr;};
          void deletePolicyName() { this->policyName_ = nullptr;};
          inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
          inline Warn& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Warn& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // violations Field Functions 
          bool hasViolations() const { return this->violations_ != nullptr;};
          void deleteViolations() { this->violations_ = nullptr;};
          inline int64_t getViolations() const { DARABONBA_PTR_GET_DEFAULT(violations_, 0L) };
          inline Warn& setViolations(int64_t violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


        protected:
          shared_ptr<string> policyDescription_ {};
          shared_ptr<string> policyName_ {};
          shared_ptr<string> severity_ {};
          shared_ptr<int64_t> violations_ {};
        };

        class Deny : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deny& obj) { 
            DARABONBA_PTR_TO_JSON(policyDescription, policyDescription_);
            DARABONBA_PTR_TO_JSON(policyName, policyName_);
            DARABONBA_PTR_TO_JSON(severity, severity_);
            DARABONBA_PTR_TO_JSON(violations, violations_);
          };
          friend void from_json(const Darabonba::Json& j, Deny& obj) { 
            DARABONBA_PTR_FROM_JSON(policyDescription, policyDescription_);
            DARABONBA_PTR_FROM_JSON(policyName, policyName_);
            DARABONBA_PTR_FROM_JSON(severity, severity_);
            DARABONBA_PTR_FROM_JSON(violations, violations_);
          };
          Deny() = default ;
          Deny(const Deny &) = default ;
          Deny(Deny &&) = default ;
          Deny(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Deny() = default ;
          Deny& operator=(const Deny &) = default ;
          Deny& operator=(Deny &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->policyDescription_ == nullptr
        && this->policyName_ == nullptr && this->severity_ == nullptr && this->violations_ == nullptr; };
          // policyDescription Field Functions 
          bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
          void deletePolicyDescription() { this->policyDescription_ = nullptr;};
          inline string getPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
          inline Deny& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


          // policyName Field Functions 
          bool hasPolicyName() const { return this->policyName_ != nullptr;};
          void deletePolicyName() { this->policyName_ = nullptr;};
          inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
          inline Deny& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Deny& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // violations Field Functions 
          bool hasViolations() const { return this->violations_ != nullptr;};
          void deleteViolations() { this->violations_ = nullptr;};
          inline int64_t getViolations() const { DARABONBA_PTR_GET_DEFAULT(violations_, 0L) };
          inline Deny& setViolations(int64_t violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


        protected:
          shared_ptr<string> policyDescription_ {};
          shared_ptr<string> policyName_ {};
          shared_ptr<string> severity_ {};
          shared_ptr<int64_t> violations_ {};
        };

        virtual bool empty() const override { return this->deny_ == nullptr
        && this->warn_ == nullptr; };
        // deny Field Functions 
        bool hasDeny() const { return this->deny_ != nullptr;};
        void deleteDeny() { this->deny_ = nullptr;};
        inline const vector<Violations::Deny> & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, vector<Violations::Deny>) };
        inline vector<Violations::Deny> getDeny() { DARABONBA_PTR_GET(deny_, vector<Violations::Deny>) };
        inline Violations& setDeny(const vector<Violations::Deny> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
        inline Violations& setDeny(vector<Violations::Deny> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


        // warn Field Functions 
        bool hasWarn() const { return this->warn_ != nullptr;};
        void deleteWarn() { this->warn_ = nullptr;};
        inline const vector<Violations::Warn> & getWarn() const { DARABONBA_PTR_GET_CONST(warn_, vector<Violations::Warn>) };
        inline vector<Violations::Warn> getWarn() { DARABONBA_PTR_GET(warn_, vector<Violations::Warn>) };
        inline Violations& setWarn(const vector<Violations::Warn> & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
        inline Violations& setWarn(vector<Violations::Warn> && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


      protected:
        shared_ptr<vector<Violations::Deny>> deny_ {};
        shared_ptr<vector<Violations::Warn>> warn_ {};
      };

      class TotalViolations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalViolations& obj) { 
          DARABONBA_PTR_TO_JSON(deny, deny_);
          DARABONBA_PTR_TO_JSON(warn, warn_);
        };
        friend void from_json(const Darabonba::Json& j, TotalViolations& obj) { 
          DARABONBA_PTR_FROM_JSON(deny, deny_);
          DARABONBA_PTR_FROM_JSON(warn, warn_);
        };
        TotalViolations() = default ;
        TotalViolations(const TotalViolations &) = default ;
        TotalViolations(TotalViolations &&) = default ;
        TotalViolations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalViolations() = default ;
        TotalViolations& operator=(const TotalViolations &) = default ;
        TotalViolations& operator=(TotalViolations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Warn : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Warn& obj) { 
            DARABONBA_PTR_TO_JSON(severity, severity_);
            DARABONBA_PTR_TO_JSON(violations, violations_);
          };
          friend void from_json(const Darabonba::Json& j, Warn& obj) { 
            DARABONBA_PTR_FROM_JSON(severity, severity_);
            DARABONBA_PTR_FROM_JSON(violations, violations_);
          };
          Warn() = default ;
          Warn(const Warn &) = default ;
          Warn(Warn &&) = default ;
          Warn(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Warn() = default ;
          Warn& operator=(const Warn &) = default ;
          Warn& operator=(Warn &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->severity_ == nullptr
        && this->violations_ == nullptr; };
          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Warn& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // violations Field Functions 
          bool hasViolations() const { return this->violations_ != nullptr;};
          void deleteViolations() { this->violations_ = nullptr;};
          inline int64_t getViolations() const { DARABONBA_PTR_GET_DEFAULT(violations_, 0L) };
          inline Warn& setViolations(int64_t violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


        protected:
          shared_ptr<string> severity_ {};
          shared_ptr<int64_t> violations_ {};
        };

        class Deny : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Deny& obj) { 
            DARABONBA_PTR_TO_JSON(severity, severity_);
            DARABONBA_PTR_TO_JSON(violations, violations_);
          };
          friend void from_json(const Darabonba::Json& j, Deny& obj) { 
            DARABONBA_PTR_FROM_JSON(severity, severity_);
            DARABONBA_PTR_FROM_JSON(violations, violations_);
          };
          Deny() = default ;
          Deny(const Deny &) = default ;
          Deny(Deny &&) = default ;
          Deny(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Deny() = default ;
          Deny& operator=(const Deny &) = default ;
          Deny& operator=(Deny &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->severity_ == nullptr
        && this->violations_ == nullptr; };
          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Deny& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // violations Field Functions 
          bool hasViolations() const { return this->violations_ != nullptr;};
          void deleteViolations() { this->violations_ = nullptr;};
          inline string getViolations() const { DARABONBA_PTR_GET_DEFAULT(violations_, "") };
          inline Deny& setViolations(string violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };


        protected:
          shared_ptr<string> severity_ {};
          shared_ptr<string> violations_ {};
        };

        virtual bool empty() const override { return this->deny_ == nullptr
        && this->warn_ == nullptr; };
        // deny Field Functions 
        bool hasDeny() const { return this->deny_ != nullptr;};
        void deleteDeny() { this->deny_ = nullptr;};
        inline const vector<TotalViolations::Deny> & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, vector<TotalViolations::Deny>) };
        inline vector<TotalViolations::Deny> getDeny() { DARABONBA_PTR_GET(deny_, vector<TotalViolations::Deny>) };
        inline TotalViolations& setDeny(const vector<TotalViolations::Deny> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
        inline TotalViolations& setDeny(vector<TotalViolations::Deny> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


        // warn Field Functions 
        bool hasWarn() const { return this->warn_ != nullptr;};
        void deleteWarn() { this->warn_ = nullptr;};
        inline const vector<TotalViolations::Warn> & getWarn() const { DARABONBA_PTR_GET_CONST(warn_, vector<TotalViolations::Warn>) };
        inline vector<TotalViolations::Warn> getWarn() { DARABONBA_PTR_GET(warn_, vector<TotalViolations::Warn>) };
        inline TotalViolations& setWarn(const vector<TotalViolations::Warn> & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
        inline TotalViolations& setWarn(vector<TotalViolations::Warn> && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


      protected:
        shared_ptr<vector<TotalViolations::Deny>> deny_ {};
        shared_ptr<vector<TotalViolations::Warn>> warn_ {};
      };

      virtual bool empty() const override { return this->totalViolations_ == nullptr
        && this->violations_ == nullptr; };
      // totalViolations Field Functions 
      bool hasTotalViolations() const { return this->totalViolations_ != nullptr;};
      void deleteTotalViolations() { this->totalViolations_ = nullptr;};
      inline const Violation::TotalViolations & getTotalViolations() const { DARABONBA_PTR_GET_CONST(totalViolations_, Violation::TotalViolations) };
      inline Violation::TotalViolations getTotalViolations() { DARABONBA_PTR_GET(totalViolations_, Violation::TotalViolations) };
      inline Violation& setTotalViolations(const Violation::TotalViolations & totalViolations) { DARABONBA_PTR_SET_VALUE(totalViolations_, totalViolations) };
      inline Violation& setTotalViolations(Violation::TotalViolations && totalViolations) { DARABONBA_PTR_SET_RVALUE(totalViolations_, totalViolations) };


      // violations Field Functions 
      bool hasViolations() const { return this->violations_ != nullptr;};
      void deleteViolations() { this->violations_ = nullptr;};
      inline const Violation::Violations & getViolations() const { DARABONBA_PTR_GET_CONST(violations_, Violation::Violations) };
      inline Violation::Violations getViolations() { DARABONBA_PTR_GET(violations_, Violation::Violations) };
      inline Violation& setViolations(const Violation::Violations & violations) { DARABONBA_PTR_SET_VALUE(violations_, violations) };
      inline Violation& setViolations(Violation::Violations && violations) { DARABONBA_PTR_SET_RVALUE(violations_, violations) };


    protected:
      shared_ptr<Violation::TotalViolations> totalViolations_ {};
      shared_ptr<Violation::Violations> violations_ {};
    };

    virtual bool empty() const override { return this->violation_ == nullptr
        && this->admitLog_ == nullptr && this->onState_ == nullptr; };
    // violation Field Functions 
    bool hasViolation() const { return this->violation_ != nullptr;};
    void deleteViolation() { this->violation_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBody::Violation & getViolation() const { DARABONBA_PTR_GET_CONST(violation_, DescribePolicyGovernanceInClusterResponseBody::Violation) };
    inline DescribePolicyGovernanceInClusterResponseBody::Violation getViolation() { DARABONBA_PTR_GET(violation_, DescribePolicyGovernanceInClusterResponseBody::Violation) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolation(const DescribePolicyGovernanceInClusterResponseBody::Violation & violation) { DARABONBA_PTR_SET_VALUE(violation_, violation) };
    inline DescribePolicyGovernanceInClusterResponseBody& setViolation(DescribePolicyGovernanceInClusterResponseBody::Violation && violation) { DARABONBA_PTR_SET_RVALUE(violation_, violation) };


    // admitLog Field Functions 
    bool hasAdmitLog() const { return this->admitLog_ != nullptr;};
    void deleteAdmitLog() { this->admitLog_ = nullptr;};
    inline const DescribePolicyGovernanceInClusterResponseBody::AdmitLog & getAdmitLog() const { DARABONBA_PTR_GET_CONST(admitLog_, DescribePolicyGovernanceInClusterResponseBody::AdmitLog) };
    inline DescribePolicyGovernanceInClusterResponseBody::AdmitLog getAdmitLog() { DARABONBA_PTR_GET(admitLog_, DescribePolicyGovernanceInClusterResponseBody::AdmitLog) };
    inline DescribePolicyGovernanceInClusterResponseBody& setAdmitLog(const DescribePolicyGovernanceInClusterResponseBody::AdmitLog & admitLog) { DARABONBA_PTR_SET_VALUE(admitLog_, admitLog) };
    inline DescribePolicyGovernanceInClusterResponseBody& setAdmitLog(DescribePolicyGovernanceInClusterResponseBody::AdmitLog && admitLog) { DARABONBA_PTR_SET_RVALUE(admitLog_, admitLog) };


    // onState Field Functions 
    bool hasOnState() const { return this->onState_ != nullptr;};
    void deleteOnState() { this->onState_ = nullptr;};
    inline const vector<DescribePolicyGovernanceInClusterResponseBody::OnState> & getOnState() const { DARABONBA_PTR_GET_CONST(onState_, vector<DescribePolicyGovernanceInClusterResponseBody::OnState>) };
    inline vector<DescribePolicyGovernanceInClusterResponseBody::OnState> getOnState() { DARABONBA_PTR_GET(onState_, vector<DescribePolicyGovernanceInClusterResponseBody::OnState>) };
    inline DescribePolicyGovernanceInClusterResponseBody& setOnState(const vector<DescribePolicyGovernanceInClusterResponseBody::OnState> & onState) { DARABONBA_PTR_SET_VALUE(onState_, onState) };
    inline DescribePolicyGovernanceInClusterResponseBody& setOnState(vector<DescribePolicyGovernanceInClusterResponseBody::OnState> && onState) { DARABONBA_PTR_SET_RVALUE(onState_, onState) };


  protected:
    shared_ptr<DescribePolicyGovernanceInClusterResponseBody::Violation> violation_ {};
    // The audit logs of the policies in the cluster.
    shared_ptr<DescribePolicyGovernanceInClusterResponseBody::AdmitLog> admitLog_ {};
    // Details about the policies of different severity levels that are enabled for the cluster.
    shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBody::OnState>> onState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
