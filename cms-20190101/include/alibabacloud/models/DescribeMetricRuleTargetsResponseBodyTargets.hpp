// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODYTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODYTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleTargetsResponseBodyTargetsTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTargetsResponseBodyTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTargetsResponseBodyTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTargetsResponseBodyTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    DescribeMetricRuleTargetsResponseBodyTargets() = default ;
    DescribeMetricRuleTargetsResponseBodyTargets(const DescribeMetricRuleTargetsResponseBodyTargets &) = default ;
    DescribeMetricRuleTargetsResponseBodyTargets(DescribeMetricRuleTargetsResponseBodyTargets &&) = default ;
    DescribeMetricRuleTargetsResponseBodyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTargetsResponseBodyTargets() = default ;
    DescribeMetricRuleTargetsResponseBodyTargets& operator=(const DescribeMetricRuleTargetsResponseBodyTargets &) = default ;
    DescribeMetricRuleTargetsResponseBodyTargets& operator=(DescribeMetricRuleTargetsResponseBodyTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget>) };
    inline vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget> target() { DARABONBA_PTR_GET(target_, vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget>) };
    inline DescribeMetricRuleTargetsResponseBodyTargets& setTarget(const vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DescribeMetricRuleTargetsResponseBodyTargets& setTarget(vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleTargetsResponseBodyTargetsTarget>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
