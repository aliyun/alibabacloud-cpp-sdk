// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALARMCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULESALARMCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmContentSubTitle, alarmContentSubTitle_);
      DARABONBA_PTR_TO_JSON(AlarmContentTemplate, alarmContentTemplate_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(SubTitle, subTitle_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmContentSubTitle, alarmContentSubTitle_);
      DARABONBA_PTR_FROM_JSON(AlarmContentTemplate, alarmContentTemplate_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(SubTitle, subTitle_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext(SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& operator=(SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmContentSubTitle_ != nullptr
        && this->alarmContentTemplate_ != nullptr && this->content_ != nullptr && this->subTitle_ != nullptr; };
    // alarmContentSubTitle Field Functions 
    bool hasAlarmContentSubTitle() const { return this->alarmContentSubTitle_ != nullptr;};
    void deleteAlarmContentSubTitle() { this->alarmContentSubTitle_ = nullptr;};
    inline string alarmContentSubTitle() const { DARABONBA_PTR_GET_DEFAULT(alarmContentSubTitle_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& setAlarmContentSubTitle(string alarmContentSubTitle) { DARABONBA_PTR_SET_VALUE(alarmContentSubTitle_, alarmContentSubTitle) };


    // alarmContentTemplate Field Functions 
    bool hasAlarmContentTemplate() const { return this->alarmContentTemplate_ != nullptr;};
    void deleteAlarmContentTemplate() { this->alarmContentTemplate_ = nullptr;};
    inline string alarmContentTemplate() const { DARABONBA_PTR_GET_DEFAULT(alarmContentTemplate_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& setAlarmContentTemplate(string alarmContentTemplate) { DARABONBA_PTR_SET_VALUE(alarmContentTemplate_, alarmContentTemplate) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // subTitle Field Functions 
    bool hasSubTitle() const { return this->subTitle_ != nullptr;};
    void deleteSubTitle() { this->subTitle_ = nullptr;};
    inline string subTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


  protected:
    // The sub-title of the alert notification content.
    std::shared_ptr<string> alarmContentSubTitle_ = nullptr;
    // The template of the alert notification.
    std::shared_ptr<string> alarmContentTemplate_ = nullptr;
    // The content of the alert notification.
    std::shared_ptr<string> content_ = nullptr;
    // The sub-title of the alert notification.
    std::shared_ptr<string> subTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
