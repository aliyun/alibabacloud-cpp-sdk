// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONFORMODIFYPUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONFORMODIFYPUSHINGSETTING_HPP_
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
  class SubscriptionForModifyPushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionForModifyPushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_TO_JSON(responsePlanId, responsePlanId_);
      DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionForModifyPushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_FROM_JSON(responsePlanId, responsePlanId_);
      DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
    };
    SubscriptionForModifyPushingSetting() = default ;
    SubscriptionForModifyPushingSetting(const SubscriptionForModifyPushingSetting &) = default ;
    SubscriptionForModifyPushingSetting(SubscriptionForModifyPushingSetting &&) = default ;
    SubscriptionForModifyPushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionForModifyPushingSetting() = default ;
    SubscriptionForModifyPushingSetting& operator=(const SubscriptionForModifyPushingSetting &) = default ;
    SubscriptionForModifyPushingSetting& operator=(SubscriptionForModifyPushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && return this->responsePlanId_ == nullptr && return this->restoreActionIds_ == nullptr && return this->templateUuid_ == nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & alertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> alertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline SubscriptionForModifyPushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline SubscriptionForModifyPushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


    // responsePlanId Field Functions 
    bool hasResponsePlanId() const { return this->responsePlanId_ != nullptr;};
    void deleteResponsePlanId() { this->responsePlanId_ = nullptr;};
    inline string responsePlanId() const { DARABONBA_PTR_GET_DEFAULT(responsePlanId_, "") };
    inline SubscriptionForModifyPushingSetting& setResponsePlanId(string responsePlanId) { DARABONBA_PTR_SET_VALUE(responsePlanId_, responsePlanId) };


    // restoreActionIds Field Functions 
    bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
    void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
    inline const vector<string> & restoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
    inline vector<string> restoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
    inline SubscriptionForModifyPushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
    inline SubscriptionForModifyPushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline SubscriptionForModifyPushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    std::shared_ptr<vector<string>> alertActionIds_ = nullptr;
    std::shared_ptr<string> responsePlanId_ = nullptr;
    std::shared_ptr<vector<string>> restoreActionIds_ = nullptr;
    std::shared_ptr<string> templateUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
