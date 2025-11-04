// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTADINSERTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAdInsertionsResponseBodyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAdInsertionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdInsertionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdInsertionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAdInsertionsResponseBody() = default ;
    ListAdInsertionsResponseBody(const ListAdInsertionsResponseBody &) = default ;
    ListAdInsertionsResponseBody(ListAdInsertionsResponseBody &&) = default ;
    ListAdInsertionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdInsertionsResponseBody() = default ;
    ListAdInsertionsResponseBody& operator=(const ListAdInsertionsResponseBody &) = default ;
    ListAdInsertionsResponseBody& operator=(ListAdInsertionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->sortBy_ == nullptr && return this->totalCount_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListAdInsertionsResponseBodyConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListAdInsertionsResponseBodyConfigs>) };
    inline vector<ListAdInsertionsResponseBodyConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<ListAdInsertionsResponseBodyConfigs>) };
    inline ListAdInsertionsResponseBody& setConfigs(const vector<ListAdInsertionsResponseBodyConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListAdInsertionsResponseBody& setConfigs(vector<ListAdInsertionsResponseBodyConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAdInsertionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAdInsertionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListAdInsertionsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAdInsertionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAdInsertionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListAdInsertionsResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAdInsertionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Array
    std::shared_ptr<vector<ListAdInsertionsResponseBodyConfigs>> configs_ = nullptr;
    // The maximum number of entries to retrieve in a subsequent request. If this parameter is used, the pagination parameters become invalid.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used in the next request to retrieve a new page of results. If this parameter is used, the pagination parameters become invalid.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sorting order of the configurations by creation time. asc: ascending. desc: descending.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
