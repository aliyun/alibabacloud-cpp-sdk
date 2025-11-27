// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceGroupsResponseBodyResourceGroupAppRules.hpp>
#include <alibabacloud/models/DescribeResourceGroupsResponseBodyResourceGroupPolicies.hpp>
#include <alibabacloud/models/DescribeResourceGroupsResponseBodyResourceGroupTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeResourceGroupsResponseBodyResourceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupsResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AppRules, appRules_);
      DARABONBA_PTR_TO_JSON(AuthCount, authCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Timers, timers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupsResponseBodyResourceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AppRules, appRules_);
      DARABONBA_PTR_FROM_JSON(AuthCount, authCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Timers, timers_);
    };
    DescribeResourceGroupsResponseBodyResourceGroup() = default ;
    DescribeResourceGroupsResponseBodyResourceGroup(const DescribeResourceGroupsResponseBodyResourceGroup &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroup(DescribeResourceGroupsResponseBodyResourceGroup &&) = default ;
    DescribeResourceGroupsResponseBodyResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupsResponseBodyResourceGroup() = default ;
    DescribeResourceGroupsResponseBodyResourceGroup& operator=(const DescribeResourceGroupsResponseBodyResourceGroup &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroup& operator=(DescribeResourceGroupsResponseBodyResourceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appRules_ == nullptr
        && return this->authCount_ == nullptr && return this->createTime_ == nullptr && return this->policies_ == nullptr && return this->resourceCount_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceGroupName_ == nullptr && return this->timers_ == nullptr; };
    // appRules Field Functions 
    bool hasAppRules() const { return this->appRules_ != nullptr;};
    void deleteAppRules() { this->appRules_ = nullptr;};
    inline const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules> & appRules() const { DARABONBA_PTR_GET_CONST(appRules_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules>) };
    inline vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules> appRules() { DARABONBA_PTR_GET(appRules_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules>) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setAppRules(const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules> & appRules) { DARABONBA_PTR_SET_VALUE(appRules_, appRules) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setAppRules(vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules> && appRules) { DARABONBA_PTR_SET_RVALUE(appRules_, appRules) };


    // authCount Field Functions 
    bool hasAuthCount() const { return this->authCount_ != nullptr;};
    void deleteAuthCount() { this->authCount_ = nullptr;};
    inline string authCount() const { DARABONBA_PTR_GET_DEFAULT(authCount_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setAuthCount(string authCount) { DARABONBA_PTR_SET_VALUE(authCount_, authCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies>) };
    inline vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies>) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setPolicies(const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setPolicies(vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline string resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setResourceCount(string resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // timers Field Functions 
    bool hasTimers() const { return this->timers_ != nullptr;};
    void deleteTimers() { this->timers_ = nullptr;};
    inline const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers> & timers() const { DARABONBA_PTR_GET_CONST(timers_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers>) };
    inline vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers> timers() { DARABONBA_PTR_GET(timers_, vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers>) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setTimers(const vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
    inline DescribeResourceGroupsResponseBodyResourceGroup& setTimers(vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourceGroupsResponseBodyResourceGroupAppRules>> appRules_ = nullptr;
    // The number of administrators that are authorized to access the resource group.
    std::shared_ptr<string> authCount_ = nullptr;
    // The time when the resource group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // >  The policy that is associated with the resource group.
    // 
    // *   The policy applies to cloud computers in the resource group. If multiple policies exist, they are enforced in order of priority.
    // 
    // *   If any of these cloud computers are already associated with other policies, the resource group\\"s policy takes precedence.
    std::shared_ptr<vector<Models::DescribeResourceGroupsResponseBodyResourceGroupPolicies>> policies_ = nullptr;
    // The number of resources in the resource group.
    std::shared_ptr<string> resourceCount_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // >  The associated scheduled task.
    // 
    // *   The scheduled task applies to all cloud computers in the resource group. If any of these cloud computers are already associated with other scheduled tasks, the resource group\\"s scheduled task takes precedence.
    std::shared_ptr<vector<Models::DescribeResourceGroupsResponseBodyResourceGroupTimers>> timers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
