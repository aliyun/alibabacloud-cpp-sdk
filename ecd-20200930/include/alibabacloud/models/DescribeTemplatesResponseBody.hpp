// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODY_HPP_
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
  class DescribeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody(DescribeTemplatesResponseBody &&) = default ;
    DescribeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBody() = default ;
    DescribeTemplatesResponseBody& operator=(const DescribeTemplatesResponseBody &) = default ;
    DescribeTemplatesResponseBody& operator=(DescribeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
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
        // 站点名称。
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
        // The property value.
        shared_ptr<string> value_ {};
      };

      class RegionConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
          DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceInstanceType, resourceInstanceType_);
          DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
          DARABONBA_PTR_TO_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
          DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
        };
        friend void from_json(const Darabonba::Json& j, RegionConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
          DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
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
        virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->gpuSpec_ == nullptr && this->memorySize_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->resourceInstanceType_ == nullptr
        && this->snapshotPolicyId_ == nullptr && this->subnetId_ == nullptr && this->volumeEncryptionEnable_ == nullptr && this->volumeEncryptionKey_ == nullptr; };
        // cpuCount Field Functions 
        bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
        void deleteCpuCount() { this->cpuCount_ = nullptr;};
        inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
        inline RegionConfigList& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


        // gpuSpec Field Functions 
        bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
        void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
        inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
        inline RegionConfigList& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline int64_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0L) };
        inline RegionConfigList& setMemorySize(int64_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


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
        // The number of vCPUs.
        shared_ptr<int32_t> cpuCount_ {};
        // The GPU memory information. This parameter is supported only by Graphics cloud computer types.
        shared_ptr<string> gpuSpec_ {};
        // The memory size. Unit: MiB.
        shared_ptr<int64_t> memorySize_ {};
        // The office network ID.
        shared_ptr<string> officeSiteId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the cloud computer type.
        shared_ptr<string> resourceInstanceType_ {};
        // The snapshot policy ID.
        shared_ptr<string> snapshotPolicyId_ {};
        // The subnet ID.
        shared_ptr<string> subnetId_ {};
        // Indicates whether disk encryption is enabled.
        shared_ptr<bool> volumeEncryptionEnable_ {};
        // The ID of the Key Management Service (KMS) key that is used to encrypt the disk.
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
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline DataDiskList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // The PL of the data disk.
        // 
        // Valid values:
        // 
        // *   PL1: a PL1 ESSD.
        // *   PL0: a PL0 ESSD.
        // *   AutoPL: an AutoPL SSD.
        shared_ptr<string> performanceLevel_ {};
        // The size of the data disk. Unit: GiB.
        shared_ptr<string> size_ {};
      };

      virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->chargeType_ == nullptr && this->dataDiskList_ == nullptr && this->defaultLanguage_ == nullptr && this->description_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr && this->postPaidAfterUsedUp_ == nullptr && this->productType_ == nullptr && this->regionConfigList_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceTagList_ == nullptr && this->siteConfigList_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr
        && this->systemDiskSize_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr && this->timerGroupId_ == nullptr
        && this->userDuration_ == nullptr; };
      // autoPay Field Functions 
      bool hasAutoPay() const { return this->autoPay_ != nullptr;};
      void deleteAutoPay() { this->autoPay_ = nullptr;};
      inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
      inline Data& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Data& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // dataDiskList Field Functions 
      bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
      void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
      inline const vector<Data::DataDiskList> & getDataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<Data::DataDiskList>) };
      inline vector<Data::DataDiskList> getDataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<Data::DataDiskList>) };
      inline Data& setDataDiskList(const vector<Data::DataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
      inline Data& setDataDiskList(vector<Data::DataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


      // defaultLanguage Field Functions 
      bool hasDefaultLanguage() const { return this->defaultLanguage_ != nullptr;};
      void deleteDefaultLanguage() { this->defaultLanguage_ = nullptr;};
      inline string getDefaultLanguage() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguage_, "") };
      inline Data& setDefaultLanguage(string defaultLanguage) { DARABONBA_PTR_SET_VALUE(defaultLanguage_, defaultLanguage) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Data& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline Data& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline Data& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Data& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // postPaidAfterUsedUp Field Functions 
      bool hasPostPaidAfterUsedUp() const { return this->postPaidAfterUsedUp_ != nullptr;};
      void deletePostPaidAfterUsedUp() { this->postPaidAfterUsedUp_ = nullptr;};
      inline bool getPostPaidAfterUsedUp() const { DARABONBA_PTR_GET_DEFAULT(postPaidAfterUsedUp_, false) };
      inline Data& setPostPaidAfterUsedUp(bool postPaidAfterUsedUp) { DARABONBA_PTR_SET_VALUE(postPaidAfterUsedUp_, postPaidAfterUsedUp) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // regionConfigList Field Functions 
      bool hasRegionConfigList() const { return this->regionConfigList_ != nullptr;};
      void deleteRegionConfigList() { this->regionConfigList_ = nullptr;};
      inline const vector<Data::RegionConfigList> & getRegionConfigList() const { DARABONBA_PTR_GET_CONST(regionConfigList_, vector<Data::RegionConfigList>) };
      inline vector<Data::RegionConfigList> getRegionConfigList() { DARABONBA_PTR_GET(regionConfigList_, vector<Data::RegionConfigList>) };
      inline Data& setRegionConfigList(const vector<Data::RegionConfigList> & regionConfigList) { DARABONBA_PTR_SET_VALUE(regionConfigList_, regionConfigList) };
      inline Data& setRegionConfigList(vector<Data::RegionConfigList> && regionConfigList) { DARABONBA_PTR_SET_RVALUE(regionConfigList_, regionConfigList) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceTagList Field Functions 
      bool hasResourceTagList() const { return this->resourceTagList_ != nullptr;};
      void deleteResourceTagList() { this->resourceTagList_ = nullptr;};
      inline const vector<Data::ResourceTagList> & getResourceTagList() const { DARABONBA_PTR_GET_CONST(resourceTagList_, vector<Data::ResourceTagList>) };
      inline vector<Data::ResourceTagList> getResourceTagList() { DARABONBA_PTR_GET(resourceTagList_, vector<Data::ResourceTagList>) };
      inline Data& setResourceTagList(const vector<Data::ResourceTagList> & resourceTagList) { DARABONBA_PTR_SET_VALUE(resourceTagList_, resourceTagList) };
      inline Data& setResourceTagList(vector<Data::ResourceTagList> && resourceTagList) { DARABONBA_PTR_SET_RVALUE(resourceTagList_, resourceTagList) };


      // siteConfigList Field Functions 
      bool hasSiteConfigList() const { return this->siteConfigList_ != nullptr;};
      void deleteSiteConfigList() { this->siteConfigList_ = nullptr;};
      inline const vector<Data::SiteConfigList> & getSiteConfigList() const { DARABONBA_PTR_GET_CONST(siteConfigList_, vector<Data::SiteConfigList>) };
      inline vector<Data::SiteConfigList> getSiteConfigList() { DARABONBA_PTR_GET(siteConfigList_, vector<Data::SiteConfigList>) };
      inline Data& setSiteConfigList(const vector<Data::SiteConfigList> & siteConfigList) { DARABONBA_PTR_SET_VALUE(siteConfigList_, siteConfigList) };
      inline Data& setSiteConfigList(vector<Data::SiteConfigList> && siteConfigList) { DARABONBA_PTR_SET_RVALUE(siteConfigList_, siteConfigList) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline Data& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Data& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // timerGroupId Field Functions 
      bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
      void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
      inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
      inline Data& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


      // userDuration Field Functions 
      bool hasUserDuration() const { return this->userDuration_ != nullptr;};
      void deleteUserDuration() { this->userDuration_ = nullptr;};
      inline string getUserDuration() const { DARABONBA_PTR_GET_DEFAULT(userDuration_, "") };
      inline Data& setUserDuration(string userDuration) { DARABONBA_PTR_SET_VALUE(userDuration_, userDuration) };


    protected:
      shared_ptr<bool> autoPay_ {};
      shared_ptr<bool> autoRenew_ {};
      shared_ptr<string> chargeType_ {};
      // The sizes of the data disks.
      shared_ptr<vector<Data::DataDiskList>> dataDiskList_ {};
      // The default language of the template.
      // 
      // Valid values:
      // 
      // *   en-US: English.
      // *   zh-HK: Chinese, Traditional (Hong Kong, China).
      // *   zh-CN: Simplified Chinese.
      // *   ja-JP: Japanese.
      shared_ptr<string> defaultLanguage_ {};
      // The template description.
      shared_ptr<string> description_ {};
      // The time when the template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in Coordinated Universal Time (UTC).
      shared_ptr<string> gmtCreate_ {};
      // The time when the template was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> gmtModified_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image type.
      // 
      // Valid values:
      // 
      // *   User: a custom image.
      // *   Shared: a shared image.
      // *   System: a system image.
      // *   Community: a community image.
      shared_ptr<string> imageType_ {};
      shared_ptr<int32_t> period_ {};
      shared_ptr<string> periodUnit_ {};
      // The policy ID.
      shared_ptr<string> policyGroupId_ {};
      shared_ptr<bool> postPaidAfterUsedUp_ {};
      // The service type.
      // 
      // Valid value:
      // 
      // *   CloudDesktop: cloud computers.
      shared_ptr<string> productType_ {};
      // The region-related settings.
      shared_ptr<vector<Data::RegionConfigList>> regionConfigList_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The tags added to cloud computers. A tag is a key-value pair.
      shared_ptr<vector<Data::ResourceTagList>> resourceTagList_ {};
      // 区域配置管理
      shared_ptr<vector<Data::SiteConfigList>> siteConfigList_ {};
      // The performance level (PL) of the system disk.
      // 
      // Valid value:
      // 
      // *   PL1: a PL1 Enterprise SSD (ESSD).
      // *   PL0: a PL0 ESSD.
      // *   AutoPL: an AutoPL SSD.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The size of the system disk. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The template type.
      // 
      // Valid values:
      // 
      // *   USER_TEMPLATE: custom templates.
      // *   SYSTEM_TEMPLATE: system templates.
      shared_ptr<string> templateType_ {};
      // The ID of the scheduled task group.
      shared_ptr<string> timerGroupId_ {};
      shared_ptr<string> userDuration_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTemplatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeTemplatesResponseBody::Data>) };
    inline vector<DescribeTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeTemplatesResponseBody::Data>) };
    inline DescribeTemplatesResponseBody& setData(const vector<DescribeTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTemplatesResponseBody& setData(vector<DescribeTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTemplatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTemplatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTemplatesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The modification result. If the request was successful, `success` is returned. If the request failed, an error message is returned.
    shared_ptr<string> code_ {};
    // The templates.
    shared_ptr<vector<DescribeTemplatesResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned. This parameter is not returned if the value of Code is `success`.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of templates.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
