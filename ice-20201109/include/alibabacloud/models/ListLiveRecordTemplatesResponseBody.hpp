// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRecordTemplatesResponseBodyRecordTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordTemplateList, recordTemplateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordTemplateList, recordTemplateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveRecordTemplatesResponseBody() = default ;
    ListLiveRecordTemplatesResponseBody(const ListLiveRecordTemplatesResponseBody &) = default ;
    ListLiveRecordTemplatesResponseBody(ListLiveRecordTemplatesResponseBody &&) = default ;
    ListLiveRecordTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordTemplatesResponseBody() = default ;
    ListLiveRecordTemplatesResponseBody& operator=(const ListLiveRecordTemplatesResponseBody &) = default ;
    ListLiveRecordTemplatesResponseBody& operator=(ListLiveRecordTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->recordTemplateList_ == nullptr && return this->requestId_ == nullptr && return this->sortBy_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordTemplateList Field Functions 
    bool hasRecordTemplateList() const { return this->recordTemplateList_ != nullptr;};
    void deleteRecordTemplateList() { this->recordTemplateList_ = nullptr;};
    inline const vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList> & recordTemplateList() const { DARABONBA_PTR_GET_CONST(recordTemplateList_, vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList>) };
    inline vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList> recordTemplateList() { DARABONBA_PTR_GET(recordTemplateList_, vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList>) };
    inline ListLiveRecordTemplatesResponseBody& setRecordTemplateList(const vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList> & recordTemplateList) { DARABONBA_PTR_SET_VALUE(recordTemplateList_, recordTemplateList) };
    inline ListLiveRecordTemplatesResponseBody& setRecordTemplateList(vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList> && recordTemplateList) { DARABONBA_PTR_SET_RVALUE(recordTemplateList_, recordTemplateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordTemplatesResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLiveRecordTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The list of recording templates.
    std::shared_ptr<vector<ListLiveRecordTemplatesResponseBodyRecordTemplateList>> recordTemplateList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   asc: sorts the query results in ascending order.
    // *   desc: sorts the query results in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
