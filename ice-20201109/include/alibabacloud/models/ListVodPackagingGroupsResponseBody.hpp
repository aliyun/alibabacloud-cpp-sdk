// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODPACKAGINGGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVODPACKAGINGGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VodPackagingGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListVodPackagingGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodPackagingGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PackagingGroups, packagingGroups_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodPackagingGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PackagingGroups, packagingGroups_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVodPackagingGroupsResponseBody() = default ;
    ListVodPackagingGroupsResponseBody(const ListVodPackagingGroupsResponseBody &) = default ;
    ListVodPackagingGroupsResponseBody(ListVodPackagingGroupsResponseBody &&) = default ;
    ListVodPackagingGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodPackagingGroupsResponseBody() = default ;
    ListVodPackagingGroupsResponseBody& operator=(const ListVodPackagingGroupsResponseBody &) = default ;
    ListVodPackagingGroupsResponseBody& operator=(ListVodPackagingGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->packagingGroups_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->sortBy_ != nullptr && this->totalCount_ != nullptr; };
    // packagingGroups Field Functions 
    bool hasPackagingGroups() const { return this->packagingGroups_ != nullptr;};
    void deletePackagingGroups() { this->packagingGroups_ = nullptr;};
    inline const vector<VodPackagingGroup> & packagingGroups() const { DARABONBA_PTR_GET_CONST(packagingGroups_, vector<VodPackagingGroup>) };
    inline vector<VodPackagingGroup> packagingGroups() { DARABONBA_PTR_GET(packagingGroups_, vector<VodPackagingGroup>) };
    inline ListVodPackagingGroupsResponseBody& setPackagingGroups(const vector<VodPackagingGroup> & packagingGroups) { DARABONBA_PTR_SET_VALUE(packagingGroups_, packagingGroups) };
    inline ListVodPackagingGroupsResponseBody& setPackagingGroups(vector<VodPackagingGroup> && packagingGroups) { DARABONBA_PTR_SET_RVALUE(packagingGroups_, packagingGroups) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListVodPackagingGroupsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVodPackagingGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVodPackagingGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListVodPackagingGroupsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVodPackagingGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The packaging groups.
    std::shared_ptr<vector<VodPackagingGroup>> packagingGroups_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sorting order of the packaging groups based on the time when they were created. Valid values:
    // 
    // *   desc: descending order.
    // *   asc: ascending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
