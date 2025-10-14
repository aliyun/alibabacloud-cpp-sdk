// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutMetricRuleTargetsRequestTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    PutMetricRuleTargetsRequest() = default ;
    PutMetricRuleTargetsRequest(const PutMetricRuleTargetsRequest &) = default ;
    PutMetricRuleTargetsRequest(PutMetricRuleTargetsRequest &&) = default ;
    PutMetricRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsRequest() = default ;
    PutMetricRuleTargetsRequest& operator=(const PutMetricRuleTargetsRequest &) = default ;
    PutMetricRuleTargetsRequest& operator=(PutMetricRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->ruleId_ == nullptr && return this->targets_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMetricRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutMetricRuleTargetsRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<PutMetricRuleTargetsRequestTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<PutMetricRuleTargetsRequestTargets>) };
    inline vector<PutMetricRuleTargetsRequestTargets> targets() { DARABONBA_PTR_GET(targets_, vector<PutMetricRuleTargetsRequestTargets>) };
    inline PutMetricRuleTargetsRequest& setTargets(const vector<PutMetricRuleTargetsRequestTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PutMetricRuleTargetsRequest& setTargets(vector<PutMetricRuleTargetsRequestTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // None.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutMetricRuleTargetsRequestTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
