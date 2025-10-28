// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYSLBLISTSLBENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPRESPONSEBODYRESOURCEGROUPLISTRESGROUPENTITYSLBLISTSLBENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
      DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity(const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity(ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity &&) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity() = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& operator=(const ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity &) = default ;
    ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& operator=(ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressType_ == nullptr && return this->expired_ == nullptr && return this->groupId_ == nullptr && return this->networkType_ == nullptr && return this->regionId_ == nullptr
        && return this->slbId_ == nullptr && return this->slbName_ == nullptr && return this->slbStatus_ == nullptr && return this->userId_ == nullptr && return this->vpcId_ == nullptr
        && return this->vswitchId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbStatus Field Functions 
    bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
    void deleteSlbStatus() { this->slbStatus_ = nullptr;};
    inline string slbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListResourceGroupResponseBodyResourceGroupListResGroupEntitySlbListSlbEntity& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The IP address of the SLB instance.
    std::shared_ptr<string> address_ = nullptr;
    // The type of the IP address of the SLB instance. Valid values:
    // 
    // *   Internet: Users can connect to the SLB instance over the Internet.
    // *   Intranet: Users can connect to the SLB instance over the internal network.
    std::shared_ptr<string> addressType_ = nullptr;
    // Indicates whether the SLB instance has expired. Valid values:
    // 
    // *   true: The SLB instance has expired.
    // *   false: The SLB instance has not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The ID of the group to which the SLB instance belongs.
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The network type of the SLB instance. Valid values:
    // 
    // *   Classic network
    // *   VPC
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The unique ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The name of the SLB instance.
    std::shared_ptr<string> slbName_ = nullptr;
    // The status of the SLB instance.
    std::shared_ptr<string> slbStatus_ = nullptr;
    // The UID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
