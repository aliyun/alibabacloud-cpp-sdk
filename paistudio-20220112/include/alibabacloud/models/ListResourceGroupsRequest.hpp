// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_TO_JSON(HasResource, hasResource_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIDs, resourceGroupIDs_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ShowAll, showAll_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_FROM_JSON(HasResource, hasResource_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIDs, resourceGroupIDs_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ShowAll, showAll_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest(ListResourceGroupsRequest &&) = default ;
    ListResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsRequest() = default ;
    ListResourceGroupsRequest& operator=(const ListResourceGroupsRequest &) = default ;
    ListResourceGroupsRequest& operator=(ListResourceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computingResourceProvider_ == nullptr
        && this->hasResource_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->resourceGroupIDs_ == nullptr && this->resourceType_ == nullptr && this->showAll_ == nullptr && this->sortBy_ == nullptr && this->status_ == nullptr
        && this->versions_ == nullptr; };
    // computingResourceProvider Field Functions 
    bool hasComputingResourceProvider() const { return this->computingResourceProvider_ != nullptr;};
    void deleteComputingResourceProvider() { this->computingResourceProvider_ = nullptr;};
    inline string getComputingResourceProvider() const { DARABONBA_PTR_GET_DEFAULT(computingResourceProvider_, "") };
    inline ListResourceGroupsRequest& setComputingResourceProvider(string computingResourceProvider) { DARABONBA_PTR_SET_VALUE(computingResourceProvider_, computingResourceProvider) };


    // hasResource Field Functions 
    bool hasHasResource() const { return this->hasResource_ != nullptr;};
    void deleteHasResource() { this->hasResource_ = nullptr;};
    inline bool getHasResource() const { DARABONBA_PTR_GET_DEFAULT(hasResource_, false) };
    inline ListResourceGroupsRequest& setHasResource(bool hasResource) { DARABONBA_PTR_SET_VALUE(hasResource_, hasResource) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourceGroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListResourceGroupsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListResourceGroupsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListResourceGroupsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupIDs Field Functions 
    bool hasResourceGroupIDs() const { return this->resourceGroupIDs_ != nullptr;};
    void deleteResourceGroupIDs() { this->resourceGroupIDs_ = nullptr;};
    inline string getResourceGroupIDs() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIDs_, "") };
    inline ListResourceGroupsRequest& setResourceGroupIDs(string resourceGroupIDs) { DARABONBA_PTR_SET_VALUE(resourceGroupIDs_, resourceGroupIDs) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceGroupsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // showAll Field Functions 
    bool hasShowAll() const { return this->showAll_ != nullptr;};
    void deleteShowAll() { this->showAll_ = nullptr;};
    inline bool getShowAll() const { DARABONBA_PTR_GET_DEFAULT(showAll_, false) };
    inline ListResourceGroupsRequest& setShowAll(bool showAll) { DARABONBA_PTR_SET_VALUE(showAll_, showAll) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListResourceGroupsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline string getVersions() const { DARABONBA_PTR_GET_DEFAULT(versions_, "") };
    inline ListResourceGroupsRequest& setVersions(string versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };


  protected:
    shared_ptr<string> computingResourceProvider_ {};
    shared_ptr<bool> hasResource_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> order_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceGroupIDs_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<bool> showAll_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
