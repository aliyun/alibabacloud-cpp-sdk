// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCOPYVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCOPYVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class BatchCopyVpcFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCopyVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SourceVpcFirewallId, sourceVpcFirewallId_);
      DARABONBA_PTR_TO_JSON(TargetVpcFirewallId, targetVpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCopyVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SourceVpcFirewallId, sourceVpcFirewallId_);
      DARABONBA_PTR_FROM_JSON(TargetVpcFirewallId, targetVpcFirewallId_);
    };
    BatchCopyVpcFirewallControlPolicyRequest() = default ;
    BatchCopyVpcFirewallControlPolicyRequest(const BatchCopyVpcFirewallControlPolicyRequest &) = default ;
    BatchCopyVpcFirewallControlPolicyRequest(BatchCopyVpcFirewallControlPolicyRequest &&) = default ;
    BatchCopyVpcFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCopyVpcFirewallControlPolicyRequest() = default ;
    BatchCopyVpcFirewallControlPolicyRequest& operator=(const BatchCopyVpcFirewallControlPolicyRequest &) = default ;
    BatchCopyVpcFirewallControlPolicyRequest& operator=(BatchCopyVpcFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->sourceIp_ != nullptr && this->sourceVpcFirewallId_ != nullptr && this->targetVpcFirewallId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BatchCopyVpcFirewallControlPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline BatchCopyVpcFirewallControlPolicyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // sourceVpcFirewallId Field Functions 
    bool hasSourceVpcFirewallId() const { return this->sourceVpcFirewallId_ != nullptr;};
    void deleteSourceVpcFirewallId() { this->sourceVpcFirewallId_ = nullptr;};
    inline string sourceVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(sourceVpcFirewallId_, "") };
    inline BatchCopyVpcFirewallControlPolicyRequest& setSourceVpcFirewallId(string sourceVpcFirewallId) { DARABONBA_PTR_SET_VALUE(sourceVpcFirewallId_, sourceVpcFirewallId) };


    // targetVpcFirewallId Field Functions 
    bool hasTargetVpcFirewallId() const { return this->targetVpcFirewallId_ != nullptr;};
    void deleteTargetVpcFirewallId() { this->targetVpcFirewallId_ = nullptr;};
    inline string targetVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(targetVpcFirewallId_, "") };
    inline BatchCopyVpcFirewallControlPolicyRequest& setTargetVpcFirewallId(string targetVpcFirewallId) { DARABONBA_PTR_SET_VALUE(targetVpcFirewallId_, targetVpcFirewallId) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the policy group of the source VPC firewall. Valid values:
    // 
    // *   If the VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance. The network instance can be a VPC, a virtual border router (VBR), or a Cloud Connect Network (CCN) instance.
    // *   If the VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit, the value of this parameter is the instance ID of the VPC firewall.
    // 
    // >  You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the IDs of policy groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceVpcFirewallId_ = nullptr;
    // The ID of the policy group of the destination VPC firewall. Valid values:
    // 
    // *   If the VPC firewall protects mutual access traffic between a VPC and a specified network instance that is attached to a CEN instance, the value of this parameter is the ID of the CEN instance. The network instance can be a VPC, a VBR, or a CCN instance.
    // *   If the VPC firewall protects traffic between two VPCs that are connected by using an Express Connect circuit, the value of this parameter is the instance ID of the VPC firewall.
    // 
    // >  You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the IDs of policy groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetVpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
