// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALSTATUSRESPONSEBODYAPPROVAL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALSTATUSRESPONSEBODYAPPROVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApprovalStatusResponseBodyApprovalApprovalProgresses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalStatusResponseBodyApproval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalStatusResponseBodyApproval& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(ApprovalProgresses, approvalProgresses_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorDevTag, creatorDevTag_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
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
    friend void from_json(const Darabonba::Json& j, UpdateApprovalStatusResponseBodyApproval& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(ApprovalProgresses, approvalProgresses_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorDevTag, creatorDevTag_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
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
    UpdateApprovalStatusResponseBodyApproval() = default ;
    UpdateApprovalStatusResponseBodyApproval(const UpdateApprovalStatusResponseBodyApproval &) = default ;
    UpdateApprovalStatusResponseBodyApproval(UpdateApprovalStatusResponseBodyApproval &&) = default ;
    UpdateApprovalStatusResponseBodyApproval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalStatusResponseBodyApproval() = default ;
    UpdateApprovalStatusResponseBodyApproval& operator=(const UpdateApprovalStatusResponseBodyApproval &) = default ;
    UpdateApprovalStatusResponseBodyApproval& operator=(UpdateApprovalStatusResponseBodyApproval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalDetail_ != nullptr
        && this->approvalId_ != nullptr && this->approvalProgresses_ != nullptr && this->createTime_ != nullptr && this->creatorDevTag_ != nullptr && this->creatorUserId_ != nullptr
        && this->endTimestamp_ != nullptr && this->policyType_ != nullptr && this->processId_ != nullptr && this->processName_ != nullptr && this->reason_ != nullptr
        && this->schemaContent_ != nullptr && this->schemaId_ != nullptr && this->schemaName_ != nullptr && this->status_ != nullptr; };
    // approvalDetail Field Functions 
    bool hasApprovalDetail() const { return this->approvalDetail_ != nullptr;};
    void deleteApprovalDetail() { this->approvalDetail_ = nullptr;};
    inline string approvalDetail() const { DARABONBA_PTR_GET_DEFAULT(approvalDetail_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setApprovalDetail(string approvalDetail) { DARABONBA_PTR_SET_VALUE(approvalDetail_, approvalDetail) };


    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // approvalProgresses Field Functions 
    bool hasApprovalProgresses() const { return this->approvalProgresses_ != nullptr;};
    void deleteApprovalProgresses() { this->approvalProgresses_ = nullptr;};
    inline const vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses> & approvalProgresses() const { DARABONBA_PTR_GET_CONST(approvalProgresses_, vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses>) };
    inline vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses> approvalProgresses() { DARABONBA_PTR_GET(approvalProgresses_, vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses>) };
    inline UpdateApprovalStatusResponseBodyApproval& setApprovalProgresses(const vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses> & approvalProgresses) { DARABONBA_PTR_SET_VALUE(approvalProgresses_, approvalProgresses) };
    inline UpdateApprovalStatusResponseBodyApproval& setApprovalProgresses(vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses> && approvalProgresses) { DARABONBA_PTR_SET_RVALUE(approvalProgresses_, approvalProgresses) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorDevTag Field Functions 
    bool hasCreatorDevTag() const { return this->creatorDevTag_ != nullptr;};
    void deleteCreatorDevTag() { this->creatorDevTag_ = nullptr;};
    inline string creatorDevTag() const { DARABONBA_PTR_GET_DEFAULT(creatorDevTag_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setCreatorDevTag(string creatorDevTag) { DARABONBA_PTR_SET_VALUE(creatorDevTag_, creatorDevTag) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline UpdateApprovalStatusResponseBodyApproval& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // schemaContent Field Functions 
    bool hasSchemaContent() const { return this->schemaContent_ != nullptr;};
    void deleteSchemaContent() { this->schemaContent_ = nullptr;};
    inline string schemaContent() const { DARABONBA_PTR_GET_DEFAULT(schemaContent_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setSchemaContent(string schemaContent) { DARABONBA_PTR_SET_VALUE(schemaContent_, schemaContent) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateApprovalStatusResponseBodyApproval& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> approvalDetail_ = nullptr;
    std::shared_ptr<string> approvalId_ = nullptr;
    std::shared_ptr<vector<Models::UpdateApprovalStatusResponseBodyApprovalApprovalProgresses>> approvalProgresses_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creatorDevTag_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<int64_t> endTimestamp_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> schemaContent_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
