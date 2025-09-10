// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAclPolicyRequestAclPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteAclPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAclPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclPolicyList, aclPolicyList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAclPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclPolicyList, aclPolicyList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteAclPolicyRequest() = default ;
    DeleteAclPolicyRequest(const DeleteAclPolicyRequest &) = default ;
    DeleteAclPolicyRequest(DeleteAclPolicyRequest &&) = default ;
    DeleteAclPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAclPolicyRequest() = default ;
    DeleteAclPolicyRequest& operator=(const DeleteAclPolicyRequest &) = default ;
    DeleteAclPolicyRequest& operator=(DeleteAclPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclPolicyList_ != nullptr
        && this->vpcId_ != nullptr; };
    // aclPolicyList Field Functions 
    bool hasAclPolicyList() const { return this->aclPolicyList_ != nullptr;};
    void deleteAclPolicyList() { this->aclPolicyList_ = nullptr;};
    inline const vector<DeleteAclPolicyRequestAclPolicyList> & aclPolicyList() const { DARABONBA_PTR_GET_CONST(aclPolicyList_, vector<DeleteAclPolicyRequestAclPolicyList>) };
    inline vector<DeleteAclPolicyRequestAclPolicyList> aclPolicyList() { DARABONBA_PTR_GET(aclPolicyList_, vector<DeleteAclPolicyRequestAclPolicyList>) };
    inline DeleteAclPolicyRequest& setAclPolicyList(const vector<DeleteAclPolicyRequestAclPolicyList> & aclPolicyList) { DARABONBA_PTR_SET_VALUE(aclPolicyList_, aclPolicyList) };
    inline DeleteAclPolicyRequest& setAclPolicyList(vector<DeleteAclPolicyRequestAclPolicyList> && aclPolicyList) { DARABONBA_PTR_SET_RVALUE(aclPolicyList_, aclPolicyList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteAclPolicyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The whitelisted IP CIDR blocks in the VPC that can access the private gateway.
    std::shared_ptr<vector<DeleteAclPolicyRequestAclPolicyList>> aclPolicyList_ = nullptr;
    // The ID of the virtual private cloud (VPC). For more information about how to obtain the VPC ID, see DescribeVpcs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
