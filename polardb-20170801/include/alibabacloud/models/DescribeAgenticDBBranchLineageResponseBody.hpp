// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHLINEAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHLINEAGERESPONSEBODY_HPP_
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
  class DescribeAgenticDBBranchLineageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBBranchLineageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorBranchId, anchorBranchId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootBranchId, rootBranchId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBBranchLineageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorBranchId, anchorBranchId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootBranchId, rootBranchId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBBranchLineageResponseBody() = default ;
    DescribeAgenticDBBranchLineageResponseBody(const DescribeAgenticDBBranchLineageResponseBody &) = default ;
    DescribeAgenticDBBranchLineageResponseBody(DescribeAgenticDBBranchLineageResponseBody &&) = default ;
    DescribeAgenticDBBranchLineageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBBranchLineageResponseBody() = default ;
    DescribeAgenticDBBranchLineageResponseBody& operator=(const DescribeAgenticDBBranchLineageResponseBody &) = default ;
    DescribeAgenticDBBranchLineageResponseBody& operator=(DescribeAgenticDBBranchLineageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BranchComputeClusterId, branchComputeClusterId_);
        DARABONBA_PTR_TO_JSON(BranchDescription, branchDescription_);
        DARABONBA_PTR_TO_JSON(BranchId, branchId_);
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Depth, depth_);
        DARABONBA_PTR_TO_JSON(DirectChildCount, directChildCount_);
        DARABONBA_PTR_TO_JSON(HasMoreAncestors, hasMoreAncestors_);
        DARABONBA_PTR_TO_JSON(HasMoreChildren, hasMoreChildren_);
        DARABONBA_PTR_TO_JSON(IsAnchor, isAnchor_);
        DARABONBA_PTR_TO_JSON(IsDefaultBranch, isDefaultBranch_);
        DARABONBA_PTR_TO_JSON(IsRoot, isRoot_);
        DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BranchComputeClusterId, branchComputeClusterId_);
        DARABONBA_PTR_FROM_JSON(BranchDescription, branchDescription_);
        DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Depth, depth_);
        DARABONBA_PTR_FROM_JSON(DirectChildCount, directChildCount_);
        DARABONBA_PTR_FROM_JSON(HasMoreAncestors, hasMoreAncestors_);
        DARABONBA_PTR_FROM_JSON(HasMoreChildren, hasMoreChildren_);
        DARABONBA_PTR_FROM_JSON(IsAnchor, isAnchor_);
        DARABONBA_PTR_FROM_JSON(IsDefaultBranch, isDefaultBranch_);
        DARABONBA_PTR_FROM_JSON(IsRoot, isRoot_);
        DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
        DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->branchComputeClusterId_ == nullptr
        && this->branchDescription_ == nullptr && this->branchId_ == nullptr && this->branchName_ == nullptr && this->createTime_ == nullptr && this->depth_ == nullptr
        && this->directChildCount_ == nullptr && this->hasMoreAncestors_ == nullptr && this->hasMoreChildren_ == nullptr && this->isAnchor_ == nullptr && this->isDefaultBranch_ == nullptr
        && this->isRoot_ == nullptr && this->parentBranchId_ == nullptr && this->parentBranchName_ == nullptr && this->status_ == nullptr; };
      // branchComputeClusterId Field Functions 
      bool hasBranchComputeClusterId() const { return this->branchComputeClusterId_ != nullptr;};
      void deleteBranchComputeClusterId() { this->branchComputeClusterId_ = nullptr;};
      inline string getBranchComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(branchComputeClusterId_, "") };
      inline Items& setBranchComputeClusterId(string branchComputeClusterId) { DARABONBA_PTR_SET_VALUE(branchComputeClusterId_, branchComputeClusterId) };


      // branchDescription Field Functions 
      bool hasBranchDescription() const { return this->branchDescription_ != nullptr;};
      void deleteBranchDescription() { this->branchDescription_ = nullptr;};
      inline string getBranchDescription() const { DARABONBA_PTR_GET_DEFAULT(branchDescription_, "") };
      inline Items& setBranchDescription(string branchDescription) { DARABONBA_PTR_SET_VALUE(branchDescription_, branchDescription) };


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


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Items& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // depth Field Functions 
      bool hasDepth() const { return this->depth_ != nullptr;};
      void deleteDepth() { this->depth_ = nullptr;};
      inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
      inline Items& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


      // directChildCount Field Functions 
      bool hasDirectChildCount() const { return this->directChildCount_ != nullptr;};
      void deleteDirectChildCount() { this->directChildCount_ = nullptr;};
      inline int32_t getDirectChildCount() const { DARABONBA_PTR_GET_DEFAULT(directChildCount_, 0) };
      inline Items& setDirectChildCount(int32_t directChildCount) { DARABONBA_PTR_SET_VALUE(directChildCount_, directChildCount) };


      // hasMoreAncestors Field Functions 
      bool hasHasMoreAncestors() const { return this->hasMoreAncestors_ != nullptr;};
      void deleteHasMoreAncestors() { this->hasMoreAncestors_ = nullptr;};
      inline bool getHasMoreAncestors() const { DARABONBA_PTR_GET_DEFAULT(hasMoreAncestors_, false) };
      inline Items& setHasMoreAncestors(bool hasMoreAncestors) { DARABONBA_PTR_SET_VALUE(hasMoreAncestors_, hasMoreAncestors) };


      // hasMoreChildren Field Functions 
      bool hasHasMoreChildren() const { return this->hasMoreChildren_ != nullptr;};
      void deleteHasMoreChildren() { this->hasMoreChildren_ = nullptr;};
      inline bool getHasMoreChildren() const { DARABONBA_PTR_GET_DEFAULT(hasMoreChildren_, false) };
      inline Items& setHasMoreChildren(bool hasMoreChildren) { DARABONBA_PTR_SET_VALUE(hasMoreChildren_, hasMoreChildren) };


      // isAnchor Field Functions 
      bool hasIsAnchor() const { return this->isAnchor_ != nullptr;};
      void deleteIsAnchor() { this->isAnchor_ = nullptr;};
      inline bool getIsAnchor() const { DARABONBA_PTR_GET_DEFAULT(isAnchor_, false) };
      inline Items& setIsAnchor(bool isAnchor) { DARABONBA_PTR_SET_VALUE(isAnchor_, isAnchor) };


      // isDefaultBranch Field Functions 
      bool hasIsDefaultBranch() const { return this->isDefaultBranch_ != nullptr;};
      void deleteIsDefaultBranch() { this->isDefaultBranch_ = nullptr;};
      inline bool getIsDefaultBranch() const { DARABONBA_PTR_GET_DEFAULT(isDefaultBranch_, false) };
      inline Items& setIsDefaultBranch(bool isDefaultBranch) { DARABONBA_PTR_SET_VALUE(isDefaultBranch_, isDefaultBranch) };


      // isRoot Field Functions 
      bool hasIsRoot() const { return this->isRoot_ != nullptr;};
      void deleteIsRoot() { this->isRoot_ = nullptr;};
      inline bool getIsRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, false) };
      inline Items& setIsRoot(bool isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The compute cluster ID of the branch.
      shared_ptr<string> branchComputeClusterId_ {};
      // The branch description.
      shared_ptr<string> branchDescription_ {};
      // The branch ID.
      shared_ptr<string> branchId_ {};
      // The branch name.
      shared_ptr<string> branchName_ {};
      // The time when the branch was created.
      shared_ptr<string> createTime_ {};
      // The depth relative to the anchor branch. The anchor branch has a depth of 0. Ancestor branches have negative values. Descendant branches have positive values.
      shared_ptr<int32_t> depth_ {};
      // The total number of direct child branches.
      shared_ptr<int32_t> directChildCount_ {};
      // Indicates whether more ancestor nodes exist but are not returned.
      shared_ptr<bool> hasMoreAncestors_ {};
      // Indicates whether more child nodes exist but are not returned.
      shared_ptr<bool> hasMoreChildren_ {};
      // Indicates whether the branch is the anchor branch.
      shared_ptr<bool> isAnchor_ {};
      shared_ptr<bool> isDefaultBranch_ {};
      // Indicates whether the branch is the primary branch.
      shared_ptr<bool> isRoot_ {};
      // The parent branch ID.
      shared_ptr<string> parentBranchId_ {};
      // The parent branch name.
      shared_ptr<string> parentBranchName_ {};
      // The branch status. Valid values:
      // - Active
      // - Destroying
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->anchorBranchId_ == nullptr
        && this->items_ == nullptr && this->nodeCount_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr
        && this->rootBranchId_ == nullptr && this->tenantId_ == nullptr; };
    // anchorBranchId Field Functions 
    bool hasAnchorBranchId() const { return this->anchorBranchId_ != nullptr;};
    void deleteAnchorBranchId() { this->anchorBranchId_ = nullptr;};
    inline string getAnchorBranchId() const { DARABONBA_PTR_GET_DEFAULT(anchorBranchId_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setAnchorBranchId(string anchorBranchId) { DARABONBA_PTR_SET_VALUE(anchorBranchId_, anchorBranchId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeAgenticDBBranchLineageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeAgenticDBBranchLineageResponseBody::Items>) };
    inline vector<DescribeAgenticDBBranchLineageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeAgenticDBBranchLineageResponseBody::Items>) };
    inline DescribeAgenticDBBranchLineageResponseBody& setItems(const vector<DescribeAgenticDBBranchLineageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAgenticDBBranchLineageResponseBody& setItems(vector<DescribeAgenticDBBranchLineageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline DescribeAgenticDBBranchLineageResponseBody& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootBranchId Field Functions 
    bool hasRootBranchId() const { return this->rootBranchId_ != nullptr;};
    void deleteRootBranchId() { this->rootBranchId_ = nullptr;};
    inline string getRootBranchId() const { DARABONBA_PTR_GET_DEFAULT(rootBranchId_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setRootBranchId(string rootBranchId) { DARABONBA_PTR_SET_VALUE(rootBranchId_, rootBranchId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBBranchLineageResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The anchor branch ID.
    shared_ptr<string> anchorBranchId_ {};
    // The list of lineage nodes.
    shared_ptr<vector<DescribeAgenticDBBranchLineageResponseBody::Items>> items_ {};
    // The total number of returned nodes.
    shared_ptr<int32_t> nodeCount_ {};
    // The project ID.
    shared_ptr<string> projectId_ {};
    // The project name.
    shared_ptr<string> projectName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The primary branch ID.
    shared_ptr<string> rootBranchId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
