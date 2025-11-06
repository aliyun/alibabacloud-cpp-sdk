// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSecurityGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_TO_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupType, securityGroupType_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListSecurityGroupResponseBodyData() = default ;
    ListSecurityGroupResponseBodyData(const ListSecurityGroupResponseBodyData &) = default ;
    ListSecurityGroupResponseBodyData(ListSecurityGroupResponseBodyData &&) = default ;
    ListSecurityGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityGroupResponseBodyData() = default ;
    ListSecurityGroupResponseBodyData& operator=(const ListSecurityGroupResponseBodyData &) = default ;
    ListSecurityGroupResponseBodyData& operator=(ListSecurityGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && return this->securityGroupName_ == nullptr && return this->securityGroupType_ == nullptr && return this->vpcId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListSecurityGroupResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline ListSecurityGroupResponseBodyData& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    // securityGroupType Field Functions 
    bool hasSecurityGroupType() const { return this->securityGroupType_ != nullptr;};
    void deleteSecurityGroupType() { this->securityGroupType_ = nullptr;};
    inline string securityGroupType() const { DARABONBA_PTR_GET_DEFAULT(securityGroupType_, "") };
    inline ListSecurityGroupResponseBodyData& setSecurityGroupType(string securityGroupType) { DARABONBA_PTR_SET_VALUE(securityGroupType_, securityGroupType) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListSecurityGroupResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
    // The type of the security group. Valid values:
    // 
    // *   normal: basic security group
    // *   enterprise: advanced security group For more information, see [Advanced security groups](https://help.aliyun.com/document_detail/120621.html).
    std::shared_ptr<string> securityGroupType_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
