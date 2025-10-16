// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPCENILIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENDETAILRESPONSEBODYLOCALVPCENILIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& obj) { 
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
      DARABONBA_PTR_TO_JSON(EniVSwitchId, eniVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& obj) { 
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(EniPrivateIpAddress, eniPrivateIpAddress_);
      DARABONBA_PTR_FROM_JSON(EniVSwitchId, eniVSwitchId_);
    };
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList(const DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList(DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList &&) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList() = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& operator=(const DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList &) = default ;
    DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& operator=(DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eniId_ == nullptr
        && return this->eniPrivateIpAddress_ == nullptr && return this->eniVSwitchId_ == nullptr; };
    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


    // eniPrivateIpAddress Field Functions 
    bool hasEniPrivateIpAddress() const { return this->eniPrivateIpAddress_ != nullptr;};
    void deleteEniPrivateIpAddress() { this->eniPrivateIpAddress_ = nullptr;};
    inline string eniPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddress_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& setEniPrivateIpAddress(string eniPrivateIpAddress) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddress_, eniPrivateIpAddress) };


    // eniVSwitchId Field Functions 
    bool hasEniVSwitchId() const { return this->eniVSwitchId_ != nullptr;};
    void deleteEniVSwitchId() { this->eniVSwitchId_ = nullptr;};
    inline string eniVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(eniVSwitchId_, "") };
    inline DescribeVpcFirewallCenDetailResponseBodyLocalVpcEniList& setEniVSwitchId(string eniVSwitchId) { DARABONBA_PTR_SET_VALUE(eniVSwitchId_, eniVSwitchId) };


  protected:
    // The ID of the ENI that belongs to the VPC.
    std::shared_ptr<string> eniId_ = nullptr;
    // The private IP address of the ENI that belongs to the VPC.
    std::shared_ptr<string> eniPrivateIpAddress_ = nullptr;
    // The ID of the vSwitch to which the ENI is connected.
    std::shared_ptr<string> eniVSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
