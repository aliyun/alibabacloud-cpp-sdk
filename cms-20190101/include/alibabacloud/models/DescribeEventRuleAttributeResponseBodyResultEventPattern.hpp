// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULEATTRIBUTERESPONSEBODYRESULTEVENTPATTERN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternNameList.hpp>
#include <alibabacloud/models/DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleAttributeResponseBodyResultEventPattern : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleAttributeResponseBodyResultEventPattern& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_TO_JSON(KeywordFilterObj, keywordFilterObj_);
      DARABONBA_PTR_TO_JSON(LevelList, levelList_);
      DARABONBA_PTR_TO_JSON(NameList, nameList_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(SQLFilter, SQLFilter_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleAttributeResponseBodyResultEventPattern& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypeList, eventTypeList_);
      DARABONBA_PTR_FROM_JSON(KeywordFilterObj, keywordFilterObj_);
      DARABONBA_PTR_FROM_JSON(LevelList, levelList_);
      DARABONBA_PTR_FROM_JSON(NameList, nameList_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(SQLFilter, SQLFilter_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    DescribeEventRuleAttributeResponseBodyResultEventPattern() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPattern(const DescribeEventRuleAttributeResponseBodyResultEventPattern &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPattern(DescribeEventRuleAttributeResponseBodyResultEventPattern &&) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPattern(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleAttributeResponseBodyResultEventPattern() = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPattern& operator=(const DescribeEventRuleAttributeResponseBodyResultEventPattern &) = default ;
    DescribeEventRuleAttributeResponseBodyResultEventPattern& operator=(DescribeEventRuleAttributeResponseBodyResultEventPattern &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventTypeList_ != nullptr
        && this->keywordFilterObj_ != nullptr && this->levelList_ != nullptr && this->nameList_ != nullptr && this->product_ != nullptr && this->SQLFilter_ != nullptr
        && this->statusList_ != nullptr; };
    // eventTypeList Field Functions 
    bool hasEventTypeList() const { return this->eventTypeList_ != nullptr;};
    void deleteEventTypeList() { this->eventTypeList_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList & eventTypeList() const { DARABONBA_PTR_GET_CONST(eventTypeList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList eventTypeList() { DARABONBA_PTR_GET(eventTypeList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setEventTypeList(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList & eventTypeList) { DARABONBA_PTR_SET_VALUE(eventTypeList_, eventTypeList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setEventTypeList(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList && eventTypeList) { DARABONBA_PTR_SET_RVALUE(eventTypeList_, eventTypeList) };


    // keywordFilterObj Field Functions 
    bool hasKeywordFilterObj() const { return this->keywordFilterObj_ != nullptr;};
    void deleteKeywordFilterObj() { this->keywordFilterObj_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj & keywordFilterObj() const { DARABONBA_PTR_GET_CONST(keywordFilterObj_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj keywordFilterObj() { DARABONBA_PTR_GET(keywordFilterObj_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setKeywordFilterObj(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj & keywordFilterObj) { DARABONBA_PTR_SET_VALUE(keywordFilterObj_, keywordFilterObj) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setKeywordFilterObj(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj && keywordFilterObj) { DARABONBA_PTR_SET_RVALUE(keywordFilterObj_, keywordFilterObj) };


    // levelList Field Functions 
    bool hasLevelList() const { return this->levelList_ != nullptr;};
    void deleteLevelList() { this->levelList_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList & levelList() const { DARABONBA_PTR_GET_CONST(levelList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList levelList() { DARABONBA_PTR_GET(levelList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setLevelList(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList & levelList) { DARABONBA_PTR_SET_VALUE(levelList_, levelList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setLevelList(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList && levelList) { DARABONBA_PTR_SET_RVALUE(levelList_, levelList) };


    // nameList Field Functions 
    bool hasNameList() const { return this->nameList_ != nullptr;};
    void deleteNameList() { this->nameList_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList & nameList() const { DARABONBA_PTR_GET_CONST(nameList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList nameList() { DARABONBA_PTR_GET(nameList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setNameList(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setNameList(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // SQLFilter Field Functions 
    bool hasSQLFilter() const { return this->SQLFilter_ != nullptr;};
    void deleteSQLFilter() { this->SQLFilter_ = nullptr;};
    inline string SQLFilter() const { DARABONBA_PTR_GET_DEFAULT(SQLFilter_, "") };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setSQLFilter(string SQLFilter) { DARABONBA_PTR_SET_VALUE(SQLFilter_, SQLFilter) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList) };
    inline Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList statusList() { DARABONBA_PTR_GET(statusList_, Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setStatusList(const Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline DescribeEventRuleAttributeResponseBodyResultEventPattern& setStatusList(Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    // The types of the event-triggered alert rules.
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternEventTypeList> eventTypeList_ = nullptr;
    // The keyword for filtering.
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternKeywordFilterObj> keywordFilterObj_ = nullptr;
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternLevelList> levelList_ = nullptr;
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternNameList> nameList_ = nullptr;
    // The name of the cloud service.
    std::shared_ptr<string> product_ = nullptr;
    // Indicates that logs are filtered based on the specified SQL statement. If the specified conditions are met, an alert is triggered.
    std::shared_ptr<string> SQLFilter_ = nullptr;
    std::shared_ptr<Models::DescribeEventRuleAttributeResponseBodyResultEventPatternStatusList> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
