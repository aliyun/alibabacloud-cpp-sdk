// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowsResponseBodyFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFlowsResponseBody() = default ;
    ListFlowsResponseBody(const ListFlowsResponseBody &) = default ;
    ListFlowsResponseBody(ListFlowsResponseBody &&) = default ;
    ListFlowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowsResponseBody() = default ;
    ListFlowsResponseBody& operator=(const ListFlowsResponseBody &) = default ;
    ListFlowsResponseBody& operator=(ListFlowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flows_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<ListFlowsResponseBodyFlows> & flows() const { DARABONBA_PTR_GET_CONST(flows_, vector<ListFlowsResponseBodyFlows>) };
    inline vector<ListFlowsResponseBodyFlows> flows() { DARABONBA_PTR_GET(flows_, vector<ListFlowsResponseBodyFlows>) };
    inline ListFlowsResponseBody& setFlows(const vector<ListFlowsResponseBodyFlows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline ListFlowsResponseBody& setFlows(vector<ListFlowsResponseBodyFlows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of flows.
    std::shared_ptr<vector<ListFlowsResponseBodyFlows>> flows_ = nullptr;
    // The start key for the next query. This parameter is not returned if all results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
