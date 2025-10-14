// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODYDESCRIBEMETRICRULEBLACKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODYDESCRIBEMETRICRULEBLACKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_TO_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(EnableEndTime, enableEndTime_);
      DARABONBA_PTR_FROM_JSON(EnableStartTime, enableStartTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList() = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList(const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList &) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList(DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList &&) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList() = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& operator=(const DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList &) = default ;
    DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& operator=(DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->createTime_ == nullptr && return this->effectiveTime_ == nullptr && return this->enableEndTime_ == nullptr && return this->enableStartTime_ == nullptr && return this->id_ == nullptr
        && return this->instances_ == nullptr && return this->isEnable_ == nullptr && return this->metrics_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->scopeType_ == nullptr && return this->scopeValue_ == nullptr && return this->updateTime_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string effectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // enableEndTime Field Functions 
    bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
    void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
    inline int64_t enableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, 0L) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setEnableEndTime(int64_t enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


    // enableStartTime Field Functions 
    bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
    void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
    inline int64_t enableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, 0L) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setEnableStartTime(int64_t enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline bool isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics>) };
    inline vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics>) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setMetrics(const vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setMetrics(vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // scopeValue Field Functions 
    bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
    void deleteScopeValue() { this->scopeValue_ = nullptr;};
    inline const vector<string> & scopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
    inline vector<string> scopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The category of the cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    std::shared_ptr<string> category_ = nullptr;
    // The timestamp when the blacklist policy was created.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time range within which the blacklist policy is effective.
    std::shared_ptr<string> effectiveTime_ = nullptr;
    // The timestamp when the blacklist policy started to take effect.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> enableEndTime_ = nullptr;
    // The timestamp when the blacklist policy expired.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> enableStartTime_ = nullptr;
    // The ID of the blacklist policy.
    std::shared_ptr<string> id_ = nullptr;
    // The IDs of the instances that belong to the specified cloud service.
    std::shared_ptr<vector<string>> instances_ = nullptr;
    // The status of the blacklist policy. Valid values:
    // 
    // *   true: The blacklist policy is enabled.
    // *   false: The blacklist policy is disabled.
    std::shared_ptr<bool> isEnable_ = nullptr;
    // The metrics of the instance.
    std::shared_ptr<vector<Models::DescribeMetricRuleBlackListResponseBodyDescribeMetricRuleBlackListMetrics>> metrics_ = nullptr;
    // The name of the blacklist policy.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The effective scope of the blacklist policy. Valid values:
    // 
    // *   USER: The blacklist policy takes effect only within the current Alibaba Cloud account.
    // *   GROUP: The blacklist policy takes effect only within the specified application group.
    std::shared_ptr<string> scopeType_ = nullptr;
    // The IDs of the application groups.
    std::shared_ptr<vector<string>> scopeValue_ = nullptr;
    // The timestamp when the blacklist policy was modified.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
