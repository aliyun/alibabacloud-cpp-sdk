// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEVPCFIREWALLCONTROLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class BatchDeleteVpcFirewallControlPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuidList, aclUuidList_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteVpcFirewallControlPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuidList, aclUuidList_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    BatchDeleteVpcFirewallControlPolicyRequest() = default ;
    BatchDeleteVpcFirewallControlPolicyRequest(const BatchDeleteVpcFirewallControlPolicyRequest &) = default ;
    BatchDeleteVpcFirewallControlPolicyRequest(BatchDeleteVpcFirewallControlPolicyRequest &&) = default ;
    BatchDeleteVpcFirewallControlPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteVpcFirewallControlPolicyRequest() = default ;
    BatchDeleteVpcFirewallControlPolicyRequest& operator=(const BatchDeleteVpcFirewallControlPolicyRequest &) = default ;
    BatchDeleteVpcFirewallControlPolicyRequest& operator=(BatchDeleteVpcFirewallControlPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuidList_ == nullptr
        && this->vpcFirewallId_ == nullptr; };
    // aclUuidList Field Functions 
    bool hasAclUuidList() const { return this->aclUuidList_ != nullptr;};
    void deleteAclUuidList() { this->aclUuidList_ = nullptr;};
    inline const vector<string> & getAclUuidList() const { DARABONBA_PTR_GET_CONST(aclUuidList_, vector<string>) };
    inline vector<string> getAclUuidList() { DARABONBA_PTR_GET(aclUuidList_, vector<string>) };
    inline BatchDeleteVpcFirewallControlPolicyRequest& setAclUuidList(const vector<string> & aclUuidList) { DARABONBA_PTR_SET_VALUE(aclUuidList_, aclUuidList) };
    inline BatchDeleteVpcFirewallControlPolicyRequest& setAclUuidList(vector<string> && aclUuidList) { DARABONBA_PTR_SET_RVALUE(aclUuidList_, aclUuidList) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline BatchDeleteVpcFirewallControlPolicyRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The UUIDs of access control policies.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> aclUuidList_ {};
    // The instance ID of the VPC firewall.
    // 
    // This parameter is required.
    shared_ptr<string> vpcFirewallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
