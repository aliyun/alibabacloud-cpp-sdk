// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEWPUSHINGSETTING_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEWPUSHINGSETTING_HPP_
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
  class SubscriptionForViewPushingSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionForViewPushingSetting& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_TO_JSON(responsePlanId, responsePlanId_);
      DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionForViewPushingSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_FROM_JSON(responsePlanId, responsePlanId_);
      DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
    };
    SubscriptionForViewPushingSetting() = default ;
    SubscriptionForViewPushingSetting(const SubscriptionForViewPushingSetting &) = default ;
    SubscriptionForViewPushingSetting(SubscriptionForViewPushingSetting &&) = default ;
    SubscriptionForViewPushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionForViewPushingSetting() = default ;
    SubscriptionForViewPushingSetting& operator=(const SubscriptionForViewPushingSetting &) = default ;
    SubscriptionForViewPushingSetting& operator=(SubscriptionForViewPushingSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertActionIds_ != nullptr
        && this->responsePlanId_ != nullptr && this->restoreActionIds_ != nullptr && this->templateUuid_ != nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & alertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> alertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline SubscriptionForViewPushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline SubscriptionForViewPushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


    // responsePlanId Field Functions 
    bool hasResponsePlanId() const { return this->responsePlanId_ != nullptr;};
    void deleteResponsePlanId() { this->responsePlanId_ = nullptr;};
    inline string responsePlanId() const { DARABONBA_PTR_GET_DEFAULT(responsePlanId_, "") };
    inline SubscriptionForViewPushingSetting& setResponsePlanId(string responsePlanId) { DARABONBA_PTR_SET_VALUE(responsePlanId_, responsePlanId) };


    // restoreActionIds Field Functions 
    bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
    void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
    inline const vector<string> & restoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
    inline vector<string> restoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
    inline SubscriptionForViewPushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
    inline SubscriptionForViewPushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline SubscriptionForViewPushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


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
