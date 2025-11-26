// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYPUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFYPUSHINGSETTING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModifyPushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModifyPushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModifyPushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
    };
    NotifyStrategyForModifyPushingSetting() = default ;
    NotifyStrategyForModifyPushingSetting(const NotifyStrategyForModifyPushingSetting &) = default ;
    NotifyStrategyForModifyPushingSetting(NotifyStrategyForModifyPushingSetting &&) = default ;
    NotifyStrategyForModifyPushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModifyPushingSetting() = default ;
    NotifyStrategyForModifyPushingSetting& operator=(const NotifyStrategyForModifyPushingSetting &) = default ;
    NotifyStrategyForModifyPushingSetting& operator=(NotifyStrategyForModifyPushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && return this->restoreActionIds_ == nullptr && return this->templateUuid_ == nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & alertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> alertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline NotifyStrategyForModifyPushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline NotifyStrategyForModifyPushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


    // restoreActionIds Field Functions 
    bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
    void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
    inline const vector<string> & restoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
    inline vector<string> restoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
    inline NotifyStrategyForModifyPushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
    inline NotifyStrategyForModifyPushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline NotifyStrategyForModifyPushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    std::shared_ptr<vector<string>> alertActionIds_ = nullptr;
    std::shared_ptr<vector<string>> restoreActionIds_ = nullptr;
    std::shared_ptr<string> templateUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
