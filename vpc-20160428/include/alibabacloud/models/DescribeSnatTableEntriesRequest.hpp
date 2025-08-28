// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSnatTableEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
      DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_TO_JSON(SourceVSwitchId, sourceVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
      DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_FROM_JSON(SourceVSwitchId, sourceVSwitchId_);
    };
    DescribeSnatTableEntriesRequest() = default ;
    DescribeSnatTableEntriesRequest(const DescribeSnatTableEntriesRequest &) = default ;
    DescribeSnatTableEntriesRequest(DescribeSnatTableEntriesRequest &&) = default ;
    DescribeSnatTableEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesRequest() = default ;
    DescribeSnatTableEntriesRequest& operator=(const DescribeSnatTableEntriesRequest &) = default ;
    DescribeSnatTableEntriesRequest& operator=(DescribeSnatTableEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGatewayId_ != nullptr
        && this->networkInterfaceIds_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->snatEntryId_ != nullptr && this->snatEntryName_ != nullptr
        && this->snatIp_ != nullptr && this->snatTableId_ != nullptr && this->sourceCIDR_ != nullptr && this->sourceVSwitchId_ != nullptr; };
    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeSnatTableEntriesRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline DescribeSnatTableEntriesRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeSnatTableEntriesRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSnatTableEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSnatTableEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnatTableEntriesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnatTableEntriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSnatTableEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSnatTableEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSnatTableEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // snatTableId Field Functions 
    bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
    void deleteSnatTableId() { this->snatTableId_ = nullptr;};
    inline string snatTableId() const { DARABONBA_PTR_GET_DEFAULT(snatTableId_, "") };
    inline DescribeSnatTableEntriesRequest& setSnatTableId(string snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline DescribeSnatTableEntriesRequest& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // sourceVSwitchId Field Functions 
    bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
    void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
    inline string sourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
    inline DescribeSnatTableEntriesRequest& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


  protected:
    // The ID of the NAT gateway.
    // 
    // >  You must specify at least one of **SnatTableId** and **NatGatewayId**.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region where you want to create the NAT gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the SNAT entry.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    // The name of the SNAT entry.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // *   When you query SNAT entries of Internet NAT gateways, this parameter specifies the EIP in an SNAT entry.
    // *   When you query SNAT entries of VPC NAT gateways, this parameter specifies the NAT IP address in an SNAT entry.
    std::shared_ptr<string> snatIp_ = nullptr;
    // The ID of the SNAT table.
    // 
    // >  You must specify at least one of **SnatTableId** and **NatGatewayId**.
    std::shared_ptr<string> snatTableId_ = nullptr;
    // The source CIDR block specified in the SNAT entry.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
    // The ID of the vSwitch.
    // 
    // *   When you query SNAT entries of Internet NAT gateways, this parameter specifies that Elastic Compute Service (ECS) instances in the vSwitch can use SNAT entries to access the Internet.
    // *   When you query SNAT entries of virtual private cloud (VPC) NAT gateways, this parameter specifies that ECS instances in the vSwitch can use SNAT entries to access external networks.
    std::shared_ptr<string> sourceVSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
