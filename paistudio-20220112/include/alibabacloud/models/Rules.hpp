// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULES_HPP_
#define ALIBABACLOUD_MODELS_RULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SchedulingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Rules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Rules& obj) { 
      DARABONBA_PTR_TO_JSON(Scheduling, scheduling_);
    };
    friend void from_json(const Darabonba::Json& j, Rules& obj) { 
      DARABONBA_PTR_FROM_JSON(Scheduling, scheduling_);
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
    virtual bool empty() const override { return this->scheduling_ == nullptr; };
    // scheduling Field Functions 
    bool hasScheduling() const { return this->scheduling_ != nullptr;};
    void deleteScheduling() { this->scheduling_ = nullptr;};
    inline const SchedulingRule & scheduling() const { DARABONBA_PTR_GET_CONST(scheduling_, SchedulingRule) };
    inline SchedulingRule scheduling() { DARABONBA_PTR_GET(scheduling_, SchedulingRule) };
    inline Rules& setScheduling(const SchedulingRule & scheduling) { DARABONBA_PTR_SET_VALUE(scheduling_, scheduling) };
    inline Rules& setScheduling(SchedulingRule && scheduling) { DARABONBA_PTR_SET_RVALUE(scheduling_, scheduling) };


  protected:
    std::shared_ptr<SchedulingRule> scheduling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
