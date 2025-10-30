// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNEVALUATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNEVALUATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class RunEvaluationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEvaluationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, RunEvaluationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(MetricIds, metricIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    RunEvaluationShrinkRequest() = default ;
    RunEvaluationShrinkRequest(const RunEvaluationShrinkRequest &) = default ;
    RunEvaluationShrinkRequest(RunEvaluationShrinkRequest &&) = default ;
    RunEvaluationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEvaluationShrinkRequest() = default ;
    RunEvaluationShrinkRequest& operator=(const RunEvaluationShrinkRequest &) = default ;
    RunEvaluationShrinkRequest& operator=(RunEvaluationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->metricIdsShrink_ == nullptr && return this->regionId_ == nullptr && return this->scope_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline RunEvaluationShrinkRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // metricIdsShrink Field Functions 
    bool hasMetricIdsShrink() const { return this->metricIdsShrink_ != nullptr;};
    void deleteMetricIdsShrink() { this->metricIdsShrink_ = nullptr;};
    inline string metricIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(metricIdsShrink_, "") };
    inline RunEvaluationShrinkRequest& setMetricIdsShrink(string metricIdsShrink) { DARABONBA_PTR_SET_VALUE(metricIdsShrink_, metricIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunEvaluationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RunEvaluationShrinkRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The Alibaba Cloud account ID of the member. This parameter takes effect only when a multi-account governance maturity check is performed.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The IDs of the check items to be checked.
    std::shared_ptr<string> metricIdsShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The check range of the governance maturity check. Valid values:
    // 
    // *   Account (default): A single-account governance maturity check is performed to check only the Alibaba Cloud account that you use to access Cloud Governance Center.
    // *   ResourceDirectory: A multi-account governance maturity check is performed to check all members within a resource directory. Before you perform a multi-account governance maturity check, you must enable the multi-account governance maturity check feature.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
