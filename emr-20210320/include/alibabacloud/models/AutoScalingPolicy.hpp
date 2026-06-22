// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    AutoScalingPolicy() = default ;
    AutoScalingPolicy(const AutoScalingPolicy &) = default ;
    AutoScalingPolicy(AutoScalingPolicy &&) = default ;
    AutoScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingPolicy() = default ;
    AutoScalingPolicy& operator=(const AutoScalingPolicy &) = default ;
    AutoScalingPolicy& operator=(AutoScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Constraints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Constraints& obj) { 
        DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, Constraints& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
        DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
      };
      Constraints() = default ;
      Constraints(const Constraints &) = default ;
      Constraints(Constraints &&) = default ;
      Constraints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Constraints() = default ;
      Constraints& operator=(const Constraints &) = default ;
      Constraints& operator=(Constraints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->maxCapacity_ == nullptr
        && this->minCapacity_ == nullptr; };
      // maxCapacity Field Functions 
      bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
      void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
      inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
      inline Constraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


      // minCapacity Field Functions 
      bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
      void deleteMinCapacity() { this->minCapacity_ = nullptr;};
      inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
      inline Constraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


    protected:
      shared_ptr<int32_t> maxCapacity_ {};
      shared_ptr<int32_t> minCapacity_ {};
    };

    virtual bool empty() const override { return this->constraints_ == nullptr
        && this->scalingRules_ == nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const AutoScalingPolicy::Constraints & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, AutoScalingPolicy::Constraints) };
    inline AutoScalingPolicy::Constraints getConstraints() { DARABONBA_PTR_GET(constraints_, AutoScalingPolicy::Constraints) };
    inline AutoScalingPolicy& setConstraints(const AutoScalingPolicy::Constraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline AutoScalingPolicy& setConstraints(AutoScalingPolicy::Constraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<ScalingRule> & getScalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> getScalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingRule>) };
    inline AutoScalingPolicy& setScalingRules(const vector<ScalingRule> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline AutoScalingPolicy& setScalingRules(vector<ScalingRule> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    shared_ptr<AutoScalingPolicy::Constraints> constraints_ {};
    shared_ptr<vector<ScalingRule>> scalingRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
