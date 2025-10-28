// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODYSLBLISTSLBENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLBRESPONSEBODYSLBLISTSLBENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSlbResponseBodySlbListSlbEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlbResponseBodySlbListSlbEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reusable, reusable_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbName, slbName_);
      DARABONBA_PTR_TO_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlbResponseBodySlbListSlbEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reusable, reusable_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbName, slbName_);
      DARABONBA_PTR_FROM_JSON(SlbStatus, slbStatus_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ListSlbResponseBodySlbListSlbEntity() = default ;
    ListSlbResponseBodySlbListSlbEntity(const ListSlbResponseBodySlbListSlbEntity &) = default ;
    ListSlbResponseBodySlbListSlbEntity(ListSlbResponseBodySlbListSlbEntity &&) = default ;
    ListSlbResponseBodySlbListSlbEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlbResponseBodySlbListSlbEntity() = default ;
    ListSlbResponseBodySlbListSlbEntity& operator=(const ListSlbResponseBodySlbListSlbEntity &) = default ;
    ListSlbResponseBodySlbListSlbEntity& operator=(ListSlbResponseBodySlbListSlbEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && return this->addressType_ == nullptr && return this->expired_ == nullptr && return this->groupId_ == nullptr && return this->networkType_ == nullptr && return this->regionId_ == nullptr
        && return this->reusable_ == nullptr && return this->slbId_ == nullptr && return this->slbName_ == nullptr && return this->slbStatus_ == nullptr && return this->tags_ == nullptr
        && return this->userId_ == nullptr && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListSlbResponseBodySlbListSlbEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline ListSlbResponseBodySlbListSlbEntity& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reusable Field Functions 
    bool hasReusable() const { return this->reusable_ != nullptr;};
    void deleteReusable() { this->reusable_ = nullptr;};
    inline bool reusable() const { DARABONBA_PTR_GET_DEFAULT(reusable_, false) };
    inline ListSlbResponseBodySlbListSlbEntity& setReusable(bool reusable) { DARABONBA_PTR_SET_VALUE(reusable_, reusable) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbName Field Functions 
    bool hasSlbName() const { return this->slbName_ != nullptr;};
    void deleteSlbName() { this->slbName_ = nullptr;};
    inline string slbName() const { DARABONBA_PTR_GET_DEFAULT(slbName_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setSlbName(string slbName) { DARABONBA_PTR_SET_VALUE(slbName_, slbName) };


    // slbStatus Field Functions 
    bool hasSlbStatus() const { return this->slbStatus_ != nullptr;};
    void deleteSlbStatus() { this->slbStatus_ = nullptr;};
    inline string slbStatus() const { DARABONBA_PTR_GET_DEFAULT(slbStatus_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setSlbStatus(string slbStatus) { DARABONBA_PTR_SET_VALUE(slbStatus_, slbStatus) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListSlbResponseBodySlbListSlbEntity& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The IP address of the SLB instance.
    std::shared_ptr<string> address_ = nullptr;
    // The type of the IP addresses. Valid values:
    // 
    // *   internet: Users can connect to the SLB instance over the Internet.
    // *   intranet: Users can connect to the SLB instance over the internal network.
    std::shared_ptr<string> addressType_ = nullptr;
    // Indicates whether the SLB instance has expired. Valid values:
    // 
    // *   true: The SLB instance has expired.
    // *   false: The SLB instance has not expired.
    std::shared_ptr<bool> expired_ = nullptr;
    // The ID of the resource group in Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The type of the network.
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether Kubernetes applications can be reused. Valid values:
    // 
    // *   true: Kubernetes applications can be reused.
    // *   false: Kubernetes applications cannot be reused.
    std::shared_ptr<bool> reusable_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The name of the SLB instance.
    std::shared_ptr<string> slbName_ = nullptr;
    // The status of the SLB instance.
    std::shared_ptr<string> slbStatus_ = nullptr;
    // The tag of the SLB instance.
    std::shared_ptr<string> tags_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch in the VPC.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
