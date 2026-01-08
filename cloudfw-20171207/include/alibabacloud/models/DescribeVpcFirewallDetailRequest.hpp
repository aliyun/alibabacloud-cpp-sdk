// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LocalVpcId, localVpcId_);
      DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LocalVpcId, localVpcId_);
      DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeVpcFirewallDetailRequest() = default ;
    DescribeVpcFirewallDetailRequest(const DescribeVpcFirewallDetailRequest &) = default ;
    DescribeVpcFirewallDetailRequest(DescribeVpcFirewallDetailRequest &&) = default ;
    DescribeVpcFirewallDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailRequest() = default ;
    DescribeVpcFirewallDetailRequest& operator=(const DescribeVpcFirewallDetailRequest &) = default ;
    DescribeVpcFirewallDetailRequest& operator=(DescribeVpcFirewallDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->localVpcId_ == nullptr && this->peerVpcId_ == nullptr && this->vpcFirewallId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // localVpcId Field Functions 
    bool hasLocalVpcId() const { return this->localVpcId_ != nullptr;};
    void deleteLocalVpcId() { this->localVpcId_ = nullptr;};
    inline string getLocalVpcId() const { DARABONBA_PTR_GET_DEFAULT(localVpcId_, "") };
    inline DescribeVpcFirewallDetailRequest& setLocalVpcId(string localVpcId) { DARABONBA_PTR_SET_VALUE(localVpcId_, localVpcId) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string getPeerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline DescribeVpcFirewallDetailRequest& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallDetailRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The natural language of the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the local VPC.
    shared_ptr<string> localVpcId_ {};
    // The ID of the peer VPC.
    shared_ptr<string> peerVpcId_ {};
    // The instance ID of the VPC firewall.
    // 
    // >  You can call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation to query the instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
