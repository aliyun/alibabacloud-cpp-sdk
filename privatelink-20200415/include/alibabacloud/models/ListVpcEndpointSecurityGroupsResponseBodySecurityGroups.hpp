// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSECURITYGROUPSRESPONSEBODYSECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSECURITYGROUPSRESPONSEBODYSECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointSecurityGroupsResponseBodySecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupStatus, securityGroupStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupStatus, securityGroupStatus_);
    };
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups() = default ;
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups(const ListVpcEndpointSecurityGroupsResponseBodySecurityGroups &) = default ;
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups(ListVpcEndpointSecurityGroupsResponseBodySecurityGroups &&) = default ;
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointSecurityGroupsResponseBodySecurityGroups() = default ;
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& operator=(const ListVpcEndpointSecurityGroupsResponseBodySecurityGroups &) = default ;
    ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& operator=(ListVpcEndpointSecurityGroupsResponseBodySecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && return this->securityGroupStatus_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupStatus Field Functions 
    bool hasSecurityGroupStatus() const { return this->securityGroupStatus_ != nullptr;};
    void deleteSecurityGroupStatus() { this->securityGroupStatus_ = nullptr;};
    inline string securityGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(securityGroupStatus_, "") };
    inline ListVpcEndpointSecurityGroupsResponseBodySecurityGroups& setSecurityGroupStatus(string securityGroupStatus) { DARABONBA_PTR_SET_VALUE(securityGroupStatus_, securityGroupStatus) };


  protected:
    // The ID of the security group that is associated with the endpoint.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The associate status of the security group, valid values:
    // - Attaching: The security group is being attached.
    // - Attached: The security group is attached.
    // - Detaching: The security group is being detached.
    std::shared_ptr<string> securityGroupStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
