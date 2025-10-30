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
      DARABONBA_PTR_TO_JSON(MetricIds, metricIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, RunEvaluationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
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
        && return this->metricIds_ == nullptr && return this->regionId_ == nullptr && return this->scope_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline RunEvaluationRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // metricIds Field Functions 
    bool hasMetricIds() const { return this->metricIds_ != nullptr;};
    void deleteMetricIds() { this->metricIds_ = nullptr;};
    inline const vector<string> & metricIds() const { DARABONBA_PTR_GET_CONST(metricIds_, vector<string>) };
    inline vector<string> metricIds() { DARABONBA_PTR_GET(metricIds_, vector<string>) };
    inline RunEvaluationRequest& setMetricIds(const vector<string> & metricIds) { DARABONBA_PTR_SET_VALUE(metricIds_, metricIds) };
    inline RunEvaluationRequest& setMetricIds(vector<string> && metricIds) { DARABONBA_PTR_SET_RVALUE(metricIds_, metricIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunEvaluationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RunEvaluationRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The Alibaba Cloud account ID of the member. This parameter takes effect only when a multi-account governance maturity check is performed.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The IDs of the check items to be checked.
    std::shared_ptr<vector<string>> metricIds_ = nullptr;
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
