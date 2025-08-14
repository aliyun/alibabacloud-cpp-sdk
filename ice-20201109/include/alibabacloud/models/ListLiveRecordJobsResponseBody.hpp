// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRecordJobsResponseBodyLiveRecordJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordJobs, liveRecordJobs_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordJobs, liveRecordJobs_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveRecordJobsResponseBody() = default ;
    ListLiveRecordJobsResponseBody(const ListLiveRecordJobsResponseBody &) = default ;
    ListLiveRecordJobsResponseBody(ListLiveRecordJobsResponseBody &&) = default ;
    ListLiveRecordJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordJobsResponseBody() = default ;
    ListLiveRecordJobsResponseBody& operator=(const ListLiveRecordJobsResponseBody &) = default ;
    ListLiveRecordJobsResponseBody& operator=(ListLiveRecordJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveRecordJobs_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->sortBy_ != nullptr && this->totalCount_ != nullptr; };
    // liveRecordJobs Field Functions 
    bool hasLiveRecordJobs() const { return this->liveRecordJobs_ != nullptr;};
    void deleteLiveRecordJobs() { this->liveRecordJobs_ = nullptr;};
    inline const vector<ListLiveRecordJobsResponseBodyLiveRecordJobs> & liveRecordJobs() const { DARABONBA_PTR_GET_CONST(liveRecordJobs_, vector<ListLiveRecordJobsResponseBodyLiveRecordJobs>) };
    inline vector<ListLiveRecordJobsResponseBodyLiveRecordJobs> liveRecordJobs() { DARABONBA_PTR_GET(liveRecordJobs_, vector<ListLiveRecordJobsResponseBodyLiveRecordJobs>) };
    inline ListLiveRecordJobsResponseBody& setLiveRecordJobs(const vector<ListLiveRecordJobsResponseBodyLiveRecordJobs> & liveRecordJobs) { DARABONBA_PTR_SET_VALUE(liveRecordJobs_, liveRecordJobs) };
    inline ListLiveRecordJobsResponseBody& setLiveRecordJobs(vector<ListLiveRecordJobsResponseBodyLiveRecordJobs> && liveRecordJobs) { DARABONBA_PTR_SET_RVALUE(liveRecordJobs_, liveRecordJobs) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordJobsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLiveRecordJobsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordJobsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLiveRecordJobsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of live stream recording jobs.
    std::shared_ptr<vector<ListLiveRecordJobsResponseBodyLiveRecordJobs>> liveRecordJobs_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
