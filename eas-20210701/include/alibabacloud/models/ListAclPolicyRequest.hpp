// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListAclPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListAclPolicyRequest() = default ;
    ListAclPolicyRequest(const ListAclPolicyRequest &) = default ;
    ListAclPolicyRequest(ListAclPolicyRequest &&) = default ;
    ListAclPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclPolicyRequest() = default ;
    ListAclPolicyRequest& operator=(const ListAclPolicyRequest &) = default ;
    ListAclPolicyRequest& operator=(ListAclPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAclPolicyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the virtual private cloud (VPC). For more information about how to obtain the VPC ID, see DescribeVpcs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
