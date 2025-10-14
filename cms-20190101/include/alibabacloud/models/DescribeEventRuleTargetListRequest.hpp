// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    DescribeEventRuleTargetListRequest() = default ;
    DescribeEventRuleTargetListRequest(const DescribeEventRuleTargetListRequest &) = default ;
    DescribeEventRuleTargetListRequest(DescribeEventRuleTargetListRequest &&) = default ;
    DescribeEventRuleTargetListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListRequest() = default ;
    DescribeEventRuleTargetListRequest& operator=(const DescribeEventRuleTargetListRequest &) = default ;
    DescribeEventRuleTargetListRequest& operator=(DescribeEventRuleTargetListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->ruleName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEventRuleTargetListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeEventRuleTargetListRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the event-triggered alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
