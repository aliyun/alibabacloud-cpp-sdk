// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODYFGCHECKRESULTS_HPP_
#define ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODYFGCHECKRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CheckModelFeatureFGFeatureResponseBodyFGCheckResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckModelFeatureFGFeatureResponseBodyFGCheckResults& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RuleCode, ruleCode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CheckModelFeatureFGFeatureResponseBodyFGCheckResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RuleCode, ruleCode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults() = default ;
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults(const CheckModelFeatureFGFeatureResponseBodyFGCheckResults &) = default ;
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults(CheckModelFeatureFGFeatureResponseBodyFGCheckResults &&) = default ;
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckModelFeatureFGFeatureResponseBodyFGCheckResults() = default ;
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults& operator=(const CheckModelFeatureFGFeatureResponseBodyFGCheckResults &) = default ;
    CheckModelFeatureFGFeatureResponseBodyFGCheckResults& operator=(CheckModelFeatureFGFeatureResponseBodyFGCheckResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->ruleCode_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckModelFeatureFGFeatureResponseBodyFGCheckResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline string ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, "") };
    inline CheckModelFeatureFGFeatureResponseBodyFGCheckResults& setRuleCode(string ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline CheckModelFeatureFGFeatureResponseBodyFGCheckResults& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> ruleCode_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
