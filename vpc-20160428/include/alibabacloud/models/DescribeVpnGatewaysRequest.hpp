// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnGatewaysRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(IncludeReservationData, includeReservationData_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DescribeVpnGatewaysRequest() = default ;
    DescribeVpnGatewaysRequest(const DescribeVpnGatewaysRequest &) = default ;
    DescribeVpnGatewaysRequest(DescribeVpnGatewaysRequest &&) = default ;
    DescribeVpnGatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewaysRequest() = default ;
    DescribeVpnGatewaysRequest& operator=(const DescribeVpnGatewaysRequest &) = default ;
    DescribeVpnGatewaysRequest& operator=(DescribeVpnGatewaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessStatus_ != nullptr
        && this->includeReservationData_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr && this->vpcId_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeVpnGatewaysRequest& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // includeReservationData Field Functions 
    bool hasIncludeReservationData() const { return this->includeReservationData_ != nullptr;};
    void deleteIncludeReservationData() { this->includeReservationData_ = nullptr;};
    inline bool includeReservationData() const { DARABONBA_PTR_GET_DEFAULT(includeReservationData_, false) };
    inline DescribeVpnGatewaysRequest& setIncludeReservationData(bool includeReservationData) { DARABONBA_PTR_SET_VALUE(includeReservationData_, includeReservationData) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeVpnGatewaysRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpnGatewaysRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnGatewaysRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnGatewaysRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpnGatewaysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpnGatewaysRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeVpnGatewaysRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeVpnGatewaysRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnGatewaysRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeVpnGatewaysRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeVpnGatewaysRequestTag>) };
    inline vector<DescribeVpnGatewaysRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeVpnGatewaysRequestTag>) };
    inline DescribeVpnGatewaysRequest& setTag(const vector<DescribeVpnGatewaysRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVpnGatewaysRequest& setTag(vector<DescribeVpnGatewaysRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpnGatewaysRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeVpnGatewaysRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The payment status of the VPN gateway. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // Specifies whether to return information about pending orders. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    std::shared_ptr<bool> includeReservationData_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1** to **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the VPN gateway belongs.
    // 
    //  You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group list.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The status of the VPN gateway. Valid values:
    // 
    // *   **init**
    // *   **provisioning**
    // *   **active**
    // *   **updating**
    // *   **deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the VPN gateway.
    std::shared_ptr<vector<DescribeVpnGatewaysRequestTag>> tag_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the VPN gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
