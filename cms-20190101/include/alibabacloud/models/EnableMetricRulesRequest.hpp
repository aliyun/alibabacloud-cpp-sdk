// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEMETRICRULESREQUEST_HPP_
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
  class EnableMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    EnableMetricRulesRequest() = default ;
    EnableMetricRulesRequest(const EnableMetricRulesRequest &) = default ;
    EnableMetricRulesRequest(EnableMetricRulesRequest &&) = default ;
    EnableMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableMetricRulesRequest() = default ;
    EnableMetricRulesRequest& operator=(const EnableMetricRulesRequest &) = default ;
    EnableMetricRulesRequest& operator=(EnableMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->ruleId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableMetricRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
    inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
    inline EnableMetricRulesRequest& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
    inline EnableMetricRulesRequest& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


  protected:
    shared_ptr<string> regionId_ {};
    // The IDs of the alert rules.
    // 
    // Valid values of N: 1 to 100.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
