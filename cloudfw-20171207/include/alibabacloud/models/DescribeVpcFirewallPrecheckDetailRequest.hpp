// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPRECHECKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPRECHECKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallPrecheckDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallPrecheckDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallPrecheckDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVpcFirewallPrecheckDetailRequest() = default ;
    DescribeVpcFirewallPrecheckDetailRequest(const DescribeVpcFirewallPrecheckDetailRequest &) = default ;
    DescribeVpcFirewallPrecheckDetailRequest(DescribeVpcFirewallPrecheckDetailRequest &&) = default ;
    DescribeVpcFirewallPrecheckDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallPrecheckDetailRequest() = default ;
    DescribeVpcFirewallPrecheckDetailRequest& operator=(const DescribeVpcFirewallPrecheckDetailRequest &) = default ;
    DescribeVpcFirewallPrecheckDetailRequest& operator=(DescribeVpcFirewallPrecheckDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->lang_ == nullptr && this->memberUid_ == nullptr && this->networkInstanceType_ == nullptr && this->region_ == nullptr && this->transitRouterId_ == nullptr
        && this->vpcId_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // networkInstanceType Field Functions 
    bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
    void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
    inline string getNetworkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallPrecheckDetailRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> cenId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> memberUid_ {};
    shared_ptr<string> networkInstanceType_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> transitRouterId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
