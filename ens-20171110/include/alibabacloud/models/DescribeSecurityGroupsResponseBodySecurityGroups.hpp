// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPSRESPONSEBODYSECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupsResponseBodySecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupsResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupsResponseBodySecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
    };
    DescribeSecurityGroupsResponseBodySecurityGroups() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroups(const DescribeSecurityGroupsResponseBodySecurityGroups &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroups(DescribeSecurityGroupsResponseBodySecurityGroups &&) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupsResponseBodySecurityGroups() = default ;
    DescribeSecurityGroupsResponseBodySecurityGroups& operator=(const DescribeSecurityGroupsResponseBodySecurityGroups &) = default ;
    DescribeSecurityGroupsResponseBodySecurityGroups& operator=(DescribeSecurityGroupsResponseBodySecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityGroup_ != nullptr; };
    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline const vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup> & securityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup>) };
    inline vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup> securityGroup() { DARABONBA_PTR_GET(securityGroup_, vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup>) };
    inline DescribeSecurityGroupsResponseBodySecurityGroups& setSecurityGroup(const vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup> & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
    inline DescribeSecurityGroupsResponseBodySecurityGroups& setSecurityGroup(vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup> && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeSecurityGroupsResponseBodySecurityGroupsSecurityGroup>> securityGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
