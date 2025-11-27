// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Story.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryStoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stories, stories_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stories, stories_);
    };
    QueryStoriesResponseBody() = default ;
    QueryStoriesResponseBody(const QueryStoriesResponseBody &) = default ;
    QueryStoriesResponseBody(QueryStoriesResponseBody &&) = default ;
    QueryStoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStoriesResponseBody() = default ;
    QueryStoriesResponseBody& operator=(const QueryStoriesResponseBody &) = default ;
    QueryStoriesResponseBody& operator=(QueryStoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->stories_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryStoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryStoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stories Field Functions 
    bool hasStories() const { return this->stories_ != nullptr;};
    void deleteStories() { this->stories_ = nullptr;};
    inline const vector<Story> & stories() const { DARABONBA_PTR_GET_CONST(stories_, vector<Story>) };
    inline vector<Story> stories() { DARABONBA_PTR_GET(stories_, vector<Story>) };
    inline QueryStoriesResponseBody& setStories(const vector<Story> & stories) { DARABONBA_PTR_SET_VALUE(stories_, stories) };
    inline QueryStoriesResponseBody& setStories(vector<Story> && stories) { DARABONBA_PTR_SET_RVALUE(stories_, stories) };


  protected:
    // The pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stories.
    std::shared_ptr<vector<Story>> stories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
