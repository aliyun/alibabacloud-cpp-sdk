// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTRULE_HPP_
#define ALIBABACLOUD_MODELS_EVENTRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/EmasAppmonitor20190611.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class EventRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventRule& obj) { 
      DARABONBA_PTR_TO_JSON(Conditional, conditional_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, EventRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditional, conditional_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    EventRule() = default ;
    EventRule(const EventRule &) = default ;
    EventRule(EventRule &&) = default ;
    EventRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventRule() = default ;
    EventRule& operator=(const EventRule &) = default ;
    EventRule& operator=(EventRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditional_ != nullptr
        && this->enable_ != nullptr && this->eventId_ != nullptr && this->modifyTime_ != nullptr && this->operator_ != nullptr && this->sampleRate_ != nullptr; };
    // conditional Field Functions 
    bool hasConditional() const { return this->conditional_ != nullptr;};
    void deleteConditional() { this->conditional_ = nullptr;};
    inline const vector<ConditionalRule> & conditional() const { DARABONBA_PTR_GET_CONST(conditional_, vector<ConditionalRule>) };
    inline vector<ConditionalRule> conditional() { DARABONBA_PTR_GET(conditional_, vector<ConditionalRule>) };
    inline EventRule& setConditional(const vector<ConditionalRule> & conditional) { DARABONBA_PTR_SET_VALUE(conditional_, conditional) };
    inline EventRule& setConditional(vector<ConditionalRule> && conditional) { DARABONBA_PTR_SET_RVALUE(conditional_, conditional) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline EventRule& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline EventRule& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline EventRule& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline EventRule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline EventRule& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<vector<ConditionalRule>> conditional_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
