// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULEREQUEST_HPP_
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
  class ListContainerDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IsDefaultRule, isDefaultRule_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IsDefaultRule, isDefaultRule_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListContainerDefenseRuleRequest() = default ;
    ListContainerDefenseRuleRequest(const ListContainerDefenseRuleRequest &) = default ;
    ListContainerDefenseRuleRequest(ListContainerDefenseRuleRequest &&) = default ;
    ListContainerDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContainerDefenseRuleRequest() = default ;
    ListContainerDefenseRuleRequest& operator=(const ListContainerDefenseRuleRequest &) = default ;
    ListContainerDefenseRuleRequest& operator=(ListContainerDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Conditions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Conditions() = default ;
      Conditions(const Conditions &) = default ;
      Conditions(Conditions &&) = default ;
      Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Conditions() = default ;
      Conditions& operator=(const Conditions &) = default ;
      Conditions& operator=(Conditions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The condition type. Valid values:
      // 
      // *   **ruleName**: the rule name
      shared_ptr<string> type_ {};
      // The rule content.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->currentPage_ == nullptr && this->isDefaultRule_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->ruleType_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ListContainerDefenseRuleRequest::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ListContainerDefenseRuleRequest::Conditions>) };
    inline vector<ListContainerDefenseRuleRequest::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<ListContainerDefenseRuleRequest::Conditions>) };
    inline ListContainerDefenseRuleRequest& setConditions(const vector<ListContainerDefenseRuleRequest::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListContainerDefenseRuleRequest& setConditions(vector<ListContainerDefenseRuleRequest::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListContainerDefenseRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // isDefaultRule Field Functions 
    bool hasIsDefaultRule() const { return this->isDefaultRule_ != nullptr;};
    void deleteIsDefaultRule() { this->isDefaultRule_ = nullptr;};
    inline int32_t getIsDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(isDefaultRule_, 0) };
    inline ListContainerDefenseRuleRequest& setIsDefaultRule(int32_t isDefaultRule) { DARABONBA_PTR_SET_VALUE(isDefaultRule_, isDefaultRule) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListContainerDefenseRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListContainerDefenseRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListContainerDefenseRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The details of the condition.
    shared_ptr<vector<ListContainerDefenseRuleRequest::Conditions>> conditions_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether to query system rules.
    // 
    // >  This parameter is deprecated.
    shared_ptr<int32_t> isDefaultRule_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The rule type. Valid values:
    // 
    // *   1: system rule
    // *   2: user-defined rule
    shared_ptr<int32_t> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
