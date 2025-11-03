// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULERESPONSEBODYRULESPOLICIESCONDITION_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULERESPONSEBODYRULESPOLICIESCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& obj) { 
      DARABONBA_PTR_TO_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
      DARABONBA_PTR_TO_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
      DARABONBA_PTR_TO_JSON(LatestTagCount, latestTagCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
      DARABONBA_PTR_FROM_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
      DARABONBA_PTR_FROM_JSON(LatestTagCount, latestTagCount_);
    };
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition() = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition(const ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition &) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition(ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition &&) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition() = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& operator=(const ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition &) = default ;
    ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& operator=(ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastPullOlderThanDays_ == nullptr
        && return this->lastPushOlderThanDays_ == nullptr && return this->latestTagCount_ == nullptr; };
    // lastPullOlderThanDays Field Functions 
    bool hasLastPullOlderThanDays() const { return this->lastPullOlderThanDays_ != nullptr;};
    void deleteLastPullOlderThanDays() { this->lastPullOlderThanDays_ = nullptr;};
    inline int32_t lastPullOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPullOlderThanDays_, 0) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& setLastPullOlderThanDays(int32_t lastPullOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPullOlderThanDays_, lastPullOlderThanDays) };


    // lastPushOlderThanDays Field Functions 
    bool hasLastPushOlderThanDays() const { return this->lastPushOlderThanDays_ != nullptr;};
    void deleteLastPushOlderThanDays() { this->lastPushOlderThanDays_ = nullptr;};
    inline int32_t lastPushOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPushOlderThanDays_, 0) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& setLastPushOlderThanDays(int32_t lastPushOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPushOlderThanDays_, lastPushOlderThanDays) };


    // latestTagCount Field Functions 
    bool hasLatestTagCount() const { return this->latestTagCount_ != nullptr;};
    void deleteLatestTagCount() { this->latestTagCount_ = nullptr;};
    inline int32_t latestTagCount() const { DARABONBA_PTR_GET_DEFAULT(latestTagCount_, 0) };
    inline ListArtifactLifecycleRuleResponseBodyRulesPoliciesCondition& setLatestTagCount(int32_t latestTagCount) { DARABONBA_PTR_SET_VALUE(latestTagCount_, latestTagCount) };


  protected:
    std::shared_ptr<int32_t> lastPullOlderThanDays_ = nullptr;
    std::shared_ptr<int32_t> lastPushOlderThanDays_ = nullptr;
    std::shared_ptr<int32_t> latestTagCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
