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
      DARABONBA_PTR_TO_JSON(EvaluationDomain, evaluationDomain_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, RunEvaluationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EvaluationDomain, evaluationDomain_);
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
        && this->evaluationDomain_ == nullptr && this->metricIdsShrink_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline RunEvaluationShrinkRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // evaluationDomain Field Functions 
    bool hasEvaluationDomain() const { return this->evaluationDomain_ != nullptr;};
    void deleteEvaluationDomain() { this->evaluationDomain_ = nullptr;};
    inline string getEvaluationDomain() const { DARABONBA_PTR_GET_DEFAULT(evaluationDomain_, "") };
    inline RunEvaluationShrinkRequest& setEvaluationDomain(string evaluationDomain) { DARABONBA_PTR_SET_VALUE(evaluationDomain_, evaluationDomain) };


    // metricIdsShrink Field Functions 
    bool hasMetricIdsShrink() const { return this->metricIdsShrink_ != nullptr;};
    void deleteMetricIdsShrink() { this->metricIdsShrink_ = nullptr;};
    inline string getMetricIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(metricIdsShrink_, "") };
    inline RunEvaluationShrinkRequest& setMetricIdsShrink(string metricIdsShrink) { DARABONBA_PTR_SET_VALUE(metricIdsShrink_, metricIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunEvaluationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RunEvaluationShrinkRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The ID of the member account. This parameter is applicable only to the multi-account check pattern.
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<string> evaluationDomain_ {};
    // The list of check item IDs to check.
    shared_ptr<string> metricIdsShrink_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The scope of the governance maturity check. Valid values:
    // 
    // - Account (default): runs a single-account governance maturity check that checks only the current account.
    // - ResourceDirectory: runs a multi-account governance maturity check that checks all member accounts in the resource directory. Before you perform this operation, upgrade to the multi-account governance maturity check.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
