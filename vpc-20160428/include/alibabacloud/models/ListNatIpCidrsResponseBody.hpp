// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPCIDRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNatIpCidrsResponseBodyNatIpCidrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListNatIpCidrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpCidrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpCidrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIpCidrs, natIpCidrs_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNatIpCidrsResponseBody() = default ;
    ListNatIpCidrsResponseBody(const ListNatIpCidrsResponseBody &) = default ;
    ListNatIpCidrsResponseBody(ListNatIpCidrsResponseBody &&) = default ;
    ListNatIpCidrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpCidrsResponseBody() = default ;
    ListNatIpCidrsResponseBody& operator=(const ListNatIpCidrsResponseBody &) = default ;
    ListNatIpCidrsResponseBody& operator=(ListNatIpCidrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natIpCidrs_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // natIpCidrs Field Functions 
    bool hasNatIpCidrs() const { return this->natIpCidrs_ != nullptr;};
    void deleteNatIpCidrs() { this->natIpCidrs_ = nullptr;};
    inline const vector<ListNatIpCidrsResponseBodyNatIpCidrs> & natIpCidrs() const { DARABONBA_PTR_GET_CONST(natIpCidrs_, vector<ListNatIpCidrsResponseBodyNatIpCidrs>) };
    inline vector<ListNatIpCidrsResponseBodyNatIpCidrs> natIpCidrs() { DARABONBA_PTR_GET(natIpCidrs_, vector<ListNatIpCidrsResponseBodyNatIpCidrs>) };
    inline ListNatIpCidrsResponseBody& setNatIpCidrs(const vector<ListNatIpCidrsResponseBodyNatIpCidrs> & natIpCidrs) { DARABONBA_PTR_SET_VALUE(natIpCidrs_, natIpCidrs) };
    inline ListNatIpCidrsResponseBody& setNatIpCidrs(vector<ListNatIpCidrsResponseBodyNatIpCidrs> && natIpCidrs) { DARABONBA_PTR_SET_RVALUE(natIpCidrs_, natIpCidrs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNatIpCidrsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNatIpCidrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNatIpCidrsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The CIDR blocks of the NAT gateway.
    std::shared_ptr<vector<ListNatIpCidrsResponseBodyNatIpCidrs>> natIpCidrs_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If the value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of CIDR blocks that are returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
