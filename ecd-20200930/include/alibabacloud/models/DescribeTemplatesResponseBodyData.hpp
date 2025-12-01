// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTemplatesResponseBodyDataDataDiskList.hpp>
#include <alibabacloud/models/DescribeTemplatesResponseBodyDataRegionConfigList.hpp>
#include <alibabacloud/models/DescribeTemplatesResponseBodyDataResourceTagList.hpp>
#include <alibabacloud/models/DescribeTemplatesResponseBodyDataSiteConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_TO_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PostPaidAfterUsedUp, postPaidAfterUsedUp_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionConfigList, regionConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTagList, resourceTagList_);
      DARABONBA_PTR_TO_JSON(SiteConfigList, siteConfigList_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_TO_JSON(UserDuration, userDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguage, defaultLanguage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PostPaidAfterUsedUp, postPaidAfterUsedUp_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionConfigList, regionConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTagList, resourceTagList_);
      DARABONBA_PTR_FROM_JSON(SiteConfigList, siteConfigList_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
      DARABONBA_PTR_FROM_JSON(UserDuration, userDuration_);
    };
    DescribeTemplatesResponseBodyData() = default ;
    DescribeTemplatesResponseBodyData(const DescribeTemplatesResponseBodyData &) = default ;
    DescribeTemplatesResponseBodyData(DescribeTemplatesResponseBodyData &&) = default ;
    DescribeTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBodyData() = default ;
    DescribeTemplatesResponseBodyData& operator=(const DescribeTemplatesResponseBodyData &) = default ;
    DescribeTemplatesResponseBodyData& operator=(DescribeTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->chargeType_ == nullptr && return this->dataDiskList_ == nullptr && return this->defaultLanguage_ == nullptr && return this->description_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->imageId_ == nullptr && return this->imageType_ == nullptr && return this->period_ == nullptr
        && return this->periodUnit_ == nullptr && return this->policyGroupId_ == nullptr && return this->postPaidAfterUsedUp_ == nullptr && return this->productType_ == nullptr && return this->regionConfigList_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceTagList_ == nullptr && return this->siteConfigList_ == nullptr && return this->systemDiskPerformanceLevel_ == nullptr
        && return this->systemDiskSize_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->templateType_ == nullptr && return this->timerGroupId_ == nullptr
        && return this->userDuration_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline DescribeTemplatesResponseBodyData& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline DescribeTemplatesResponseBodyData& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeTemplatesResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dataDiskList Field Functions 
    bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
    void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
    inline const vector<Models::DescribeTemplatesResponseBodyDataDataDiskList> & dataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<Models::DescribeTemplatesResponseBodyDataDataDiskList>) };
    inline vector<Models::DescribeTemplatesResponseBodyDataDataDiskList> dataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<Models::DescribeTemplatesResponseBodyDataDataDiskList>) };
    inline DescribeTemplatesResponseBodyData& setDataDiskList(const vector<Models::DescribeTemplatesResponseBodyDataDataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
    inline DescribeTemplatesResponseBodyData& setDataDiskList(vector<Models::DescribeTemplatesResponseBodyDataDataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


    // defaultLanguage Field Functions 
    bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
    void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
    inline string defaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
    inline DescribeTemplatesResponseBodyData& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTemplatesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeTemplatesResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeTemplatesResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeTemplatesResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeTemplatesResponseBodyData& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeTemplatesResponseBodyData& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline DescribeTemplatesResponseBodyData& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeTemplatesResponseBodyData& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // postPaidAfterUsedUp Field Functions 
    bool hasPostPaidAfterUsedUp() const { return this->postPaidAfterUsedUp_ != nullptr;};
    void deletePostPaidAfterUsedUp() { this->postPaidAfterUsedUp_ = nullptr;};
    inline bool postPaidAfterUsedUp() const { DARABONBA_PTR_GET_DEFAULT(postPaidAfterUsedUp_, false) };
    inline DescribeTemplatesResponseBodyData& setPostPaidAfterUsedUp(bool postPaidAfterUsedUp) { DARABONBA_PTR_SET_VALUE(postPaidAfterUsedUp_, postPaidAfterUsedUp) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeTemplatesResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionConfigList Field Functions 
    bool hasRegionConfigList() const { return this->regionConfigList_ != nullptr;};
    void deleteRegionConfigList() { this->regionConfigList_ = nullptr;};
    inline const vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList> & regionConfigList() const { DARABONBA_PTR_GET_CONST(regionConfigList_, vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList>) };
    inline vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList> regionConfigList() { DARABONBA_PTR_GET(regionConfigList_, vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList>) };
    inline DescribeTemplatesResponseBodyData& setRegionConfigList(const vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList> & regionConfigList) { DARABONBA_PTR_SET_VALUE(regionConfigList_, regionConfigList) };
    inline DescribeTemplatesResponseBodyData& setRegionConfigList(vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList> && regionConfigList) { DARABONBA_PTR_SET_RVALUE(regionConfigList_, regionConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplatesResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeTemplatesResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTagList Field Functions 
    bool hasResourceTagList() const { return this->resourceTagList_ != nullptr;};
    void deleteResourceTagList() { this->resourceTagList_ = nullptr;};
    inline const vector<Models::DescribeTemplatesResponseBodyDataResourceTagList> & resourceTagList() const { DARABONBA_PTR_GET_CONST(resourceTagList_, vector<Models::DescribeTemplatesResponseBodyDataResourceTagList>) };
    inline vector<Models::DescribeTemplatesResponseBodyDataResourceTagList> resourceTagList() { DARABONBA_PTR_GET(resourceTagList_, vector<Models::DescribeTemplatesResponseBodyDataResourceTagList>) };
    inline DescribeTemplatesResponseBodyData& setResourceTagList(const vector<Models::DescribeTemplatesResponseBodyDataResourceTagList> & resourceTagList) { DARABONBA_PTR_SET_VALUE(resourceTagList_, resourceTagList) };
    inline DescribeTemplatesResponseBodyData& setResourceTagList(vector<Models::DescribeTemplatesResponseBodyDataResourceTagList> && resourceTagList) { DARABONBA_PTR_SET_RVALUE(resourceTagList_, resourceTagList) };


    // siteConfigList Field Functions 
    bool hasSiteConfigList() const { return this->siteConfigList_ != nullptr;};
    void deleteSiteConfigList() { this->siteConfigList_ = nullptr;};
    inline const vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList> & siteConfigList() const { DARABONBA_PTR_GET_CONST(siteConfigList_, vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList>) };
    inline vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList> siteConfigList() { DARABONBA_PTR_GET(siteConfigList_, vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList>) };
    inline DescribeTemplatesResponseBodyData& setSiteConfigList(const vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList> & siteConfigList) { DARABONBA_PTR_SET_VALUE(siteConfigList_, siteConfigList) };
    inline DescribeTemplatesResponseBodyData& setSiteConfigList(vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList> && siteConfigList) { DARABONBA_PTR_SET_RVALUE(siteConfigList_, siteConfigList) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline DescribeTemplatesResponseBodyData& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeTemplatesResponseBodyData& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeTemplatesResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeTemplatesResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplatesResponseBodyData& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string timerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline DescribeTemplatesResponseBodyData& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userDuration Field Functions 
    bool hasUserDuration() const { return this->userDuration_ != nullptr;};
    void deleteUserDuration() { this->userDuration_ = nullptr;};
    inline string userDuration() const { DARABONBA_PTR_GET_DEFAULT(userDuration_, "") };
    inline DescribeTemplatesResponseBodyData& setUserDuration(string userDuration) { DARABONBA_PTR_SET_VALUE(userDuration_, userDuration) };


  protected:
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    // The sizes of the data disks.
    std::shared_ptr<vector<Models::DescribeTemplatesResponseBodyDataDataDiskList>> dataDiskList_ = nullptr;
    // The default language of the template.
    // 
    // Valid values:
    // 
    // *   en-US: English.
    // *   zh-HK: Chinese, Traditional (Hong Kong, China).
    // *   zh-CN: Simplified Chinese.
    // *   ja-JP: Japanese.
    std::shared_ptr<string> defaultLanguage_ = nullptr;
    // The template description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in Coordinated Universal Time (UTC).
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the template was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image type.
    // 
    // Valid values:
    // 
    // *   User: a custom image.
    // *   Shared: a shared image.
    // *   System: a system image.
    // *   Community: a community image.
    std::shared_ptr<string> imageType_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    std::shared_ptr<bool> postPaidAfterUsedUp_ = nullptr;
    // The service type.
    // 
    // Valid value:
    // 
    // *   CloudDesktop: cloud computers.
    std::shared_ptr<string> productType_ = nullptr;
    // The region-related settings.
    std::shared_ptr<vector<Models::DescribeTemplatesResponseBodyDataRegionConfigList>> regionConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags added to cloud computers. A tag is a key-value pair.
    std::shared_ptr<vector<Models::DescribeTemplatesResponseBodyDataResourceTagList>> resourceTagList_ = nullptr;
    // 区域配置管理
    std::shared_ptr<vector<Models::DescribeTemplatesResponseBodyDataSiteConfigList>> siteConfigList_ = nullptr;
    // The performance level (PL) of the system disk.
    // 
    // Valid value:
    // 
    // *   PL1: a PL1 Enterprise SSD (ESSD).
    // *   PL0: a PL0 ESSD.
    // *   AutoPL: an AutoPL SSD.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The template type.
    // 
    // Valid values:
    // 
    // *   USER_TEMPLATE: custom templates.
    // *   SYSTEM_TEMPLATE: system templates.
    std::shared_ptr<string> templateType_ = nullptr;
    // The ID of the scheduled task group.
    std::shared_ptr<string> timerGroupId_ = nullptr;
    std::shared_ptr<string> userDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
