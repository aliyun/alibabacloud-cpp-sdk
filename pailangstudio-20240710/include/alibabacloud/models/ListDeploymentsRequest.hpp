// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class ListDeploymentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(DeploymentStatus, deploymentStatus_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotId, resourceSnapshotId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDeploymentsRequest() = default ;
    ListDeploymentsRequest(const ListDeploymentsRequest &) = default ;
    ListDeploymentsRequest(ListDeploymentsRequest &&) = default ;
    ListDeploymentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentsRequest() = default ;
    ListDeploymentsRequest& operator=(const ListDeploymentsRequest &) = default ;
    ListDeploymentsRequest& operator=(ListDeploymentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && this->deploymentId_ == nullptr && this->deploymentStatus_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->operationType_ == nullptr
        && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceId_ == nullptr && this->resourceSnapshotId_ == nullptr
        && this->resourceType_ == nullptr && this->serviceName_ == nullptr && this->sortBy_ == nullptr && this->workspaceId_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDeploymentsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline ListDeploymentsRequest& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // deploymentStatus Field Functions 
    bool hasDeploymentStatus() const { return this->deploymentStatus_ != nullptr;};
    void deleteDeploymentStatus() { this->deploymentStatus_ = nullptr;};
    inline string getDeploymentStatus() const { DARABONBA_PTR_GET_DEFAULT(deploymentStatus_, "") };
    inline ListDeploymentsRequest& setDeploymentStatus(string deploymentStatus) { DARABONBA_PTR_SET_VALUE(deploymentStatus_, deploymentStatus) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDeploymentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDeploymentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListDeploymentsRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDeploymentsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeploymentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListDeploymentsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSnapshotId Field Functions 
    bool hasResourceSnapshotId() const { return this->resourceSnapshotId_ != nullptr;};
    void deleteResourceSnapshotId() { this->resourceSnapshotId_ = nullptr;};
    inline string getResourceSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(resourceSnapshotId_, "") };
    inline ListDeploymentsRequest& setResourceSnapshotId(string resourceSnapshotId) { DARABONBA_PTR_SET_VALUE(resourceSnapshotId_, resourceSnapshotId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListDeploymentsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListDeploymentsRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDeploymentsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDeploymentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The creator ID.
    shared_ptr<string> creator_ {};
    // Deployment job ID.
    shared_ptr<string> deploymentId_ {};
    // The deployment job status. To query multiple statuses simultaneously, separate them with commas.
    shared_ptr<string> deploymentStatus_ {};
    // Maximum number of records allowed to be returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Pagination cursor used to retrieve the next page of results.  
    // 
    // * Leave empty for the first request.  
    // * For subsequent requests, pass the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The operation type. Valid values:  
    // * Create: Create a service.  
    // * Update: Update an existing service.
    shared_ptr<string> operationType_ {};
    // Sorting order.  
    // 
    // - ASC: ascending.  
    // - DESC: descending.
    shared_ptr<string> order_ {};
    // The page number of the current page in a paged query.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of items displayed per page. Default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The resource ID to be deployed.
    shared_ptr<string> resourceId_ {};
    // The snapshot ID of the resource to be deployed. If this parameter is provided, the system deploys directly based on this snapshot. If it is not provided, the system first creates a new snapshot for the resource and then executes the deployment.
    shared_ptr<string> resourceSnapshotId_ {};
    // The resource type to be deployed. Valid values:  
    // * Flow: A project of the pipeline pattern  
    // * Code: A project of the Code pattern
    shared_ptr<string> resourceType_ {};
    // The service name. Fuzzy search by service name is supported.
    shared_ptr<string> serviceName_ {};
    // Field used for sorting in paged queries. The default field is GmtCreateTime. Valid values are as follows:  
    // 
    // * GmtCreateTime (default): sort by creation time.  
    // * GmtModifiedTime: sort by updated time.
    shared_ptr<string> sortBy_ {};
    // Workspace ID. For information about how to obtain a workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
