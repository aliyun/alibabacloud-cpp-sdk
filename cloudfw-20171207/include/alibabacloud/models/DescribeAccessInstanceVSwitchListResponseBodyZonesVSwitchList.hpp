// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODYZONESVSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCEVSWITCHLISTRESPONSEBODYZONESVSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(FirewallVSwitch, firewallVSwitch_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(FirewallVSwitch, firewallVSwitch_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList() = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList(const DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList &) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList(DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList &&) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList() = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& operator=(const DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList &) = default ;
    DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& operator=(DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->firewallVSwitch_ == nullptr && return this->vSwitchId_ == nullptr && return this->vSwitchName_ == nullptr && return this->vpcId_ == nullptr; };
    // availableIpAddressCount Field Functions 
    bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
    void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
    inline int64_t availableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // firewallVSwitch Field Functions 
    bool hasFirewallVSwitch() const { return this->firewallVSwitch_ != nullptr;};
    void deleteFirewallVSwitch() { this->firewallVSwitch_ = nullptr;};
    inline bool firewallVSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallVSwitch_, false) };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setFirewallVSwitch(bool firewallVSwitch) { DARABONBA_PTR_SET_VALUE(firewallVSwitch_, firewallVSwitch) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAccessInstanceVSwitchListResponseBodyZonesVSwitchList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<int64_t> availableIpAddressCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<bool> firewallVSwitch_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vSwitchName_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
