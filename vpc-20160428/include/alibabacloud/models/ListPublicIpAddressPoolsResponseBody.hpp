// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolList, publicIpAddressPoolList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolList, publicIpAddressPoolList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicIpAddressPoolsResponseBody() = default ;
    ListPublicIpAddressPoolsResponseBody(const ListPublicIpAddressPoolsResponseBody &) = default ;
    ListPublicIpAddressPoolsResponseBody(ListPublicIpAddressPoolsResponseBody &&) = default ;
    ListPublicIpAddressPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolsResponseBody() = default ;
    ListPublicIpAddressPoolsResponseBody& operator=(const ListPublicIpAddressPoolsResponseBody &) = default ;
    ListPublicIpAddressPoolsResponseBody& operator=(ListPublicIpAddressPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->publicIpAddressPoolList_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicIpAddressPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // publicIpAddressPoolList Field Functions 
    bool hasPublicIpAddressPoolList() const { return this->publicIpAddressPoolList_ != nullptr;};
    void deletePublicIpAddressPoolList() { this->publicIpAddressPoolList_ = nullptr;};
    inline const vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList> & publicIpAddressPoolList() const { DARABONBA_PTR_GET_CONST(publicIpAddressPoolList_, vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList>) };
    inline vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList> publicIpAddressPoolList() { DARABONBA_PTR_GET(publicIpAddressPoolList_, vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList>) };
    inline ListPublicIpAddressPoolsResponseBody& setPublicIpAddressPoolList(const vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList> & publicIpAddressPoolList) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolList_, publicIpAddressPoolList) };
    inline ListPublicIpAddressPoolsResponseBody& setPublicIpAddressPoolList(vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList> && publicIpAddressPoolList) { DARABONBA_PTR_SET_RVALUE(publicIpAddressPoolList_, publicIpAddressPoolList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicIpAddressPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublicIpAddressPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The IP address pools.
    std::shared_ptr<vector<ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList>> publicIpAddressPoolList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
