// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNetwork.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestNodePool.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestRuntimePolicy.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestSecurityPolicy.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestStoragePolicy.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestUserDefinePolicy.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupRequestUserInfo.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppInstanceGroupRequestVideoPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RuntimePolicy, runtimePolicy_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_TO_JSON(UserDefinePolicy, userDefinePolicy_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RuntimePolicy, runtimePolicy_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
      DARABONBA_PTR_FROM_JSON(UserDefinePolicy, userDefinePolicy_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
    };
    CreateAppInstanceGroupRequest() = default ;
    CreateAppInstanceGroupRequest(const CreateAppInstanceGroupRequest &) = default ;
    CreateAppInstanceGroupRequest(CreateAppInstanceGroupRequest &&) = default ;
    CreateAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupRequest() = default ;
    CreateAppInstanceGroupRequest& operator=(const CreateAppInstanceGroupRequest &) = default ;
    CreateAppInstanceGroupRequest& operator=(CreateAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && return this->appInstanceGroupName_ == nullptr && return this->appPackageType_ == nullptr && return this->appPolicyId_ == nullptr && return this->authMode_ == nullptr && return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->bizRegionId_ == nullptr && return this->chargeResourceMode_ == nullptr && return this->chargeType_ == nullptr && return this->clusterId_ == nullptr
        && return this->network_ == nullptr && return this->nodePool_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->preOpenAppId_ == nullptr
        && return this->productType_ == nullptr && return this->promotionId_ == nullptr && return this->runtimePolicy_ == nullptr && return this->securityPolicy_ == nullptr && return this->sessionTimeout_ == nullptr
        && return this->storagePolicy_ == nullptr && return this->subPayType_ == nullptr && return this->userDefinePolicy_ == nullptr && return this->userInfo_ == nullptr && return this->users_ == nullptr
        && return this->videoPolicy_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline CreateAppInstanceGroupRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline CreateAppInstanceGroupRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // appPackageType Field Functions 
    bool hasAppPackageType() const { return this->appPackageType_ != nullptr;};
    void deleteAppPackageType() { this->appPackageType_ = nullptr;};
    inline string appPackageType() const { DARABONBA_PTR_GET_DEFAULT(appPackageType_, "") };
    inline CreateAppInstanceGroupRequest& setAppPackageType(string appPackageType) { DARABONBA_PTR_SET_VALUE(appPackageType_, appPackageType) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline CreateAppInstanceGroupRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline CreateAppInstanceGroupRequest& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAppInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAppInstanceGroupRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAppInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeResourceMode Field Functions 
    bool hasChargeResourceMode() const { return this->chargeResourceMode_ != nullptr;};
    void deleteChargeResourceMode() { this->chargeResourceMode_ = nullptr;};
    inline string chargeResourceMode() const { DARABONBA_PTR_GET_DEFAULT(chargeResourceMode_, "") };
    inline CreateAppInstanceGroupRequest& setChargeResourceMode(string chargeResourceMode) { DARABONBA_PTR_SET_VALUE(chargeResourceMode_, chargeResourceMode) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAppInstanceGroupRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateAppInstanceGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const CreateAppInstanceGroupRequestNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, CreateAppInstanceGroupRequestNetwork) };
    inline CreateAppInstanceGroupRequestNetwork network() { DARABONBA_PTR_GET(network_, CreateAppInstanceGroupRequestNetwork) };
    inline CreateAppInstanceGroupRequest& setNetwork(const CreateAppInstanceGroupRequestNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateAppInstanceGroupRequest& setNetwork(CreateAppInstanceGroupRequestNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const CreateAppInstanceGroupRequestNodePool & nodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, CreateAppInstanceGroupRequestNodePool) };
    inline CreateAppInstanceGroupRequestNodePool nodePool() { DARABONBA_PTR_GET(nodePool_, CreateAppInstanceGroupRequestNodePool) };
    inline CreateAppInstanceGroupRequest& setNodePool(const CreateAppInstanceGroupRequestNodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline CreateAppInstanceGroupRequest& setNodePool(CreateAppInstanceGroupRequestNodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAppInstanceGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAppInstanceGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string preOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline CreateAppInstanceGroupRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateAppInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // runtimePolicy Field Functions 
    bool hasRuntimePolicy() const { return this->runtimePolicy_ != nullptr;};
    void deleteRuntimePolicy() { this->runtimePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequestRuntimePolicy & runtimePolicy() const { DARABONBA_PTR_GET_CONST(runtimePolicy_, CreateAppInstanceGroupRequestRuntimePolicy) };
    inline CreateAppInstanceGroupRequestRuntimePolicy runtimePolicy() { DARABONBA_PTR_GET(runtimePolicy_, CreateAppInstanceGroupRequestRuntimePolicy) };
    inline CreateAppInstanceGroupRequest& setRuntimePolicy(const CreateAppInstanceGroupRequestRuntimePolicy & runtimePolicy) { DARABONBA_PTR_SET_VALUE(runtimePolicy_, runtimePolicy) };
    inline CreateAppInstanceGroupRequest& setRuntimePolicy(CreateAppInstanceGroupRequestRuntimePolicy && runtimePolicy) { DARABONBA_PTR_SET_RVALUE(runtimePolicy_, runtimePolicy) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequestSecurityPolicy & securityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, CreateAppInstanceGroupRequestSecurityPolicy) };
    inline CreateAppInstanceGroupRequestSecurityPolicy securityPolicy() { DARABONBA_PTR_GET(securityPolicy_, CreateAppInstanceGroupRequestSecurityPolicy) };
    inline CreateAppInstanceGroupRequest& setSecurityPolicy(const CreateAppInstanceGroupRequestSecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline CreateAppInstanceGroupRequest& setSecurityPolicy(CreateAppInstanceGroupRequestSecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline CreateAppInstanceGroupRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequestStoragePolicy & storagePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, CreateAppInstanceGroupRequestStoragePolicy) };
    inline CreateAppInstanceGroupRequestStoragePolicy storagePolicy() { DARABONBA_PTR_GET(storagePolicy_, CreateAppInstanceGroupRequestStoragePolicy) };
    inline CreateAppInstanceGroupRequest& setStoragePolicy(const CreateAppInstanceGroupRequestStoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
    inline CreateAppInstanceGroupRequest& setStoragePolicy(CreateAppInstanceGroupRequestStoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string subPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateAppInstanceGroupRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // userDefinePolicy Field Functions 
    bool hasUserDefinePolicy() const { return this->userDefinePolicy_ != nullptr;};
    void deleteUserDefinePolicy() { this->userDefinePolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequestUserDefinePolicy & userDefinePolicy() const { DARABONBA_PTR_GET_CONST(userDefinePolicy_, CreateAppInstanceGroupRequestUserDefinePolicy) };
    inline CreateAppInstanceGroupRequestUserDefinePolicy userDefinePolicy() { DARABONBA_PTR_GET(userDefinePolicy_, CreateAppInstanceGroupRequestUserDefinePolicy) };
    inline CreateAppInstanceGroupRequest& setUserDefinePolicy(const CreateAppInstanceGroupRequestUserDefinePolicy & userDefinePolicy) { DARABONBA_PTR_SET_VALUE(userDefinePolicy_, userDefinePolicy) };
    inline CreateAppInstanceGroupRequest& setUserDefinePolicy(CreateAppInstanceGroupRequestUserDefinePolicy && userDefinePolicy) { DARABONBA_PTR_SET_RVALUE(userDefinePolicy_, userDefinePolicy) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateAppInstanceGroupRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateAppInstanceGroupRequestUserInfo) };
    inline CreateAppInstanceGroupRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CreateAppInstanceGroupRequestUserInfo) };
    inline CreateAppInstanceGroupRequest& setUserInfo(const CreateAppInstanceGroupRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateAppInstanceGroupRequest& setUserInfo(CreateAppInstanceGroupRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateAppInstanceGroupRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateAppInstanceGroupRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    // videoPolicy Field Functions 
    bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
    void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
    inline const CreateAppInstanceGroupRequestVideoPolicy & videoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, CreateAppInstanceGroupRequestVideoPolicy) };
    inline CreateAppInstanceGroupRequestVideoPolicy videoPolicy() { DARABONBA_PTR_GET(videoPolicy_, CreateAppInstanceGroupRequestVideoPolicy) };
    inline CreateAppInstanceGroupRequest& setVideoPolicy(const CreateAppInstanceGroupRequestVideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
    inline CreateAppInstanceGroupRequest& setVideoPolicy(CreateAppInstanceGroupRequestVideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    std::shared_ptr<string> appPackageType_ = nullptr;
    std::shared_ptr<string> appPolicyId_ = nullptr;
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
    std::shared_ptr<CreateAppInstanceGroupRequestNetwork> network_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestNodePool> nodePool_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> period_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> preOpenAppId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestRuntimePolicy> runtimePolicy_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestSecurityPolicy> securityPolicy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestStoragePolicy> storagePolicy_ = nullptr;
    std::shared_ptr<string> subPayType_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestUserDefinePolicy> userDefinePolicy_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestUserInfo> userInfo_ = nullptr;
    std::shared_ptr<vector<string>> users_ = nullptr;
    std::shared_ptr<CreateAppInstanceGroupRequestVideoPolicy> videoPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
