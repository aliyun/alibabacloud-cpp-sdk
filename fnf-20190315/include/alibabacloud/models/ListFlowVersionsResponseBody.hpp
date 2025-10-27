// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowVersionsResponseBodyFlowVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowVersions, flowVersions_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowVersions, flowVersions_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFlowVersionsResponseBody() = default ;
    ListFlowVersionsResponseBody(const ListFlowVersionsResponseBody &) = default ;
    ListFlowVersionsResponseBody(ListFlowVersionsResponseBody &&) = default ;
    ListFlowVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowVersionsResponseBody() = default ;
    ListFlowVersionsResponseBody& operator=(const ListFlowVersionsResponseBody &) = default ;
    ListFlowVersionsResponseBody& operator=(ListFlowVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowVersions_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // flowVersions Field Functions 
    bool hasFlowVersions() const { return this->flowVersions_ != nullptr;};
    void deleteFlowVersions() { this->flowVersions_ = nullptr;};
    inline const vector<ListFlowVersionsResponseBodyFlowVersions> & flowVersions() const { DARABONBA_PTR_GET_CONST(flowVersions_, vector<ListFlowVersionsResponseBodyFlowVersions>) };
    inline vector<ListFlowVersionsResponseBodyFlowVersions> flowVersions() { DARABONBA_PTR_GET(flowVersions_, vector<ListFlowVersionsResponseBodyFlowVersions>) };
    inline ListFlowVersionsResponseBody& setFlowVersions(const vector<ListFlowVersionsResponseBodyFlowVersions> & flowVersions) { DARABONBA_PTR_SET_VALUE(flowVersions_, flowVersions) };
    inline ListFlowVersionsResponseBody& setFlowVersions(vector<ListFlowVersionsResponseBodyFlowVersions> && flowVersions) { DARABONBA_PTR_SET_RVALUE(flowVersions_, flowVersions) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListFlowVersionsResponseBodyFlowVersions>> flowVersions_ = nullptr;
    // list token
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
