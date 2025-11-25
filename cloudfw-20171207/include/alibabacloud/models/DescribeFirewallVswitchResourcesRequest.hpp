// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLVSWITCHRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallVswitchResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallVswitchResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallVswitchResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeFirewallVswitchResourcesRequest() = default ;
    DescribeFirewallVswitchResourcesRequest(const DescribeFirewallVswitchResourcesRequest &) = default ;
    DescribeFirewallVswitchResourcesRequest(DescribeFirewallVswitchResourcesRequest &&) = default ;
    DescribeFirewallVswitchResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallVswitchResourcesRequest() = default ;
    DescribeFirewallVswitchResourcesRequest& operator=(const DescribeFirewallVswitchResourcesRequest &) = default ;
    DescribeFirewallVswitchResourcesRequest& operator=(DescribeFirewallVswitchResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallType_ == nullptr
        && return this->lang_ == nullptr && return this->regionNo_ == nullptr && return this->vpcId_ == nullptr; };
    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string firewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeFirewallVswitchResourcesRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFirewallVswitchResourcesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeFirewallVswitchResourcesRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeFirewallVswitchResourcesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> firewallType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
