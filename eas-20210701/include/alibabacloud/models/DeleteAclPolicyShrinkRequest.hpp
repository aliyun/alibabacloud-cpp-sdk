// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACLPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACLPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteAclPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyListShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAclPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyListShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteAclPolicyShrinkRequest() = default ;
    DeleteAclPolicyShrinkRequest(const DeleteAclPolicyShrinkRequest &) = default ;
    DeleteAclPolicyShrinkRequest(DeleteAclPolicyShrinkRequest &&) = default ;
    DeleteAclPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAclPolicyShrinkRequest() = default ;
    DeleteAclPolicyShrinkRequest& operator=(const DeleteAclPolicyShrinkRequest &) = default ;
    DeleteAclPolicyShrinkRequest& operator=(DeleteAclPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclPolicyListShrink_ != nullptr
        && this->vpcId_ != nullptr; };
    // aclPolicyListShrink Field Functions 
    bool hasAclPolicyListShrink() const { return this->aclPolicyListShrink_ != nullptr;};
    void deleteAclPolicyListShrink() { this->aclPolicyListShrink_ = nullptr;};
    inline string aclPolicyListShrink() const { DARABONBA_PTR_GET_DEFAULT(aclPolicyListShrink_, "") };
    inline DeleteAclPolicyShrinkRequest& setAclPolicyListShrink(string aclPolicyListShrink) { DARABONBA_PTR_SET_VALUE(aclPolicyListShrink_, aclPolicyListShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteAclPolicyShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The whitelisted IP CIDR blocks in the VPC that can access the private gateway.
    std::shared_ptr<string> aclPolicyListShrink_ = nullptr;
    // The ID of the virtual private cloud (VPC). For more information about how to obtain the VPC ID, see DescribeVpcs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
