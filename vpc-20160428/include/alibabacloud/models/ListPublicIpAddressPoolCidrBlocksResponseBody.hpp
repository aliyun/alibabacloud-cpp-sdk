// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLCIDRBLOCKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolCidrBlocksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PublicIpPoolCidrBlockList, publicIpPoolCidrBlockList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolCidrBlocksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PublicIpPoolCidrBlockList, publicIpPoolCidrBlockList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPublicIpAddressPoolCidrBlocksResponseBody() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(const ListPublicIpAddressPoolCidrBlocksResponseBody &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(ListPublicIpAddressPoolCidrBlocksResponseBody &&) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolCidrBlocksResponseBody() = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody& operator=(const ListPublicIpAddressPoolCidrBlocksResponseBody &) = default ;
    ListPublicIpAddressPoolCidrBlocksResponseBody& operator=(ListPublicIpAddressPoolCidrBlocksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->publicIpPoolCidrBlockList_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // publicIpPoolCidrBlockList Field Functions 
    bool hasPublicIpPoolCidrBlockList() const { return this->publicIpPoolCidrBlockList_ != nullptr;};
    void deletePublicIpPoolCidrBlockList() { this->publicIpPoolCidrBlockList_ = nullptr;};
    inline const vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList> & publicIpPoolCidrBlockList() const { DARABONBA_PTR_GET_CONST(publicIpPoolCidrBlockList_, vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList>) };
    inline vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList> publicIpPoolCidrBlockList() { DARABONBA_PTR_GET(publicIpPoolCidrBlockList_, vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList>) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setPublicIpPoolCidrBlockList(const vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList> & publicIpPoolCidrBlockList) { DARABONBA_PTR_SET_VALUE(publicIpPoolCidrBlockList_, publicIpPoolCidrBlockList) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setPublicIpPoolCidrBlockList(vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList> && publicIpPoolCidrBlockList) { DARABONBA_PTR_SET_RVALUE(publicIpPoolCidrBlockList_, publicIpPoolCidrBlockList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPublicIpAddressPoolCidrBlocksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** is returned, the value is the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<vector<ListPublicIpAddressPoolCidrBlocksResponseBodyPublicIpPoolCidrBlockList>> publicIpPoolCidrBlockList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The maximum number of entries returned. Valid values: **10** to **100**. Default value: **10**.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
