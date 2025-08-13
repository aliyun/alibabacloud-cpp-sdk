// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTBASEINFOBYEVENTCODERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields.hpp>
#include <alibabacloud/models/DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventBaseInfoByEventCodeResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventBaseInfoByEventCodeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(bizVersion, bizVersion_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(eventStauts, eventStauts_);
      DARABONBA_PTR_TO_JSON(inputFields, inputFields_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(ruleDetails, ruleDetails_);
      DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(templateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventBaseInfoByEventCodeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(bizVersion, bizVersion_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(eventStauts, eventStauts_);
      DARABONBA_PTR_FROM_JSON(inputFields, inputFields_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(ruleDetails, ruleDetails_);
      DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(templateType, templateType_);
    };
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject(const DescribeEventBaseInfoByEventCodeResponseBodyResultObject &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject(DescribeEventBaseInfoByEventCodeResponseBodyResultObject &&) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventBaseInfoByEventCodeResponseBodyResultObject() = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject& operator=(const DescribeEventBaseInfoByEventCodeResponseBodyResultObject &) = default ;
    DescribeEventBaseInfoByEventCodeResponseBodyResultObject& operator=(DescribeEventBaseInfoByEventCodeResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizVersion_ != nullptr
        && this->eventCode_ != nullptr && this->eventName_ != nullptr && this->eventStauts_ != nullptr && this->inputFields_ != nullptr && this->memo_ != nullptr
        && this->ruleDetails_ != nullptr && this->templateCode_ != nullptr && this->templateName_ != nullptr && this->templateType_ != nullptr; };
    // bizVersion Field Functions 
    bool hasBizVersion() const { return this->bizVersion_ != nullptr;};
    void deleteBizVersion() { this->bizVersion_ = nullptr;};
    inline int32_t bizVersion() const { DARABONBA_PTR_GET_DEFAULT(bizVersion_, 0) };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setBizVersion(int32_t bizVersion) { DARABONBA_PTR_SET_VALUE(bizVersion_, bizVersion) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventStauts Field Functions 
    bool hasEventStauts() const { return this->eventStauts_ != nullptr;};
    void deleteEventStauts() { this->eventStauts_ = nullptr;};
    inline string eventStauts() const { DARABONBA_PTR_GET_DEFAULT(eventStauts_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setEventStauts(string eventStauts) { DARABONBA_PTR_SET_VALUE(eventStauts_, eventStauts) };


    // inputFields Field Functions 
    bool hasInputFields() const { return this->inputFields_ != nullptr;};
    void deleteInputFields() { this->inputFields_ = nullptr;};
    inline const vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields> & inputFields() const { DARABONBA_PTR_GET_CONST(inputFields_, vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields>) };
    inline vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields> inputFields() { DARABONBA_PTR_GET(inputFields_, vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields>) };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setInputFields(const vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields> & inputFields) { DARABONBA_PTR_SET_VALUE(inputFields_, inputFields) };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setInputFields(vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields> && inputFields) { DARABONBA_PTR_SET_RVALUE(inputFields_, inputFields) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string memo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // ruleDetails Field Functions 
    bool hasRuleDetails() const { return this->ruleDetails_ != nullptr;};
    void deleteRuleDetails() { this->ruleDetails_ = nullptr;};
    inline const vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails> & ruleDetails() const { DARABONBA_PTR_GET_CONST(ruleDetails_, vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails>) };
    inline vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails> ruleDetails() { DARABONBA_PTR_GET(ruleDetails_, vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails>) };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setRuleDetails(const vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails> & ruleDetails) { DARABONBA_PTR_SET_VALUE(ruleDetails_, ruleDetails) };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setRuleDetails(vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails> && ruleDetails) { DARABONBA_PTR_SET_RVALUE(ruleDetails_, ruleDetails) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeEventBaseInfoByEventCodeResponseBodyResultObject& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Business version number
    std::shared_ptr<int32_t> bizVersion_ = nullptr;
    // Event code
    std::shared_ptr<string> eventCode_ = nullptr;
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Event status.
    std::shared_ptr<string> eventStauts_ = nullptr;
    // Field list.
    std::shared_ptr<vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectInputFields>> inputFields_ = nullptr;
    // Memo.
    std::shared_ptr<string> memo_ = nullptr;
    // Policy Information
    std::shared_ptr<vector<Models::DescribeEventBaseInfoByEventCodeResponseBodyResultObjectRuleDetails>> ruleDetails_ = nullptr;
    // Operation template code
    std::shared_ptr<string> templateCode_ = nullptr;
    // Template name
    std::shared_ptr<string> templateName_ = nullptr;
    // Template type.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
