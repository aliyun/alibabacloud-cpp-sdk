// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDhcpOptionsSetsResponseBodyDhcpOptionsSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListDhcpOptionsSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDhcpOptionsSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DhcpOptionsSets, dhcpOptionsSets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDhcpOptionsSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSets, dhcpOptionsSets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDhcpOptionsSetsResponseBody() = default ;
    ListDhcpOptionsSetsResponseBody(const ListDhcpOptionsSetsResponseBody &) = default ;
    ListDhcpOptionsSetsResponseBody(ListDhcpOptionsSetsResponseBody &&) = default ;
    ListDhcpOptionsSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDhcpOptionsSetsResponseBody() = default ;
    ListDhcpOptionsSetsResponseBody& operator=(const ListDhcpOptionsSetsResponseBody &) = default ;
    ListDhcpOptionsSetsResponseBody& operator=(ListDhcpOptionsSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dhcpOptionsSets_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dhcpOptionsSets Field Functions 
    bool hasDhcpOptionsSets() const { return this->dhcpOptionsSets_ != nullptr;};
    void deleteDhcpOptionsSets() { this->dhcpOptionsSets_ = nullptr;};
    inline const vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets> & dhcpOptionsSets() const { DARABONBA_PTR_GET_CONST(dhcpOptionsSets_, vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets>) };
    inline vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets> dhcpOptionsSets() { DARABONBA_PTR_GET(dhcpOptionsSets_, vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets>) };
    inline ListDhcpOptionsSetsResponseBody& setDhcpOptionsSets(const vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets> & dhcpOptionsSets) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSets_, dhcpOptionsSets) };
    inline ListDhcpOptionsSetsResponseBody& setDhcpOptionsSets(vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets> && dhcpOptionsSets) { DARABONBA_PTR_SET_RVALUE(dhcpOptionsSets_, dhcpOptionsSets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDhcpOptionsSetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDhcpOptionsSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListDhcpOptionsSetsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the DHCP options sets.
    std::shared_ptr<vector<ListDhcpOptionsSetsResponseBodyDhcpOptionsSets>> dhcpOptionsSets_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
