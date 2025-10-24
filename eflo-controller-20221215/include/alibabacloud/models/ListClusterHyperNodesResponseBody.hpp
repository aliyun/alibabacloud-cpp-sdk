// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERHYPERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERHYPERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterHyperNodesResponseBodyHyperNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListClusterHyperNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterHyperNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HyperNodes, hyperNodes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterHyperNodesResponseBody() = default ;
    ListClusterHyperNodesResponseBody(const ListClusterHyperNodesResponseBody &) = default ;
    ListClusterHyperNodesResponseBody(ListClusterHyperNodesResponseBody &&) = default ;
    ListClusterHyperNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterHyperNodesResponseBody() = default ;
    ListClusterHyperNodesResponseBody& operator=(const ListClusterHyperNodesResponseBody &) = default ;
    ListClusterHyperNodesResponseBody& operator=(ListClusterHyperNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hyperNodes_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // hyperNodes Field Functions 
    bool hasHyperNodes() const { return this->hyperNodes_ != nullptr;};
    void deleteHyperNodes() { this->hyperNodes_ = nullptr;};
    inline const vector<ListClusterHyperNodesResponseBodyHyperNodes> & hyperNodes() const { DARABONBA_PTR_GET_CONST(hyperNodes_, vector<ListClusterHyperNodesResponseBodyHyperNodes>) };
    inline vector<ListClusterHyperNodesResponseBodyHyperNodes> hyperNodes() { DARABONBA_PTR_GET(hyperNodes_, vector<ListClusterHyperNodesResponseBodyHyperNodes>) };
    inline ListClusterHyperNodesResponseBody& setHyperNodes(const vector<ListClusterHyperNodesResponseBodyHyperNodes> & hyperNodes) { DARABONBA_PTR_SET_VALUE(hyperNodes_, hyperNodes) };
    inline ListClusterHyperNodesResponseBody& setHyperNodes(vector<ListClusterHyperNodesResponseBodyHyperNodes> && hyperNodes) { DARABONBA_PTR_SET_RVALUE(hyperNodes_, hyperNodes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClusterHyperNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterHyperNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListClusterHyperNodesResponseBodyHyperNodes>> hyperNodes_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
