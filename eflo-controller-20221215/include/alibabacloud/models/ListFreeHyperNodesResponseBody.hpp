// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFreeHyperNodesResponseBodyHyperNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFreeHyperNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFreeHyperNodesResponseBody() = default ;
    ListFreeHyperNodesResponseBody(const ListFreeHyperNodesResponseBody &) = default ;
    ListFreeHyperNodesResponseBody(ListFreeHyperNodesResponseBody &&) = default ;
    ListFreeHyperNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeHyperNodesResponseBody() = default ;
    ListFreeHyperNodesResponseBody& operator=(const ListFreeHyperNodesResponseBody &) = default ;
    ListFreeHyperNodesResponseBody& operator=(ListFreeHyperNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hyperNodes_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // hyperNodes Field Functions 
    bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
    void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
    inline const vector<ListFreeHyperNodesResponseBodyHyperNodes> & hyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<ListFreeHyperNodesResponseBodyHyperNodes>) };
    inline vector<ListFreeHyperNodesResponseBodyHyperNodes> hyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<ListFreeHyperNodesResponseBodyHyperNodes>) };
    inline ListFreeHyperNodesResponseBody& setHyperNodes(const vector<ListFreeHyperNodesResponseBodyHyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
    inline ListFreeHyperNodesResponseBody& setHyperNodes(vector<ListFreeHyperNodesResponseBodyHyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFreeHyperNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFreeHyperNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFreeHyperNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListFreeHyperNodesResponseBodyHyperNodes>> hyperNodes_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
