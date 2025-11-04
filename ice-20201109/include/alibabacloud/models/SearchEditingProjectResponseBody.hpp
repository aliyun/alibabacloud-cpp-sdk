// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchEditingProjectResponseBodyProjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody(SearchEditingProjectResponseBody &&) = default ;
    SearchEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody& operator=(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody& operator=(SearchEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->projectList_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline SearchEditingProjectResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchEditingProjectResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<SearchEditingProjectResponseBodyProjectList> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<SearchEditingProjectResponseBodyProjectList>) };
    inline vector<SearchEditingProjectResponseBodyProjectList> projectList() { DARABONBA_PTR_GET(projectList_, vector<SearchEditingProjectResponseBodyProjectList>) };
    inline SearchEditingProjectResponseBody& setProjectList(const vector<SearchEditingProjectResponseBodyProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline SearchEditingProjectResponseBody& setProjectList(vector<SearchEditingProjectResponseBodyProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SearchEditingProjectResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned on a single page. The value is set to the maximum number of entries returned on each page except for the last page.
    // 
    // Examples:
    // 
    // Valid example: 10,10,5. Invalid example: 10,5,10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The queried online editing projects.
    std::shared_ptr<vector<SearchEditingProjectResponseBodyProjectList>> projectList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Optional. The total number of entries returned. By default, this parameter is not returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
