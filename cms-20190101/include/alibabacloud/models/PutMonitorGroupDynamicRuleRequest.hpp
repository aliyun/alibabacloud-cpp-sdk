// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMONITORGROUPDYNAMICRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutMonitorGroupDynamicRuleRequestGroupRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMonitorGroupDynamicRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMonitorGroupDynamicRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutMonitorGroupDynamicRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutMonitorGroupDynamicRuleRequest() = default ;
    PutMonitorGroupDynamicRuleRequest(const PutMonitorGroupDynamicRuleRequest &) = default ;
    PutMonitorGroupDynamicRuleRequest(PutMonitorGroupDynamicRuleRequest &&) = default ;
    PutMonitorGroupDynamicRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMonitorGroupDynamicRuleRequest() = default ;
    PutMonitorGroupDynamicRuleRequest& operator=(const PutMonitorGroupDynamicRuleRequest &) = default ;
    PutMonitorGroupDynamicRuleRequest& operator=(PutMonitorGroupDynamicRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->groupRules_ == nullptr && return this->isAsync_ == nullptr && return this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupRules Field Functions 
    bool hasGroupRules() const { return this->groupRules_ != nullptr;};
    void deleteGroupRules() { this->groupRules_ = nullptr;};
    inline const vector<PutMonitorGroupDynamicRuleRequestGroupRules> & groupRules() const { DARABONBA_PTR_GET_CONST(groupRules_, vector<PutMonitorGroupDynamicRuleRequestGroupRules>) };
    inline vector<PutMonitorGroupDynamicRuleRequestGroupRules> groupRules() { DARABONBA_PTR_GET(groupRules_, vector<PutMonitorGroupDynamicRuleRequestGroupRules>) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupRules(const vector<PutMonitorGroupDynamicRuleRequestGroupRules> & groupRules) { DARABONBA_PTR_SET_VALUE(groupRules_, groupRules) };
    inline PutMonitorGroupDynamicRuleRequest& setGroupRules(vector<PutMonitorGroupDynamicRuleRequestGroupRules> && groupRules) { DARABONBA_PTR_SET_RVALUE(groupRules_, groupRules) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool isAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline PutMonitorGroupDynamicRuleRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMonitorGroupDynamicRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // None.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutMonitorGroupDynamicRuleRequestGroupRules>> groupRules_ = nullptr;
    // The mode for creating the alert rule. Valid values:
    // 
    // *   true: creates asynchronously
    // *   false (default): creates synchronously
    std::shared_ptr<bool> isAsync_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
