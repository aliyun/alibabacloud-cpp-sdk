// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Memories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Memories& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(memoryId, memoryId_);
      };
      friend void from_json(const Darabonba::Json& j, Memories& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(memoryId, memoryId_);
      };
      Memories() = default ;
      Memories(const Memories &) = default ;
      Memories(Memories &&) = default ;
      Memories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Memories() = default ;
      Memories& operator=(const Memories &) = default ;
      Memories& operator=(Memories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->memoryId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Memories& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // memoryId Field Functions 
      bool hasMemoryId() const { return this->memoryId_ != nullptr;};
      void deleteMemoryId() { this->memoryId_ = nullptr;};
      inline string getMemoryId() const { DARABONBA_PTR_GET_DEFAULT(memoryId_, "") };
      inline Memories& setMemoryId(string memoryId) { DARABONBA_PTR_SET_VALUE(memoryId_, memoryId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> memoryId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->memories_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->workspaceId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memories Field Functions 
    bool hasMemories() const { return this->memories_ != nullptr;};
    void deleteMemories() { this->memories_ = nullptr;};
    inline const vector<ListMemoriesResponseBody::Memories> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<ListMemoriesResponseBody::Memories>) };
    inline vector<ListMemoriesResponseBody::Memories> getMemories() { DARABONBA_PTR_GET(memories_, vector<ListMemoriesResponseBody::Memories>) };
    inline ListMemoriesResponseBody& setMemories(const vector<ListMemoriesResponseBody::Memories> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
    inline ListMemoriesResponseBody& setMemories(vector<ListMemoriesResponseBody::Memories> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMemoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListMemoriesResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<vector<ListMemoriesResponseBody::Memories>> memories_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
