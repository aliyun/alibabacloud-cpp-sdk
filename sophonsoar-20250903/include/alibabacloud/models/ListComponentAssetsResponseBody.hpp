// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentAssetsResponseBodyComponentAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentAssets, componentAssets_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentAssetsResponseBody() = default ;
    ListComponentAssetsResponseBody(const ListComponentAssetsResponseBody &) = default ;
    ListComponentAssetsResponseBody(ListComponentAssetsResponseBody &&) = default ;
    ListComponentAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentAssetsResponseBody() = default ;
    ListComponentAssetsResponseBody& operator=(const ListComponentAssetsResponseBody &) = default ;
    ListComponentAssetsResponseBody& operator=(ListComponentAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentAssets_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr; };
    // componentAssets Field Functions 
    bool hasComponentAssets() const { return this->componentAssets_ != nullptr;};
    void deleteComponentAssets() { this->componentAssets_ = nullptr;};
    inline const vector<ListComponentAssetsResponseBodyComponentAssets> & componentAssets() const { DARABONBA_PTR_GET_CONST(componentAssets_, vector<ListComponentAssetsResponseBodyComponentAssets>) };
    inline vector<ListComponentAssetsResponseBodyComponentAssets> componentAssets() { DARABONBA_PTR_GET(componentAssets_, vector<ListComponentAssetsResponseBodyComponentAssets>) };
    inline ListComponentAssetsResponseBody& setComponentAssets(const vector<ListComponentAssetsResponseBodyComponentAssets> & componentAssets) { DARABONBA_PTR_SET_VALUE(componentAssets_, componentAssets) };
    inline ListComponentAssetsResponseBody& setComponentAssets(vector<ListComponentAssetsResponseBodyComponentAssets> && componentAssets) { DARABONBA_PTR_SET_RVALUE(componentAssets_, componentAssets) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentAssetsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentAssetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListComponentAssetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComponentAssetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentAssetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // List of assets.
    std::shared_ptr<vector<ListComponentAssetsResponseBodyComponentAssets>> componentAssets_ = nullptr;
    // The maximum number of results to return. Range: 0~100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token for the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Page number for paginated queries, with a default value of 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of items to return per page. Range: 1~100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and issue localization.
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of queried items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
