// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPSHRINKREQUEST_HPP_
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
  class CreateAppInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Network, networkShrink_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RuntimePolicy, runtimePolicyShrink_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicyShrink_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(UserDefinePolicy, userDefinePolicyShrink_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(AppPackageType, appPackageType_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeResourceMode, chargeResourceMode_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Network, networkShrink_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RuntimePolicy, runtimePolicyShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicyShrink_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(UserDefinePolicy, userDefinePolicyShrink_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicyShrink_);
    };
    CreateAppInstanceGroupShrinkRequest() = default ;
    CreateAppInstanceGroupShrinkRequest(const CreateAppInstanceGroupShrinkRequest &) = default ;
    CreateAppInstanceGroupShrinkRequest(CreateAppInstanceGroupShrinkRequest &&) = default ;
    CreateAppInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupShrinkRequest() = default ;
    CreateAppInstanceGroupShrinkRequest& operator=(const CreateAppInstanceGroupShrinkRequest &) = default ;
    CreateAppInstanceGroupShrinkRequest& operator=(CreateAppInstanceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && return this->appInstanceGroupName_ == nullptr && return this->appPackageType_ == nullptr && return this->appPolicyId_ == nullptr && return this->authMode_ == nullptr && return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->bizRegionId_ == nullptr && return this->chargeResourceMode_ == nullptr && return this->chargeType_ == nullptr && return this->clusterId_ == nullptr
        && return this->networkShrink_ == nullptr && return this->nodePoolShrink_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->preOpenAppId_ == nullptr
        && return this->productType_ == nullptr && return this->promotionId_ == nullptr && return this->runtimePolicyShrink_ == nullptr && return this->securityPolicyShrink_ == nullptr && return this->sessionTimeout_ == nullptr
        && return this->storagePolicyShrink_ == nullptr && return this->subPayType_ == nullptr && return this->userDefinePolicyShrink_ == nullptr && return this->userGroupIds_ == nullptr && return this->userInfoShrink_ == nullptr
        && return this->users_ == nullptr && return this->videoPolicyShrink_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appPackageType Field Functions 
    bool hasAppPackageType() const { return this->appPackageType_ != nullptr;};
    void deleteAppPackageType() { this->appPackageType_ = nullptr;};
    inline string appPackageType() const { DARABONBA_PTR_GET_DEFAULT(appPackageType_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setAppPackageType(string appPackageType) { DARABONBA_PTR_SET_VALUE(appPackageType_, appPackageType) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAppInstanceGroupShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAppInstanceGroupShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string chargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // networkShrink Field Functions 
    bool hasNetworkShrink() const { return this->networkShrink_ != nullptr;};
    void deleteNetworkShrink() { this->networkShrink_ = nullptr;};
    inline string networkShrink() const { DARABONBA_PTR_GET_DEFAULT(networkShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setNetworkShrink(string networkShrink) { DARABONBA_PTR_SET_VALUE(networkShrink_, networkShrink) };


    // nodePoolShrink Field Functions 
    bool hasNodePoolShrink() const { return this->nodePoolShrink_ != nullptr;};
    void deleteNodePoolShrink() { this->nodePoolShrink_ = nullptr;};
    inline string nodePoolShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setNodePoolShrink(string nodePoolShrink) { DARABONBA_PTR_SET_VALUE(nodePoolShrink_, nodePoolShrink) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAppInstanceGroupShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string preOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // runtimePolicyShrink Field Functions 
    bool hasRuntimePolicyShrink() const { return this->runtimePolicyShrink_ != nullptr;};
    void deleteRuntimePolicyShrink() { this->runtimePolicyShrink_ = nullptr;};
    inline string runtimePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimePolicyShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setRuntimePolicyShrink(string runtimePolicyShrink) { DARABONBA_PTR_SET_VALUE(runtimePolicyShrink_, runtimePolicyShrink) };


    // securityPolicyShrink Field Functions 
    bool hasSecurityPolicyShrink() const { return this->securityPolicyShrink_ != nullptr;};
    void deleteSecurityPolicyShrink() { this->securityPolicyShrink_ = nullptr;};
    inline string securityPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setSecurityPolicyShrink(string securityPolicyShrink) { DARABONBA_PTR_SET_VALUE(securityPolicyShrink_, securityPolicyShrink) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline CreateAppInstanceGroupShrinkRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicyShrink Field Functions 
    bool hasStoragePolicyShrink() const { return this->storagePolicyShrink_ != nullptr;};
    void deleteStoragePolicyShrink() { this->storagePolicyShrink_ = nullptr;};
    inline string storagePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(storagePolicyShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setStoragePolicyShrink(string storagePolicyShrink) { DARABONBA_PTR_SET_VALUE(storagePolicyShrink_, storagePolicyShrink) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // userDefinePolicyShrink Field Functions 
    bool hasUserDefinePolicyShrink() const { return this->userDefinePolicyShrink_ != nullptr;};
    void deleteUserDefinePolicyShrink() { this->userDefinePolicyShrink_ = nullptr;};
    inline string userDefinePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(userDefinePolicyShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setUserDefinePolicyShrink(string userDefinePolicyShrink) { DARABONBA_PTR_SET_VALUE(userDefinePolicyShrink_, userDefinePolicyShrink) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateAppInstanceGroupShrinkRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateAppInstanceGroupShrinkRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateAppInstanceGroupShrinkRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateAppInstanceGroupShrinkRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    // videoPolicyShrink Field Functions 
    bool hasVideoPolicyShrink() const { return this->videoPolicyShrink_ != nullptr;};
    void deleteVideoPolicyShrink() { this->videoPolicyShrink_ = nullptr;};
    inline string videoPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(videoPolicyShrink_, "") };
    inline CreateAppInstanceGroupShrinkRequest& setVideoPolicyShrink(string videoPolicyShrink) { DARABONBA_PTR_SET_VALUE(videoPolicyShrink_, videoPolicyShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    std::shared_ptr<string> appPackageType_ = nullptr;
    std::shared_ptr<string> appPolicyId_ = nullptr;
    // The authentication mode of the delivery group.
    std::shared_ptr<string> authMode_ = nullptr;
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeResourceMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> networkShrink_ = nullptr;
    std::shared_ptr<string> nodePoolShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> period_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> preOpenAppId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    // The runtime policy.
    std::shared_ptr<string> runtimePolicyShrink_ = nullptr;
    std::shared_ptr<string> securityPolicyShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    std::shared_ptr<string> storagePolicyShrink_ = nullptr;
    std::shared_ptr<string> subPayType_ = nullptr;
    std::shared_ptr<string> userDefinePolicyShrink_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<string> userInfoShrink_ = nullptr;
    std::shared_ptr<vector<string>> users_ = nullptr;
    std::shared_ptr<string> videoPolicyShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
