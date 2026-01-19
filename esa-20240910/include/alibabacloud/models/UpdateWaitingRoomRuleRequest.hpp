// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWAITINGROOMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWAITINGROOMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateWaitingRoomRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaitingRoomRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaitingRoomRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    UpdateWaitingRoomRuleRequest() = default ;
    UpdateWaitingRoomRuleRequest(const UpdateWaitingRoomRuleRequest &) = default ;
    UpdateWaitingRoomRuleRequest(UpdateWaitingRoomRuleRequest &&) = default ;
    UpdateWaitingRoomRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaitingRoomRuleRequest() = default ;
    UpdateWaitingRoomRuleRequest& operator=(const UpdateWaitingRoomRuleRequest &) = default ;
    UpdateWaitingRoomRuleRequest& operator=(UpdateWaitingRoomRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr
        && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->siteId_ == nullptr && this->waitingRoomRuleId_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateWaitingRoomRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateWaitingRoomRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateWaitingRoomRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateWaitingRoomRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomRuleId Field Functions 
    bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
    void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
    inline int64_t getWaitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
    inline UpdateWaitingRoomRuleRequest& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


  protected:
    // Rule content, using conditional expressions to match user requests. This parameter is not required when adding global configuration. There are two usage scenarios:
    // - Match all incoming requests: Set the value to true
    // - Match specific requests: Set the value to a custom expression, for example: (http.host eq "video.example.com")
    // 
    // This parameter is required.
    shared_ptr<string> rule_ {};
    // Rule switch. This parameter is not required when adding global configuration. Value range:
    // - on: Enable.
    // - off: Disable.
    // 
    // This parameter is required.
    shared_ptr<string> ruleEnable_ {};
    // Rule name. This parameter is not required when adding global configuration.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The ID of the waiting room bypass rule to be updated, which can be obtained by calling the [ListWaitingRoomRules](https://help.aliyun.com/document_detail/2850279.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> waitingRoomRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
