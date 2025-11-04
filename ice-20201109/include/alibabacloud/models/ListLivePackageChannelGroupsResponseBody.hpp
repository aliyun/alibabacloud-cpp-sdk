// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEPACKAGECHANNELGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLivePackageChannelGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivePackageChannelGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageChannelGroups, livePackageChannelGroups_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivePackageChannelGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageChannelGroups, livePackageChannelGroups_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLivePackageChannelGroupsResponseBody() = default ;
    ListLivePackageChannelGroupsResponseBody(const ListLivePackageChannelGroupsResponseBody &) = default ;
    ListLivePackageChannelGroupsResponseBody(ListLivePackageChannelGroupsResponseBody &&) = default ;
    ListLivePackageChannelGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivePackageChannelGroupsResponseBody() = default ;
    ListLivePackageChannelGroupsResponseBody& operator=(const ListLivePackageChannelGroupsResponseBody &) = default ;
    ListLivePackageChannelGroupsResponseBody& operator=(ListLivePackageChannelGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageChannelGroups_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->sortBy_ == nullptr && return this->totalCount_ == nullptr; };
    // livePackageChannelGroups Field Functions 
    bool hasLivePackageChannelGroups() const { return this->livePackageChannelGroups_ != nullptr;};
    void deleteLivePackageChannelGroups() { this->livePackageChannelGroups_ = nullptr;};
    inline const vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups> & livePackageChannelGroups() const { DARABONBA_PTR_GET_CONST(livePackageChannelGroups_, vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups>) };
    inline vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups> livePackageChannelGroups() { DARABONBA_PTR_GET(livePackageChannelGroups_, vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups>) };
    inline ListLivePackageChannelGroupsResponseBody& setLivePackageChannelGroups(const vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups> & livePackageChannelGroups) { DARABONBA_PTR_SET_VALUE(livePackageChannelGroups_, livePackageChannelGroups) };
    inline ListLivePackageChannelGroupsResponseBody& setLivePackageChannelGroups(vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups> && livePackageChannelGroups) { DARABONBA_PTR_SET_RVALUE(livePackageChannelGroups_, livePackageChannelGroups) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivePackageChannelGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLivePackageChannelGroupsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLivePackageChannelGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The channel groups returned.
    std::shared_ptr<vector<ListLivePackageChannelGroupsResponseBodyLivePackageChannelGroups>> livePackageChannelGroups_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sort order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
