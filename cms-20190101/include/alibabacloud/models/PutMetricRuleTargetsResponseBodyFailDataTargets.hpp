// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATATARGETS_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATATARGETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutMetricRuleTargetsResponseBodyFailDataTargetsTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsResponseBodyFailDataTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsResponseBodyFailDataTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsResponseBodyFailDataTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    PutMetricRuleTargetsResponseBodyFailDataTargets() = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargets(const PutMetricRuleTargetsResponseBodyFailDataTargets &) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargets(PutMetricRuleTargetsResponseBodyFailDataTargets &&) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsResponseBodyFailDataTargets() = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargets& operator=(const PutMetricRuleTargetsResponseBodyFailDataTargets &) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargets& operator=(PutMetricRuleTargetsResponseBodyFailDataTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->target_ != nullptr; };
    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget> & target() const { DARABONBA_PTR_GET_CONST(target_, vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget>) };
    inline vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget> target() { DARABONBA_PTR_GET(target_, vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget>) };
    inline PutMetricRuleTargetsResponseBodyFailDataTargets& setTarget(const vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline PutMetricRuleTargetsResponseBodyFailDataTargets& setTarget(vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<vector<Models::PutMetricRuleTargetsResponseBodyFailDataTargetsTarget>> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
