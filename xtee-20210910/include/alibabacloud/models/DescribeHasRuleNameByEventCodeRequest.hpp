// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHASRULENAMEBYEVENTCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHASRULENAMEBYEVENTCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHasRuleNameByEventCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHasRuleNameByEventCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(excludeRuleId, excludeRuleId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHasRuleNameByEventCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(excludeRuleId, excludeRuleId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
    };
    DescribeHasRuleNameByEventCodeRequest() = default ;
    DescribeHasRuleNameByEventCodeRequest(const DescribeHasRuleNameByEventCodeRequest &) = default ;
    DescribeHasRuleNameByEventCodeRequest(DescribeHasRuleNameByEventCodeRequest &&) = default ;
    DescribeHasRuleNameByEventCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHasRuleNameByEventCodeRequest() = default ;
    DescribeHasRuleNameByEventCodeRequest& operator=(const DescribeHasRuleNameByEventCodeRequest &) = default ;
    DescribeHasRuleNameByEventCodeRequest& operator=(DescribeHasRuleNameByEventCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->eventCode_ != nullptr && this->excludeRuleId_ != nullptr && this->regId_ != nullptr && this->ruleName_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeHasRuleNameByEventCodeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeHasRuleNameByEventCodeRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // excludeRuleId Field Functions 
    bool hasExcludeRuleId() const { return this->excludeRuleId_ != nullptr;};
    void deleteExcludeRuleId() { this->excludeRuleId_ = nullptr;};
    inline string excludeRuleId() const { DARABONBA_PTR_GET_DEFAULT(excludeRuleId_, "") };
    inline DescribeHasRuleNameByEventCodeRequest& setExcludeRuleId(string excludeRuleId) { DARABONBA_PTR_SET_VALUE(excludeRuleId_, excludeRuleId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeHasRuleNameByEventCodeRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeHasRuleNameByEventCodeRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Excluded policy ID
    std::shared_ptr<string> excludeRuleId_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
