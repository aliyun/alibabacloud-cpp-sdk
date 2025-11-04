// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDITINGPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEditingProjectsResponseBodyProjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListEditingProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEditingProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEditingProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEditingProjectsResponseBody() = default ;
    ListEditingProjectsResponseBody(const ListEditingProjectsResponseBody &) = default ;
    ListEditingProjectsResponseBody(ListEditingProjectsResponseBody &&) = default ;
    ListEditingProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEditingProjectsResponseBody() = default ;
    ListEditingProjectsResponseBody& operator=(const ListEditingProjectsResponseBody &) = default ;
    ListEditingProjectsResponseBody& operator=(ListEditingProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->projectList_ == nullptr && return this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEditingProjectsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEditingProjectsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<ListEditingProjectsResponseBodyProjectList> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<ListEditingProjectsResponseBodyProjectList>) };
    inline vector<ListEditingProjectsResponseBodyProjectList> projectList() { DARABONBA_PTR_GET(projectList_, vector<ListEditingProjectsResponseBodyProjectList>) };
    inline ListEditingProjectsResponseBody& setProjectList(const vector<ListEditingProjectsResponseBodyProjectList> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline ListEditingProjectsResponseBody& setProjectList(vector<ListEditingProjectsResponseBodyProjectList> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEditingProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The queried online editing projects.
    std::shared_ptr<vector<ListEditingProjectsResponseBodyProjectList>> projectList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
