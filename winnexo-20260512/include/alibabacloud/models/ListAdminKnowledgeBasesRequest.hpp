// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADMINKNOWLEDGEBASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADMINKNOWLEDGEBASESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAdminKnowledgeBasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdminKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sortField, sortField_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(sourceTypes, sourceTypes_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdminKnowledgeBasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sortField, sortField_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(sourceTypes, sourceTypes_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAdminKnowledgeBasesRequest() = default ;
    ListAdminKnowledgeBasesRequest(const ListAdminKnowledgeBasesRequest &) = default ;
    ListAdminKnowledgeBasesRequest(ListAdminKnowledgeBasesRequest &&) = default ;
    ListAdminKnowledgeBasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdminKnowledgeBasesRequest() = default ;
    ListAdminKnowledgeBasesRequest& operator=(const ListAdminKnowledgeBasesRequest &) = default ;
    ListAdminKnowledgeBasesRequest& operator=(ListAdminKnowledgeBasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->sortField_ == nullptr && this->sortOrder_ == nullptr
        && this->sourceTypes_ == nullptr && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListAdminKnowledgeBasesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAdminKnowledgeBasesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAdminKnowledgeBasesRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAdminKnowledgeBasesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListAdminKnowledgeBasesRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListAdminKnowledgeBasesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // sourceTypes Field Functions 
    bool hasSourceTypes() const { return this->sourceTypes_ != nullptr;};
    void deleteSourceTypes() { this->sourceTypes_ = nullptr;};
    inline const vector<string> & getSourceTypes() const { DARABONBA_PTR_GET_CONST(sourceTypes_, vector<string>) };
    inline vector<string> getSourceTypes() { DARABONBA_PTR_GET(sourceTypes_, vector<string>) };
    inline ListAdminKnowledgeBasesRequest& setSourceTypes(const vector<string> & sourceTypes) { DARABONBA_PTR_SET_VALUE(sourceTypes_, sourceTypes) };
    inline ListAdminKnowledgeBasesRequest& setSourceTypes(vector<string> && sourceTypes) { DARABONBA_PTR_SET_RVALUE(sourceTypes_, sourceTypes) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAdminKnowledgeBasesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The keyword for fuzzy search on form component data.
    shared_ptr<string> keyword_ {};
    // The page number. Default value: 1. Pages start from page 1.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The field by which the results are sorted. Valid values:
    // 
    // - event_time: the event creation time.
    // - event_execute_start_time: the event execution time.
    // - event_execute_finish_time: the event completion time.
    shared_ptr<string> sortField_ {};
    // The sort order. This parameter takes effect only when sortBy is specified. Valid values: ASC, DESC (case-insensitive).
    shared_ptr<string> sortOrder_ {};
    // The list of source types.
    shared_ptr<vector<string>> sourceTypes_ {};
    // The tenant ID to which the task belongs.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
