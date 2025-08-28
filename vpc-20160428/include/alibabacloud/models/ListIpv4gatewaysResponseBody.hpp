// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpv4GatewaysResponseBodyIpv4GatewayModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpv4GatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpv4GatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4GatewayModels, ipv4GatewayModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpv4GatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayModels, ipv4GatewayModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpv4GatewaysResponseBody() = default ;
    ListIpv4GatewaysResponseBody(const ListIpv4GatewaysResponseBody &) = default ;
    ListIpv4GatewaysResponseBody(ListIpv4GatewaysResponseBody &&) = default ;
    ListIpv4GatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpv4GatewaysResponseBody() = default ;
    ListIpv4GatewaysResponseBody& operator=(const ListIpv4GatewaysResponseBody &) = default ;
    ListIpv4GatewaysResponseBody& operator=(ListIpv4GatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4GatewayModels_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipv4GatewayModels Field Functions 
    bool hasIpv4GatewayModels() const { return this->ipv4GatewayModels_ != nullptr;};
    void deleteIpv4GatewayModels() { this->ipv4GatewayModels_ = nullptr;};
    inline const vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels> & ipv4GatewayModels() const { DARABONBA_PTR_GET_CONST(ipv4GatewayModels_, vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels>) };
    inline vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels> ipv4GatewayModels() { DARABONBA_PTR_GET(ipv4GatewayModels_, vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels>) };
    inline ListIpv4GatewaysResponseBody& setIpv4GatewayModels(const vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels> & ipv4GatewayModels) { DARABONBA_PTR_SET_VALUE(ipv4GatewayModels_, ipv4GatewayModels) };
    inline ListIpv4GatewaysResponseBody& setIpv4GatewayModels(vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels> && ipv4GatewayModels) { DARABONBA_PTR_SET_RVALUE(ipv4GatewayModels_, ipv4GatewayModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpv4GatewaysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpv4GatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListIpv4GatewaysResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPv4 gateways.
    std::shared_ptr<vector<ListIpv4GatewaysResponseBodyIpv4GatewayModels>> ipv4GatewayModels_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value of **NextToken** is returned, the value is the token that is used for the subsequent query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
