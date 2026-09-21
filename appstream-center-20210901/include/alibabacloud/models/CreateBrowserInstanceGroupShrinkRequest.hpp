// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROWSERINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROWSERINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateBrowserInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBrowserInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_TO_JSON(AuthNotificationEnabled, authNotificationEnabled_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfigShrink_);
      DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_TO_JSON(Network, networkShrink_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Policy, policyShrink_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicyShrink_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(Timers, timersShrink_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_TO_JSON(Users, usersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBrowserInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_FROM_JSON(AuthNotificationEnabled, authNotificationEnabled_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxAmount, maxAmount_);
      DARABONBA_PTR_FROM_JSON(Network, networkShrink_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicyShrink_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(Timers, timersShrink_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Users, usersShrink_);
    };
    CreateBrowserInstanceGroupShrinkRequest() = default ;
    CreateBrowserInstanceGroupShrinkRequest(const CreateBrowserInstanceGroupShrinkRequest &) = default ;
    CreateBrowserInstanceGroupShrinkRequest(CreateBrowserInstanceGroupShrinkRequest &&) = default ;
    CreateBrowserInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBrowserInstanceGroupShrinkRequest() = default ;
    CreateBrowserInstanceGroupShrinkRequest& operator=(const CreateBrowserInstanceGroupShrinkRequest &) = default ;
    CreateBrowserInstanceGroupShrinkRequest& operator=(CreateBrowserInstanceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appPackageType_ == nullptr
        && this->authNotificationEnabled_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->browserConfigShrink_ == nullptr
        && this->chargeResourceMode_ == nullptr && this->chargeType_ == nullptr && this->cloudBrowserName_ == nullptr && this->imageId_ == nullptr && this->instanceType_ == nullptr
        && this->maxAmount_ == nullptr && this->networkShrink_ == nullptr && this->nodePoolShrink_ == nullptr && this->osType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->policyShrink_ == nullptr && this->promotionId_ == nullptr && this->securityPolicyShrink_ == nullptr && this->storagePolicyShrink_ == nullptr
        && this->subPayType_ == nullptr && this->tagShrink_ == nullptr && this->timersShrink_ == nullptr && this->userGroupIds_ == nullptr && this->userInfoShrink_ == nullptr
        && this->usersShrink_ == nullptr; };
    // appPackageType Field Functions 
    bool hasAppPackageType() const { return this->appPackageType_ != nullptr;};
    void deleteAppPackageType() { this->appPackageType_ = nullptr;};
    inline string getAppPackageType() const { DARABONBA_PTR_GET_DEFAULT(appPackageType_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setAppPackageType(string appPackageType) { DARABONBA_PTR_SET_VALUE(appPackageType_, appPackageType) };


    // authNotificationEnabled Field Functions 
    bool hasAuthNotificationEnabled() const { return this->authNotificationEnabled_ != nullptr;};
    void deleteAuthNotificationEnabled() { this->authNotificationEnabled_ = nullptr;};
    inline bool getAuthNotificationEnabled() const { DARABONBA_PTR_GET_DEFAULT(authNotificationEnabled_, false) };
    inline CreateBrowserInstanceGroupShrinkRequest& setAuthNotificationEnabled(bool authNotificationEnabled) { DARABONBA_PTR_SET_VALUE(authNotificationEnabled_, authNotificationEnabled) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateBrowserInstanceGroupShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateBrowserInstanceGroupShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // browserConfigShrink Field Functions 
    bool hasBrowserConfigShrink() const { return this->browserConfigShrink_ != nullptr;};
    void deleteBrowserConfigShrink() { this->browserConfigShrink_ = nullptr;};
    inline string getBrowserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(browserConfigShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setBrowserConfigShrink(string browserConfigShrink) { DARABONBA_PTR_SET_VALUE(browserConfigShrink_, browserConfigShrink) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string getChargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string getCloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxAmount Field Functions 
    bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
    void deleteMaxAmount() { this->maxAmount_ = nullptr;};
    inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
    inline CreateBrowserInstanceGroupShrinkRequest& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


    // networkShrink Field Functions 
    bool hasNetworkShrink() const { return this->networkShrink_ != nullptr;};
    void deleteNetworkShrink() { this->networkShrink_ = nullptr;};
    inline string getNetworkShrink() const { DARABONBA_PTR_GET_DEFAULT(networkShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setNetworkShrink(string networkShrink) { DARABONBA_PTR_SET_VALUE(networkShrink_, networkShrink) };


    // nodePoolShrink Field Functions 
    bool hasNodePoolShrink() const { return this->nodePoolShrink_ != nullptr;};
    void deleteNodePoolShrink() { this->nodePoolShrink_ = nullptr;};
    inline string getNodePoolShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setNodePoolShrink(string nodePoolShrink) { DARABONBA_PTR_SET_VALUE(nodePoolShrink_, nodePoolShrink) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateBrowserInstanceGroupShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyShrink Field Functions 
    bool hasPolicyShrink() const { return this->policyShrink_ != nullptr;};
    void deletePolicyShrink() { this->policyShrink_ = nullptr;};
    inline string getPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(policyShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setPolicyShrink(string policyShrink) { DARABONBA_PTR_SET_VALUE(policyShrink_, policyShrink) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // securityPolicyShrink Field Functions 
    bool hasSecurityPolicyShrink() const { return this->securityPolicyShrink_ != nullptr;};
    void deleteSecurityPolicyShrink() { this->securityPolicyShrink_ = nullptr;};
    inline string getSecurityPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setSecurityPolicyShrink(string securityPolicyShrink) { DARABONBA_PTR_SET_VALUE(securityPolicyShrink_, securityPolicyShrink) };


    // storagePolicyShrink Field Functions 
    bool hasStoragePolicyShrink() const { return this->storagePolicyShrink_ != nullptr;};
    void deleteStoragePolicyShrink() { this->storagePolicyShrink_ = nullptr;};
    inline string getStoragePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(storagePolicyShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setStoragePolicyShrink(string storagePolicyShrink) { DARABONBA_PTR_SET_VALUE(storagePolicyShrink_, storagePolicyShrink) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // timersShrink Field Functions 
    bool hasTimersShrink() const { return this->timersShrink_ != nullptr;};
    void deleteTimersShrink() { this->timersShrink_ = nullptr;};
    inline string getTimersShrink() const { DARABONBA_PTR_GET_DEFAULT(timersShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setTimersShrink(string timersShrink) { DARABONBA_PTR_SET_VALUE(timersShrink_, timersShrink) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateBrowserInstanceGroupShrinkRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateBrowserInstanceGroupShrinkRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


    // usersShrink Field Functions 
    bool hasUsersShrink() const { return this->usersShrink_ != nullptr;};
    void deleteUsersShrink() { this->usersShrink_ = nullptr;};
    inline string getUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(usersShrink_, "") };
    inline CreateBrowserInstanceGroupShrinkRequest& setUsersShrink(string usersShrink) { DARABONBA_PTR_SET_VALUE(usersShrink_, usersShrink) };


  protected:
    // The plan identifier.
    // 
    // Do not specify this parameter.
    shared_ptr<string> appPackageType_ {};
    // Specifies whether to send authorization and deauthorization notification emails.
    // 
    // - `true`: Sends the notification.
    // - `false`: Does not send the notification.
    shared_ptr<bool> authNotificationEnabled_ {};
    // The automatic payment parameter.
    // 
    // Do not specify this parameter.
    shared_ptr<bool> autoPay_ {};
    // The auto-renewal parameter.
    // 
    // Do not specify this parameter.
    shared_ptr<bool> autoRenew_ {};
    // The business region ID. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The browser configuration.
    shared_ptr<string> browserConfigShrink_ {};
    // The resource billing mode.
    // 
    // **For MAU scenarios:** Set this parameter to `AppInstance` to bill by instance resource.
    shared_ptr<string> chargeResourceMode_ {};
    // The billing type.
    // 
    // **For MAU scenarios:** Set this parameter to `PostPaid`, which indicates pay-as-you-go billing.
    shared_ptr<string> chargeType_ {};
    // The name of the cloud browser group. This parameter cannot be empty. The name is used to distinguish different browser groups in business management scenarios.
    // 
    // This parameter is required.
    shared_ptr<string> cloudBrowserName_ {};
    // The image identifier used by the cloud browser. The image must be compatible with the operating system.
    // 
    // If this parameter is omitted, the default image available for the account is used. If no default image is available, the creation may fail.
    // 
    // **Usage condition:** When `CookiesSync` is enabled, explicitly specify an image that supports cookie synchronization.
    shared_ptr<string> imageId_ {};
    // The instance type identifier. Select an instance type that matches the target region, operating system, and inventory conditions.
    // 
    // If this parameter is omitted, the default instance type is used.
    shared_ptr<string> instanceType_ {};
    // The capacity configuration for the MAU billing scenario.
    shared_ptr<int32_t> maxAmount_ {};
    // The office network and website access restriction configurations. The selected office network must belong to the current account and be located in the region specified by `BizRegionId`.
    shared_ptr<string> networkShrink_ {};
    // The node pool configuration.
    // 
    // You do not need to specify this parameter.
    shared_ptr<string> nodePoolShrink_ {};
    // The operating system type. This parameter is required.
    // 
    // Only `Windows` is supported. Other operating systems are not supported.
    shared_ptr<string> osType_ {};
    // The number of subscription periods.
    // 
    // Do not specify this parameter.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period.
    // 
    // Do not specify this parameter.
    shared_ptr<string> periodUnit_ {};
    // The clipboard, video, watermark, session, and client access policy configurations.
    shared_ptr<string> policyShrink_ {};
    // The promotion ID. Specifies the promotional campaign to apply to the order.
    // 
    // Whether the promotion is applicable depends on the campaign rules. Do not specify this parameter if no promotional campaign is used.
    shared_ptr<string> promotionId_ {};
    // The connection security policy for the browser group.
    shared_ptr<string> securityPolicyShrink_ {};
    // The user data storage configuration for the browser group.
    shared_ptr<string> storagePolicyShrink_ {};
    // The billing subtype.
    // 
    // **Set this parameter to `mau` explicitly, which indicates billing by monthly active users.** Omitting this field does not enable MAU billing.
    shared_ptr<string> subPayType_ {};
    // Not supported. You do not need to specify this parameter.
    shared_ptr<string> tagShrink_ {};
    // Not supported. You do not need to specify this parameter.
    shared_ptr<string> timersShrink_ {};
    // The list of authorized user group identifiers. A maximum of 10 items are supported. The user groups must belong to the current account and match the workspace network account type.
    // 
    // **Limit:** Cannot be specified together with a non-empty `Users`.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The authorized user account information. The value must match the user and workspace network type.
    shared_ptr<string> userInfoShrink_ {};
    // The list of authorized users. A maximum of 200 users can be specified. Users must be created in advance and must match the account type.
    // 
    // **Restriction:** This parameter cannot be specified together with a non-empty `UserGroupIds`.
    shared_ptr<string> usersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
