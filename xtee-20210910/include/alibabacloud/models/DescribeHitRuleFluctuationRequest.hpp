// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleFluctuationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleFluctuationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleFluctuationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleStatus, ruleStatus_);
    };
    DescribeHitRuleFluctuationRequest() = default ;
    DescribeHitRuleFluctuationRequest(const DescribeHitRuleFluctuationRequest &) = default ;
    DescribeHitRuleFluctuationRequest(DescribeHitRuleFluctuationRequest &&) = default ;
    DescribeHitRuleFluctuationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleFluctuationRequest() = default ;
    DescribeHitRuleFluctuationRequest& operator=(const DescribeHitRuleFluctuationRequest &) = default ;
    DescribeHitRuleFluctuationRequest& operator=(DescribeHitRuleFluctuationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->eventCodes_ == nullptr && this->regId_ == nullptr && this->ruleStatus_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeHitRuleFluctuationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline string getEventCodes() const { DARABONBA_PTR_GET_DEFAULT(eventCodes_, "") };
    inline DescribeHitRuleFluctuationRequest& setEventCodes(string eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeHitRuleFluctuationRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
    inline DescribeHitRuleFluctuationRequest& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Event codes, separated by commas (,).
    shared_ptr<string> eventCodes_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Policy status
    shared_ptr<string> ruleStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
