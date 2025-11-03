// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNatIpsResponseBodyNatIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListNatIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatIps, natIps_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIps, natIps_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNatIpsResponseBody() = default ;
    ListNatIpsResponseBody(const ListNatIpsResponseBody &) = default ;
    ListNatIpsResponseBody(ListNatIpsResponseBody &&) = default ;
    ListNatIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpsResponseBody() = default ;
    ListNatIpsResponseBody& operator=(const ListNatIpsResponseBody &) = default ;
    ListNatIpsResponseBody& operator=(ListNatIpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natIps_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // natIps Field Functions 
    bool hasNatIps() const { return this->natIps_ != nullptr;};
    void deleteNatIps() { this->natIps_ = nullptr;};
    inline const vector<ListNatIpsResponseBodyNatIps> & natIps() const { DARABONBA_PTR_GET_CONST(natIps_, vector<ListNatIpsResponseBodyNatIps>) };
    inline vector<ListNatIpsResponseBodyNatIps> natIps() { DARABONBA_PTR_GET(natIps_, vector<ListNatIpsResponseBodyNatIps>) };
    inline ListNatIpsResponseBody& setNatIps(const vector<ListNatIpsResponseBodyNatIps> & natIps) { DARABONBA_PTR_SET_VALUE(natIps_, natIps) };
    inline ListNatIpsResponseBody& setNatIps(vector<ListNatIpsResponseBodyNatIps> && natIps) { DARABONBA_PTR_SET_RVALUE(natIps_, natIps) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNatIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNatIpsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IP addresses of the NAT gateway.
    std::shared_ptr<vector<ListNatIpsResponseBodyNatIps>> natIps_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of IP addresses that are returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
