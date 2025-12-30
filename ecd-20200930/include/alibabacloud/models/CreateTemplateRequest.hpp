// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SiteConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      };
      friend void from_json(const Darabonba::Json& j, SiteConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      };
      SiteConfigList() = default ;
      SiteConfigList(const SiteConfigList &) = default ;
      SiteConfigList(SiteConfigList &&) = default ;
      SiteConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteConfigList() = default ;
      SiteConfigList& operator=(const SiteConfigList &) = default ;
      SiteConfigList& operator=(SiteConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appRuleId_ == nullptr
        && this->siteId_ == nullptr; };
      // appRuleId Field Functions 
      bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
      void deleteAppRuleId() { this->appRuleId_ = nullptr;};
      inline string getAppRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
      inline SiteConfigList& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline SiteConfigList& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    protected:
      // 应用管控策略ID
      shared_ptr<string> appRuleId_ {};
      // 站点ID。
      shared_ptr<string> siteId_ {};
    };

    class ResourceTagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTagList& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTagList& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResourceTagList() = default ;
      ResourceTagList(const ResourceTagList &) = default ;
      ResourceTagList(ResourceTagList &&) = default ;
      ResourceTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTagList() = default ;
      ResourceTagList& operator=(const ResourceTagList &) = default ;
      ResourceTagList& operator=(ResourceTagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResourceTagList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResourceTagList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class RegionConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceType, resourceInstanceType_);
        DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
        DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      friend void from_json(const Darabonba::Json& j, RegionConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceType, resourceInstanceType_);
        DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
        DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
      };
      RegionConfigList() = default ;
      RegionConfigList(const RegionConfigList &) = default ;
      RegionConfigList(RegionConfigList &&) = default ;
      RegionConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionConfigList() = default ;
      RegionConfigList& operator=(const RegionConfigList &) = default ;
      RegionConfigList& operator=(RegionConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && this->regionId_ == nullptr && this->resourceInstanceType_ == nullptr && this->snapshotPolicyId_ == nullptr && this->subnetId_ == nullptr && this->volumeEncryptionEnable_ == nullptr
        && this->volumeEncryptionKey_ == nullptr; };
      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline RegionConfigList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionConfigList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceInstanceType Field Functions 
      bool hasResourceInstanceType() const { return this->resourceInstanceType_ != nullptr;};
      void deleteResourceInstanceType() { this->resourceInstanceType_ = nullptr;};
      inline string getResourceInstanceType() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceType_, "") };
      inline RegionConfigList& setResourceInstanceType(string resourceInstanceType) { DARABONBA_PTR_SET_VALUE(resourceInstanceType_, resourceInstanceType) };


      // snapshotPolicyId Field Functions 
      bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
      void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
      inline string getSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
      inline RegionConfigList& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


      // subnetId Field Functions 
      bool hasSubnetId() const { return this->subnetId_ != nullptr;};
      void deleteSubnetId() { this->subnetId_ = nullptr;};
      inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
      inline RegionConfigList& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


      // volumeEncryptionEnable Field Functions 
      bool hasVolumeEncryptionEnable() const { return this->volumeEncryptionEnable_ != nullptr;};
      void deleteVolumeEncryptionEnable() { this->volumeEncryptionEnable_ = nullptr;};
      inline bool getVolumeEncryptionEnable() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnable_, false) };
      inline RegionConfigList& setVolumeEncryptionEnable(bool volumeEncryptionEnable) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnable_, volumeEncryptionEnable) };


      // volumeEncryptionKey Field Functions 
      bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
      void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
      inline string getVolumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
      inline RegionConfigList& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


    protected:
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
      shared_ptr<string> regionId_ {};
      // The ID of the cloud computer type.
      shared_ptr<string> resourceInstanceType_ {};
      // The ID of the automatic snapshot policy.
      shared_ptr<string> snapshotPolicyId_ {};
      // The subnet ID.
      shared_ptr<string> subnetId_ {};
      // Specifies whether to enable disk encryption.
      // 
      // Valid values:
      // 
      // *   false (default): disables disk encryption.
      // *   true: enables disk encryption.
      shared_ptr<bool> volumeEncryptionEnable_ {};
      // The ID of the Key Management Service (KMS) key that you want to use to encrypt disks. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query KMS keys.
      shared_ptr<string> volumeEncryptionKey_ {};
    };

    class DataDiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDiskList& obj) { 
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, DataDiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      DataDiskList() = default ;
      DataDiskList(const DataDiskList &) = default ;
      DataDiskList(DataDiskList &&) = default ;
      DataDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDiskList() = default ;
      DataDiskList& operator=(const DataDiskList &) = default ;
      DataDiskList& operator=(DataDiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->performanceLevel_ == nullptr
        && this->size_ == nullptr; };
      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DataDiskList& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DataDiskList& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The PL of the data disk. Default value: `AutoPL`.
      shared_ptr<string> performanceLevel_ {};
      // The size of the data disk. Unit: GiB. Valid values: 40 to 2040. Increments: 10 GiB.
      // 
      // **
      // 
      // **Keep in mind** that the larger the ESSD disk capacity, the higher the available PL (for example, PL2 is available for disks larger than 460 GiB). A higher PL comes with a higher cost. Select an ESSD based on your specific needs.
      shared_ptr<int32_t> size_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bizType_ == nullptr && this->chargeType_ == nullptr && this->dataDiskList_ == nullptr && this->defaultLanguage_ == nullptr
        && this->description_ == nullptr && this->imageId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr
        && this->postPaidAfterUsedUp_ == nullptr && this->productType_ == nullptr && this->regionConfigList_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTagList_ == nullptr
        && this->siteConfigList_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskSize_ == nullptr && this->templateName_ == nullptr && this->timerGroupId_ == nullptr
        && this->userDuration_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateTemplateRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateTemplateRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreateTemplateRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateTemplateRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dataDiskList Field Functions 
    bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
    void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
    inline const vector<CreateTemplateRequest::DataDiskList> & getDataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<CreateTemplateRequest::DataDiskList>) };
    inline vector<CreateTemplateRequest::DataDiskList> getDataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<CreateTemplateRequest::DataDiskList>) };
    inline CreateTemplateRequest& setDataDiskList(const vector<CreateTemplateRequest::DataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
    inline CreateTemplateRequest& setDataDiskList(vector<CreateTemplateRequest::DataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


    // defaultLanguage Field Functions 
    bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
    void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
    inline string getDefaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
    inline CreateTemplateRequest& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateTemplateRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateTemplateRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateTemplateRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateTemplateRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // postPaidAfterUsedUp Field Functions 
    bool hasPostPaidAfterUsedUp() const { return this->postPaidAfterUsedUp_ != nullptr;};
    void deletePostPaidAfterUsedUp() { this->postPaidAfterUsedUp_ = nullptr;};
    inline bool getPostPaidAfterUsedUp() const { DARABONBA_PTR_GET_DEFAULT(postPaidAfterUsedUp_, false) };
    inline CreateTemplateRequest& setPostPaidAfterUsedUp(bool postPaidAfterUsedUp) { DARABONBA_PTR_SET_VALUE(postPaidAfterUsedUp_, postPaidAfterUsedUp) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline CreateTemplateRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionConfigList Field Functions 
    bool hasRegionConfigList() const { return this->regionConfigList_ != nullptr;};
    void deleteRegionConfigList() { this->regionConfigList_ = nullptr;};
    inline const vector<CreateTemplateRequest::RegionConfigList> & getRegionConfigList() const { DARABONBA_PTR_GET_CONST(regionConfigList_, vector<CreateTemplateRequest::RegionConfigList>) };
    inline vector<CreateTemplateRequest::RegionConfigList> getRegionConfigList() { DARABONBA_PTR_GET(regionConfigList_, vector<CreateTemplateRequest::RegionConfigList>) };
    inline CreateTemplateRequest& setRegionConfigList(const vector<CreateTemplateRequest::RegionConfigList> & regionConfigList) { DARABONBA_PTR_SET_VALUE(regionConfigList_, regionConfigList) };
    inline CreateTemplateRequest& setRegionConfigList(vector<CreateTemplateRequest::RegionConfigList> && regionConfigList) { DARABONBA_PTR_SET_RVALUE(regionConfigList_, regionConfigList) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTagList Field Functions 
    bool hasResourceTagList() const { return this->resourceTagList_ != nullptr;};
    void deleteResourceTagList() { this->resourceTagList_ = nullptr;};
    inline const vector<CreateTemplateRequest::ResourceTagList> & getResourceTagList() const { DARABONBA_PTR_GET_CONST(resourceTagList_, vector<CreateTemplateRequest::ResourceTagList>) };
    inline vector<CreateTemplateRequest::ResourceTagList> getResourceTagList() { DARABONBA_PTR_GET(resourceTagList_, vector<CreateTemplateRequest::ResourceTagList>) };
    inline CreateTemplateRequest& setResourceTagList(const vector<CreateTemplateRequest::ResourceTagList> & resourceTagList) { DARABONBA_PTR_SET_VALUE(resourceTagList_, resourceTagList) };
    inline CreateTemplateRequest& setResourceTagList(vector<CreateTemplateRequest::ResourceTagList> && resourceTagList) { DARABONBA_PTR_SET_RVALUE(resourceTagList_, resourceTagList) };


    // siteConfigList Field Functions 
    bool hasSiteConfigList() const { return this->siteConfigList_ != nullptr;};
    void deleteSiteConfigList() { this->siteConfigList_ = nullptr;};
    inline const vector<CreateTemplateRequest::SiteConfigList> & getSiteConfigList() const { DARABONBA_PTR_GET_CONST(siteConfigList_, vector<CreateTemplateRequest::SiteConfigList>) };
    inline vector<CreateTemplateRequest::SiteConfigList> getSiteConfigList() { DARABONBA_PTR_GET(siteConfigList_, vector<CreateTemplateRequest::SiteConfigList>) };
    inline CreateTemplateRequest& setSiteConfigList(const vector<CreateTemplateRequest::SiteConfigList> & siteConfigList) { DARABONBA_PTR_SET_VALUE(siteConfigList_, siteConfigList) };
    inline CreateTemplateRequest& setSiteConfigList(vector<CreateTemplateRequest::SiteConfigList> && siteConfigList) { DARABONBA_PTR_SET_RVALUE(siteConfigList_, siteConfigList) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateTemplateRequest& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateTemplateRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline CreateTemplateRequest& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // userDuration Field Functions 
    bool hasUserDuration() const { return this->userDuration_ != nullptr;};
    void deleteUserDuration() { this->userDuration_ = nullptr;};
    inline int32_t getUserDuration() const { DARABONBA_PTR_GET_DEFAULT(userDuration_, 0) };
    inline CreateTemplateRequest& setUserDuration(int32_t userDuration) { DARABONBA_PTR_SET_VALUE(userDuration_, userDuration) };


  protected:
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> autoRenew_ {};
    // >  This parameter is not publicly available.
    // 
    // Valid values:
    // 
    // *   1: the Enterprise edition.
    shared_ptr<string> bizType_ {};
    shared_ptr<string> chargeType_ {};
    // The data disks.
    shared_ptr<vector<CreateTemplateRequest::DataDiskList>> dataDiskList_ {};
    // The default language of cloud computers during startup. This parameter takes effect only when cloud computers are created from system images.
    shared_ptr<string> defaultLanguage_ {};
    // The template description. It must meet the following criteria:
    // 
    // *   It can be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // *   It can contain letters, digits, and special characters, including spaces. Note: You can use carriage returns to break lines.
    shared_ptr<string> description_ {};
    // The ID of the cloud computer image. You can query image IDs on the Images page. System images and custom images are supported.
    shared_ptr<string> imageId_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
    // The ID of the policy group.
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<bool> postPaidAfterUsedUp_ {};
    // The service type. Set the value to `CloudDesktop`.
    // 
    // *
    shared_ptr<string> productType_ {};
    // The regions of the template. You can create cloud computers by using a template only within the same region as the template itself.
    // 
    // >  You can specify up to 20 regions.
    shared_ptr<vector<CreateTemplateRequest::RegionConfigList>> regionConfigList_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags added to cloud computers. Specify tags in key-value pairs. You can specify up to 20 tags.
    shared_ptr<vector<CreateTemplateRequest::ResourceTagList>> resourceTagList_ {};
    // 区域配置管理
    shared_ptr<vector<CreateTemplateRequest::SiteConfigList>> siteConfigList_ {};
    // The performance level (PL) of the system disk.
    // 
    // >  Only cloud computers of the Graphics or High Frequency type support Enterprise SSDs (ESSDs).
    // 
    // Valid values:
    // 
    // *   PL1: a PL1 ESSD.
    // *   PL0: a PL0 ESSD.
    // *   AutoPL: an AutoPL ESSD.
    shared_ptr<string> systemDiskPerformanceLevel_ {};
    // The size of the system disk. Unit: GiB. Valid values: 40 to 500. Increments: 10 GiB.
    // 
    // >  The system disk size must be at least as large as the configured image size.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The template name. It must meet the following criteria:
    // 
    // *   It can be 2 to 126 characters in length.
    // *   It must begin with a letter and cannot start with `http://` or `https://`.
    // *   It can contain letters, digits, colons (:), underscores (_), and hyphens (-). Note: Periods (.) are not supported in the name.
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The ID of the scheduled task group.
    shared_ptr<string> timerGroupId_ {};
    shared_ptr<int32_t> userDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
