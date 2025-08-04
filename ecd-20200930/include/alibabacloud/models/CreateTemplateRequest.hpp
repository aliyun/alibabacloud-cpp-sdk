// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTemplateRequestDataDiskList.hpp>
#include <alibabacloud/models/CreateTemplateRequestRegionConfigList.hpp>
#include <alibabacloud/models/CreateTemplateRequestResourceTagList.hpp>
#include <alibabacloud/models/CreateTemplateRequestSiteConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_TO_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PostPaidAfterUsedUp, postPaidAfterUsedUp_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionConfigList, regionConfigList_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTagList, resourceTagList_);
      DARABONBA_PTR_TO_JSON(SiteConfigList, siteConfigList_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_TO_JSON(UserDuration, userDuration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PostPaidAfterUsedUp, postPaidAfterUsedUp_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionConfigList, regionConfigList_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTagList, resourceTagList_);
      DARABONBA_PTR_FROM_JSON(SiteConfigList, siteConfigList_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_FROM_JSON(UserDuration, userDuration_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoRenew_ != nullptr && this->bizType_ != nullptr && this->chargeType_ != nullptr && this->dataDiskList_ != nullptr && this->defaultLanguage_ != nullptr
        && this->description_ != nullptr && this->imageId_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr && this->policyGroupId_ != nullptr
        && this->postPaidAfterUsedUp_ != nullptr && this->productType_ != nullptr && this->regionConfigList_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceTagList_ != nullptr
        && this->siteConfigList_ != nullptr && this->systemDiskPerformanceLevel_ != nullptr && this->systemDiskSize_ != nullptr && this->templateName_ != nullptr && this->timerGroupId_ != nullptr
        && this->userDuration_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateTemplateRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateTemplateRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateTemplateRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateTemplateRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dataDiskList Field Functions 
    bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
    void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
    inline const vector<CreateTemplateRequestDataDiskList> & dataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<CreateTemplateRequestDataDiskList>) };
    inline vector<CreateTemplateRequestDataDiskList> dataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<CreateTemplateRequestDataDiskList>) };
    inline CreateTemplateRequest& setDataDiskList(const vector<CreateTemplateRequestDataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
    inline CreateTemplateRequest& setDataDiskList(vector<CreateTemplateRequestDataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


    // defaultLanguage Field Functions 
    bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
    void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
    inline string defaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
    inline CreateTemplateRequest& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateTemplateRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateTemplateRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateTemplateRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateTemplateRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // postPaidAfterUsedUp Field Functions 
    bool hasPostPaidAfterUsedUp() const { return this->postPaidAfterUsedUp_ != nullptr;};
    void deletePostPaidAfterUsedUp() { this->postPaidAfterUsedUp_ = nullptr;};
    inline bool postPaidAfterUsedUp() const { DARABONBA_PTR_GET_DEFAULT(postPaidAfterUsedUp_, false) };
    inline CreateTemplateRequest& setPostPaidAfterUsedUp(bool postPaidAfterUsedUp) { DARABONBA_PTR_SET_VALUE(postPaidAfterUsedUp_, postPaidAfterUsedUp) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateTemplateRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionConfigList Field Functions 
    bool hasRegionConfigList() const { return this->regionConfigList_ != nullptr;};
    void deleteRegionConfigList() { this->regionConfigList_ = nullptr;};
    inline const vector<CreateTemplateRequestRegionConfigList> & regionConfigList() const { DARABONBA_PTR_GET_CONST(regionConfigList_, vector<CreateTemplateRequestRegionConfigList>) };
    inline vector<CreateTemplateRequestRegionConfigList> regionConfigList() { DARABONBA_PTR_GET(regionConfigList_, vector<CreateTemplateRequestRegionConfigList>) };
    inline CreateTemplateRequest& setRegionConfigList(const vector<CreateTemplateRequestRegionConfigList> & regionConfigList) { DARABONBA_PTR_SET_VALUE(regionConfigList_, regionConfigList) };
    inline CreateTemplateRequest& setRegionConfigList(vector<CreateTemplateRequestRegionConfigList> && regionConfigList) { DARABONBA_PTR_SET_RVALUE(regionConfigList_, regionConfigList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTagList Field Functions 
    bool hasResourceTagList() const { return this->resourceTagList_ != nullptr;};
    void deleteResourceTagList() { this->resourceTagList_ = nullptr;};
    inline const vector<CreateTemplateRequestResourceTagList> & resourceTagList() const { DARABONBA_PTR_GET_CONST(resourceTagList_, vector<CreateTemplateRequestResourceTagList>) };
    inline vector<CreateTemplateRequestResourceTagList> resourceTagList() { DARABONBA_PTR_GET(resourceTagList_, vector<CreateTemplateRequestResourceTagList>) };
    inline CreateTemplateRequest& setResourceTagList(const vector<CreateTemplateRequestResourceTagList> & resourceTagList) { DARABONBA_PTR_SET_VALUE(resourceTagList_, resourceTagList) };
    inline CreateTemplateRequest& setResourceTagList(vector<CreateTemplateRequestResourceTagList> && resourceTagList) { DARABONBA_PTR_SET_RVALUE(resourceTagList_, resourceTagList) };


    // siteConfigList Field Functions 
    bool hasSiteConfigList() const { return this->siteConfigList_ != nullptr;};
    void deleteSiteConfigList() { this->siteConfigList_ = nullptr;};
    inline const vector<CreateTemplateRequestSiteConfigList> & siteConfigList() const { DARABONBA_PTR_GET_CONST(siteConfigList_, vector<CreateTemplateRequestSiteConfigList>) };
    inline vector<CreateTemplateRequestSiteConfigList> siteConfigList() { DARABONBA_PTR_GET(siteConfigList_, vector<CreateTemplateRequestSiteConfigList>) };
    inline CreateTemplateRequest& setSiteConfigList(const vector<CreateTemplateRequestSiteConfigList> & siteConfigList) { DARABONBA_PTR_SET_VALUE(siteConfigList_, siteConfigList) };
    inline CreateTemplateRequest& setSiteConfigList(vector<CreateTemplateRequestSiteConfigList> && siteConfigList) { DARABONBA_PTR_SET_RVALUE(siteConfigList_, siteConfigList) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateTemplateRequest& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateTemplateRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string timerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateTemplateRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userDuration Field Functions 
    bool hasUserDuration() const { return this->userDuration_ != nullptr;};
    void deleteUserDuration() { this->userDuration_ = nullptr;};
    inline int32_t userDuration() const { DARABONBA_PTR_GET_DEFAULT(userDuration_, 0) };
    inline CreateTemplateRequest& setUserDuration(int32_t userDuration) { DARABONBA_PTR_SET_VALUE(userDuration_, userDuration) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<vector<CreateTemplateRequestDataDiskList>> dataDiskList_ = nullptr;
    std::shared_ptr<string> defaultLanguage_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> policyGroupId_ = nullptr;
    std::shared_ptr<bool> postPaidAfterUsedUp_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<vector<CreateTemplateRequestRegionConfigList>> regionConfigList_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateTemplateRequestResourceTagList>> resourceTagList_ = nullptr;
    std::shared_ptr<vector<CreateTemplateRequestSiteConfigList>> siteConfigList_ = nullptr;
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> timerGroupId_ = nullptr;
    std::shared_ptr<int32_t> userDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
