// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULECONFIGRULEEVALUATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULECONFIGRULEEVALUATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(FirstActivatedTimestamp, firstActivatedTimestamp_);
      DARABONBA_PTR_TO_JSON(FirstEvaluationStarted, firstEvaluationStarted_);
      DARABONBA_PTR_TO_JSON(LastErrorCode, lastErrorCode_);
      DARABONBA_PTR_TO_JSON(LastErrorMessage, lastErrorMessage_);
      DARABONBA_PTR_TO_JSON(LastFailedEvaluationTimestamp, lastFailedEvaluationTimestamp_);
      DARABONBA_PTR_TO_JSON(LastFailedInvocationTimestamp, lastFailedInvocationTimestamp_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulEvaluationTimestamp, lastSuccessfulEvaluationTimestamp_);
      DARABONBA_PTR_TO_JSON(LastSuccessfulInvocationTimestamp, lastSuccessfulInvocationTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstActivatedTimestamp, firstActivatedTimestamp_);
      DARABONBA_PTR_FROM_JSON(FirstEvaluationStarted, firstEvaluationStarted_);
      DARABONBA_PTR_FROM_JSON(LastErrorCode, lastErrorCode_);
      DARABONBA_PTR_FROM_JSON(LastErrorMessage, lastErrorMessage_);
      DARABONBA_PTR_FROM_JSON(LastFailedEvaluationTimestamp, lastFailedEvaluationTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastFailedInvocationTimestamp, lastFailedInvocationTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulEvaluationTimestamp, lastSuccessfulEvaluationTimestamp_);
      DARABONBA_PTR_FROM_JSON(LastSuccessfulInvocationTimestamp, lastSuccessfulInvocationTimestamp_);
    };
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(const GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus &&) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus() = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& operator=(const GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& operator=(GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstActivatedTimestamp_ == nullptr
        && return this->firstEvaluationStarted_ == nullptr && return this->lastErrorCode_ == nullptr && return this->lastErrorMessage_ == nullptr && return this->lastFailedEvaluationTimestamp_ == nullptr && return this->lastFailedInvocationTimestamp_ == nullptr
        && return this->lastSuccessfulEvaluationTimestamp_ == nullptr && return this->lastSuccessfulInvocationTimestamp_ == nullptr; };
    // firstActivatedTimestamp Field Functions 
    bool hasFirstActivatedTimestamp() const { return this->firstActivatedTimestamp_ != nullptr;};
    void deleteFirstActivatedTimestamp() { this->firstActivatedTimestamp_ = nullptr;};
    inline int64_t firstActivatedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstActivatedTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setFirstActivatedTimestamp(int64_t firstActivatedTimestamp) { DARABONBA_PTR_SET_VALUE(firstActivatedTimestamp_, firstActivatedTimestamp) };


    // firstEvaluationStarted Field Functions 
    bool hasFirstEvaluationStarted() const { return this->firstEvaluationStarted_ != nullptr;};
    void deleteFirstEvaluationStarted() { this->firstEvaluationStarted_ = nullptr;};
    inline bool firstEvaluationStarted() const { DARABONBA_PTR_GET_DEFAULT(firstEvaluationStarted_, false) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setFirstEvaluationStarted(bool firstEvaluationStarted) { DARABONBA_PTR_SET_VALUE(firstEvaluationStarted_, firstEvaluationStarted) };


    // lastErrorCode Field Functions 
    bool hasLastErrorCode() const { return this->lastErrorCode_ != nullptr;};
    void deleteLastErrorCode() { this->lastErrorCode_ = nullptr;};
    inline string lastErrorCode() const { DARABONBA_PTR_GET_DEFAULT(lastErrorCode_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastErrorCode(string lastErrorCode) { DARABONBA_PTR_SET_VALUE(lastErrorCode_, lastErrorCode) };


    // lastErrorMessage Field Functions 
    bool hasLastErrorMessage() const { return this->lastErrorMessage_ != nullptr;};
    void deleteLastErrorMessage() { this->lastErrorMessage_ = nullptr;};
    inline string lastErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(lastErrorMessage_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastErrorMessage(string lastErrorMessage) { DARABONBA_PTR_SET_VALUE(lastErrorMessage_, lastErrorMessage) };


    // lastFailedEvaluationTimestamp Field Functions 
    bool hasLastFailedEvaluationTimestamp() const { return this->lastFailedEvaluationTimestamp_ != nullptr;};
    void deleteLastFailedEvaluationTimestamp() { this->lastFailedEvaluationTimestamp_ = nullptr;};
    inline int64_t lastFailedEvaluationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastFailedEvaluationTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastFailedEvaluationTimestamp(int64_t lastFailedEvaluationTimestamp) { DARABONBA_PTR_SET_VALUE(lastFailedEvaluationTimestamp_, lastFailedEvaluationTimestamp) };


    // lastFailedInvocationTimestamp Field Functions 
    bool hasLastFailedInvocationTimestamp() const { return this->lastFailedInvocationTimestamp_ != nullptr;};
    void deleteLastFailedInvocationTimestamp() { this->lastFailedInvocationTimestamp_ = nullptr;};
    inline int64_t lastFailedInvocationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastFailedInvocationTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastFailedInvocationTimestamp(int64_t lastFailedInvocationTimestamp) { DARABONBA_PTR_SET_VALUE(lastFailedInvocationTimestamp_, lastFailedInvocationTimestamp) };


    // lastSuccessfulEvaluationTimestamp Field Functions 
    bool hasLastSuccessfulEvaluationTimestamp() const { return this->lastSuccessfulEvaluationTimestamp_ != nullptr;};
    void deleteLastSuccessfulEvaluationTimestamp() { this->lastSuccessfulEvaluationTimestamp_ = nullptr;};
    inline int64_t lastSuccessfulEvaluationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulEvaluationTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastSuccessfulEvaluationTimestamp(int64_t lastSuccessfulEvaluationTimestamp) { DARABONBA_PTR_SET_VALUE(lastSuccessfulEvaluationTimestamp_, lastSuccessfulEvaluationTimestamp) };


    // lastSuccessfulInvocationTimestamp Field Functions 
    bool hasLastSuccessfulInvocationTimestamp() const { return this->lastSuccessfulInvocationTimestamp_ != nullptr;};
    void deleteLastSuccessfulInvocationTimestamp() { this->lastSuccessfulInvocationTimestamp_ = nullptr;};
    inline int64_t lastSuccessfulInvocationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulInvocationTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus& setLastSuccessfulInvocationTimestamp(int64_t lastSuccessfulInvocationTimestamp) { DARABONBA_PTR_SET_VALUE(lastSuccessfulInvocationTimestamp_, lastSuccessfulInvocationTimestamp) };


  protected:
    // The timestamp when the rule was first triggered.
    std::shared_ptr<int64_t> firstActivatedTimestamp_ = nullptr;
    // Indicates whether resources were evaluated based on the rule. Valid values:
    // 
    // *   true: Resources were evaluated based on the rule.
    // *   false: Resources were not evaluated based on the rule.
    std::shared_ptr<bool> firstEvaluationStarted_ = nullptr;
    // The error code returned for the last failed compliance evaluation.
    std::shared_ptr<string> lastErrorCode_ = nullptr;
    // The error message returned for the last failed compliance evaluation.
    std::shared_ptr<string> lastErrorMessage_ = nullptr;
    // The timestamp when the last failed compliance evaluation of the rule ended. Unit: milliseconds.
    std::shared_ptr<int64_t> lastFailedEvaluationTimestamp_ = nullptr;
    // The timestamp when the last failed compliance evaluation of the rule started. Unit: milliseconds.
    std::shared_ptr<int64_t> lastFailedInvocationTimestamp_ = nullptr;
    // The timestamp when the last successful compliance evaluation of the rule ended. Unit: milliseconds.
    std::shared_ptr<int64_t> lastSuccessfulEvaluationTimestamp_ = nullptr;
    // The timestamp when the last successful compliance evaluation of the rule started. Unit: milliseconds.
    std::shared_ptr<int64_t> lastSuccessfulInvocationTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
