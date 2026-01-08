// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateInstanceRequestItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateInstanceRequestItem& obj) { 
        DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(Ha, ha_);
        DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
        DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, CreateInstanceRequestItem& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(Ha, ha_);
        DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
        DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
        DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
        DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      CreateInstanceRequestItem() = default ;
      CreateInstanceRequestItem(const CreateInstanceRequestItem &) = default ;
      CreateInstanceRequestItem(CreateInstanceRequestItem &&) = default ;
      CreateInstanceRequestItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateInstanceRequestItem() = default ;
      CreateInstanceRequestItem& operator=(const CreateInstanceRequestItem &) = default ;
      CreateInstanceRequestItem& operator=(CreateInstanceRequestItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Storage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Storage& obj) { 
          DARABONBA_PTR_TO_JSON(Oss, oss_);
        };
        friend void from_json(const Darabonba::Json& j, Storage& obj) { 
          DARABONBA_PTR_FROM_JSON(Oss, oss_);
        };
        Storage() = default ;
        Storage(const Storage &) = default ;
        Storage(Storage &&) = default ;
        Storage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Storage() = default ;
        Storage& operator=(const Storage &) = default ;
        Storage& operator=(Storage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Oss : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Oss& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          };
          friend void from_json(const Darabonba::Json& j, Oss& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          };
          Oss() = default ;
          Oss(const Oss &) = default ;
          Oss(Oss &&) = default ;
          Oss(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Oss() = default ;
          Oss& operator=(const Oss &) = default ;
          Oss& operator=(Oss &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline Oss& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        protected:
          // This parameter is required.
          shared_ptr<string> bucket_ {};
        };

        virtual bool empty() const override { return this->oss_ == nullptr; };
        // oss Field Functions 
        bool hasOss() const { return this->oss_ != nullptr;};
        void deleteOss() { this->oss_ = nullptr;};
        inline const Storage::Oss & getOss() const { DARABONBA_PTR_GET_CONST(oss_, Storage::Oss) };
        inline Storage::Oss getOss() { DARABONBA_PTR_GET(oss_, Storage::Oss) };
        inline Storage& setOss(const Storage::Oss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
        inline Storage& setOss(Storage::Oss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


      protected:
        // This parameter is required.
        shared_ptr<Storage::Oss> oss_ {};
      };

      class ResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        ResourceSpec() = default ;
        ResourceSpec(const ResourceSpec &) = default ;
        ResourceSpec(ResourceSpec &&) = default ;
        ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceSpec() = default ;
        ResourceSpec& operator=(const ResourceSpec &) = default ;
        ResourceSpec& operator=(ResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline ResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline ResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      class HaResourceSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HaResourceSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
        };
        friend void from_json(const Darabonba::Json& j, HaResourceSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
        };
        HaResourceSpec() = default ;
        HaResourceSpec(const HaResourceSpec &) = default ;
        HaResourceSpec(HaResourceSpec &&) = default ;
        HaResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HaResourceSpec() = default ;
        HaResourceSpec& operator=(const HaResourceSpec &) = default ;
        HaResourceSpec& operator=(HaResourceSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->memoryGB_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline HaResourceSpec& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline HaResourceSpec& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int32_t> memoryGB_ {};
      };

      virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->autoRenew_ == nullptr && this->chargeType_ == nullptr && this->duration_ == nullptr && this->extra_ == nullptr && this->ha_ == nullptr
        && this->haResourceSpec_ == nullptr && this->haVSwitchIds_ == nullptr && this->haZoneId_ == nullptr && this->instanceName_ == nullptr && this->monitorType_ == nullptr
        && this->pricingCycle_ == nullptr && this->promotionCode_ == nullptr && this->region_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceSpec_ == nullptr
        && this->storage_ == nullptr && this->usePromotionCode_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // architectureType Field Functions 
      bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
      void deleteArchitectureType() { this->architectureType_ = nullptr;};
      inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
      inline CreateInstanceRequestItem& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline CreateInstanceRequestItem& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline CreateInstanceRequestItem& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline CreateInstanceRequestItem& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline CreateInstanceRequestItem& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // ha Field Functions 
      bool hasHa() const { return this->ha_ != nullptr;};
      void deleteHa() { this->ha_ = nullptr;};
      inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
      inline CreateInstanceRequestItem& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


      // haResourceSpec Field Functions 
      bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
      void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
      inline const CreateInstanceRequestItem::HaResourceSpec & getHaResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, CreateInstanceRequestItem::HaResourceSpec) };
      inline CreateInstanceRequestItem::HaResourceSpec getHaResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, CreateInstanceRequestItem::HaResourceSpec) };
      inline CreateInstanceRequestItem& setHaResourceSpec(const CreateInstanceRequestItem::HaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
      inline CreateInstanceRequestItem& setHaResourceSpec(CreateInstanceRequestItem::HaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


      // haVSwitchIds Field Functions 
      bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
      void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
      inline const vector<string> & getHaVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
      inline vector<string> getHaVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
      inline CreateInstanceRequestItem& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
      inline CreateInstanceRequestItem& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


      // haZoneId Field Functions 
      bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
      void deleteHaZoneId() { this->haZoneId_ = nullptr;};
      inline string getHaZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
      inline CreateInstanceRequestItem& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline CreateInstanceRequestItem& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // monitorType Field Functions 
      bool hasMonitorType() const { return this->monitorType_ != nullptr;};
      void deleteMonitorType() { this->monitorType_ = nullptr;};
      inline string getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
      inline CreateInstanceRequestItem& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline CreateInstanceRequestItem& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // promotionCode Field Functions 
      bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
      void deletePromotionCode() { this->promotionCode_ = nullptr;};
      inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
      inline CreateInstanceRequestItem& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline CreateInstanceRequestItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline CreateInstanceRequestItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceSpec Field Functions 
      bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
      void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
      inline const CreateInstanceRequestItem::ResourceSpec & getResourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, CreateInstanceRequestItem::ResourceSpec) };
      inline CreateInstanceRequestItem::ResourceSpec getResourceSpec() { DARABONBA_PTR_GET(resourceSpec_, CreateInstanceRequestItem::ResourceSpec) };
      inline CreateInstanceRequestItem& setResourceSpec(const CreateInstanceRequestItem::ResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
      inline CreateInstanceRequestItem& setResourceSpec(CreateInstanceRequestItem::ResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline const CreateInstanceRequestItem::Storage & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, CreateInstanceRequestItem::Storage) };
      inline CreateInstanceRequestItem::Storage getStorage() { DARABONBA_PTR_GET(storage_, CreateInstanceRequestItem::Storage) };
      inline CreateInstanceRequestItem& setStorage(const CreateInstanceRequestItem::Storage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
      inline CreateInstanceRequestItem& setStorage(CreateInstanceRequestItem::Storage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


      // usePromotionCode Field Functions 
      bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
      void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
      inline bool getUsePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
      inline CreateInstanceRequestItem& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline CreateInstanceRequestItem& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline CreateInstanceRequestItem& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline CreateInstanceRequestItem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline CreateInstanceRequestItem& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> architectureType_ {};
      shared_ptr<bool> autoRenew_ {};
      // This parameter is required.
      shared_ptr<string> chargeType_ {};
      shared_ptr<int32_t> duration_ {};
      shared_ptr<string> extra_ {};
      shared_ptr<bool> ha_ {};
      shared_ptr<CreateInstanceRequestItem::HaResourceSpec> haResourceSpec_ {};
      shared_ptr<vector<string>> haVSwitchIds_ {};
      shared_ptr<string> haZoneId_ {};
      // This parameter is required.
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> monitorType_ {};
      shared_ptr<string> pricingCycle_ {};
      shared_ptr<string> promotionCode_ {};
      // This parameter is required.
      shared_ptr<string> region_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<CreateInstanceRequestItem::ResourceSpec> resourceSpec_ {};
      // This parameter is required.
      shared_ptr<CreateInstanceRequestItem::Storage> storage_ {};
      shared_ptr<bool> usePromotionCode_ {};
      // This parameter is required.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // VPC ID。
      // 
      // This parameter is required.
      shared_ptr<string> vpcId_ {};
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->createInstanceRequest_ == nullptr; };
    // createInstanceRequest Field Functions 
    bool hasCreateInstanceRequest() const { return this->createInstanceRequest_ != nullptr;};
    void deleteCreateInstanceRequest() { this->createInstanceRequest_ = nullptr;};
    inline const CreateInstanceRequest::CreateInstanceRequestItem & getCreateInstanceRequest() const { DARABONBA_PTR_GET_CONST(createInstanceRequest_, CreateInstanceRequest::CreateInstanceRequestItem) };
    inline CreateInstanceRequest::CreateInstanceRequestItem getCreateInstanceRequest() { DARABONBA_PTR_GET(createInstanceRequest_, CreateInstanceRequest::CreateInstanceRequestItem) };
    inline CreateInstanceRequest& setCreateInstanceRequest(const CreateInstanceRequest::CreateInstanceRequestItem & createInstanceRequest) { DARABONBA_PTR_SET_VALUE(createInstanceRequest_, createInstanceRequest) };
    inline CreateInstanceRequest& setCreateInstanceRequest(CreateInstanceRequest::CreateInstanceRequestItem && createInstanceRequest) { DARABONBA_PTR_SET_RVALUE(createInstanceRequest_, createInstanceRequest) };


  protected:
    // This parameter is required.
    shared_ptr<CreateInstanceRequest::CreateInstanceRequestItem> createInstanceRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
