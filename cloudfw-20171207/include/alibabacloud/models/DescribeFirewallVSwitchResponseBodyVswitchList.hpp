// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODYVSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESPONSEBODYVSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFirewallVSwitchResponseBodyVswitchListFirewallList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVSwitchResponseBodyVswitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVSwitchResponseBodyVswitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(FirewallCount, firewallCount_);
      DARABONBA_PTR_TO_JSON(FirewallList, firewallList_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(VswitchName, vswitchName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVSwitchResponseBodyVswitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpCount, availableIpCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(FirewallCount, firewallCount_);
      DARABONBA_PTR_FROM_JSON(FirewallList, firewallList_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(VswitchName, vswitchName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeFirewallVSwitchResponseBodyVswitchList() = default ;
    DescribeFirewallVSwitchResponseBodyVswitchList(const DescribeFirewallVSwitchResponseBodyVswitchList &) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchList(DescribeFirewallVSwitchResponseBodyVswitchList &&) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVSwitchResponseBodyVswitchList() = default ;
    DescribeFirewallVSwitchResponseBodyVswitchList& operator=(const DescribeFirewallVSwitchResponseBodyVswitchList &) = default ;
    DescribeFirewallVSwitchResponseBodyVswitchList& operator=(DescribeFirewallVSwitchResponseBodyVswitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpCount_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->firewallCount_ == nullptr && return this->firewallList_ == nullptr && return this->memberUid_ == nullptr && return this->regionNo_ == nullptr
        && return this->vpcId_ == nullptr && return this->vswitchId_ == nullptr && return this->vswitchName_ == nullptr && return this->zoneId_ == nullptr; };
    // availableIpCount Field Functions 
    bool hasAvailableIpCount() const { return this->availableIpCount_ != nullptr;};
    void deleteAvailableIpCount() { this->availableIpCount_ = nullptr;};
    inline string availableIpCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpCount_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setAvailableIpCount(string availableIpCount) { DARABONBA_PTR_SET_VALUE(availableIpCount_, availableIpCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // firewallCount Field Functions 
    bool hasFirewallCount() const { return this->firewallCount_ != nullptr;};
    void deleteFirewallCount() { this->firewallCount_ = nullptr;};
    inline string firewallCount() const { DARABONBA_PTR_GET_DEFAULT(firewallCount_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setFirewallCount(string firewallCount) { DARABONBA_PTR_SET_VALUE(firewallCount_, firewallCount) };


    // firewallList Field Functions 
    bool hasFirewallList() const { return this->firewallList_ != nullptr;};
    void deleteFirewallList() { this->firewallList_ = nullptr;};
    inline const vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList> & firewallList() const { DARABONBA_PTR_GET_CONST(firewallList_, vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList>) };
    inline vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList> firewallList() { DARABONBA_PTR_GET(firewallList_, vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList>) };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setFirewallList(const vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList> & firewallList) { DARABONBA_PTR_SET_VALUE(firewallList_, firewallList) };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setFirewallList(vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList> && firewallList) { DARABONBA_PTR_SET_RVALUE(firewallList_, firewallList) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // vswitchName Field Functions 
    bool hasVswitchName() const { return this->vswitchName_ != nullptr;};
    void deleteVswitchName() { this->vswitchName_ = nullptr;};
    inline string vswitchName() const { DARABONBA_PTR_GET_DEFAULT(vswitchName_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setVswitchName(string vswitchName) { DARABONBA_PTR_SET_VALUE(vswitchName_, vswitchName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeFirewallVSwitchResponseBodyVswitchList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> availableIpCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> firewallCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeFirewallVSwitchResponseBodyVswitchListFirewallList>> firewallList_ = nullptr;
    std::shared_ptr<string> memberUid_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
    std::shared_ptr<string> vswitchName_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
