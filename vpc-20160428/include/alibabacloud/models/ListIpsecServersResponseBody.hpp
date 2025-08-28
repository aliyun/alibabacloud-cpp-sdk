// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpsecServersResponseBodyIpsecServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpsecServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpsecServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpsecServers, ipsecServers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpsecServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsecServers, ipsecServers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpsecServersResponseBody() = default ;
    ListIpsecServersResponseBody(const ListIpsecServersResponseBody &) = default ;
    ListIpsecServersResponseBody(ListIpsecServersResponseBody &&) = default ;
    ListIpsecServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpsecServersResponseBody() = default ;
    ListIpsecServersResponseBody& operator=(const ListIpsecServersResponseBody &) = default ;
    ListIpsecServersResponseBody& operator=(ListIpsecServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipsecServers_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipsecServers Field Functions 
    bool hasIpsecServers() const { return this->ipsecServers_ != nullptr;};
    void deleteIpsecServers() { this->ipsecServers_ = nullptr;};
    inline const vector<ListIpsecServersResponseBodyIpsecServers> & ipsecServers() const { DARABONBA_PTR_GET_CONST(ipsecServers_, vector<ListIpsecServersResponseBodyIpsecServers>) };
    inline vector<ListIpsecServersResponseBodyIpsecServers> ipsecServers() { DARABONBA_PTR_GET(ipsecServers_, vector<ListIpsecServersResponseBodyIpsecServers>) };
    inline ListIpsecServersResponseBody& setIpsecServers(const vector<ListIpsecServersResponseBodyIpsecServers> & ipsecServers) { DARABONBA_PTR_SET_VALUE(ipsecServers_, ipsecServers) };
    inline ListIpsecServersResponseBody& setIpsecServers(vector<ListIpsecServersResponseBodyIpsecServers> && ipsecServers) { DARABONBA_PTR_SET_RVALUE(ipsecServers_, ipsecServers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpsecServersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpsecServersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpsecServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListIpsecServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of IPsec servers.
    std::shared_ptr<vector<ListIpsecServersResponseBodyIpsecServers>> ipsecServers_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
