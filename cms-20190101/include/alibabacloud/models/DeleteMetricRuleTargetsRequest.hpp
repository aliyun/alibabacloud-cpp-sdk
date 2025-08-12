// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
    };
    DeleteMetricRuleTargetsRequest() = default ;
    DeleteMetricRuleTargetsRequest(const DeleteMetricRuleTargetsRequest &) = default ;
    DeleteMetricRuleTargetsRequest(DeleteMetricRuleTargetsRequest &&) = default ;
    DeleteMetricRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTargetsRequest() = default ;
    DeleteMetricRuleTargetsRequest& operator=(const DeleteMetricRuleTargetsRequest &) = default ;
    DeleteMetricRuleTargetsRequest& operator=(DeleteMetricRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->ruleId_ != nullptr && this->targetIds_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMetricRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteMetricRuleTargetsRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline const vector<string> & targetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, vector<string>) };
    inline vector<string> targetIds() { DARABONBA_PTR_GET(targetIds_, vector<string>) };
    inline DeleteMetricRuleTargetsRequest& setTargetIds(const vector<string> & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
    inline DeleteMetricRuleTargetsRequest& setTargetIds(vector<string> && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The resource IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> targetIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
