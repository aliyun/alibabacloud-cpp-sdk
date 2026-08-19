// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approval, approval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approval, approval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApprovalResponseBody() = default ;
    GetApprovalResponseBody(const GetApprovalResponseBody &) = default ;
    GetApprovalResponseBody(GetApprovalResponseBody &&) = default ;
    GetApprovalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalResponseBody() = default ;
    GetApprovalResponseBody& operator=(const GetApprovalResponseBody &) = default ;
    GetApprovalResponseBody& operator=(GetApprovalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Approval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Approval& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalDetail, approvalDetail_);
        DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_TO_JSON(ApprovalProgresses, approvalProgresses_);
        DARABONBA_PTR_TO_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_TO_JSON(BackendReportDetail, backendReportDetail_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimeUnix, createTimeUnix_);
        DARABONBA_PTR_TO_JSON(CreatorDepartment, creatorDepartment_);
        DARABONBA_PTR_TO_JSON(CreatorDevTag, creatorDevTag_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(CreatorUsername, creatorUsername_);
        DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
      };
      friend void from_json(const Darabonba::Json& j, Approval& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
        DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_FROM_JSON(ApprovalProgresses, approvalProgresses_);
        DARABONBA_PTR_FROM_JSON(ApprovalType, approvalType_);
        DARABONBA_PTR_FROM_JSON(BackendReportDetail, backendReportDetail_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimeUnix, createTimeUnix_);
        DARABONBA_PTR_FROM_JSON(CreatorDepartment, creatorDepartment_);
        DARABONBA_PTR_FROM_JSON(CreatorDevTag, creatorDevTag_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(CreatorUsername, creatorUsername_);
        DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
      };
      Approval() = default ;
      Approval(const Approval &) = default ;
      Approval(Approval &&) = default ;
      Approval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Approval() = default ;
      Approval& operator=(const Approval &) = default ;
      Approval& operator=(Approval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackendReportDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendReportDetail& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedPolicyName, associatedPolicyName_);
          DARABONBA_PTR_TO_JSON(AssociatedPolicyType, associatedPolicyType_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_ANY_TO_JSON(ReportObject, reportObject_);
          DARABONBA_PTR_TO_JSON(TargetUser, targetUser_);
        };
        friend void from_json(const Darabonba::Json& j, BackendReportDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedPolicyName, associatedPolicyName_);
          DARABONBA_PTR_FROM_JSON(AssociatedPolicyType, associatedPolicyType_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_ANY_FROM_JSON(ReportObject, reportObject_);
          DARABONBA_PTR_FROM_JSON(TargetUser, targetUser_);
        };
        BackendReportDetail() = default ;
        BackendReportDetail(const BackendReportDetail &) = default ;
        BackendReportDetail(BackendReportDetail &&) = default ;
        BackendReportDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendReportDetail() = default ;
        BackendReportDetail& operator=(const BackendReportDetail &) = default ;
        BackendReportDetail& operator=(BackendReportDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TargetUser : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetUser& obj) { 
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(Username, username_);
          };
          friend void from_json(const Darabonba::Json& j, TargetUser& obj) { 
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(Username, username_);
          };
          TargetUser() = default ;
          TargetUser(const TargetUser &) = default ;
          TargetUser(TargetUser &&) = default ;
          TargetUser(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetUser() = default ;
          TargetUser& operator=(const TargetUser &) = default ;
          TargetUser& operator=(TargetUser &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->userId_ == nullptr
        && this->username_ == nullptr; };
          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline TargetUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline TargetUser& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          shared_ptr<string> userId_ {};
          shared_ptr<string> username_ {};
        };

        virtual bool empty() const override { return this->associatedPolicyName_ == nullptr
        && this->associatedPolicyType_ == nullptr && this->remark_ == nullptr && this->reportObject_ == nullptr && this->targetUser_ == nullptr; };
        // associatedPolicyName Field Functions 
        bool hasAssociatedPolicyName() const { return this->associatedPolicyName_ != nullptr;};
        void deleteAssociatedPolicyName() { this->associatedPolicyName_ = nullptr;};
        inline string getAssociatedPolicyName() const { DARABONBA_PTR_GET_DEFAULT(associatedPolicyName_, "") };
        inline BackendReportDetail& setAssociatedPolicyName(string associatedPolicyName) { DARABONBA_PTR_SET_VALUE(associatedPolicyName_, associatedPolicyName) };


        // associatedPolicyType Field Functions 
        bool hasAssociatedPolicyType() const { return this->associatedPolicyType_ != nullptr;};
        void deleteAssociatedPolicyType() { this->associatedPolicyType_ = nullptr;};
        inline string getAssociatedPolicyType() const { DARABONBA_PTR_GET_DEFAULT(associatedPolicyType_, "") };
        inline BackendReportDetail& setAssociatedPolicyType(string associatedPolicyType) { DARABONBA_PTR_SET_VALUE(associatedPolicyType_, associatedPolicyType) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline BackendReportDetail& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // reportObject Field Functions 
        bool hasReportObject() const { return this->reportObject_ != nullptr;};
        void deleteReportObject() { this->reportObject_ = nullptr;};
        inline         const Darabonba::Json & getReportObject() const { DARABONBA_GET(reportObject_) };
        Darabonba::Json & getReportObject() { DARABONBA_GET(reportObject_) };
        inline BackendReportDetail& setReportObject(const Darabonba::Json & reportObject) { DARABONBA_SET_VALUE(reportObject_, reportObject) };
        inline BackendReportDetail& setReportObject(Darabonba::Json && reportObject) { DARABONBA_SET_RVALUE(reportObject_, reportObject) };


        // targetUser Field Functions 
        bool hasTargetUser() const { return this->targetUser_ != nullptr;};
        void deleteTargetUser() { this->targetUser_ = nullptr;};
        inline const BackendReportDetail::TargetUser & getTargetUser() const { DARABONBA_PTR_GET_CONST(targetUser_, BackendReportDetail::TargetUser) };
        inline BackendReportDetail::TargetUser getTargetUser() { DARABONBA_PTR_GET(targetUser_, BackendReportDetail::TargetUser) };
        inline BackendReportDetail& setTargetUser(const BackendReportDetail::TargetUser & targetUser) { DARABONBA_PTR_SET_VALUE(targetUser_, targetUser) };
        inline BackendReportDetail& setTargetUser(BackendReportDetail::TargetUser && targetUser) { DARABONBA_PTR_SET_RVALUE(targetUser_, targetUser) };


      protected:
        shared_ptr<string> associatedPolicyName_ {};
        shared_ptr<string> associatedPolicyType_ {};
        shared_ptr<string> remark_ {};
        Darabonba::Json reportObject_ {};
        shared_ptr<BackendReportDetail::TargetUser> targetUser_ {};
      };

      class ApprovalProgresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalProgresses& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Executor, executor_);
          DARABONBA_PTR_TO_JSON(Operators, operators_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalProgresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Executor, executor_);
          DARABONBA_PTR_FROM_JSON(Operators, operators_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        ApprovalProgresses() = default ;
        ApprovalProgresses(const ApprovalProgresses &) = default ;
        ApprovalProgresses(ApprovalProgresses &&) = default ;
        ApprovalProgresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalProgresses() = default ;
        ApprovalProgresses& operator=(const ApprovalProgresses &) = default ;
        ApprovalProgresses& operator=(ApprovalProgresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Operators : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Operators& obj) { 
            DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
            DARABONBA_PTR_TO_JSON(Username, username_);
          };
          friend void from_json(const Darabonba::Json& j, Operators& obj) { 
            DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
            DARABONBA_PTR_FROM_JSON(Username, username_);
          };
          Operators() = default ;
          Operators(const Operators &) = default ;
          Operators(Operators &&) = default ;
          Operators(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Operators() = default ;
          Operators& operator=(const Operators &) = default ;
          Operators& operator=(Operators &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->saseUserId_ == nullptr
        && this->username_ == nullptr; };
          // saseUserId Field Functions 
          bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
          void deleteSaseUserId() { this->saseUserId_ = nullptr;};
          inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
          inline Operators& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline Operators& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          // The ID of the operator for the approval progress node.
          shared_ptr<string> saseUserId_ {};
          // The username of the operator for the approval progress node.
          shared_ptr<string> username_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->comment_ == nullptr && this->executor_ == nullptr && this->operators_ == nullptr && this->status_ == nullptr && this->timestamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ApprovalProgresses& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline ApprovalProgresses& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // executor Field Functions 
        bool hasExecutor() const { return this->executor_ != nullptr;};
        void deleteExecutor() { this->executor_ = nullptr;};
        inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
        inline ApprovalProgresses& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


        // operators Field Functions 
        bool hasOperators() const { return this->operators_ != nullptr;};
        void deleteOperators() { this->operators_ = nullptr;};
        inline const vector<ApprovalProgresses::Operators> & getOperators() const { DARABONBA_PTR_GET_CONST(operators_, vector<ApprovalProgresses::Operators>) };
        inline vector<ApprovalProgresses::Operators> getOperators() { DARABONBA_PTR_GET(operators_, vector<ApprovalProgresses::Operators>) };
        inline ApprovalProgresses& setOperators(const vector<ApprovalProgresses::Operators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
        inline ApprovalProgresses& setOperators(vector<ApprovalProgresses::Operators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ApprovalProgresses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline ApprovalProgresses& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The action performed on the approval progress node. Valid values:
        // - **Approve**: Approved.
        // - **Reject**: Rejected.
        // - **Revoke**: Revoked.
        // - **Comment**: Commented.
        shared_ptr<string> action_ {};
        // The comment on the approval progress node.
        shared_ptr<string> comment_ {};
        // The executor ID of the approval progress node.
        shared_ptr<string> executor_ {};
        // The list of operators for the approval progress node.
        shared_ptr<vector<ApprovalProgresses::Operators>> operators_ {};
        // The status of the approval progress node. Valid values:
        // - **Pending**: Pending approval.
        // - **Approved**: Approved.
        // - **Rejected**: Rejected.
        // - **Revoked**: Revoked.
        shared_ptr<string> status_ {};
        // The time when the action was performed on the approval progress node. The value is a UNIX timestamp in seconds.
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->approvalDetail_ == nullptr
        && this->approvalId_ == nullptr && this->approvalProgresses_ == nullptr && this->approvalType_ == nullptr && this->backendReportDetail_ == nullptr && this->createTime_ == nullptr
        && this->createTimeUnix_ == nullptr && this->creatorDepartment_ == nullptr && this->creatorDevTag_ == nullptr && this->creatorUserId_ == nullptr && this->creatorUsername_ == nullptr
        && this->effectStatus_ == nullptr && this->endTimestamp_ == nullptr && this->policyType_ == nullptr && this->processId_ == nullptr && this->processName_ == nullptr
        && this->reason_ == nullptr && this->reportType_ == nullptr && this->schemaContent_ == nullptr && this->schemaId_ == nullptr && this->schemaName_ == nullptr
        && this->status_ == nullptr && this->validityType_ == nullptr; };
      // approvalDetail Field Functions 
      bool hasApprovalDetail() const { return this->approvalDetail_ != nullptr;};
      void deleteApprovalDetail() { this->approvalDetail_ = nullptr;};
      inline string getApprovalDetail() const { DARABONBA_PTR_GET_DEFAULT(approvalDetail_, "") };
      inline Approval& setApprovalDetail(string approvalDetail) { DARABONBA_PTR_SET_VALUE(approvalDetail_, approvalDetail) };


      // approvalId Field Functions 
      bool hasApprovalId() const { return this->approvalId_ != nullptr;};
      void deleteApprovalId() { this->approvalId_ = nullptr;};
      inline string getApprovalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
      inline Approval& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


      // approvalProgresses Field Functions 
      bool hasApprovalProgresses() const { return this->approvalProgresses_ != nullptr;};
      void deleteApprovalProgresses() { this->approvalProgresses_ = nullptr;};
      inline const vector<Approval::ApprovalProgresses> & getApprovalProgresses() const { DARABONBA_PTR_GET_CONST(approvalProgresses_, vector<Approval::ApprovalProgresses>) };
      inline vector<Approval::ApprovalProgresses> getApprovalProgresses() { DARABONBA_PTR_GET(approvalProgresses_, vector<Approval::ApprovalProgresses>) };
      inline Approval& setApprovalProgresses(const vector<Approval::ApprovalProgresses> & approvalProgresses) { DARABONBA_PTR_SET_VALUE(approvalProgresses_, approvalProgresses) };
      inline Approval& setApprovalProgresses(vector<Approval::ApprovalProgresses> && approvalProgresses) { DARABONBA_PTR_SET_RVALUE(approvalProgresses_, approvalProgresses) };


      // approvalType Field Functions 
      bool hasApprovalType() const { return this->approvalType_ != nullptr;};
      void deleteApprovalType() { this->approvalType_ = nullptr;};
      inline int32_t getApprovalType() const { DARABONBA_PTR_GET_DEFAULT(approvalType_, 0) };
      inline Approval& setApprovalType(int32_t approvalType) { DARABONBA_PTR_SET_VALUE(approvalType_, approvalType) };


      // backendReportDetail Field Functions 
      bool hasBackendReportDetail() const { return this->backendReportDetail_ != nullptr;};
      void deleteBackendReportDetail() { this->backendReportDetail_ = nullptr;};
      inline const Approval::BackendReportDetail & getBackendReportDetail() const { DARABONBA_PTR_GET_CONST(backendReportDetail_, Approval::BackendReportDetail) };
      inline Approval::BackendReportDetail getBackendReportDetail() { DARABONBA_PTR_GET(backendReportDetail_, Approval::BackendReportDetail) };
      inline Approval& setBackendReportDetail(const Approval::BackendReportDetail & backendReportDetail) { DARABONBA_PTR_SET_VALUE(backendReportDetail_, backendReportDetail) };
      inline Approval& setBackendReportDetail(Approval::BackendReportDetail && backendReportDetail) { DARABONBA_PTR_SET_RVALUE(backendReportDetail_, backendReportDetail) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Approval& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimeUnix Field Functions 
      bool hasCreateTimeUnix() const { return this->createTimeUnix_ != nullptr;};
      void deleteCreateTimeUnix() { this->createTimeUnix_ = nullptr;};
      inline int64_t getCreateTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(createTimeUnix_, 0L) };
      inline Approval& setCreateTimeUnix(int64_t createTimeUnix) { DARABONBA_PTR_SET_VALUE(createTimeUnix_, createTimeUnix) };


      // creatorDepartment Field Functions 
      bool hasCreatorDepartment() const { return this->creatorDepartment_ != nullptr;};
      void deleteCreatorDepartment() { this->creatorDepartment_ = nullptr;};
      inline string getCreatorDepartment() const { DARABONBA_PTR_GET_DEFAULT(creatorDepartment_, "") };
      inline Approval& setCreatorDepartment(string creatorDepartment) { DARABONBA_PTR_SET_VALUE(creatorDepartment_, creatorDepartment) };


      // creatorDevTag Field Functions 
      bool hasCreatorDevTag() const { return this->creatorDevTag_ != nullptr;};
      void deleteCreatorDevTag() { this->creatorDevTag_ = nullptr;};
      inline string getCreatorDevTag() const { DARABONBA_PTR_GET_DEFAULT(creatorDevTag_, "") };
      inline Approval& setCreatorDevTag(string creatorDevTag) { DARABONBA_PTR_SET_VALUE(creatorDevTag_, creatorDevTag) };


      // creatorUserId Field Functions 
      bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
      void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
      inline string getCreatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
      inline Approval& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


      // creatorUsername Field Functions 
      bool hasCreatorUsername() const { return this->creatorUsername_ != nullptr;};
      void deleteCreatorUsername() { this->creatorUsername_ = nullptr;};
      inline string getCreatorUsername() const { DARABONBA_PTR_GET_DEFAULT(creatorUsername_, "") };
      inline Approval& setCreatorUsername(string creatorUsername) { DARABONBA_PTR_SET_VALUE(creatorUsername_, creatorUsername) };


      // effectStatus Field Functions 
      bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
      void deleteEffectStatus() { this->effectStatus_ = nullptr;};
      inline string getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, "") };
      inline Approval& setEffectStatus(string effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


      // endTimestamp Field Functions 
      bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
      void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
      inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
      inline Approval& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Approval& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // processId Field Functions 
      bool hasProcessId() const { return this->processId_ != nullptr;};
      void deleteProcessId() { this->processId_ = nullptr;};
      inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
      inline Approval& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Approval& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Approval& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Approval& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // schemaContent Field Functions 
      bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
      void deleteSchemaContent() { this->schemaContent_ = nullptr;};
      inline string getSchemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
      inline Approval& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


      // schemaId Field Functions 
      bool hasSchemaId() const { return this->schemaId_ != nullptr;};
      void deleteSchemaId() { this->schemaId_ = nullptr;};
      inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
      inline Approval& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Approval& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Approval& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // validityType Field Functions 
      bool hasValidityType() const { return this->validityType_ != nullptr;};
      void deleteValidityType() { this->validityType_ = nullptr;};
      inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
      inline Approval& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


    protected:
      // The details of the approval instance.
      shared_ptr<string> approvalDetail_ {};
      // The approval instance ID.
      shared_ptr<string> approvalId_ {};
      // The list of approval progress nodes.
      shared_ptr<vector<Approval::ApprovalProgresses>> approvalProgresses_ {};
      shared_ptr<int32_t> approvalType_ {};
      // The backend report details. This parameter is returned only when ReportType is set to BackendReport.
      shared_ptr<Approval::BackendReportDetail> backendReportDetail_ {};
      // The time when the approval instance was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> createTimeUnix_ {};
      // The department of the user who created the approval instance.
      shared_ptr<string> creatorDepartment_ {};
      // The device ID of the terminal that created the approval instance.
      shared_ptr<string> creatorDevTag_ {};
      // The ID of the user who created the approval instance.
      shared_ptr<string> creatorUserId_ {};
      // The username of the user who created the approval instance.
      shared_ptr<string> creatorUsername_ {};
      // The effective status of the report. Enabled indicates that the report is active, and Expired indicates that the report has expired.
      shared_ptr<string> effectStatus_ {};
      // The expiration time of the approval instance. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> endTimestamp_ {};
      // The policy type associated with the approval instance. Valid values:
      // - **DomainBlacklist**: Domain name blacklist.
      // - **DomainWhitelist**: Domain name whitelist.
      // - **SoftwareBlock**: Software blocking.
      // - **AppUninstall**: Agent uninstallation.
      // - **DlpSend**: File outbound transfer.
      // - **PeripheralBlock**: Peripheral device control.
      shared_ptr<string> policyType_ {};
      // The ID of the process associated with the approval instance.
      shared_ptr<string> processId_ {};
      // The name of the process associated with the approval instance.
      shared_ptr<string> processName_ {};
      // The reason for creating the approval instance.
      shared_ptr<string> reason_ {};
      // The report type. ApprovalReport indicates an approval report, and BackendReport indicates a backend report.
      shared_ptr<string> reportType_ {};
      // The content of the template associated with the approval instance.
      shared_ptr<string> schemaContent_ {};
      // The ID of the template associated with the approval instance.
      shared_ptr<string> schemaId_ {};
      // The name of the template associated with the approval instance.
      shared_ptr<string> schemaName_ {};
      // The instance status. Valid values:
      // - **Pending**: Pending approval.
      // - **Approved**: Approved.
      // - **Rejected**: Denied.
      // - **Revoked**: Revoked.
      // - **Expired**: Expired.
      shared_ptr<string> status_ {};
      // The validity duration type. When the value is Permanent, EndTimestamp returns 0.
      shared_ptr<string> validityType_ {};
    };

    virtual bool empty() const override { return this->approval_ == nullptr
        && this->requestId_ == nullptr; };
    // approval Field Functions 
    bool hasApproval() const { return this->approval_ != nullptr;};
    void deleteApproval() { this->approval_ = nullptr;};
    inline const vector<GetApprovalResponseBody::Approval> & getApproval() const { DARABONBA_PTR_GET_CONST(approval_, vector<GetApprovalResponseBody::Approval>) };
    inline vector<GetApprovalResponseBody::Approval> getApproval() { DARABONBA_PTR_GET(approval_, vector<GetApprovalResponseBody::Approval>) };
    inline GetApprovalResponseBody& setApproval(const vector<GetApprovalResponseBody::Approval> & approval) { DARABONBA_PTR_SET_VALUE(approval_, approval) };
    inline GetApprovalResponseBody& setApproval(vector<GetApprovalResponseBody::Approval> && approval) { DARABONBA_PTR_SET_RVALUE(approval_, approval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The approval instance.
    shared_ptr<vector<GetApprovalResponseBody::Approval>> approval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
