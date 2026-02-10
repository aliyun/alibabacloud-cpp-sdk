// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListFileProtectRuleRequest() = default ;
    ListFileProtectRuleRequest(const ListFileProtectRuleRequest &) = default ;
    ListFileProtectRuleRequest(ListFileProtectRuleRequest &&) = default ;
    ListFileProtectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectRuleRequest() = default ;
    ListFileProtectRuleRequest& operator=(const ListFileProtectRuleRequest &) = default ;
    ListFileProtectRuleRequest& operator=(ListFileProtectRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->platform_ == nullptr && this->ruleAction_ == nullptr && this->ruleName_ == nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline ListFileProtectRuleRequest& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListFileProtectRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFileProtectRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListFileProtectRuleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline ListFileProtectRuleRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListFileProtectRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The severity of alerts. Valid values:
    // 
    // *   0: does not generate alerts
    // *   1: sends notifications
    // *   2: suspicious
    // *   3: high-risk
    shared_ptr<int32_t> alertLevel_ {};
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    shared_ptr<string> platform_ {};
    // The handling method of the rule. Valid values:
    // 
    // *   pass: allow
    // *   alert
    shared_ptr<string> ruleAction_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
