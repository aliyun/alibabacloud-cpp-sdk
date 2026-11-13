// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONCUSTOMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONCUSTOMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationCustomRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
      DARABONBA_PTR_TO_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleId, applicationCustomRuleId_);
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleName, applicationCustomRuleName_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
    };
    ListApplicationCustomRulesRequest() = default ;
    ListApplicationCustomRulesRequest(const ListApplicationCustomRulesRequest &) = default ;
    ListApplicationCustomRulesRequest(ListApplicationCustomRulesRequest &&) = default ;
    ListApplicationCustomRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationCustomRulesRequest() = default ;
    ListApplicationCustomRulesRequest& operator=(const ListApplicationCustomRulesRequest &) = default ;
    ListApplicationCustomRulesRequest& operator=(ListApplicationCustomRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCustomRuleId_ == nullptr
        && this->applicationCustomRuleName_ == nullptr && this->applicationId_ == nullptr && this->applicationTemplateId_ == nullptr && this->lang_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->priority_ == nullptr && this->ruleAction_ == nullptr; };
    // applicationCustomRuleId Field Functions 
    bool hasApplicationCustomRuleId() const { return this->applicationCustomRuleId_ != nullptr;};
    void deleteApplicationCustomRuleId() { this->applicationCustomRuleId_ = nullptr;};
    inline string getApplicationCustomRuleId() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleId_, "") };
    inline ListApplicationCustomRulesRequest& setApplicationCustomRuleId(string applicationCustomRuleId) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleId_, applicationCustomRuleId) };


    // applicationCustomRuleName Field Functions 
    bool hasApplicationCustomRuleName() const { return this->applicationCustomRuleName_ != nullptr;};
    void deleteApplicationCustomRuleName() { this->applicationCustomRuleName_ = nullptr;};
    inline string getApplicationCustomRuleName() const { DARABONBA_PTR_GET_DEFAULT(applicationCustomRuleName_, "") };
    inline ListApplicationCustomRulesRequest& setApplicationCustomRuleName(string applicationCustomRuleName) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleName_, applicationCustomRuleName) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline ListApplicationCustomRulesRequest& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline ListApplicationCustomRulesRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListApplicationCustomRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationCustomRulesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationCustomRulesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline ListApplicationCustomRulesRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline ListApplicationCustomRulesRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


  protected:
    shared_ptr<string> applicationCustomRuleId_ {};
    shared_ptr<string> applicationCustomRuleName_ {};
    shared_ptr<int64_t> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> applicationTemplateId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<int64_t> priority_ {};
    shared_ptr<string> ruleAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
