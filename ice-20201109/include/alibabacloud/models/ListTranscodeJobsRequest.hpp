// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_TO_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndOfCreateTime, endOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentJobId, parentJobId_);
      DARABONBA_PTR_FROM_JSON(StartOfCreateTime, startOfCreateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTranscodeJobsRequest() = default ;
    ListTranscodeJobsRequest(const ListTranscodeJobsRequest &) = default ;
    ListTranscodeJobsRequest(ListTranscodeJobsRequest &&) = default ;
    ListTranscodeJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsRequest() = default ;
    ListTranscodeJobsRequest& operator=(const ListTranscodeJobsRequest &) = default ;
    ListTranscodeJobsRequest& operator=(ListTranscodeJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endOfCreateTime_ == nullptr
        && this->nextPageToken_ == nullptr && this->orderBy_ == nullptr && this->pageSize_ == nullptr && this->parentJobId_ == nullptr && this->startOfCreateTime_ == nullptr
        && this->status_ == nullptr; };
    // endOfCreateTime Field Functions 
    bool hasEndOfCreateTime() const { return this->endOfCreateTime_ != nullptr;};
    void deleteEndOfCreateTime() { this->endOfCreateTime_ = nullptr;};
    inline string getEndOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endOfCreateTime_, "") };
    inline ListTranscodeJobsRequest& setEndOfCreateTime(string endOfCreateTime) { DARABONBA_PTR_SET_VALUE(endOfCreateTime_, endOfCreateTime) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListTranscodeJobsRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListTranscodeJobsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTranscodeJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentJobId Field Functions 
    bool hasParentJobId() const { return this->parentJobId_ != nullptr;};
    void deleteParentJobId() { this->parentJobId_ = nullptr;};
    inline string getParentJobId() const { DARABONBA_PTR_GET_DEFAULT(parentJobId_, "") };
    inline ListTranscodeJobsRequest& setParentJobId(string parentJobId) { DARABONBA_PTR_SET_VALUE(parentJobId_, parentJobId) };


    // startOfCreateTime Field Functions 
    bool hasStartOfCreateTime() const { return this->startOfCreateTime_ != nullptr;};
    void deleteStartOfCreateTime() { this->startOfCreateTime_ = nullptr;};
    inline string getStartOfCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startOfCreateTime_, "") };
    inline ListTranscodeJobsRequest& setStartOfCreateTime(string startOfCreateTime) { DARABONBA_PTR_SET_VALUE(startOfCreateTime_, startOfCreateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTranscodeJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end of the time range to filter jobs by their creation time. The time must be in UTC and formatted as `yyyy-MM-ddTHH:mm:ssZ`.
    shared_ptr<string> endOfCreateTime_ {};
    // The token for the next page of results. Not required for the first page.
    shared_ptr<string> nextPageToken_ {};
    // The sort order. Valid values:
    // 
    // - `CreateTimeDesc`: Sorts by creation time in descending order.
    // 
    // - `CreateTimeAsc`: Sorts by creation time in ascending order.
    shared_ptr<string> orderBy_ {};
    // The number of entries per page. Valid values: 1-100. Default: 20.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by job ID.
    shared_ptr<string> parentJobId_ {};
    // The start of the time range to filter jobs by their creation time. The time must be in UTC and formatted as `yyyy-MM-ddTHH:mm:ssZ`.
    shared_ptr<string> startOfCreateTime_ {};
    // The job status. Valid values:
    // 
    // - `Init`: Submitted.
    // 
    // - `Success`: Succeeded.
    // 
    // - `Fail`: Failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
