// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONFIGUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCFIREWALLCONFIGUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyVpcFirewallConfigureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LocalVpcCidrTableList, localVpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PeerVpcCidrTableList, peerVpcCidrTableList_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcFirewallConfigureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LocalVpcCidrTableList, localVpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PeerVpcCidrTableList, peerVpcCidrTableList_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
    };
    ModifyVpcFirewallConfigureRequest() = default ;
    ModifyVpcFirewallConfigureRequest(const ModifyVpcFirewallConfigureRequest &) = default ;
    ModifyVpcFirewallConfigureRequest(ModifyVpcFirewallConfigureRequest &&) = default ;
    ModifyVpcFirewallConfigureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcFirewallConfigureRequest() = default ;
    ModifyVpcFirewallConfigureRequest& operator=(const ModifyVpcFirewallConfigureRequest &) = default ;
    ModifyVpcFirewallConfigureRequest& operator=(ModifyVpcFirewallConfigureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->localVpcCidrTableList_ == nullptr && this->memberUid_ == nullptr && this->peerVpcCidrTableList_ == nullptr && this->vpcFirewallId_ == nullptr && this->vpcFirewallName_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyVpcFirewallConfigureRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // localVpcCidrTableList Field Functions 
    bool hasLocalVpcCidrTableList() const { return this->localVpcCidrTableList_ != nullptr;};
    void deleteLocalVpcCidrTableList() { this->localVpcCidrTableList_ = nullptr;};
    inline string getLocalVpcCidrTableList() const { DARABONBA_PTR_GET_DEFAULT(localVpcCidrTableList_, "") };
    inline ModifyVpcFirewallConfigureRequest& setLocalVpcCidrTableList(string localVpcCidrTableList) { DARABONBA_PTR_SET_VALUE(localVpcCidrTableList_, localVpcCidrTableList) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline ModifyVpcFirewallConfigureRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // peerVpcCidrTableList Field Functions 
    bool hasPeerVpcCidrTableList() const { return this->peerVpcCidrTableList_ != nullptr;};
    void deletePeerVpcCidrTableList() { this->peerVpcCidrTableList_ = nullptr;};
    inline string getPeerVpcCidrTableList() const { DARABONBA_PTR_GET_DEFAULT(peerVpcCidrTableList_, "") };
    inline ModifyVpcFirewallConfigureRequest& setPeerVpcCidrTableList(string peerVpcCidrTableList) { DARABONBA_PTR_SET_VALUE(peerVpcCidrTableList_, peerVpcCidrTableList) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline ModifyVpcFirewallConfigureRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


    // vpcFirewallName Field Functions 
    bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
    void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
    inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
    inline ModifyVpcFirewallConfigureRequest& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


  protected:
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The CIDR block information of the local VPC. The value is a JSON string and contains the following parameters:
    // 
    // - **RouteTableId**: The ID of the route table for the local VPC.
    // 
    // - **RouteEntryList**: The route entries for the local VPC. This parameter is a JSON string that contains DestinationCidr (the destination CIDR block of the local VPC) and NextHopInstanceId (the ID of the next hop instance for the local VPC).
    // 
    // > Call the [DescribeVpcFirewallDetail](https://help.aliyun.com/document_detail/342892.html) operation to query the CIDR block information of the local VPC for the VPC firewall.
    // 
    // This parameter is required.
    shared_ptr<string> localVpcCidrTableList_ {};
    // The UID of the member account.
    shared_ptr<string> memberUid_ {};
    // The CIDR block information of the peer VPC. The value is a JSON string and contains the following parameters:
    // 
    // - **RouteTableId**: The ID of the route table for the peer VPC.
    // 
    // - **RouteEntryList**: The route entries for the peer VPC. This parameter is a JSON string that contains DestinationCidr (the destination CIDR block of the peer VPC) and NextHopInstanceId (the ID of the next hop instance for the peer VPC).
    // 
    // > Call the [DescribeVpcFirewallDetail](https://help.aliyun.com/document_detail/342892.html) operation to query the CIDR block information of the peer VPC for the VPC firewall.
    // 
    // This parameter is required.
    shared_ptr<string> peerVpcCidrTableList_ {};
    // The instance ID of the VPC firewall.
    // 
    // > Call the [DescribeVpcFirewallList](https://help.aliyun.com/document_detail/342932.html) operation to query the instance IDs of VPC firewalls.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
    // The instance name of the VPC firewall.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
