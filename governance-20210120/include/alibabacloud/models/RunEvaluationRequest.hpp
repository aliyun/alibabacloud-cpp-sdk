// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNEVALUATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNEVALUATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class RunEvaluationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEvaluationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(EvaluationDomain, evaluationDomain_);
      DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, RunEvaluationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(EvaluationDomain, evaluationDomain_);
      DARABONBA_PTR_FROM_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    RunEvaluationRequest() = default ;
    RunEvaluationRequest(const RunEvaluationRequest &) = default ;
    RunEvaluationRequest(RunEvaluationRequest &&) = default ;
    RunEvaluationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEvaluationRequest() = default ;
    RunEvaluationRequest& operator=(const RunEvaluationRequest &) = default ;
    RunEvaluationRequest& operator=(RunEvaluationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->evaluationDomain_ == nullptr && this->metricIds_ == nullptr && this->regionId_ == nullptr && this->scope_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline RunEvaluationRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // evaluationDomain Field Functions 
    bool hasEvaluationDomain() const { return this->evaluationDomain_ != nullptr;};
    void deleteEvaluationDomain() { this->evaluationDomain_ = nullptr;};
    inline string getEvaluationDomain() const { DARABONBA_PTR_GET_DEFAULT(evaluationDomain_, "") };
    inline RunEvaluationRequest& setEvaluationDomain(string evaluationDomain) { DARABONBA_PTR_SET_VALUE(evaluationDomain_, evaluationDomain) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & getMetricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> getMetricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline RunEvaluationRequest& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline RunEvaluationRequest& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunEvaluationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RunEvaluationRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The ID of the member account. This parameter is applicable only to the multi-account check pattern.
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<string> evaluationDomain_ {};
    // The list of check item IDs to check.
    shared_ptr<vector<string>> metricIds_ {};
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
