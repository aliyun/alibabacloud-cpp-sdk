// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LICENSEINSTANCEAPPDTO_HPP_
#define ALIBABACLOUD_MODELS_LICENSEINSTANCEAPPDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class LicenseInstanceAppDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LicenseInstanceAppDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_TO_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, LicenseInstanceAppDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BeginOn, beginOn_);
      DARABONBA_PTR_FROM_JSON(ContractNo, contractNo_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(LicenseConfigs, licenseConfigs_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    LicenseInstanceAppDTO() = default ;
    LicenseInstanceAppDTO(const LicenseInstanceAppDTO &) = default ;
    LicenseInstanceAppDTO(LicenseInstanceAppDTO &&) = default ;
    LicenseInstanceAppDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LicenseInstanceAppDTO() = default ;
    LicenseInstanceAppDTO& operator=(const LicenseInstanceAppDTO &) = default ;
    LicenseInstanceAppDTO& operator=(LicenseInstanceAppDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LicenseConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LicenseConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(FeatureIds, featureIds_);
        DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
        DARABONBA_PTR_TO_JSON(SdkId, sdkId_);
        DARABONBA_PTR_TO_JSON(SdkName, sdkName_);
        DARABONBA_PTR_TO_JSON(Subscription, subscription_);
        DARABONBA_PTR_TO_JSON(SubscriptionImp, subscriptionImp_);
        DARABONBA_PTR_TO_JSON(SubscriptionPkg, subscriptionPkg_);
      };
      friend void from_json(const Darabonba::Json& j, LicenseConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(FeatureIds, featureIds_);
        DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
        DARABONBA_PTR_FROM_JSON(SdkId, sdkId_);
        DARABONBA_PTR_FROM_JSON(SdkName, sdkName_);
        DARABONBA_PTR_FROM_JSON(Subscription, subscription_);
        DARABONBA_PTR_FROM_JSON(SubscriptionImp, subscriptionImp_);
        DARABONBA_PTR_FROM_JSON(SubscriptionPkg, subscriptionPkg_);
      };
      LicenseConfigs() = default ;
      LicenseConfigs(const LicenseConfigs &) = default ;
      LicenseConfigs(LicenseConfigs &&) = default ;
      LicenseConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LicenseConfigs() = default ;
      LicenseConfigs& operator=(const LicenseConfigs &) = default ;
      LicenseConfigs& operator=(LicenseConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessType_ == nullptr
        && this->featureIds_ == nullptr && this->isTrial_ == nullptr && this->sdkId_ == nullptr && this->sdkName_ == nullptr && this->subscription_ == nullptr
        && this->subscriptionImp_ == nullptr && this->subscriptionPkg_ == nullptr; };
      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline LicenseConfigs& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // featureIds Field Functions 
      bool hasFeatureIds() const { return this->featureIds_ != nullptr;};
      void deleteFeatureIds() { this->featureIds_ = nullptr;};
      inline string getFeatureIds() const { DARABONBA_PTR_GET_DEFAULT(featureIds_, "") };
      inline LicenseConfigs& setFeatureIds(string featureIds) { DARABONBA_PTR_SET_VALUE(featureIds_, featureIds) };


      // isTrial Field Functions 
      bool hasIsTrial() const { return this->isTrial_ != nullptr;};
      void deleteIsTrial() { this->isTrial_ = nullptr;};
      inline bool getIsTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
      inline LicenseConfigs& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


      // sdkId Field Functions 
      bool hasSdkId() const { return this->sdkId_ != nullptr;};
      void deleteSdkId() { this->sdkId_ = nullptr;};
      inline int32_t getSdkId() const { DARABONBA_PTR_GET_DEFAULT(sdkId_, 0) };
      inline LicenseConfigs& setSdkId(int32_t sdkId) { DARABONBA_PTR_SET_VALUE(sdkId_, sdkId) };


      // sdkName Field Functions 
      bool hasSdkName() const { return this->sdkName_ != nullptr;};
      void deleteSdkName() { this->sdkName_ = nullptr;};
      inline string getSdkName() const { DARABONBA_PTR_GET_DEFAULT(sdkName_, "") };
      inline LicenseConfigs& setSdkName(string sdkName) { DARABONBA_PTR_SET_VALUE(sdkName_, sdkName) };


      // subscription Field Functions 
      bool hasSubscription() const { return this->subscription_ != nullptr;};
      void deleteSubscription() { this->subscription_ = nullptr;};
      inline string getSubscription() const { DARABONBA_PTR_GET_DEFAULT(subscription_, "") };
      inline LicenseConfigs& setSubscription(string subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };


      // subscriptionImp Field Functions 
      bool hasSubscriptionImp() const { return this->subscriptionImp_ != nullptr;};
      void deleteSubscriptionImp() { this->subscriptionImp_ = nullptr;};
      inline string getSubscriptionImp() const { DARABONBA_PTR_GET_DEFAULT(subscriptionImp_, "") };
      inline LicenseConfigs& setSubscriptionImp(string subscriptionImp) { DARABONBA_PTR_SET_VALUE(subscriptionImp_, subscriptionImp) };


      // subscriptionPkg Field Functions 
      bool hasSubscriptionPkg() const { return this->subscriptionPkg_ != nullptr;};
      void deleteSubscriptionPkg() { this->subscriptionPkg_ = nullptr;};
      inline string getSubscriptionPkg() const { DARABONBA_PTR_GET_DEFAULT(subscriptionPkg_, "") };
      inline LicenseConfigs& setSubscriptionPkg(string subscriptionPkg) { DARABONBA_PTR_SET_VALUE(subscriptionPkg_, subscriptionPkg) };


    protected:
      shared_ptr<string> businessType_ {};
      shared_ptr<string> featureIds_ {};
      shared_ptr<bool> isTrial_ {};
      shared_ptr<int32_t> sdkId_ {};
      shared_ptr<string> sdkName_ {};
      shared_ptr<string> subscription_ {};
      shared_ptr<string> subscriptionImp_ {};
      shared_ptr<string> subscriptionPkg_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->beginOn_ == nullptr && this->contractNo_ == nullptr && this->creationTime_ == nullptr && this->expiredOn_ == nullptr && this->instanceId_ == nullptr
        && this->itemId_ == nullptr && this->licenseConfigs_ == nullptr && this->modificationTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline LicenseInstanceAppDTO& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // beginOn Field Functions 
    bool hasBeginOn() const { return this->beginOn_ != nullptr;};
    void deleteBeginOn() { this->beginOn_ = nullptr;};
    inline string getBeginOn() const { DARABONBA_PTR_GET_DEFAULT(beginOn_, "") };
    inline LicenseInstanceAppDTO& setBeginOn(string beginOn) { DARABONBA_PTR_SET_VALUE(beginOn_, beginOn) };


    // contractNo Field Functions 
    bool hasContractNo() const { return this->contractNo_ != nullptr;};
    void deleteContractNo() { this->contractNo_ = nullptr;};
    inline string getContractNo() const { DARABONBA_PTR_GET_DEFAULT(contractNo_, "") };
    inline LicenseInstanceAppDTO& setContractNo(string contractNo) { DARABONBA_PTR_SET_VALUE(contractNo_, contractNo) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline LicenseInstanceAppDTO& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string getExpiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline LicenseInstanceAppDTO& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LicenseInstanceAppDTO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline LicenseInstanceAppDTO& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // licenseConfigs Field Functions 
    bool hasLicenseConfigs() const { return this->licenseConfigs_ != nullptr;};
    void deleteLicenseConfigs() { this->licenseConfigs_ = nullptr;};
    inline const vector<LicenseInstanceAppDTO::LicenseConfigs> & getLicenseConfigs() const { DARABONBA_PTR_GET_CONST(licenseConfigs_, vector<LicenseInstanceAppDTO::LicenseConfigs>) };
    inline vector<LicenseInstanceAppDTO::LicenseConfigs> getLicenseConfigs() { DARABONBA_PTR_GET(licenseConfigs_, vector<LicenseInstanceAppDTO::LicenseConfigs>) };
    inline LicenseInstanceAppDTO& setLicenseConfigs(const vector<LicenseInstanceAppDTO::LicenseConfigs> & licenseConfigs) { DARABONBA_PTR_SET_VALUE(licenseConfigs_, licenseConfigs) };
    inline LicenseInstanceAppDTO& setLicenseConfigs(vector<LicenseInstanceAppDTO::LicenseConfigs> && licenseConfigs) { DARABONBA_PTR_SET_RVALUE(licenseConfigs_, licenseConfigs) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline LicenseInstanceAppDTO& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline LicenseInstanceAppDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline LicenseInstanceAppDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> appId_ {};
    shared_ptr<string> beginOn_ {};
    shared_ptr<string> contractNo_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> expiredOn_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<vector<LicenseInstanceAppDTO::LicenseConfigs>> licenseConfigs_ {};
    shared_ptr<string> modificationTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
