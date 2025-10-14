// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListsResponseBodyLists.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Lists, lists_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Lists, lists_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListListsResponseBody() = default ;
    ListListsResponseBody(const ListListsResponseBody &) = default ;
    ListListsResponseBody(ListListsResponseBody &&) = default ;
    ListListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListsResponseBody() = default ;
    ListListsResponseBody& operator=(const ListListsResponseBody &) = default ;
    ListListsResponseBody& operator=(ListListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lists_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->usage_ == nullptr; };
    // lists Field Functions 
    bool hasLists() const { return this->lists_ != nullptr;};
    void deleteLists() { this->lists_ = nullptr;};
    inline const vector<ListListsResponseBodyLists> & lists() const { DARABONBA_PTR_GET_CONST(lists_, vector<ListListsResponseBodyLists>) };
    inline vector<ListListsResponseBodyLists> lists() { DARABONBA_PTR_GET(lists_, vector<ListListsResponseBodyLists>) };
    inline ListListsResponseBody& setLists(const vector<ListListsResponseBodyLists> & lists) { DARABONBA_PTR_SET_VALUE(lists_, lists) };
    inline ListListsResponseBody& setLists(vector<ListListsResponseBodyLists> && lists) { DARABONBA_PTR_SET_RVALUE(lists_, lists) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline ListListsResponseBody& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The array that contains list information, including list data after paging.
    std::shared_ptr<vector<ListListsResponseBodyLists>> lists_ = nullptr;
    // The page number returned.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of filtered lists.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The number of created lists.
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
