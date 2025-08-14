// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeGrantRulesToResourceRequest() = default ;
    DescribeGrantRulesToResourceRequest(const DescribeGrantRulesToResourceRequest &) = default ;
    DescribeGrantRulesToResourceRequest(DescribeGrantRulesToResourceRequest &&) = default ;
    DescribeGrantRulesToResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToResourceRequest() = default ;
    DescribeGrantRulesToResourceRequest& operator=(const DescribeGrantRulesToResourceRequest &) = default ;
    DescribeGrantRulesToResourceRequest& operator=(DescribeGrantRulesToResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->productType_ != nullptr && this->regionId_ != nullptr
        && this->resourceId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeGrantRulesToResourceRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGrantRulesToResourceRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeGrantRulesToResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeGrantRulesToResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeGrantRulesToResourceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGrantRulesToResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeGrantRulesToResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeGrantRulesToResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeGrantRulesToResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // *   If you do not specify a value for **MaxResults**, entries are returned in one response. After you send the request, the value of **MaxResults** includes all entries.
    // *   If you specify a value for **MaxResults**, entries are returned in batches. The value of **MaxResults** indicates the total number of entries returned per batch. Valid values: **1** to **100**. After you send the request, the value of **MaxResults** indicates the number of entries returned in the current response. We recommend that you set **MaxResults** to **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of the **NextToken** parameter.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The type of network instance. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **ExpressConnect**: virtual border router (VBR)
    // *   **VPN**: IPsec-VPN connection
    // *   **ECR**: Express Connect Router (ECR)
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The region ID of the network instance.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The network instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
