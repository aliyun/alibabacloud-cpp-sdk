// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERVPCSECURITYGROUPRESPONSEBODYSECURITYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERVPCSECURITYGROUPRESPONSEBODYSECURITYGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetUserVpcSecurityGroupResponseBodySecurityGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserVpcSecurityGroupResponseBodySecurityGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserVpcSecurityGroupResponseBodySecurityGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetUserVpcSecurityGroupResponseBodySecurityGroupList() = default ;
    GetUserVpcSecurityGroupResponseBodySecurityGroupList(const GetUserVpcSecurityGroupResponseBodySecurityGroupList &) = default ;
    GetUserVpcSecurityGroupResponseBodySecurityGroupList(GetUserVpcSecurityGroupResponseBodySecurityGroupList &&) = default ;
    GetUserVpcSecurityGroupResponseBodySecurityGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserVpcSecurityGroupResponseBodySecurityGroupList() = default ;
    GetUserVpcSecurityGroupResponseBodySecurityGroupList& operator=(const GetUserVpcSecurityGroupResponseBodySecurityGroupList &) = default ;
    GetUserVpcSecurityGroupResponseBodySecurityGroupList& operator=(GetUserVpcSecurityGroupResponseBodySecurityGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->securityGroupName_ == nullptr && return this->vpcId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserVpcSecurityGroupResponseBodySecurityGroupList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetUserVpcSecurityGroupResponseBodySecurityGroupList& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline GetUserVpcSecurityGroupResponseBodySecurityGroupList& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetUserVpcSecurityGroupResponseBodySecurityGroupList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
