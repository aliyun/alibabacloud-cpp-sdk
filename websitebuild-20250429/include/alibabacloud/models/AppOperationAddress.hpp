// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPOPERATIONADDRESS_HPP_
#define ALIBABACLOUD_MODELS_APPOPERATIONADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppOperateAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppOperationAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppOperationAddress& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
      DARABONBA_PTR_TO_JSON(AiDesignUrl, aiDesignUrl_);
      DARABONBA_PTR_TO_JSON(AppPublishUrl, appPublishUrl_);
      DARABONBA_PTR_TO_JSON(DashboardActions, dashboardActions_);
      DARABONBA_PTR_TO_JSON(DesignUrl, designUrl_);
      DARABONBA_PTR_TO_JSON(InstanceLoginUrl, instanceLoginUrl_);
      DARABONBA_PTR_TO_JSON(RenewBuyUrl, renewBuyUrl_);
      DARABONBA_PTR_TO_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
      DARABONBA_PTR_TO_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AppOperationAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
      DARABONBA_PTR_FROM_JSON(AiDesignUrl, aiDesignUrl_);
      DARABONBA_PTR_FROM_JSON(AppPublishUrl, appPublishUrl_);
      DARABONBA_PTR_FROM_JSON(DashboardActions, dashboardActions_);
      DARABONBA_PTR_FROM_JSON(DesignUrl, designUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceLoginUrl, instanceLoginUrl_);
      DARABONBA_PTR_FROM_JSON(RenewBuyUrl, renewBuyUrl_);
      DARABONBA_PTR_FROM_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
      DARABONBA_PTR_FROM_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
    };
    AppOperationAddress() = default ;
    AppOperationAddress(const AppOperationAddress &) = default ;
    AppOperationAddress(AppOperationAddress &&) = default ;
    AppOperationAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppOperationAddress() = default ;
    AppOperationAddress& operator=(const AppOperationAddress &) = default ;
    AppOperationAddress& operator=(AppOperationAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && this->aiCustomerConfigUrl_ == nullptr && this->aiDesignUrl_ == nullptr && this->appPublishUrl_ == nullptr && this->dashboardActions_ == nullptr && this->designUrl_ == nullptr
        && this->instanceLoginUrl_ == nullptr && this->renewBuyUrl_ == nullptr && this->serverDeliveryUrl_ == nullptr && this->upgradeBuyUrl_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<AppOperateAction> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<AppOperateAction>) };
    inline vector<AppOperateAction> getActions() { DARABONBA_PTR_GET(actions_, vector<AppOperateAction>) };
    inline AppOperationAddress& setActions(const vector<AppOperateAction> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline AppOperationAddress& setActions(vector<AppOperateAction> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // aiCustomerConfigUrl Field Functions 
    bool hasAiCustomerConfigUrl() const { return this->aiCustomerConfigUrl_ != nullptr;};
    void deleteAiCustomerConfigUrl() { this->aiCustomerConfigUrl_ = nullptr;};
    inline string getAiCustomerConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(aiCustomerConfigUrl_, "") };
    inline AppOperationAddress& setAiCustomerConfigUrl(string aiCustomerConfigUrl) { DARABONBA_PTR_SET_VALUE(aiCustomerConfigUrl_, aiCustomerConfigUrl) };


    // aiDesignUrl Field Functions 
    bool hasAiDesignUrl() const { return this->aiDesignUrl_ != nullptr;};
    void deleteAiDesignUrl() { this->aiDesignUrl_ = nullptr;};
    inline string getAiDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(aiDesignUrl_, "") };
    inline AppOperationAddress& setAiDesignUrl(string aiDesignUrl) { DARABONBA_PTR_SET_VALUE(aiDesignUrl_, aiDesignUrl) };


    // appPublishUrl Field Functions 
    bool hasAppPublishUrl() const { return this->appPublishUrl_ != nullptr;};
    void deleteAppPublishUrl() { this->appPublishUrl_ = nullptr;};
    inline string getAppPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(appPublishUrl_, "") };
    inline AppOperationAddress& setAppPublishUrl(string appPublishUrl) { DARABONBA_PTR_SET_VALUE(appPublishUrl_, appPublishUrl) };


    // dashboardActions Field Functions 
    bool hasDashboardActions() const { return this->dashboardActions_ != nullptr;};
    void deleteDashboardActions() { this->dashboardActions_ = nullptr;};
    inline const vector<AppOperateAction> & getDashboardActions() const { DARABONBA_PTR_GET_CONST(dashboardActions_, vector<AppOperateAction>) };
    inline vector<AppOperateAction> getDashboardActions() { DARABONBA_PTR_GET(dashboardActions_, vector<AppOperateAction>) };
    inline AppOperationAddress& setDashboardActions(const vector<AppOperateAction> & dashboardActions) { DARABONBA_PTR_SET_VALUE(dashboardActions_, dashboardActions) };
    inline AppOperationAddress& setDashboardActions(vector<AppOperateAction> && dashboardActions) { DARABONBA_PTR_SET_RVALUE(dashboardActions_, dashboardActions) };


    // designUrl Field Functions 
    bool hasDesignUrl() const { return this->designUrl_ != nullptr;};
    void deleteDesignUrl() { this->designUrl_ = nullptr;};
    inline string getDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(designUrl_, "") };
    inline AppOperationAddress& setDesignUrl(string designUrl) { DARABONBA_PTR_SET_VALUE(designUrl_, designUrl) };


    // instanceLoginUrl Field Functions 
    bool hasInstanceLoginUrl() const { return this->instanceLoginUrl_ != nullptr;};
    void deleteInstanceLoginUrl() { this->instanceLoginUrl_ = nullptr;};
    inline string getInstanceLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceLoginUrl_, "") };
    inline AppOperationAddress& setInstanceLoginUrl(string instanceLoginUrl) { DARABONBA_PTR_SET_VALUE(instanceLoginUrl_, instanceLoginUrl) };


    // renewBuyUrl Field Functions 
    bool hasRenewBuyUrl() const { return this->renewBuyUrl_ != nullptr;};
    void deleteRenewBuyUrl() { this->renewBuyUrl_ = nullptr;};
    inline string getRenewBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(renewBuyUrl_, "") };
    inline AppOperationAddress& setRenewBuyUrl(string renewBuyUrl) { DARABONBA_PTR_SET_VALUE(renewBuyUrl_, renewBuyUrl) };


    // serverDeliveryUrl Field Functions 
    bool hasServerDeliveryUrl() const { return this->serverDeliveryUrl_ != nullptr;};
    void deleteServerDeliveryUrl() { this->serverDeliveryUrl_ = nullptr;};
    inline string getServerDeliveryUrl() const { DARABONBA_PTR_GET_DEFAULT(serverDeliveryUrl_, "") };
    inline AppOperationAddress& setServerDeliveryUrl(string serverDeliveryUrl) { DARABONBA_PTR_SET_VALUE(serverDeliveryUrl_, serverDeliveryUrl) };


    // upgradeBuyUrl Field Functions 
    bool hasUpgradeBuyUrl() const { return this->upgradeBuyUrl_ != nullptr;};
    void deleteUpgradeBuyUrl() { this->upgradeBuyUrl_ = nullptr;};
    inline string getUpgradeBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(upgradeBuyUrl_, "") };
    inline AppOperationAddress& setUpgradeBuyUrl(string upgradeBuyUrl) { DARABONBA_PTR_SET_VALUE(upgradeBuyUrl_, upgradeBuyUrl) };


  protected:
    shared_ptr<vector<AppOperateAction>> actions_ {};
    shared_ptr<string> aiCustomerConfigUrl_ {};
    shared_ptr<string> aiDesignUrl_ {};
    shared_ptr<string> appPublishUrl_ {};
    shared_ptr<vector<AppOperateAction>> dashboardActions_ {};
    shared_ptr<string> designUrl_ {};
    shared_ptr<string> instanceLoginUrl_ {};
    shared_ptr<string> renewBuyUrl_ {};
    shared_ptr<string> serverDeliveryUrl_ {};
    shared_ptr<string> upgradeBuyUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
