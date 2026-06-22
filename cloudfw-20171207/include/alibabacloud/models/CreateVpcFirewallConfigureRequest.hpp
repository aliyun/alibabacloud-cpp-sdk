// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCONFIGUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCONFIGUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallConfigureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LocalVpcCidrTableList, localVpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(LocalVpcId, localVpcId_);
      DARABONBA_PTR_TO_JSON(LocalVpcRegion, localVpcRegion_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PeerVpcCidrTableList, peerVpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_TO_JSON(PeerVpcRegion, peerVpcRegion_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallSwitch, firewallSwitch_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LocalVpcCidrTableList, localVpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(LocalVpcId, localVpcId_);
      DARABONBA_PTR_FROM_JSON(LocalVpcRegion, localVpcRegion_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PeerVpcCidrTableList, peerVpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(PeerVpcId, peerVpcId_);
      DARABONBA_PTR_FROM_JSON(PeerVpcRegion, peerVpcRegion_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    CreateVpcFirewallConfigureRequest() = default ;
    CreateVpcFirewallConfigureRequest(const CreateVpcFirewallConfigureRequest &) = default ;
    CreateVpcFirewallConfigureRequest(CreateVpcFirewallConfigureRequest &&) = default ;
    CreateVpcFirewallConfigureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallConfigureRequest() = default ;
    CreateVpcFirewallConfigureRequest& operator=(const CreateVpcFirewallConfigureRequest &) = default ;
    CreateVpcFirewallConfigureRequest& operator=(CreateVpcFirewallConfigureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallSwitch_ == nullptr
        && this->lang_ == nullptr && this->localVpcCidrTableList_ == nullptr && this->localVpcId_ == nullptr && this->localVpcRegion_ == nullptr && this->memberUid_ == nullptr
        && this->peerVpcCidrTableList_ == nullptr && this->peerVpcId_ == nullptr && this->peerVpcRegion_ == nullptr && this->vpcFirewallName_ == nullptr; };
    // firewallSwitch Field Functions 
    bool hasFirewallSwitch() const { return this->firewallSwitch_ != nullptr;};
    void deleteFirewallSwitch() { this->firewallSwitch_ = nullptr;};
    inline string getFirewallSwitch() const { DARABONBA_PTR_GET_DEFAULT(firewallSwitch_, "") };
    inline CreateVpcFirewallConfigureRequest& setFirewallSwitch(string firewallSwitch) { DARABONBA_PTR_SET_VALUE(firewallSwitch_, firewallSwitch) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateVpcFirewallConfigureRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // localVpcCidrTableList Field Functions 
    bool hasLocalVpcCidrTableList() const { return this->localVpcCidrTableList_ != nullptr;};
    void deleteLocalVpcCidrTableList() { this->localVpcCidrTableList_ = nullptr;};
    inline string getLocalVpcCidrTableList() const { DARABONBA_PTR_GET_DEFAULT(localVpcCidrTableList_, "") };
    inline CreateVpcFirewallConfigureRequest& setLocalVpcCidrTableList(string localVpcCidrTableList) { DARABONBA_PTR_SET_VALUE(localVpcCidrTableList_, localVpcCidrTableList) };


    // localVpcId Field Functions 
    bool hasLocalVpcId() const { return this->localVpcId_ != nullptr;};
    void deleteLocalVpcId() { this->localVpcId_ = nullptr;};
    inline string getLocalVpcId() const { DARABONBA_PTR_GET_DEFAULT(localVpcId_, "") };
    inline CreateVpcFirewallConfigureRequest& setLocalVpcId(string localVpcId) { DARABONBA_PTR_SET_VALUE(localVpcId_, localVpcId) };


    // localVpcRegion Field Functions 
    bool hasLocalVpcRegion() const { return this->localVpcRegion_ != nullptr;};
    void deleteLocalVpcRegion() { this->localVpcRegion_ = nullptr;};
    inline string getLocalVpcRegion() const { DARABONBA_PTR_GET_DEFAULT(localVpcRegion_, "") };
    inline CreateVpcFirewallConfigureRequest& setLocalVpcRegion(string localVpcRegion) { DARABONBA_PTR_SET_VALUE(localVpcRegion_, localVpcRegion) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline CreateVpcFirewallConfigureRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // peerVpcCidrTableList Field Functions 
    bool hasPeerVpcCidrTableList() const { return this->peerVpcCidrTableList_ != nullptr;};
    void deletePeerVpcCidrTableList() { this->peerVpcCidrTableList_ = nullptr;};
    inline string getPeerVpcCidrTableList() const { DARABONBA_PTR_GET_DEFAULT(peerVpcCidrTableList_, "") };
    inline CreateVpcFirewallConfigureRequest& setPeerVpcCidrTableList(string peerVpcCidrTableList) { DARABONBA_PTR_SET_VALUE(peerVpcCidrTableList_, peerVpcCidrTableList) };


    // peerVpcId Field Functions 
    bool hasPeerVpcId() const { return this->peerVpcId_ != nullptr;};
    void deletePeerVpcId() { this->peerVpcId_ = nullptr;};
    inline string getPeerVpcId() const { DARABONBA_PTR_GET_DEFAULT(peerVpcId_, "") };
    inline CreateVpcFirewallConfigureRequest& setPeerVpcId(string peerVpcId) { DARABONBA_PTR_SET_VALUE(peerVpcId_, peerVpcId) };


    // peerVpcRegion Field Functions 
    bool hasPeerVpcRegion() const { return this->peerVpcRegion_ != nullptr;};
    void deletePeerVpcRegion() { this->peerVpcRegion_ = nullptr;};
    inline string getPeerVpcRegion() const { DARABONBA_PTR_GET_DEFAULT(peerVpcRegion_, "") };
    inline CreateVpcFirewallConfigureRequest& setPeerVpcRegion(string peerVpcRegion) { DARABONBA_PTR_SET_VALUE(peerVpcRegion_, peerVpcRegion) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline CreateVpcFirewallConfigureRequest& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // Settings for the enabling status of the virtual private cloud (VPC) firewall after it is created. Valid values:
    // 
    // - **open** (default): Protection is automatically enabled after the VPC firewall is created.
    // 
    // - **close**: Protection is not automatically enabled after the VPC firewall is created. You can invoke the [ModifyVpcFirewallSwitchStatus](https://help.aliyun.com/document_detail/342935.html) operation to enable protection.
    // 
    // This parameter is required.
    shared_ptr<string> firewallSwitch_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The CIDR block list of the local VPC, in JSON format. This parameter contains the following fields:
    // 
    // - **RouteTableId**: the route table ID of the local VPC.
    // - **RouteEntryList**: specified in JSON format. This field contains DestinationCidr (the destination CIDR block of the local VPC) and NextHopInstanceId (the next hop instance ID of the local VPC).
    // 
    // This parameter is required.
    shared_ptr<string> localVpcCidrTableList_ {};
    // The instance ID of the local VPC.
    // 
    // This parameter is required.
    shared_ptr<string> localVpcId_ {};
    // The region ID of the local VPC.
    // 
    // > For more information about the regions supported by Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    shared_ptr<string> localVpcRegion_ {};
    // The UID of the Alibaba Cloud member account.
    shared_ptr<string> memberUid_ {};
    // The CIDR block list of the peer VPC, in JSON format. This parameter contains the following fields:
    // - **RouteTableId**: the route table ID of the peer VPC.
    // - **RouteEntryList**: specified in JSON format. This field contains DestinationCidr (the destination CIDR block of the peer VPC) and NextHopInstanceId (the next hop instance ID of the peer VPC).
    // 
    // This parameter is required.
    shared_ptr<string> peerVpcCidrTableList_ {};
    // The instance ID of the peer VPC.
    // 
    // This parameter is required.
    shared_ptr<string> peerVpcId_ {};
    // The region ID of the peer VPC.
    // > For more information about the regions supported by Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    // 
    // This parameter is required.
    shared_ptr<string> peerVpcRegion_ {};
    // The instance name of the virtual private cloud (VPC) firewall.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
