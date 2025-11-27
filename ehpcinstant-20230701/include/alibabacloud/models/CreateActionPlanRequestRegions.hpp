// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIONPLANREQUESTREGIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIONPLANREQUESTREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateActionPlanRequestRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActionPlanRequestRegions& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActionPlanRequestRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    CreateActionPlanRequestRegions() = default ;
    CreateActionPlanRequestRegions(const CreateActionPlanRequestRegions &) = default ;
    CreateActionPlanRequestRegions(CreateActionPlanRequestRegions &&) = default ;
    CreateActionPlanRequestRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActionPlanRequestRegions() = default ;
    CreateActionPlanRequestRegions& operator=(const CreateActionPlanRequestRegions &) = default ;
    CreateActionPlanRequestRegions& operator=(CreateActionPlanRequestRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->securityGroupId_ == nullptr && return this->securityGroupIds_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateActionPlanRequestRegions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline CreateActionPlanRequestRegions& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateActionPlanRequestRegions& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateActionPlanRequestRegions& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateActionPlanRequestRegions& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateActionPlanRequestRegions& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateActionPlanRequestRegions& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of security groups available for the execution plan in the region. You can have 0 to 5 security groups.
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The list of VSwitches available for the execution plan in the region. Supports 0 to 5 VSwitches.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
