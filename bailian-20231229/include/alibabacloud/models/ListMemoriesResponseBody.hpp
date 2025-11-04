// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMemoriesResponseBodyMemories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListMemoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memories, memories_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memories, memories_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListMemoriesResponseBody() = default ;
    ListMemoriesResponseBody(const ListMemoriesResponseBody &) = default ;
    ListMemoriesResponseBody(ListMemoriesResponseBody &&) = default ;
    ListMemoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoriesResponseBody() = default ;
    ListMemoriesResponseBody& operator=(const ListMemoriesResponseBody &) = default ;
    ListMemoriesResponseBody& operator=(ListMemoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->memories_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->workspaceId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memories Field Functions 
    bool hasMemories() const { return this->memories_ != nullptr;};
    void deleteMemories() { this->memories_ = nullptr;};
    inline const vector<ListMemoriesResponseBodyMemories> & memories() const { DARABONBA_PTR_GET_CONST(memories_, vector<ListMemoriesResponseBodyMemories>) };
    inline vector<ListMemoriesResponseBodyMemories> memories() { DARABONBA_PTR_GET(memories_, vector<ListMemoriesResponseBodyMemories>) };
    inline ListMemoriesResponseBody& setMemories(const vector<ListMemoriesResponseBodyMemories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
    inline ListMemoriesResponseBody& setMemories(vector<ListMemoriesResponseBodyMemories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMemoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListMemoriesResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<vector<ListMemoriesResponseBodyMemories>> memories_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
