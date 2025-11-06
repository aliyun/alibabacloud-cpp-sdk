// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListQuotasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(HasResource, hasResource_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LayoutMode, layoutMode_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_TO_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(HasResource, hasResource_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LayoutMode, layoutMode_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaIds, quotaIds_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListQuotasRequest() = default ;
    ListQuotasRequest(const ListQuotasRequest &) = default ;
    ListQuotasRequest(ListQuotasRequest &&) = default ;
    ListQuotasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasRequest() = default ;
    ListQuotasRequest& operator=(const ListQuotasRequest &) = default ;
    ListQuotasRequest& operator=(ListQuotasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->hasResource_ == nullptr && return this->labels_ == nullptr && return this->layoutMode_ == nullptr && return this->order_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->parentQuotaId_ == nullptr && return this->quotaIds_ == nullptr && return this->quotaName_ == nullptr && return this->resourceType_ == nullptr
        && return this->sortBy_ == nullptr && return this->statuses_ == nullptr && return this->verbose_ == nullptr && return this->versions_ == nullptr && return this->workspaceIds_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListQuotasRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // hasResource Field Functions 
    bool hasHasResource() const { return this->hasResource_ != nullptr;};
    void deleteHasResource() { this->hasResource_ = nullptr;};
    inline string hasResource() const { DARABONBA_PTR_GET_DEFAULT(hasResource_, "") };
    inline ListQuotasRequest& setHasResource(string hasResource) { DARABONBA_PTR_SET_VALUE(hasResource_, hasResource) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListQuotasRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // layoutMode Field Functions 
    bool hasLayoutMode() const { return this->layoutMode_ != nullptr;};
    void deleteLayoutMode() { this->layoutMode_ = nullptr;};
    inline string layoutMode() const { DARABONBA_PTR_GET_DEFAULT(layoutMode_, "") };
    inline ListQuotasRequest& setLayoutMode(string layoutMode) { DARABONBA_PTR_SET_VALUE(layoutMode_, layoutMode) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListQuotasRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQuotasRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQuotasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentQuotaId Field Functions 
    bool hasParentQuotaId() const { return this->parentQuotaId_ != nullptr;};
    void deleteParentQuotaId() { this->parentQuotaId_ = nullptr;};
    inline string parentQuotaId() const { DARABONBA_PTR_GET_DEFAULT(parentQuotaId_, "") };
    inline ListQuotasRequest& setParentQuotaId(string parentQuotaId) { DARABONBA_PTR_SET_VALUE(parentQuotaId_, parentQuotaId) };


    // quotaIds Field Functions 
    bool hasQuotaIds() const { return this->quotaIds_ != nullptr;};
    void deleteQuotaIds() { this->quotaIds_ = nullptr;};
    inline string quotaIds() const { DARABONBA_PTR_GET_DEFAULT(quotaIds_, "") };
    inline ListQuotasRequest& setQuotaIds(string quotaIds) { DARABONBA_PTR_SET_VALUE(quotaIds_, quotaIds) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline ListQuotasRequest& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListQuotasRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListQuotasRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline string statuses() const { DARABONBA_PTR_GET_DEFAULT(statuses_, "") };
    inline ListQuotasRequest& setStatuses(string statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListQuotasRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string versions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline ListQuotasRequest& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string workspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline ListQuotasRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListQuotasRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> hasResource_ = nullptr;
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> layoutMode_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> parentQuotaId_ = nullptr;
    std::shared_ptr<string> quotaIds_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> statuses_ = nullptr;
    std::shared_ptr<bool> verbose_ = nullptr;
    std::shared_ptr<string> versions_ = nullptr;
    std::shared_ptr<string> workspaceIds_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
