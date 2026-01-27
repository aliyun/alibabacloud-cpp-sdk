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
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorDepartment, creatorDepartment_);
        DARABONBA_PTR_TO_JSON(CreatorDevTag, creatorDevTag_);
        DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_TO_JSON(CreatorUsername, creatorUsername_);
        DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(ProcessId, processId_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Approval& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
        DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
        DARABONBA_PTR_FROM_JSON(ApprovalProgresses, approvalProgresses_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorDepartment, creatorDepartment_);
        DARABONBA_PTR_FROM_JSON(CreatorDevTag, creatorDevTag_);
        DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
        DARABONBA_PTR_FROM_JSON(CreatorUsername, creatorUsername_);
        DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(SchemaContent, schemaContent_);
        DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
          shared_ptr<string> saseUserId_ {};
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
        shared_ptr<string> action_ {};
        shared_ptr<string> comment_ {};
        shared_ptr<string> executor_ {};
        shared_ptr<vector<ApprovalProgresses::Operators>> operators_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->approvalDetail_ == nullptr
        && this->approvalId_ == nullptr && this->approvalProgresses_ == nullptr && this->createTime_ == nullptr && this->creatorDepartment_ == nullptr && this->creatorDevTag_ == nullptr
        && this->creatorUserId_ == nullptr && this->creatorUsername_ == nullptr && this->endTimestamp_ == nullptr && this->policyType_ == nullptr && this->processId_ == nullptr
        && this->processName_ == nullptr && this->reason_ == nullptr && this->schemaContent_ == nullptr && this->schemaId_ == nullptr && this->schemaName_ == nullptr
        && this->status_ == nullptr; };
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


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Approval& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


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


    protected:
      shared_ptr<string> approvalDetail_ {};
      shared_ptr<string> approvalId_ {};
      shared_ptr<vector<Approval::ApprovalProgresses>> approvalProgresses_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creatorDepartment_ {};
      shared_ptr<string> creatorDevTag_ {};
      shared_ptr<string> creatorUserId_ {};
      shared_ptr<string> creatorUsername_ {};
      shared_ptr<int64_t> endTimestamp_ {};
      shared_ptr<string> policyType_ {};
      shared_ptr<string> processId_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> schemaContent_ {};
      shared_ptr<string> schemaId_ {};
      shared_ptr<string> schemaName_ {};
      shared_ptr<string> status_ {};
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
    shared_ptr<vector<GetApprovalResponseBody::Approval>> approval_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
