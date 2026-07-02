// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBCOMPUTECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBCOMPUTECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBComputeClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBComputeClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBComputeClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAgenticDBComputeClustersResponseBody() = default ;
    DescribeAgenticDBComputeClustersResponseBody(const DescribeAgenticDBComputeClustersResponseBody &) = default ;
    DescribeAgenticDBComputeClustersResponseBody(DescribeAgenticDBComputeClustersResponseBody &&) = default ;
    DescribeAgenticDBComputeClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBComputeClustersResponseBody() = default ;
    DescribeAgenticDBComputeClustersResponseBody& operator=(const DescribeAgenticDBComputeClustersResponseBody &) = default ;
    DescribeAgenticDBComputeClustersResponseBody& operator=(DescribeAgenticDBComputeClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BranchId, branchId_);
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(ComputeClusterId, computeClusterId_);
        DARABONBA_PTR_TO_JSON(ComputeNodeCount, computeNodeCount_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefaultBranch, isDefaultBranch_);
        DARABONBA_PTR_TO_JSON(LastActivatedAt, lastActivatedAt_);
        DARABONBA_PTR_TO_JSON(MaxCU, maxCU_);
        DARABONBA_PTR_TO_JSON(MinCU, minCU_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(ComputeClusterId, computeClusterId_);
        DARABONBA_PTR_FROM_JSON(ComputeNodeCount, computeNodeCount_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefaultBranch, isDefaultBranch_);
        DARABONBA_PTR_FROM_JSON(LastActivatedAt, lastActivatedAt_);
        DARABONBA_PTR_FROM_JSON(MaxCU, maxCU_);
        DARABONBA_PTR_FROM_JSON(MinCU, minCU_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->branchId_ == nullptr
        && this->branchName_ == nullptr && this->computeClusterId_ == nullptr && this->computeNodeCount_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr
        && this->isDefaultBranch_ == nullptr && this->lastActivatedAt_ == nullptr && this->maxCU_ == nullptr && this->minCU_ == nullptr && this->operatorType_ == nullptr
        && this->parentBranchId_ == nullptr && this->parentBranchName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->status_ == nullptr
        && this->storageSize_ == nullptr && this->tenantId_ == nullptr && this->tenantName_ == nullptr; };
      // branchId Field Functions 
      bool hasBranchId() const { return this->branchId_ != nullptr;};
      void deleteBranchId() { this->branchId_ = nullptr;};
      inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
      inline Items& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


      // branchName Field Functions 
      bool hasBranchName() const { return this->branchName_ != nullptr;};
      void deleteBranchName() { this->branchName_ = nullptr;};
      inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
      inline Items& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


      // computeClusterId Field Functions 
      bool hasComputeClusterId() const { return this->computeClusterId_ != nullptr;};
      void deleteComputeClusterId() { this->computeClusterId_ = nullptr;};
      inline string getComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(computeClusterId_, "") };
      inline Items& setComputeClusterId(string computeClusterId) { DARABONBA_PTR_SET_VALUE(computeClusterId_, computeClusterId) };


      // computeNodeCount Field Functions 
      bool hasComputeNodeCount() const { return this->computeNodeCount_ != nullptr;};
      void deleteComputeNodeCount() { this->computeNodeCount_ = nullptr;};
      inline int32_t getComputeNodeCount() const { DARABONBA_PTR_GET_DEFAULT(computeNodeCount_, 0) };
      inline Items& setComputeNodeCount(int32_t computeNodeCount) { DARABONBA_PTR_SET_VALUE(computeNodeCount_, computeNodeCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefaultBranch Field Functions 
      bool hasIsDefaultBranch() const { return this->isDefaultBranch_ != nullptr;};
      void deleteIsDefaultBranch() { this->isDefaultBranch_ = nullptr;};
      inline bool getIsDefaultBranch() const { DARABONBA_PTR_GET_DEFAULT(isDefaultBranch_, false) };
      inline Items& setIsDefaultBranch(bool isDefaultBranch) { DARABONBA_PTR_SET_VALUE(isDefaultBranch_, isDefaultBranch) };


      // lastActivatedAt Field Functions 
      bool hasLastActivatedAt() const { return this->lastActivatedAt_ != nullptr;};
      void deleteLastActivatedAt() { this->lastActivatedAt_ = nullptr;};
      inline string getLastActivatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivatedAt_, "") };
      inline Items& setLastActivatedAt(string lastActivatedAt) { DARABONBA_PTR_SET_VALUE(lastActivatedAt_, lastActivatedAt) };


      // maxCU Field Functions 
      bool hasMaxCU() const { return this->maxCU_ != nullptr;};
      void deleteMaxCU() { this->maxCU_ = nullptr;};
      inline string getMaxCU() const { DARABONBA_PTR_GET_DEFAULT(maxCU_, "") };
      inline Items& setMaxCU(string maxCU) { DARABONBA_PTR_SET_VALUE(maxCU_, maxCU) };


      // minCU Field Functions 
      bool hasMinCU() const { return this->minCU_ != nullptr;};
      void deleteMinCU() { this->minCU_ = nullptr;};
      inline string getMinCU() const { DARABONBA_PTR_GET_DEFAULT(minCU_, "") };
      inline Items& setMinCU(string minCU) { DARABONBA_PTR_SET_VALUE(minCU_, minCU) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline Items& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // parentBranchId Field Functions 
      bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
      void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
      inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
      inline Items& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


      // parentBranchName Field Functions 
      bool hasParentBranchName() const { return this->parentBranchName_ != nullptr;};
      void deleteParentBranchName() { this->parentBranchName_ = nullptr;};
      inline string getParentBranchName() const { DARABONBA_PTR_GET_DEFAULT(parentBranchName_, "") };
      inline Items& setParentBranchName(string parentBranchName) { DARABONBA_PTR_SET_VALUE(parentBranchName_, parentBranchName) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Items& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Items& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
      inline Items& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Items& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    protected:
      // The ID of the associated branch.
      shared_ptr<string> branchId_ {};
      // The name of the associated branch.
      shared_ptr<string> branchName_ {};
      // The compute instance ID.
      shared_ptr<string> computeClusterId_ {};
      // The number of compute nodes. The value is fixed to 1 in the first phase.
      shared_ptr<int32_t> computeNodeCount_ {};
      // The time when the compute instance was created.
      shared_ptr<string> createTime_ {};
      // The description of the compute instance.
      shared_ptr<string> description_ {};
      shared_ptr<bool> isDefaultBranch_ {};
      // The time when the compute instance was last activated.
      shared_ptr<string> lastActivatedAt_ {};
      // The maximum compute unit.
      shared_ptr<string> maxCU_ {};
      // The minimum compute unit.
      shared_ptr<string> minCU_ {};
      // The operator type.
      shared_ptr<string> operatorType_ {};
      shared_ptr<string> parentBranchId_ {};
      shared_ptr<string> parentBranchName_ {};
      // The ID of the associated project.
      shared_ptr<string> projectId_ {};
      // The name of the associated project.
      shared_ptr<string> projectName_ {};
      // The status of the compute instance.
      shared_ptr<string> status_ {};
      // The amount of used data, in bytes.
      shared_ptr<int64_t> storageSize_ {};
      // The ID of the associated tenant.
      shared_ptr<string> tenantId_ {};
      // The name of the associated tenant.
      shared_ptr<string> tenantName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAgenticDBComputeClustersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAgenticDBComputeClustersResponseBody::Items>) };
    inline vector<DescribeAgenticDBComputeClustersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAgenticDBComputeClustersResponseBody::Items>) };
    inline DescribeAgenticDBComputeClustersResponseBody& setItems(const vector<DescribeAgenticDBComputeClustersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAgenticDBComputeClustersResponseBody& setItems(vector<DescribeAgenticDBComputeClustersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAgenticDBComputeClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAgenticDBComputeClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBComputeClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAgenticDBComputeClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of compute instances.
    shared_ptr<vector<DescribeAgenticDBComputeClustersResponseBody::Items>> items_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
