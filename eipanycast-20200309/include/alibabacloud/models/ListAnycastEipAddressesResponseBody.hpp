// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANYCASTEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnycastEipAddressesResponseBodyAnycastList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ListAnycastEipAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnycastEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastList, anycastList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnycastEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastList, anycastList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAnycastEipAddressesResponseBody() = default ;
    ListAnycastEipAddressesResponseBody(const ListAnycastEipAddressesResponseBody &) = default ;
    ListAnycastEipAddressesResponseBody(ListAnycastEipAddressesResponseBody &&) = default ;
    ListAnycastEipAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnycastEipAddressesResponseBody() = default ;
    ListAnycastEipAddressesResponseBody& operator=(const ListAnycastEipAddressesResponseBody &) = default ;
    ListAnycastEipAddressesResponseBody& operator=(ListAnycastEipAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->anycastList_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // anycastList Field Functions 
    bool hasAnycastList() const { return this->anycastList_ != nullptr;};
    void deleteAnycastList() { this->anycastList_ = nullptr;};
    inline const vector<ListAnycastEipAddressesResponseBodyAnycastList> & anycastList() const { DARABONBA_PTR_GET_CONST(anycastList_, vector<ListAnycastEipAddressesResponseBodyAnycastList>) };
    inline vector<ListAnycastEipAddressesResponseBodyAnycastList> anycastList() { DARABONBA_PTR_GET(anycastList_, vector<ListAnycastEipAddressesResponseBodyAnycastList>) };
    inline ListAnycastEipAddressesResponseBody& setAnycastList(const vector<ListAnycastEipAddressesResponseBodyAnycastList> & anycastList) { DARABONBA_PTR_SET_VALUE(anycastList_, anycastList) };
    inline ListAnycastEipAddressesResponseBody& setAnycastList(vector<ListAnycastEipAddressesResponseBodyAnycastList> && anycastList) { DARABONBA_PTR_SET_RVALUE(anycastList_, anycastList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAnycastEipAddressesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnycastEipAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAnycastEipAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of Anycast EIPs.
    std::shared_ptr<vector<ListAnycastEipAddressesResponseBodyAnycastList>> anycastList_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If **NextToken** is not empty, the value of NextToken can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
