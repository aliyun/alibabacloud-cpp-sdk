// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULES_HPP_
#define ALIBABACLOUD_MODELS_RULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SchedulingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class Rules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Rules& obj) { 
      DARABONBA_PTR_TO_JSON(SchedulingRule, schedulingRule_);
    };
    friend void from_json(const Darabonba::Json& j, Rules& obj) { 
      DARABONBA_PTR_FROM_JSON(SchedulingRule, schedulingRule_);
    };
    Rules() = default ;
    Rules(const Rules &) = default ;
    Rules(Rules &&) = default ;
    Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Rules() = default ;
    Rules& operator=(const Rules &) = default ;
    Rules& operator=(Rules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schedulingRule_ == nullptr; };
    // schedulingRule Field Functions 
    bool hasSchedulingRule() const { return this->schedulingRule_ != nullptr;};
    void deleteSchedulingRule() { this->schedulingRule_ = nullptr;};
    inline const SchedulingRule & getSchedulingRule() const { DARABONBA_PTR_GET_CONST(schedulingRule_, SchedulingRule) };
    inline SchedulingRule getSchedulingRule() { DARABONBA_PTR_GET(schedulingRule_, SchedulingRule) };
    inline Rules& setSchedulingRule(const SchedulingRule & schedulingRule) { DARABONBA_PTR_SET_VALUE(schedulingRule_, schedulingRule) };
    inline Rules& setSchedulingRule(SchedulingRule && schedulingRule) { DARABONBA_PTR_SET_RVALUE(schedulingRule_, schedulingRule) };


  protected:
    shared_ptr<SchedulingRule> schedulingRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
