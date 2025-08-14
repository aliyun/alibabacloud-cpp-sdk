// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(EnabledIpv6, enabledIpv6_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeGrantRulesToCenRequest() = default ;
    DescribeGrantRulesToCenRequest(const DescribeGrantRulesToCenRequest &) = default ;
    DescribeGrantRulesToCenRequest(DescribeGrantRulesToCenRequest &&) = default ;
    DescribeGrantRulesToCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenRequest() = default ;
    DescribeGrantRulesToCenRequest& operator=(const DescribeGrantRulesToCenRequest &) = default ;
    DescribeGrantRulesToCenRequest& operator=(DescribeGrantRulesToCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceId_ != nullptr && this->childInstanceOwnerId_ != nullptr && this->enabledIpv6_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->productType_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeGrantRulesToCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeGrantRulesToCenRequest& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t childInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline DescribeGrantRulesToCenRequest& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // enabledIpv6 Field Functions 
    bool hasEnabledIpv6() const { return this->enabledIpv6_ != nullptr;};
    void deleteEnabledIpv6() { this->enabledIpv6_ = nullptr;};
    inline bool enabledIpv6() const { DARABONBA_PTR_GET_DEFAULT(enabledIpv6_, false) };
    inline DescribeGrantRulesToCenRequest& setEnabledIpv6(bool enabledIpv6) { DARABONBA_PTR_SET_VALUE(enabledIpv6_, enabledIpv6) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeGrantRulesToCenRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGrantRulesToCenRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeGrantRulesToCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeGrantRulesToCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeGrantRulesToCenRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGrantRulesToCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeGrantRulesToCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeGrantRulesToCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The CEN instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the network instance that you want to query.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<int64_t> childInstanceOwnerId_ = nullptr;
    // Specifies whether to enable IPv6.
    // 
    // 1.  This parameter takes effect only if ProductType is set to VPC.
    // 2.  true: enables IPv6. false: disables IPv6. If you do not specify a value, network instances are not filtered based on this parameter.
    std::shared_ptr<bool> enabledIpv6_ = nullptr;
    // *   If you do not set **MaxResults**, it indicates that you do not need to query results in batches. The value of **MaxResults** in the response indicates the total number of entries returned.
    // *   If you specify a value for **MaxResults**, it indicates that you need to query results in batches. The value of **MaxResults** indicates the number of entries to return in each batch. Valid values: **1** to **100**. The value of **MaxResults** in the response indicates the number of entries in the current batch. We recommend that you set **MaxResults** to **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**
    // *   **VBR**
    // *   **CCN**
    // *   **VPN**
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The region ID of the network instance.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
