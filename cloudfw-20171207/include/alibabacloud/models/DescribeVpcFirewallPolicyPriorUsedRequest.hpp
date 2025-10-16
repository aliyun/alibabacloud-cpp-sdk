// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPOLICYPRIORUSEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPOLICYPRIORUSEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallPolicyPriorUsedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallPolicyPriorUsedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallPolicyPriorUsedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
    };
    DescribeVpcFirewallPolicyPriorUsedRequest() = default ;
    DescribeVpcFirewallPolicyPriorUsedRequest(const DescribeVpcFirewallPolicyPriorUsedRequest &) = default ;
    DescribeVpcFirewallPolicyPriorUsedRequest(DescribeVpcFirewallPolicyPriorUsedRequest &&) = default ;
    DescribeVpcFirewallPolicyPriorUsedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallPolicyPriorUsedRequest() = default ;
    DescribeVpcFirewallPolicyPriorUsedRequest& operator=(const DescribeVpcFirewallPolicyPriorUsedRequest &) = default ;
    DescribeVpcFirewallPolicyPriorUsedRequest& operator=(DescribeVpcFirewallPolicyPriorUsedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->vpcFirewallId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallPolicyPriorUsedRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // vpcFirewallId Field Functions 
    bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
    void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
    inline string vpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
    inline DescribeVpcFirewallPolicyPriorUsedRequest& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


  protected:
    // The language of the content within the request and response.
    // 
    // Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the access control policy group. You can call the [DescribeVpcFirewallAclGroupList](https://help.aliyun.com/document_detail/159760.html) operation to query the ID.
    // 
    // *   If the VPC firewall is used to protect a Cloud Enterprise Network (CEN) instance, the value of this parameter is the ID of the CEN instance.
    // 
    //     Example: cen-ervw0g12b5jbw\\*\\*\\*\\*.
    // 
    // *   If the VPC firewall is used to protect an Express Connect circuit, the value of this parameter is the ID of the VPC firewall.
    // 
    //     Example: vfw-a42bbb7b887148c9\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcFirewallId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
