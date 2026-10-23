// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListWorkflowInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessId, businessId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(initiator, initiator_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessId, businessId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(initiator, initiator_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListWorkflowInstancesRequest() = default ;
    ListWorkflowInstancesRequest(const ListWorkflowInstancesRequest &) = default ;
    ListWorkflowInstancesRequest(ListWorkflowInstancesRequest &&) = default ;
    ListWorkflowInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstancesRequest() = default ;
    ListWorkflowInstancesRequest& operator=(const ListWorkflowInstancesRequest &) = default ;
    ListWorkflowInstancesRequest& operator=(ListWorkflowInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessId_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->initiator_ == nullptr && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->sortBy_ == nullptr && this->sortOrder_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr; };
    // businessId Field Functions 
    bool hasBusinessId() const { return this->businessId_ != nullptr;};
    void deleteBusinessId() { this->businessId_ = nullptr;};
    inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
    inline ListWorkflowInstancesRequest& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListWorkflowInstancesRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // initiator Field Functions 
    bool hasInitiator() const { return this->initiator_ != nullptr;};
    void deleteInitiator() { this->initiator_ = nullptr;};
    inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
    inline ListWorkflowInstancesRequest& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListWorkflowInstancesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListWorkflowInstancesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWorkflowInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListWorkflowInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListWorkflowInstancesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkflowInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListWorkflowInstancesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The exact requirement ID.
    shared_ptr<string> businessId_ {};
    // The collaboration space ID.
    // 
    // This parameter is required.
    shared_ptr<string> collaborationGroupId_ {};
    // The exact external initiator tag.
    shared_ptr<string> initiator_ {};
    // The keyword for the title or requirement ID.
    shared_ptr<string> keyword_ {};
    // The page number. Pages start from 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // The sort field.
    shared_ptr<string> sortBy_ {};
    // The sort order.
    shared_ptr<string> sortOrder_ {};
    // Filters the instances by status. Valid values: Running, Completed, Failed, and Terminated.
    shared_ptr<string> status_ {};
    // The tenant ID. This is a common parameter. If you use winnexo-cli, pass this parameter explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
