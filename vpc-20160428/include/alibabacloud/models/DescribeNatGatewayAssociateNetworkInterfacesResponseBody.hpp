// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYASSOCIATENETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewayAssociateNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewayAssociateNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateNetworkInterfaces, associateNetworkInterfaces_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewayAssociateNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateNetworkInterfaces, associateNetworkInterfaces_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(const DescribeNatGatewayAssociateNetworkInterfacesResponseBody &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(DescribeNatGatewayAssociateNetworkInterfacesResponseBody &&) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewayAssociateNetworkInterfacesResponseBody() = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody& operator=(const DescribeNatGatewayAssociateNetworkInterfacesResponseBody &) = default ;
    DescribeNatGatewayAssociateNetworkInterfacesResponseBody& operator=(DescribeNatGatewayAssociateNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associateNetworkInterfaces_ != nullptr
        && this->count_ != nullptr && this->maxResults_ != nullptr && this->natGatewayId_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // associateNetworkInterfaces Field Functions 
    bool hasAssociateNetworkInterfaces() const { return this->associateNetworkInterfaces_ != nullptr;};
    void deleteAssociateNetworkInterfaces() { this->associateNetworkInterfaces_ = nullptr;};
    inline const DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces & associateNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(associateNetworkInterfaces_, DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces associateNetworkInterfaces() { DARABONBA_PTR_GET(associateNetworkInterfaces_, DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setAssociateNetworkInterfaces(const DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces & associateNetworkInterfaces) { DARABONBA_PTR_SET_VALUE(associateNetworkInterfaces_, associateNetworkInterfaces) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setAssociateNetworkInterfaces(DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces && associateNetworkInterfaces) { DARABONBA_PTR_SET_RVALUE(associateNetworkInterfaces_, associateNetworkInterfaces) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewayAssociateNetworkInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<DescribeNatGatewayAssociateNetworkInterfacesResponseBodyAssociateNetworkInterfaces> associateNetworkInterfaces_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
