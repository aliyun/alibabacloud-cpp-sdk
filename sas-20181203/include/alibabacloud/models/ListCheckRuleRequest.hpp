// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
    };
    ListCheckRuleRequest() = default ;
    ListCheckRuleRequest(const ListCheckRuleRequest &) = default ;
    ListCheckRuleRequest(ListCheckRuleRequest &&) = default ;
    ListCheckRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleRequest() = default ;
    ListCheckRuleRequest& operator=(const ListCheckRuleRequest &) = default ;
    ListCheckRuleRequest& operator=(ListCheckRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkName_ == nullptr && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->ruleType_ == nullptr
        && this->scopeType_ == nullptr && this->taskSources_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckRuleRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline ListCheckRuleRequest& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ListCheckRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListCheckRuleRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & getTaskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> getTaskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListCheckRuleRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListCheckRuleRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [ListCheckResult](~~ListCheckResult~~) API to get the check item ID.
    shared_ptr<int64_t> checkId_ {};
    // The name of the check item.
    shared_ptr<string> checkName_ {};
    // The page number displayed in a paginated query.
    shared_ptr<int32_t> currentPage_ {};
    // Set the language type for the request and response messages. The default is **zh**. Values:
    // 
    // - zh: Chinese
    // - en: English
    shared_ptr<string> lang_ {};
    // The number of check items displayed per page in a paginated query. The default value is **20**, indicating 20 check items per page.
    shared_ptr<int32_t> pageSize_ {};
    // The type of rule. Default is **WHITE**. Values:
    // - **WHITE**: Add to whitelist
    shared_ptr<string> ruleType_ {};
    // The scope where the rule applies. Values:
    // - **INSTNACE**: Instance
    // - **ITEM**: Check item
    shared_ptr<string> scopeType_ {};
    // List of task sources.
    shared_ptr<vector<string>> taskSources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
