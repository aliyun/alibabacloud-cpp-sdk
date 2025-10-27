// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAegisContainerPluginRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisContainerPluginRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListAegisContainerPluginRuleRequest() = default ;
    ListAegisContainerPluginRuleRequest(const ListAegisContainerPluginRuleRequest &) = default ;
    ListAegisContainerPluginRuleRequest(ListAegisContainerPluginRuleRequest &&) = default ;
    ListAegisContainerPluginRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisContainerPluginRuleRequest() = default ;
    ListAegisContainerPluginRuleRequest& operator=(const ListAegisContainerPluginRuleRequest &) = default ;
    ListAegisContainerPluginRuleRequest& operator=(ListAegisContainerPluginRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->ruleType_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListAegisContainerPluginRuleRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAegisContainerPluginRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAegisContainerPluginRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAegisContainerPluginRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListAegisContainerPluginRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The query condition.
    std::shared_ptr<string> criteria_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **0**: custom
    // *   **1**: system
    std::shared_ptr<int32_t> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
