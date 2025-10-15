// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERSFORNETWORKACCESSENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListIdentityProvidersForNetworkAccessEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProvidersForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProvidersForNetworkAccessEndpoint, identityProvidersForNetworkAccessEndpoint_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProvidersForNetworkAccessEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProvidersForNetworkAccessEndpoint, identityProvidersForNetworkAccessEndpoint_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIdentityProvidersForNetworkAccessEndpointResponseBody() = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(const ListIdentityProvidersForNetworkAccessEndpointResponseBody &) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(ListIdentityProvidersForNetworkAccessEndpointResponseBody &&) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProvidersForNetworkAccessEndpointResponseBody() = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody& operator=(const ListIdentityProvidersForNetworkAccessEndpointResponseBody &) = default ;
    ListIdentityProvidersForNetworkAccessEndpointResponseBody& operator=(ListIdentityProvidersForNetworkAccessEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProvidersForNetworkAccessEndpoint_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // identityProvidersForNetworkAccessEndpoint Field Functions 
    bool hasIdentityProvidersForNetworkAccessEndpoint() const { return this->identityProvidersForNetworkAccessEndpoint_ != nullptr;};
    void deleteIdentityProvidersForNetworkAccessEndpoint() { this->identityProvidersForNetworkAccessEndpoint_ = nullptr;};
    inline const vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint> & identityProvidersForNetworkAccessEndpoint() const { DARABONBA_PTR_GET_CONST(identityProvidersForNetworkAccessEndpoint_, vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint>) };
    inline vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint> identityProvidersForNetworkAccessEndpoint() { DARABONBA_PTR_GET(identityProvidersForNetworkAccessEndpoint_, vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint>) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setIdentityProvidersForNetworkAccessEndpoint(const vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint> & identityProvidersForNetworkAccessEndpoint) { DARABONBA_PTR_SET_VALUE(identityProvidersForNetworkAccessEndpoint_, identityProvidersForNetworkAccessEndpoint) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setIdentityProvidersForNetworkAccessEndpoint(vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint> && identityProvidersForNetworkAccessEndpoint) { DARABONBA_PTR_SET_RVALUE(identityProvidersForNetworkAccessEndpoint_, identityProvidersForNetworkAccessEndpoint) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProvidersForNetworkAccessEndpointResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListIdentityProvidersForNetworkAccessEndpointResponseBodyIdentityProvidersForNetworkAccessEndpoint>> identityProvidersForNetworkAccessEndpoint_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
