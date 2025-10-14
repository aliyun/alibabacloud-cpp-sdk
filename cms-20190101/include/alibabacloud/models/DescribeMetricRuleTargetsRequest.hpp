// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeMetricRuleTargetsRequest() = default ;
    DescribeMetricRuleTargetsRequest(const DescribeMetricRuleTargetsRequest &) = default ;
    DescribeMetricRuleTargetsRequest(DescribeMetricRuleTargetsRequest &&) = default ;
    DescribeMetricRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTargetsRequest() = default ;
    DescribeMetricRuleTargetsRequest& operator=(const DescribeMetricRuleTargetsRequest &) = default ;
    DescribeMetricRuleTargetsRequest& operator=(DescribeMetricRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->ruleId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeMetricRuleTargetsRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the alert rule.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
