// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMemoryNodesResponseBodyMemoryNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListMemoryNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memoryNodes, memoryNodes_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memoryNodes, memoryNodes_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMemoryNodesResponseBody() = default ;
    ListMemoryNodesResponseBody(const ListMemoryNodesResponseBody &) = default ;
    ListMemoryNodesResponseBody(ListMemoryNodesResponseBody &&) = default ;
    ListMemoryNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryNodesResponseBody() = default ;
    ListMemoryNodesResponseBody& operator=(const ListMemoryNodesResponseBody &) = default ;
    ListMemoryNodesResponseBody& operator=(ListMemoryNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->memoryNodes_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMemoryNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // memoryNodes Field Functions 
    bool hasMemoryNodes() const { return this->memoryNodes_ != nullptr;};
    void deleteMemoryNodes() { this->memoryNodes_ = nullptr;};
    inline const vector<ListMemoryNodesResponseBodyMemoryNodes> & memoryNodes() const { DARABONBA_PTR_GET_CONST(memoryNodes_, vector<ListMemoryNodesResponseBodyMemoryNodes>) };
    inline vector<ListMemoryNodesResponseBodyMemoryNodes> memoryNodes() { DARABONBA_PTR_GET(memoryNodes_, vector<ListMemoryNodesResponseBodyMemoryNodes>) };
    inline ListMemoryNodesResponseBody& setMemoryNodes(const vector<ListMemoryNodesResponseBodyMemoryNodes> & memoryNodes) { DARABONBA_PTR_SET_VALUE(memoryNodes_, memoryNodes) };
    inline ListMemoryNodesResponseBody& setMemoryNodes(vector<ListMemoryNodesResponseBodyMemoryNodes> && memoryNodes) { DARABONBA_PTR_SET_RVALUE(memoryNodes_, memoryNodes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMemoryNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoryNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMemoryNodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<vector<ListMemoryNodesResponseBodyMemoryNodes>> memoryNodes_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
