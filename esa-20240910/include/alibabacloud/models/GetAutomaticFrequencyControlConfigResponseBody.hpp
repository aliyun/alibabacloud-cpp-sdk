// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOMATICFREQUENCYCONTROLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOMATICFREQUENCYCONTROLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetAutomaticFrequencyControlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutomaticFrequencyControlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PunishTime, punishTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutomaticFrequencyControlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PunishTime, punishTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    GetAutomaticFrequencyControlConfigResponseBody() = default ;
    GetAutomaticFrequencyControlConfigResponseBody(const GetAutomaticFrequencyControlConfigResponseBody &) = default ;
    GetAutomaticFrequencyControlConfigResponseBody(GetAutomaticFrequencyControlConfigResponseBody &&) = default ;
    GetAutomaticFrequencyControlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutomaticFrequencyControlConfigResponseBody() = default ;
    GetAutomaticFrequencyControlConfigResponseBody& operator=(const GetAutomaticFrequencyControlConfigResponseBody &) = default ;
    GetAutomaticFrequencyControlConfigResponseBody& operator=(GetAutomaticFrequencyControlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->enable_ == nullptr && this->interval_ == nullptr && this->level_ == nullptr && this->punishTime_ == nullptr && this->requestId_ == nullptr
        && this->ruleId_ == nullptr && this->threshold_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GetAutomaticFrequencyControlConfigResponseBody& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline GetAutomaticFrequencyControlConfigResponseBody& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline GetAutomaticFrequencyControlConfigResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetAutomaticFrequencyControlConfigResponseBody& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // punishTime Field Functions 
    bool hasPunishTime() const { return this->punishTime_ != nullptr;};
    void deletePunishTime() { this->punishTime_ = nullptr;};
    inline int32_t getPunishTime() const { DARABONBA_PTR_GET_DEFAULT(punishTime_, 0) };
    inline GetAutomaticFrequencyControlConfigResponseBody& setPunishTime(int32_t punishTime) { DARABONBA_PTR_SET_VALUE(punishTime_, punishTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutomaticFrequencyControlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetAutomaticFrequencyControlConfigResponseBody& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
    inline GetAutomaticFrequencyControlConfigResponseBody& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    shared_ptr<string> actionType_ {};
    shared_ptr<string> enable_ {};
    shared_ptr<int32_t> interval_ {};
    shared_ptr<string> level_ {};
    shared_ptr<int32_t> punishTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> ruleId_ {};
    shared_ptr<int32_t> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
