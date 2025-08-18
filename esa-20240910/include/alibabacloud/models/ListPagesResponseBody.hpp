// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPagesResponseBodyPages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListPagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListPagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListPagesResponseBody() = default ;
    ListPagesResponseBody(const ListPagesResponseBody &) = default ;
    ListPagesResponseBody(ListPagesResponseBody &&) = default ;
    ListPagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPagesResponseBody() = default ;
    ListPagesResponseBody& operator=(const ListPagesResponseBody &) = default ;
    ListPagesResponseBody& operator=(ListPagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->pages_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->usage_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline const vector<ListPagesResponseBodyPages> & pages() const { DARABONBA_PTR_GET_CONST(pages_, vector<ListPagesResponseBodyPages>) };
    inline vector<ListPagesResponseBodyPages> pages() { DARABONBA_PTR_GET(pages_, vector<ListPagesResponseBodyPages>) };
    inline ListPagesResponseBody& setPages(const vector<ListPagesResponseBodyPages> & pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };
    inline ListPagesResponseBody& setPages(vector<ListPagesResponseBodyPages> && pages) { DARABONBA_PTR_SET_RVALUE(pages_, pages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline ListPagesResponseBody& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The page number returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The custom error pages. Each element in the array contains error page-specific information.
    std::shared_ptr<vector<ListPagesResponseBodyPages>> pages_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of custom error pages after filtering.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of custom error pages that you created.
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
