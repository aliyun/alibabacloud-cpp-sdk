// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMULTIACCOUNTRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMultiAccountResourcesResponseBodyFilters.hpp>
#include <alibabacloud/models/SearchMultiAccountResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class SearchMultiAccountResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMultiAccountResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMultiAccountResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    SearchMultiAccountResourcesResponseBody() = default ;
    SearchMultiAccountResourcesResponseBody(const SearchMultiAccountResourcesResponseBody &) = default ;
    SearchMultiAccountResourcesResponseBody(SearchMultiAccountResourcesResponseBody &&) = default ;
    SearchMultiAccountResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMultiAccountResourcesResponseBody() = default ;
    SearchMultiAccountResourcesResponseBody& operator=(const SearchMultiAccountResourcesResponseBody &) = default ;
    SearchMultiAccountResourcesResponseBody& operator=(SearchMultiAccountResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filters_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->resources_ != nullptr && this->scope_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<SearchMultiAccountResourcesResponseBodyFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<SearchMultiAccountResourcesResponseBodyFilters>) };
    inline vector<SearchMultiAccountResourcesResponseBodyFilters> filters() { DARABONBA_PTR_GET(filters_, vector<SearchMultiAccountResourcesResponseBodyFilters>) };
    inline SearchMultiAccountResourcesResponseBody& setFilters(const vector<SearchMultiAccountResourcesResponseBodyFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline SearchMultiAccountResourcesResponseBody& setFilters(vector<SearchMultiAccountResourcesResponseBodyFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchMultiAccountResourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchMultiAccountResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMultiAccountResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<SearchMultiAccountResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<SearchMultiAccountResourcesResponseBodyResources>) };
    inline vector<SearchMultiAccountResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<SearchMultiAccountResourcesResponseBodyResources>) };
    inline SearchMultiAccountResourcesResponseBody& setResources(const vector<SearchMultiAccountResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline SearchMultiAccountResourcesResponseBody& setResources(vector<SearchMultiAccountResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline SearchMultiAccountResourcesResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<SearchMultiAccountResourcesResponseBodyFilters>> filters_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resources.
    std::shared_ptr<vector<SearchMultiAccountResourcesResponseBodyResources>> resources_ = nullptr;
    // The search scope.
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched.
    // *   ID of a folder: Resources within all members in the folder are searched.
    // *   ID of a member: Resources within the member are searched.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
