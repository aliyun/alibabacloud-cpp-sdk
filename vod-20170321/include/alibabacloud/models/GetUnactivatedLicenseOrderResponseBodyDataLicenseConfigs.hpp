// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODYDATALICENSECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETUNACTIVATEDLICENSEORDERRESPONSEBODYDATALICENSECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(FeatureIds, featureIds_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(SdkId, sdkId_);
      DARABONBA_PTR_TO_JSON(SdkName, sdkName_);
      DARABONBA_PTR_TO_JSON(Subscription, subscription_);
      DARABONBA_PTR_TO_JSON(SubscriptionImp, subscriptionImp_);
      DARABONBA_PTR_TO_JSON(SubscriptionPkg, subscriptionPkg_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(FeatureIds, featureIds_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(SdkId, sdkId_);
      DARABONBA_PTR_FROM_JSON(SdkName, sdkName_);
      DARABONBA_PTR_FROM_JSON(Subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(SubscriptionImp, subscriptionImp_);
      DARABONBA_PTR_FROM_JSON(SubscriptionPkg, subscriptionPkg_);
    };
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs() = default ;
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs(const GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs &) = default ;
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs(GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs &&) = default ;
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs() = default ;
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& operator=(const GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs &) = default ;
    GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& operator=(GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->featureIds_ != nullptr && this->isTrial_ != nullptr && this->sdkId_ != nullptr && this->sdkName_ != nullptr && this->subscription_ != nullptr
        && this->subscriptionImp_ != nullptr && this->subscriptionPkg_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // featureIds Field Functions 
    bool hasFeatureIds() const { return this->featureIds_ != nullptr;};
    void deleteFeatureIds() { this->featureIds_ = nullptr;};
    inline string featureIds() const { DARABONBA_PTR_GET_DEFAULT(featureIds_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setFeatureIds(string featureIds) { DARABONBA_PTR_SET_VALUE(featureIds_, featureIds) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool isTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // sdkId Field Functions 
    bool hasSdkId() const { return this->sdkId_ != nullptr;};
    void deleteSdkId() { this->sdkId_ = nullptr;};
    inline string sdkId() const { DARABONBA_PTR_GET_DEFAULT(sdkId_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setSdkId(string sdkId) { DARABONBA_PTR_SET_VALUE(sdkId_, sdkId) };


    // sdkName Field Functions 
    bool hasSdkName() const { return this->sdkName_ != nullptr;};
    void deleteSdkName() { this->sdkName_ = nullptr;};
    inline string sdkName() const { DARABONBA_PTR_GET_DEFAULT(sdkName_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setSdkName(string sdkName) { DARABONBA_PTR_SET_VALUE(sdkName_, sdkName) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline string subscription() const { DARABONBA_PTR_GET_DEFAULT(subscription_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setSubscription(string subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };


    // subscriptionImp Field Functions 
    bool hasSubscriptionImp() const { return this->subscriptionImp_ != nullptr;};
    void deleteSubscriptionImp() { this->subscriptionImp_ = nullptr;};
    inline string subscriptionImp() const { DARABONBA_PTR_GET_DEFAULT(subscriptionImp_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setSubscriptionImp(string subscriptionImp) { DARABONBA_PTR_SET_VALUE(subscriptionImp_, subscriptionImp) };


    // subscriptionPkg Field Functions 
    bool hasSubscriptionPkg() const { return this->subscriptionPkg_ != nullptr;};
    void deleteSubscriptionPkg() { this->subscriptionPkg_ = nullptr;};
    inline string subscriptionPkg() const { DARABONBA_PTR_GET_DEFAULT(subscriptionPkg_, "") };
    inline GetUnactivatedLicenseOrderResponseBodyDataLicenseConfigs& setSubscriptionPkg(string subscriptionPkg) { DARABONBA_PTR_SET_VALUE(subscriptionPkg_, subscriptionPkg) };


  protected:
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> featureIds_ = nullptr;
    std::shared_ptr<bool> isTrial_ = nullptr;
    std::shared_ptr<string> sdkId_ = nullptr;
    std::shared_ptr<string> sdkName_ = nullptr;
    std::shared_ptr<string> subscription_ = nullptr;
    std::shared_ptr<string> subscriptionImp_ = nullptr;
    std::shared_ptr<string> subscriptionPkg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
