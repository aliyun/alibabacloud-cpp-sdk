// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODYDETACHINSTANCERAMROLERESULTSDETACHINSTANCERAMROLERESULTINSTANCERAMROLESETS_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCERAMROLERESPONSEBODYDETACHINSTANCERAMROLERESULTSDETACHINSTANCERAMROLERESULTINSTANCERAMROLESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
    };
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets() = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets(const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets &) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets(DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets &&) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets() = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& operator=(const DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets &) = default ;
    DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& operator=(DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceRamRoleSet_ == nullptr; };
    // instanceRamRoleSet Field Functions 
    bool hasInstanceRamRoleSet() const { return this->instanceRamRoleSet_ != nullptr;};
    void deleteInstanceRamRoleSet() { this->instanceRamRoleSet_ = nullptr;};
    inline const vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet> & instanceRamRoleSet() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSet_, vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet>) };
    inline vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet> instanceRamRoleSet() { DARABONBA_PTR_GET(instanceRamRoleSet_, vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet>) };
    inline DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& setInstanceRamRoleSet(const vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet> & instanceRamRoleSet) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSet_, instanceRamRoleSet) };
    inline DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSets& setInstanceRamRoleSet(vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet> && instanceRamRoleSet) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSet_, instanceRamRoleSet) };


  protected:
    std::shared_ptr<vector<Models::DetachInstanceRamRoleResponseBodyDetachInstanceRamRoleResultsDetachInstanceRamRoleResultInstanceRamRoleSetsInstanceRamRoleSet>> instanceRamRoleSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
