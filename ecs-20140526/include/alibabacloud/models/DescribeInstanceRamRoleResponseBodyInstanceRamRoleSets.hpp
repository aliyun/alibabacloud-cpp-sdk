// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODYINSTANCERAMROLESETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODYINSTANCERAMROLESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
    };
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets() = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets(const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets &) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets(DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets &&) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets() = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& operator=(const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets &) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& operator=(DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRamRoleSet_ != nullptr; };
    // instanceRamRoleSet Field Functions 
    bool hasInstanceRamRoleSet() const { return this->instanceRamRoleSet_ != nullptr;};
    void deleteInstanceRamRoleSet() { this->instanceRamRoleSet_ = nullptr;};
    inline const vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet> & instanceRamRoleSet() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSet_, vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet>) };
    inline vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet> instanceRamRoleSet() { DARABONBA_PTR_GET(instanceRamRoleSet_, vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet>) };
    inline DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& setInstanceRamRoleSet(const vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet> & instanceRamRoleSet) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSet_, instanceRamRoleSet) };
    inline DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets& setInstanceRamRoleSet(vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet> && instanceRamRoleSet) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSet_, instanceRamRoleSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet>> instanceRamRoleSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
