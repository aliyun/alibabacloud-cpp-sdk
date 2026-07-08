// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLTRAFFICTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLTRAFFICTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallTrafficTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallTrafficTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallTrafficTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeVpcFirewallTrafficTrendRequest() = default ;
    DescribeVpcFirewallTrafficTrendRequest(const DescribeVpcFirewallTrafficTrendRequest &) = default ;
    DescribeVpcFirewallTrafficTrendRequest(DescribeVpcFirewallTrafficTrendRequest &&) = default ;
    DescribeVpcFirewallTrafficTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallTrafficTrendRequest() = default ;
    DescribeVpcFirewallTrafficTrendRequest& operator=(const DescribeVpcFirewallTrafficTrendRequest &) = default ;
    DescribeVpcFirewallTrafficTrendRequest& operator=(DescribeVpcFirewallTrafficTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->lang_ == nullptr && this->peerVpcId_ == nullptr && this->privateIP_ == nullptr && this->startTime_ == nullptr && this->vpcId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string getPeerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcFirewallTrafficTrendRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The end time. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The language of the request and response. Valid values:
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The instance ID of the peer VPC instance.
    shared_ptr<string> peerVpcId_ {};
    // The private IP address.
    shared_ptr<string> privateIP_ {};
    // The start time. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The instance ID of the VPC-connected instance.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
