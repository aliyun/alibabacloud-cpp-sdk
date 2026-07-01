// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBBranchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBBranchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_TO_JSON(BranchComputeNodeCount, branchComputeNodeCount_);
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IsDefaultBranch, isDefaultBranch_);
      DARABONBA_PTR_TO_JSON(LastActivatedAt, lastActivatedAt_);
      DARABONBA_PTR_TO_JSON(MaxCU, maxCU_);
      DARABONBA_PTR_TO_JSON(MinCU, minCU_);
      DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBBranchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_FROM_JSON(BranchComputeNodeCount, branchComputeNodeCount_);
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IsDefaultBranch, isDefaultBranch_);
      DARABONBA_PTR_FROM_JSON(LastActivatedAt, lastActivatedAt_);
      DARABONBA_PTR_FROM_JSON(MaxCU, maxCU_);
      DARABONBA_PTR_FROM_JSON(MinCU, minCU_);
      DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBBranchResponseBody() = default ;
    DescribeAgenticDBBranchResponseBody(const DescribeAgenticDBBranchResponseBody &) = default ;
    DescribeAgenticDBBranchResponseBody(DescribeAgenticDBBranchResponseBody &&) = default ;
    DescribeAgenticDBBranchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBBranchResponseBody() = default ;
    DescribeAgenticDBBranchResponseBody& operator=(const DescribeAgenticDBBranchResponseBody &) = default ;
    DescribeAgenticDBBranchResponseBody& operator=(DescribeAgenticDBBranchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchComputeClusterId_ == nullptr
        && this->branchComputeNodeCount_ == nullptr && this->branchId_ == nullptr && this->branchName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->isDefaultBranch_ == nullptr && this->lastActivatedAt_ == nullptr && this->maxCU_ == nullptr && this->minCU_ == nullptr && this->parentBranchId_ == nullptr
        && this->parentBranchName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr; };
    // branchComputeClusterId Field Functions 
    bool hasBranchComputeClusterId() const { return this->branchComputeClusterId_ != nullptr;};
    void deleteBranchComputeClusterId() { this->branchComputeClusterId_ = nullptr;};
    inline string getBranchComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(branchComputeClusterId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setBranchComputeClusterId(string branchComputeClusterId) { DARABONBA_PTR_SET_VALUE(branchComputeClusterId_, branchComputeClusterId) };


    // branchComputeNodeCount Field Functions 
    bool hasBranchComputeNodeCount() const { return this->branchComputeNodeCount_ != nullptr;};
    void deleteBranchComputeNodeCount() { this->branchComputeNodeCount_ = nullptr;};
    inline int32_t getBranchComputeNodeCount() const { DARABONBA_PTR_GET_DEFAULT(branchComputeNodeCount_, 0) };
    inline DescribeAgenticDBBranchResponseBody& setBranchComputeNodeCount(int32_t branchComputeNodeCount) { DARABONBA_PTR_SET_VALUE(branchComputeNodeCount_, branchComputeNodeCount) };


    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline DescribeAgenticDBBranchResponseBody& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAgenticDBBranchResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAgenticDBBranchResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isDefaultBranch Field Functions 
    bool hasIsDefaultBranch() const { return this->isDefaultBranch_ != nullptr;};
    void deleteIsDefaultBranch() { this->isDefaultBranch_ = nullptr;};
    inline bool getIsDefaultBranch() const { DARABONBA_PTR_GET_DEFAULT(isDefaultBranch_, false) };
    inline DescribeAgenticDBBranchResponseBody& setIsDefaultBranch(bool isDefaultBranch) { DARABONBA_PTR_SET_VALUE(isDefaultBranch_, isDefaultBranch) };


    // lastActivatedAt Field Functions 
    bool hasLastActivatedAt() const { return this->lastActivatedAt_ != nullptr;};
    void deleteLastActivatedAt() { this->lastActivatedAt_ = nullptr;};
    inline string getLastActivatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivatedAt_, "") };
    inline DescribeAgenticDBBranchResponseBody& setLastActivatedAt(string lastActivatedAt) { DARABONBA_PTR_SET_VALUE(lastActivatedAt_, lastActivatedAt) };


    // maxCU Field Functions 
    bool hasMaxCU() const { return this->maxCU_ != nullptr;};
    void deleteMaxCU() { this->maxCU_ = nullptr;};
    inline string getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, "") };
    inline DescribeAgenticDBBranchResponseBody& setMaxCU(string maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


    // minCU Field Functions 
    bool hasMinCU() const { return this->minCU_ != nullptr;};
    void deleteMinCU() { this->minCU_ = nullptr;};
    inline string getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, "") };
    inline DescribeAgenticDBBranchResponseBody& setMinCU(string minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


    // parentBranchId Field Functions 
    bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
    void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
    inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


    // parentBranchName Field Functions 
    bool hasParentBranchName() const { return this->parentBranchName_ != nullptr;};
    void deleteParentBranchName() { this->parentBranchName_ = nullptr;};
    inline string getParentBranchName() const { DARABONBA_PTR_GET_DEFAULT(parentBranchName_, "") };
    inline DescribeAgenticDBBranchResponseBody& setParentBranchName(string parentBranchName) { DARABONBA_PTR_SET_VALUE(parentBranchName_, parentBranchName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeAgenticDBBranchResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAgenticDBBranchResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBBranchResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> branchComputeClusterId_ {};
    shared_ptr<int32_t> branchComputeNodeCount_ {};
    shared_ptr<string> branchId_ {};
    shared_ptr<string> branchName_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> isDefaultBranch_ {};
    shared_ptr<string> lastActivatedAt_ {};
    shared_ptr<string> maxCU_ {};
    shared_ptr<string> minCU_ {};
    shared_ptr<string> parentBranchId_ {};
    shared_ptr<string> parentBranchName_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
