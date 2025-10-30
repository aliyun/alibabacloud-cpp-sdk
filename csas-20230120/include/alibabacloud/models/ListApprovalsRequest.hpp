// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALSREQUEST_HPP_
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
  class ListApprovalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalIds, approvalIds_);
      DARABONBA_PTR_TO_JSON(CreateEndTime, createEndTime_);
      DARABONBA_PTR_TO_JSON(CreateStartTime, createStartTime_);
      DARABONBA_PTR_TO_JSON(CreatorDepartment, creatorDepartment_);
      DARABONBA_PTR_TO_JSON(CreatorDevTag, creatorDevTag_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_TO_JSON(CreatorUsername, creatorUsername_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_TO_JSON(OperatorUsername, operatorUsername_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalIds, approvalIds_);
      DARABONBA_PTR_FROM_JSON(CreateEndTime, createEndTime_);
      DARABONBA_PTR_FROM_JSON(CreateStartTime, createStartTime_);
      DARABONBA_PTR_FROM_JSON(CreatorDepartment, creatorDepartment_);
      DARABONBA_PTR_FROM_JSON(CreatorDevTag, creatorDevTag_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_FROM_JSON(CreatorUsername, creatorUsername_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OperatorUserId, operatorUserId_);
      DARABONBA_PTR_FROM_JSON(OperatorUsername, operatorUsername_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListApprovalsRequest() = default ;
    ListApprovalsRequest(const ListApprovalsRequest &) = default ;
    ListApprovalsRequest(ListApprovalsRequest &&) = default ;
    ListApprovalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalsRequest() = default ;
    ListApprovalsRequest& operator=(const ListApprovalsRequest &) = default ;
    ListApprovalsRequest& operator=(ListApprovalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approvalIds_ == nullptr
        && return this->createEndTime_ == nullptr && return this->createStartTime_ == nullptr && return this->creatorDepartment_ == nullptr && return this->creatorDevTag_ == nullptr && return this->creatorUserId_ == nullptr
        && return this->creatorUsername_ == nullptr && return this->currentPage_ == nullptr && return this->operatorUserId_ == nullptr && return this->operatorUsername_ == nullptr && return this->pageSize_ == nullptr
        && return this->policyType_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr && return this->schemaId_ == nullptr && return this->schemaName_ == nullptr
        && return this->statuses_ == nullptr; };
    // approvalIds Field Functions 
    bool hasApprovalIds() const { return this->approvalIds_ != nullptr;};
    void deleteApprovalIds() { this->approvalIds_ = nullptr;};
    inline const vector<string> & approvalIds() const { DARABONBA_PTR_GET_CONST(approvalIds_, vector<string>) };
    inline vector<string> approvalIds() { DARABONBA_PTR_GET(approvalIds_, vector<string>) };
    inline ListApprovalsRequest& setApprovalIds(const vector<string> & approvalIds) { DARABONBA_PTR_SET_VALUE(approvalIds_, approvalIds) };
    inline ListApprovalsRequest& setApprovalIds(vector<string> && approvalIds) { DARABONBA_PTR_SET_RVALUE(approvalIds_, approvalIds) };


    // createEndTime Field Functions 
    bool hasCreateEndTime() const { return this->createEndTime_ != nullptr;};
    void deleteCreateEndTime() { this->createEndTime_ = nullptr;};
    inline int64_t createEndTime() const { DARABONBA_PTR_GET_DEFAULT(createEndTime_, 0L) };
    inline ListApprovalsRequest& setCreateEndTime(int64_t createEndTime) { DARABONBA_PTR_SET_VALUE(createEndTime_, createEndTime) };


    // createStartTime Field Functions 
    bool hasCreateStartTime() const { return this->createStartTime_ != nullptr;};
    void deleteCreateStartTime() { this->createStartTime_ = nullptr;};
    inline int64_t createStartTime() const { DARABONBA_PTR_GET_DEFAULT(createStartTime_, 0L) };
    inline ListApprovalsRequest& setCreateStartTime(int64_t createStartTime) { DARABONBA_PTR_SET_VALUE(createStartTime_, createStartTime) };


    // creatorDepartment Field Functions 
    bool hasCreatorDepartment() const { return this->creatorDepartment_ != nullptr;};
    void deleteCreatorDepartment() { this->creatorDepartment_ = nullptr;};
    inline string creatorDepartment() const { DARABONBA_PTR_GET_DEFAULT(creatorDepartment_, "") };
    inline ListApprovalsRequest& setCreatorDepartment(string creatorDepartment) { DARABONBA_PTR_SET_VALUE(creatorDepartment_, creatorDepartment) };


    // creatorDevTag Field Functions 
    bool hasCreatorDevTag() const { return this->creatorDevTag_ != nullptr;};
    void deleteCreatorDevTag() { this->creatorDevTag_ = nullptr;};
    inline string creatorDevTag() const { DARABONBA_PTR_GET_DEFAULT(creatorDevTag_, "") };
    inline ListApprovalsRequest& setCreatorDevTag(string creatorDevTag) { DARABONBA_PTR_SET_VALUE(creatorDevTag_, creatorDevTag) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline ListApprovalsRequest& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // creatorUsername Field Functions 
    bool hasCreatorUsername() const { return this->creatorUsername_ != nullptr;};
    void deleteCreatorUsername() { this->creatorUsername_ = nullptr;};
    inline string creatorUsername() const { DARABONBA_PTR_GET_DEFAULT(creatorUsername_, "") };
    inline ListApprovalsRequest& setCreatorUsername(string creatorUsername) { DARABONBA_PTR_SET_VALUE(creatorUsername_, creatorUsername) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListApprovalsRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // operatorUserId Field Functions 
    bool hasOperatorUserId() const { return this->operatorUserId_ != nullptr;};
    void deleteOperatorUserId() { this->operatorUserId_ = nullptr;};
    inline string operatorUserId() const { DARABONBA_PTR_GET_DEFAULT(operatorUserId_, "") };
    inline ListApprovalsRequest& setOperatorUserId(string operatorUserId) { DARABONBA_PTR_SET_VALUE(operatorUserId_, operatorUserId) };


    // operatorUsername Field Functions 
    bool hasOperatorUsername() const { return this->operatorUsername_ != nullptr;};
    void deleteOperatorUsername() { this->operatorUsername_ = nullptr;};
    inline string operatorUsername() const { DARABONBA_PTR_GET_DEFAULT(operatorUsername_, "") };
    inline ListApprovalsRequest& setOperatorUsername(string operatorUsername) { DARABONBA_PTR_SET_VALUE(operatorUsername_, operatorUsername) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApprovalsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListApprovalsRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListApprovalsRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListApprovalsRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListApprovalsRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListApprovalsRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListApprovalsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListApprovalsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    std::shared_ptr<vector<string>> approvalIds_ = nullptr;
    std::shared_ptr<int64_t> createEndTime_ = nullptr;
    std::shared_ptr<int64_t> createStartTime_ = nullptr;
    std::shared_ptr<string> creatorDepartment_ = nullptr;
    std::shared_ptr<string> creatorDevTag_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<string> creatorUsername_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> operatorUserId_ = nullptr;
    std::shared_ptr<string> operatorUsername_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<vector<string>> statuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
