// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULELISTRESPONSEBODYEVENTRULESEVENTRULEEVENTPATTERNEVENTPATTERN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList.hpp>
#include <alibabacloud/models/DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(KeywordFilter, keywordFilter_);
      DARABONBA_PTR_TO_JSON(LevelList, levelList_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(KeywordFilter, keywordFilter_);
      DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(SQLFilter, SQLFilter_);
    };
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern &&) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern() = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& operator=(const DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern &) = default ;
    DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& operator=(DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && return this->eventTypeList_ == nullptr && return this->keywordFilter_ == nullptr && return this->levelList_ == nullptr && return this->nameList_ == nullptr && return this->product_ == nullptr
        && return this->SQLFilter_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string customFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList & eventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList eventTypeList() { DARABONBA_PTR_GET(eventTypeList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setEventTypeList(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setEventTypeList(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


    // keywordFilter Field Functions 
    bool hasKeywordFilter() const { return this->keywordFilter_ != nullptr;};
    void deleteKeywordFilter() { this->keywordFilter_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter & keywordFilter() const { DARABONBA_PTR_GET_CONST(keywordFilter_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter keywordFilter() { DARABONBA_PTR_GET(keywordFilter_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setKeywordFilter(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter & keywordFilter) { DARABONBA_PTR_SET_VALUE(keywordFilter_, keywordFilter) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setKeywordFilter(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter && keywordFilter) { DARABONBA_PTR_SET_RVALUE(keywordFilter_, keywordFilter) };


    // levelList Field Functions 
    bool hasLevelList() const { return this->levelList_ != nullptr;};
    void deleteLevelList() { this->levelList_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList & levelList() const { DARABONBA_PTR_GET_CONST(levelList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList levelList() { DARABONBA_PTR_GET(levelList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setLevelList(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setLevelList(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList) };
    inline Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList nameList() { DARABONBA_PTR_GET(nameList_, Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setNameList(const Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setNameList(Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // SQLFilter Field Functions 
    bool hasSQLFilter() const { return this->SQLFilter_ != nullptr;};
    void deleteSQLFilter() { this->SQLFilter_ = nullptr;};
    inline string SQLFilter() const { DARABONBA_PTR_GET_DEFAULT(SQLFilter_, "") };
    inline DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPattern& setSQLFilter(string SQLFilter) { DARABONBA_PTR_SET_VALUE(SQLFilter_, SQLFilter) };


  protected:
    // The custom filter conditions.
    std::shared_ptr<string> customFilters_ = nullptr;
    // The types of the event-triggered alert rules.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternEventTypeList> eventTypeList_ = nullptr;
    // The keyword for filtering.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternKeywordFilter> keywordFilter_ = nullptr;
    // The levels of the event-triggered alerts.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternLevelList> levelList_ = nullptr;
    // The event names.
    std::shared_ptr<Models::DescribeEventRuleListResponseBodyEventRulesEventRuleEventPatternEventPatternNameList> nameList_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> product_ = nullptr;
    // Indicates that logs are filtered based on the specified SQL statement. If the specified conditions are met, an alert is triggered.
    std::shared_ptr<string> SQLFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
