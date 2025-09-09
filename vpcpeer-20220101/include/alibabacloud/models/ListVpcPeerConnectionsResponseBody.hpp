// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcPeerConnectionsResponseBodyVpcPeerConnects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ListVpcPeerConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcPeerConnects, vpcPeerConnects_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPeerConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcPeerConnects, vpcPeerConnects_);
    };
    ListVpcPeerConnectionsResponseBody() = default ;
    ListVpcPeerConnectionsResponseBody(const ListVpcPeerConnectionsResponseBody &) = default ;
    ListVpcPeerConnectionsResponseBody(ListVpcPeerConnectionsResponseBody &&) = default ;
    ListVpcPeerConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPeerConnectionsResponseBody() = default ;
    ListVpcPeerConnectionsResponseBody& operator=(const ListVpcPeerConnectionsResponseBody &) = default ;
    ListVpcPeerConnectionsResponseBody& operator=(ListVpcPeerConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vpcPeerConnects_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcPeerConnectionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPeerConnectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcPeerConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcPeerConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcPeerConnects Field Functions 
    bool hasVpcPeerConnects() const { return this->vpcPeerConnects_ != nullptr;};
    void deleteVpcPeerConnects() { this->vpcPeerConnects_ = nullptr;};
    inline const vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects> & vpcPeerConnects() const { DARABONBA_PTR_GET_CONST(vpcPeerConnects_, vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects>) };
    inline vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects> vpcPeerConnects() { DARABONBA_PTR_GET(vpcPeerConnects_, vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects>) };
    inline ListVpcPeerConnectionsResponseBody& setVpcPeerConnects(const vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects> & vpcPeerConnects) { DARABONBA_PTR_SET_VALUE(vpcPeerConnects_, vpcPeerConnects) };
    inline ListVpcPeerConnectionsResponseBody& setVpcPeerConnects(vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects> && vpcPeerConnects) { DARABONBA_PTR_SET_RVALUE(vpcPeerConnects_, vpcPeerConnects) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The details of the VPC peering connections.
    std::shared_ptr<vector<ListVpcPeerConnectionsResponseBodyVpcPeerConnects>> vpcPeerConnects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
