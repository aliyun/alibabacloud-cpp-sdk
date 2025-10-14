// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATA_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutMetricRuleTargetsResponseBodyFailDataTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsResponseBodyFailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsResponseBodyFailData& obj) { 
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsResponseBodyFailData& obj) { 
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    PutMetricRuleTargetsResponseBodyFailData() = default ;
    PutMetricRuleTargetsResponseBodyFailData(const PutMetricRuleTargetsResponseBodyFailData &) = default ;
    PutMetricRuleTargetsResponseBodyFailData(PutMetricRuleTargetsResponseBodyFailData &&) = default ;
    PutMetricRuleTargetsResponseBodyFailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsResponseBodyFailData() = default ;
    PutMetricRuleTargetsResponseBodyFailData& operator=(const PutMetricRuleTargetsResponseBodyFailData &) = default ;
    PutMetricRuleTargetsResponseBodyFailData& operator=(PutMetricRuleTargetsResponseBodyFailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targets_ == nullptr; };
    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const Models::PutMetricRuleTargetsResponseBodyFailDataTargets & targets() const { DARABONBA_PTR_GET_CONST(targets_, Models::PutMetricRuleTargetsResponseBodyFailDataTargets) };
    inline Models::PutMetricRuleTargetsResponseBodyFailDataTargets targets() { DARABONBA_PTR_GET(targets_, Models::PutMetricRuleTargetsResponseBodyFailDataTargets) };
    inline PutMetricRuleTargetsResponseBodyFailData& setTargets(const Models::PutMetricRuleTargetsResponseBodyFailDataTargets & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PutMetricRuleTargetsResponseBodyFailData& setTargets(Models::PutMetricRuleTargetsResponseBodyFailDataTargets && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The information about the resources for which alerts are triggered.
    std::shared_ptr<Models::PutMetricRuleTargetsResponseBodyFailDataTargets> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
