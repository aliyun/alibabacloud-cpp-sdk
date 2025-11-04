// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEPACKAGEORIGINENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEPACKAGEORIGINENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLivePackageOriginEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLivePackageOriginEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoints, livePackageOriginEndpoints_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLivePackageOriginEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoints, livePackageOriginEndpoints_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLivePackageOriginEndpointsResponseBody() = default ;
    ListLivePackageOriginEndpointsResponseBody(const ListLivePackageOriginEndpointsResponseBody &) = default ;
    ListLivePackageOriginEndpointsResponseBody(ListLivePackageOriginEndpointsResponseBody &&) = default ;
    ListLivePackageOriginEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLivePackageOriginEndpointsResponseBody() = default ;
    ListLivePackageOriginEndpointsResponseBody& operator=(const ListLivePackageOriginEndpointsResponseBody &) = default ;
    ListLivePackageOriginEndpointsResponseBody& operator=(ListLivePackageOriginEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageOriginEndpoints_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->sortBy_ == nullptr && return this->totalCount_ == nullptr; };
    // livePackageOriginEndpoints Field Functions 
    bool hasLivePackageOriginEndpoints() const { return this->livePackageOriginEndpoints_ != nullptr;};
    void deleteLivePackageOriginEndpoints() { this->livePackageOriginEndpoints_ = nullptr;};
    inline const vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints> & livePackageOriginEndpoints() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoints_, vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints>) };
    inline vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints> livePackageOriginEndpoints() { DARABONBA_PTR_GET(livePackageOriginEndpoints_, vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints>) };
    inline ListLivePackageOriginEndpointsResponseBody& setLivePackageOriginEndpoints(const vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints> & livePackageOriginEndpoints) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoints_, livePackageOriginEndpoints) };
    inline ListLivePackageOriginEndpointsResponseBody& setLivePackageOriginEndpoints(vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints> && livePackageOriginEndpoints) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoints_, livePackageOriginEndpoints) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLivePackageOriginEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLivePackageOriginEndpointsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLivePackageOriginEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The origin endpoints returned.
    std::shared_ptr<vector<ListLivePackageOriginEndpointsResponseBodyLivePackageOriginEndpoints>> livePackageOriginEndpoints_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sort order. Valid values: `asc` and `desc` (default).
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
