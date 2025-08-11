// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESLIFECYCLEHOOKCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESLIFECYCLEHOOKCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& obj) { 
      DARABONBA_PTR_TO_JSON(DisableLifecycleHook, disableLifecycleHook_);
      DARABONBA_PTR_TO_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableLifecycleHook, disableLifecycleHook_);
      DARABONBA_PTR_FROM_JSON(IgnoredLifecycleHookIds, ignoredLifecycleHookIds_);
    };
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext(const DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext(DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext &&) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& operator=(const DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& operator=(DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableLifecycleHook_ != nullptr
        && this->ignoredLifecycleHookIds_ != nullptr; };
    // disableLifecycleHook Field Functions 
    bool hasDisableLifecycleHook() const { return this->disableLifecycleHook_ != nullptr;};
    void deleteDisableLifecycleHook() { this->disableLifecycleHook_ = nullptr;};
    inline bool disableLifecycleHook() const { DARABONBA_PTR_GET_DEFAULT(disableLifecycleHook_, false) };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& setDisableLifecycleHook(bool disableLifecycleHook) { DARABONBA_PTR_SET_VALUE(disableLifecycleHook_, disableLifecycleHook) };


    // ignoredLifecycleHookIds Field Functions 
    bool hasIgnoredLifecycleHookIds() const { return this->ignoredLifecycleHookIds_ != nullptr;};
    void deleteIgnoredLifecycleHookIds() { this->ignoredLifecycleHookIds_ = nullptr;};
    inline const vector<string> & ignoredLifecycleHookIds() const { DARABONBA_PTR_GET_CONST(ignoredLifecycleHookIds_, vector<string>) };
    inline vector<string> ignoredLifecycleHookIds() { DARABONBA_PTR_GET(ignoredLifecycleHookIds_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& setIgnoredLifecycleHookIds(const vector<string> & ignoredLifecycleHookIds) { DARABONBA_PTR_SET_VALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesLifecycleHookContext& setIgnoredLifecycleHookIds(vector<string> && ignoredLifecycleHookIds) { DARABONBA_PTR_SET_RVALUE(ignoredLifecycleHookIds_, ignoredLifecycleHookIds) };


  protected:
    // Indicates whether all lifecycle hooks are disabled when the scaling activity is triggered. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> disableLifecycleHook_ = nullptr;
    // The IDs of the lifecycle hooks that are disabled.
    std::shared_ptr<vector<string>> ignoredLifecycleHookIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
