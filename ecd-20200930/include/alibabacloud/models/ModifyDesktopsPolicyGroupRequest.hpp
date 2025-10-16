// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPOLICYGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopsPolicyGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopsPolicyGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopsPolicyGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyDesktopsPolicyGroupRequest() = default ;
    ModifyDesktopsPolicyGroupRequest(const ModifyDesktopsPolicyGroupRequest &) = default ;
    ModifyDesktopsPolicyGroupRequest(ModifyDesktopsPolicyGroupRequest &&) = default ;
    ModifyDesktopsPolicyGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopsPolicyGroupRequest() = default ;
    ModifyDesktopsPolicyGroupRequest& operator=(const ModifyDesktopsPolicyGroupRequest &) = default ;
    ModifyDesktopsPolicyGroupRequest& operator=(ModifyDesktopsPolicyGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->policyGroupId_ == nullptr && return this->policyGroupIds_ == nullptr && return this->regionId_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline ModifyDesktopsPolicyGroupRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline ModifyDesktopsPolicyGroupRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline ModifyDesktopsPolicyGroupRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // policyGroupIds Field Functions 
    bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
    void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
    inline const vector<string> & policyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
    inline vector<string> policyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
    inline ModifyDesktopsPolicyGroupRequest& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
    inline ModifyDesktopsPolicyGroupRequest& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopsPolicyGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cloud computer IDs. You can specify one or more cloud computers IDs. The value is a JSON array.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    // The ID of the cloud computer policy that you want to associate with cloud computers.
    // 
    // >  If the `PolicyGroupIds` parameter is used, ignore the current parameter.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The IDs of the cloud computer policies that you want to associate with cloud computers.
    // 
    // >  You can specify up to one cloud computer policy that takes effect globally, and up to four cloud computer policies that apply to specific IP addresses. If you specify more than one cloud computer policy that takes effect globally, only the policy first associate with the cloud computer can take effect.
    std::shared_ptr<vector<string>> policyGroupIds_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
