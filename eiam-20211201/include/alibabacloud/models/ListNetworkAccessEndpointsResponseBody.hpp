// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpoints, networkAccessEndpoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpoints, networkAccessEndpoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNetworkAccessEndpointsResponseBody() = default ;
    ListNetworkAccessEndpointsResponseBody(const ListNetworkAccessEndpointsResponseBody &) = default ;
    ListNetworkAccessEndpointsResponseBody(ListNetworkAccessEndpointsResponseBody &&) = default ;
    ListNetworkAccessEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointsResponseBody() = default ;
    ListNetworkAccessEndpointsResponseBody& operator=(const ListNetworkAccessEndpointsResponseBody &) = default ;
    ListNetworkAccessEndpointsResponseBody& operator=(ListNetworkAccessEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkAccessEndpoints_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // networkAccessEndpoints Field Functions 
    bool hasNetworkAccessEndpoints() const { return this->networkAccessEndpoints_ != nullptr;};
    void deleteNetworkAccessEndpoints() { this->networkAccessEndpoints_ = nullptr;};
    inline const vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints> & networkAccessEndpoints() const { DARABONBA_PTR_GET_CONST(networkAccessEndpoints_, vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints>) };
    inline vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints> networkAccessEndpoints() { DARABONBA_PTR_GET(networkAccessEndpoints_, vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints>) };
    inline ListNetworkAccessEndpointsResponseBody& setNetworkAccessEndpoints(const vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints> & networkAccessEndpoints) { DARABONBA_PTR_SET_VALUE(networkAccessEndpoints_, networkAccessEndpoints) };
    inline ListNetworkAccessEndpointsResponseBody& setNetworkAccessEndpoints(vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints> && networkAccessEndpoints) { DARABONBA_PTR_SET_RVALUE(networkAccessEndpoints_, networkAccessEndpoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNetworkAccessEndpointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkAccessEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListNetworkAccessEndpointsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListNetworkAccessEndpointsResponseBodyNetworkAccessEndpoints>> networkAccessEndpoints_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
