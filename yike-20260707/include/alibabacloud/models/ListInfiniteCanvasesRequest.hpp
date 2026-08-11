// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINFINITECANVASESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINFINITECANVASESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class ListInfiniteCanvasesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInfiniteCanvasesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInfiniteCanvasesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListInfiniteCanvasesRequest() = default ;
    ListInfiniteCanvasesRequest(const ListInfiniteCanvasesRequest &) = default ;
    ListInfiniteCanvasesRequest(ListInfiniteCanvasesRequest &&) = default ;
    ListInfiniteCanvasesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInfiniteCanvasesRequest() = default ;
    ListInfiniteCanvasesRequest& operator=(const ListInfiniteCanvasesRequest &) = default ;
    ListInfiniteCanvasesRequest& operator=(ListInfiniteCanvasesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->productionId_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr
        && this->workspaceId_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListInfiniteCanvasesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListInfiniteCanvasesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInfiniteCanvasesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline ListInfiniteCanvasesRequest& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListInfiniteCanvasesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListInfiniteCanvasesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListInfiniteCanvasesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The keyword for querying site monitoring tasks. Supports fuzzy match based on task name or task address.
    shared_ptr<string> keyword_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> productionId_ {};
    // The sort field and sort order. Separate multiple values with commas (,).
    shared_ptr<string> sortBy_ {};
    // The sort direction.
    // 
    // Valid values:
    // - Asc: Ascending order.
    // - Desc: Descending order.
    // 
    // Default value: Desc.
    shared_ptr<string> sortOrder_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
