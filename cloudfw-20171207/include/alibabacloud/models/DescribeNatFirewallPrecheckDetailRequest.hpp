// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPrecheckDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPrecheckDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPrecheckDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeNatFirewallPrecheckDetailRequest() = default ;
    DescribeNatFirewallPrecheckDetailRequest(const DescribeNatFirewallPrecheckDetailRequest &) = default ;
    DescribeNatFirewallPrecheckDetailRequest(DescribeNatFirewallPrecheckDetailRequest &&) = default ;
    DescribeNatFirewallPrecheckDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPrecheckDetailRequest() = default ;
    DescribeNatFirewallPrecheckDetailRequest& operator=(const DescribeNatFirewallPrecheckDetailRequest &) = default ;
    DescribeNatFirewallPrecheckDetailRequest& operator=(DescribeNatFirewallPrecheckDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->natGatewayId_ == nullptr && this->regionNo_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeNatFirewallPrecheckDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallPrecheckDetailRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNatFirewallPrecheckDetailRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> regionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
