// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODYINSTANCERAMROLESETSINSTANCERAMROLESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODYINSTANCERAMROLESETSINSTANCERAMROLESET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
    };
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet() = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet(const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet &) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet(DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet &&) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet() = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& operator=(const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet &) = default ;
    DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& operator=(DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->ramRoleName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string ramRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline DescribeInstanceRamRoleResponseBodyInstanceRamRoleSetsInstanceRamRoleSet& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


  protected:
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance RAM role.
    std::shared_ptr<string> ramRoleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
