// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEV1REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class CreateInstanceV1Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceV1Request& obj) { 
      DARABONBA_PTR_TO_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_TO_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DlfCatalogName, dlfCatalogName_);
      DARABONBA_PTR_TO_JSON(DlfCatalogType, dlfCatalogType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(LinkedRamUserName, linkedRamUserName_);
      DARABONBA_PTR_TO_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_TO_JSON(OssAccessingRoleName, ossAccessingRoleName_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RamUserId, ramUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceV1Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminPassword, adminPassword_);
      DARABONBA_PTR_FROM_JSON(AgentNodeGroup, agentNodeGroup_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BackendNodeGroups, backendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DlfCatalogName, dlfCatalogName_);
      DARABONBA_PTR_FROM_JSON(DlfCatalogType, dlfCatalogType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(FrontendNodeGroups, frontendNodeGroups_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(LinkedRamUserName, linkedRamUserName_);
      DARABONBA_PTR_FROM_JSON(ObserverNodeGroups, observerNodeGroups_);
      DARABONBA_PTR_FROM_JSON(OssAccessingRoleName, ossAccessingRoleName_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RamUserId, ramUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateInstanceV1Request() = default ;
    CreateInstanceV1Request(const CreateInstanceV1Request &) = default ;
    CreateInstanceV1Request(CreateInstanceV1Request &&) = default ;
    CreateInstanceV1Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceV1Request() = default ;
    CreateInstanceV1Request& operator=(const CreateInstanceV1Request &) = default ;
    CreateInstanceV1Request& operator=(CreateInstanceV1Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(VswId, vswId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(VswId, vswId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline VSwitches& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline VSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // This parameter is required.
      shared_ptr<string> vswId_ {};
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class ObserverNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObserverNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ObserverNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      ObserverNodeGroups() = default ;
      ObserverNodeGroups(const ObserverNodeGroups &) = default ;
      ObserverNodeGroups(ObserverNodeGroups &&) = default ;
      ObserverNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ObserverNodeGroups() = default ;
      ObserverNodeGroups& operator=(const ObserverNodeGroups &) = default ;
      ObserverNodeGroups& operator=(ObserverNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr && this->zoneId_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline ObserverNodeGroups& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline ObserverNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline ObserverNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline ObserverNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline ObserverNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline ObserverNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline ObserverNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ObserverNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<int32_t> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
      shared_ptr<string> zoneId_ {};
    };

    class FrontendNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrontendNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, FrontendNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      FrontendNodeGroups() = default ;
      FrontendNodeGroups(const FrontendNodeGroups &) = default ;
      FrontendNodeGroups(FrontendNodeGroups &&) = default ;
      FrontendNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrontendNodeGroups() = default ;
      FrontendNodeGroups& operator=(const FrontendNodeGroups &) = default ;
      FrontendNodeGroups& operator=(FrontendNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr && this->zoneId_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline FrontendNodeGroups& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline FrontendNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline FrontendNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline FrontendNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline FrontendNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline FrontendNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline FrontendNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline FrontendNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<int32_t> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
      shared_ptr<string> zoneId_ {};
    };

    class BackendNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
        DARABONBA_PTR_TO_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_TO_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_TO_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_TO_JSON(specType, specType_);
        DARABONBA_PTR_TO_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, BackendNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
        DARABONBA_PTR_FROM_JSON(diskNumber, diskNumber_);
        DARABONBA_PTR_FROM_JSON(localStorageInstanceType, localStorageInstanceType_);
        DARABONBA_PTR_FROM_JSON(residentNodeNumber, residentNodeNumber_);
        DARABONBA_PTR_FROM_JSON(specType, specType_);
        DARABONBA_PTR_FROM_JSON(storagePerformanceLevel, storagePerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      BackendNodeGroups() = default ;
      BackendNodeGroups(const BackendNodeGroups &) = default ;
      BackendNodeGroups(BackendNodeGroups &&) = default ;
      BackendNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendNodeGroups() = default ;
      BackendNodeGroups& operator=(const BackendNodeGroups &) = default ;
      BackendNodeGroups& operator=(BackendNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->diskNumber_ == nullptr && this->localStorageInstanceType_ == nullptr && this->residentNodeNumber_ == nullptr && this->specType_ == nullptr && this->storagePerformanceLevel_ == nullptr
        && this->storageSize_ == nullptr && this->zoneId_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline BackendNodeGroups& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // diskNumber Field Functions 
      bool hasDiskNumber() const { return this->diskNumber_ != nullptr;};
      void deleteDiskNumber() { this->diskNumber_ = nullptr;};
      inline int32_t getDiskNumber() const { DARABONBA_PTR_GET_DEFAULT(diskNumber_, 0) };
      inline BackendNodeGroups& setDiskNumber(int32_t diskNumber) { DARABONBA_PTR_SET_VALUE(diskNumber_, diskNumber) };


      // localStorageInstanceType Field Functions 
      bool hasLocalStorageInstanceType() const { return this->localStorageInstanceType_ != nullptr;};
      void deleteLocalStorageInstanceType() { this->localStorageInstanceType_ = nullptr;};
      inline string getLocalStorageInstanceType() const { DARABONBA_PTR_GET_DEFAULT(localStorageInstanceType_, "") };
      inline BackendNodeGroups& setLocalStorageInstanceType(string localStorageInstanceType) { DARABONBA_PTR_SET_VALUE(localStorageInstanceType_, localStorageInstanceType) };


      // residentNodeNumber Field Functions 
      bool hasResidentNodeNumber() const { return this->residentNodeNumber_ != nullptr;};
      void deleteResidentNodeNumber() { this->residentNodeNumber_ = nullptr;};
      inline int32_t getResidentNodeNumber() const { DARABONBA_PTR_GET_DEFAULT(residentNodeNumber_, 0) };
      inline BackendNodeGroups& setResidentNodeNumber(int32_t residentNodeNumber) { DARABONBA_PTR_SET_VALUE(residentNodeNumber_, residentNodeNumber) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline BackendNodeGroups& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // storagePerformanceLevel Field Functions 
      bool hasStoragePerformanceLevel() const { return this->storagePerformanceLevel_ != nullptr;};
      void deleteStoragePerformanceLevel() { this->storagePerformanceLevel_ = nullptr;};
      inline string getStoragePerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(storagePerformanceLevel_, "") };
      inline BackendNodeGroups& setStoragePerformanceLevel(string storagePerformanceLevel) { DARABONBA_PTR_SET_VALUE(storagePerformanceLevel_, storagePerformanceLevel) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
      inline BackendNodeGroups& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline BackendNodeGroups& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<int32_t> cu_ {};
      shared_ptr<int32_t> diskNumber_ {};
      shared_ptr<string> localStorageInstanceType_ {};
      shared_ptr<int32_t> residentNodeNumber_ {};
      shared_ptr<string> specType_ {};
      shared_ptr<string> storagePerformanceLevel_ {};
      shared_ptr<int32_t> storageSize_ {};
      shared_ptr<string> zoneId_ {};
    };

    class AgentNodeGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentNodeGroup& obj) { 
        DARABONBA_PTR_TO_JSON(cu, cu_);
      };
      friend void from_json(const Darabonba::Json& j, AgentNodeGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(cu, cu_);
      };
      AgentNodeGroup() = default ;
      AgentNodeGroup(const AgentNodeGroup &) = default ;
      AgentNodeGroup(AgentNodeGroup &&) = default ;
      AgentNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentNodeGroup() = default ;
      AgentNodeGroup& operator=(const AgentNodeGroup &) = default ;
      AgentNodeGroup& operator=(AgentNodeGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
      inline AgentNodeGroup& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    protected:
      shared_ptr<int32_t> cu_ {};
    };

    virtual bool empty() const override { return this->adminPassword_ == nullptr
        && this->agentNodeGroup_ == nullptr && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->backendNodeGroups_ == nullptr && this->clientToken_ == nullptr
        && this->dlfCatalogName_ == nullptr && this->dlfCatalogType_ == nullptr && this->duration_ == nullptr && this->encrypted_ == nullptr && this->frontendNodeGroups_ == nullptr
        && this->gatewayType_ == nullptr && this->instanceName_ == nullptr && this->kmsKeyId_ == nullptr && this->linkedRamUserName_ == nullptr && this->observerNodeGroups_ == nullptr
        && this->ossAccessingRoleName_ == nullptr && this->packageType_ == nullptr && this->payType_ == nullptr && this->pricingCycle_ == nullptr && this->principalType_ == nullptr
        && this->promotionOptionNo_ == nullptr && this->ramUserId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->runMode_ == nullptr
        && this->tags_ == nullptr && this->vSwitches_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // adminPassword Field Functions 
    bool hasAdminPassword() const { return this->adminPassword_ != nullptr;};
    void deleteAdminPassword() { this->adminPassword_ = nullptr;};
    inline string getAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(adminPassword_, "") };
    inline CreateInstanceV1Request& setAdminPassword(string adminPassword) { DARABONBA_PTR_SET_VALUE(adminPassword_, adminPassword) };


    // agentNodeGroup Field Functions 
    bool hasAgentNodeGroup() const { return this->agentNodeGroup_ != nullptr;};
    void deleteAgentNodeGroup() { this->agentNodeGroup_ = nullptr;};
    inline const CreateInstanceV1Request::AgentNodeGroup & getAgentNodeGroup() const { DARABONBA_PTR_GET_CONST(agentNodeGroup_, CreateInstanceV1Request::AgentNodeGroup) };
    inline CreateInstanceV1Request::AgentNodeGroup getAgentNodeGroup() { DARABONBA_PTR_GET(agentNodeGroup_, CreateInstanceV1Request::AgentNodeGroup) };
    inline CreateInstanceV1Request& setAgentNodeGroup(const CreateInstanceV1Request::AgentNodeGroup & agentNodeGroup) { DARABONBA_PTR_SET_VALUE(agentNodeGroup_, agentNodeGroup) };
    inline CreateInstanceV1Request& setAgentNodeGroup(CreateInstanceV1Request::AgentNodeGroup && agentNodeGroup) { DARABONBA_PTR_SET_RVALUE(agentNodeGroup_, agentNodeGroup) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateInstanceV1Request& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceV1Request& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // backendNodeGroups Field Functions 
    bool hasBackendNodeGroups() const { return this->backendNodeGroups_ != nullptr;};
    void deleteBackendNodeGroups() { this->backendNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1Request::BackendNodeGroups> & getBackendNodeGroups() const { DARABONBA_PTR_GET_CONST(backendNodeGroups_, vector<CreateInstanceV1Request::BackendNodeGroups>) };
    inline vector<CreateInstanceV1Request::BackendNodeGroups> getBackendNodeGroups() { DARABONBA_PTR_GET(backendNodeGroups_, vector<CreateInstanceV1Request::BackendNodeGroups>) };
    inline CreateInstanceV1Request& setBackendNodeGroups(const vector<CreateInstanceV1Request::BackendNodeGroups> & backendNodeGroups) { DARABONBA_PTR_SET_VALUE(backendNodeGroups_, backendNodeGroups) };
    inline CreateInstanceV1Request& setBackendNodeGroups(vector<CreateInstanceV1Request::BackendNodeGroups> && backendNodeGroups) { DARABONBA_PTR_SET_RVALUE(backendNodeGroups_, backendNodeGroups) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceV1Request& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dlfCatalogName Field Functions 
    bool hasDlfCatalogName() const { return this->dlfCatalogName_ != nullptr;};
    void deleteDlfCatalogName() { this->dlfCatalogName_ = nullptr;};
    inline string getDlfCatalogName() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogName_, "") };
    inline CreateInstanceV1Request& setDlfCatalogName(string dlfCatalogName) { DARABONBA_PTR_SET_VALUE(dlfCatalogName_, dlfCatalogName) };


    // dlfCatalogType Field Functions 
    bool hasDlfCatalogType() const { return this->dlfCatalogType_ != nullptr;};
    void deleteDlfCatalogType() { this->dlfCatalogType_ = nullptr;};
    inline string getDlfCatalogType() const { DARABONBA_PTR_GET_DEFAULT(dlfCatalogType_, "") };
    inline CreateInstanceV1Request& setDlfCatalogType(string dlfCatalogType) { DARABONBA_PTR_SET_VALUE(dlfCatalogType_, dlfCatalogType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateInstanceV1Request& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateInstanceV1Request& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // frontendNodeGroups Field Functions 
    bool hasFrontendNodeGroups() const { return this->frontendNodeGroups_ != nullptr;};
    void deleteFrontendNodeGroups() { this->frontendNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1Request::FrontendNodeGroups> & getFrontendNodeGroups() const { DARABONBA_PTR_GET_CONST(frontendNodeGroups_, vector<CreateInstanceV1Request::FrontendNodeGroups>) };
    inline vector<CreateInstanceV1Request::FrontendNodeGroups> getFrontendNodeGroups() { DARABONBA_PTR_GET(frontendNodeGroups_, vector<CreateInstanceV1Request::FrontendNodeGroups>) };
    inline CreateInstanceV1Request& setFrontendNodeGroups(const vector<CreateInstanceV1Request::FrontendNodeGroups> & frontendNodeGroups) { DARABONBA_PTR_SET_VALUE(frontendNodeGroups_, frontendNodeGroups) };
    inline CreateInstanceV1Request& setFrontendNodeGroups(vector<CreateInstanceV1Request::FrontendNodeGroups> && frontendNodeGroups) { DARABONBA_PTR_SET_RVALUE(frontendNodeGroups_, frontendNodeGroups) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateInstanceV1Request& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceV1Request& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateInstanceV1Request& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // linkedRamUserName Field Functions 
    bool hasLinkedRamUserName() const { return this->linkedRamUserName_ != nullptr;};
    void deleteLinkedRamUserName() { this->linkedRamUserName_ = nullptr;};
    inline string getLinkedRamUserName() const { DARABONBA_PTR_GET_DEFAULT(linkedRamUserName_, "") };
    inline CreateInstanceV1Request& setLinkedRamUserName(string linkedRamUserName) { DARABONBA_PTR_SET_VALUE(linkedRamUserName_, linkedRamUserName) };


    // observerNodeGroups Field Functions 
    bool hasObserverNodeGroups() const { return this->observerNodeGroups_ != nullptr;};
    void deleteObserverNodeGroups() { this->observerNodeGroups_ = nullptr;};
    inline const vector<CreateInstanceV1Request::ObserverNodeGroups> & getObserverNodeGroups() const { DARABONBA_PTR_GET_CONST(observerNodeGroups_, vector<CreateInstanceV1Request::ObserverNodeGroups>) };
    inline vector<CreateInstanceV1Request::ObserverNodeGroups> getObserverNodeGroups() { DARABONBA_PTR_GET(observerNodeGroups_, vector<CreateInstanceV1Request::ObserverNodeGroups>) };
    inline CreateInstanceV1Request& setObserverNodeGroups(const vector<CreateInstanceV1Request::ObserverNodeGroups> & observerNodeGroups) { DARABONBA_PTR_SET_VALUE(observerNodeGroups_, observerNodeGroups) };
    inline CreateInstanceV1Request& setObserverNodeGroups(vector<CreateInstanceV1Request::ObserverNodeGroups> && observerNodeGroups) { DARABONBA_PTR_SET_RVALUE(observerNodeGroups_, observerNodeGroups) };


    // ossAccessingRoleName Field Functions 
    bool hasOssAccessingRoleName() const { return this->ossAccessingRoleName_ != nullptr;};
    void deleteOssAccessingRoleName() { this->ossAccessingRoleName_ = nullptr;};
    inline string getOssAccessingRoleName() const { DARABONBA_PTR_GET_DEFAULT(ossAccessingRoleName_, "") };
    inline CreateInstanceV1Request& setOssAccessingRoleName(string ossAccessingRoleName) { DARABONBA_PTR_SET_VALUE(ossAccessingRoleName_, ossAccessingRoleName) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateInstanceV1Request& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateInstanceV1Request& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceV1Request& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline CreateInstanceV1Request& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline CreateInstanceV1Request& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // ramUserId Field Functions 
    bool hasRamUserId() const { return this->ramUserId_ != nullptr;};
    void deleteRamUserId() { this->ramUserId_ = nullptr;};
    inline string getRamUserId() const { DARABONBA_PTR_GET_DEFAULT(ramUserId_, "") };
    inline CreateInstanceV1Request& setRamUserId(string ramUserId) { DARABONBA_PTR_SET_VALUE(ramUserId_, ramUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceV1Request& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceV1Request& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline CreateInstanceV1Request& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceV1Request::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceV1Request::Tags>) };
    inline vector<CreateInstanceV1Request::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceV1Request::Tags>) };
    inline CreateInstanceV1Request& setTags(const vector<CreateInstanceV1Request::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceV1Request& setTags(vector<CreateInstanceV1Request::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<CreateInstanceV1Request::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<CreateInstanceV1Request::VSwitches>) };
    inline vector<CreateInstanceV1Request::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<CreateInstanceV1Request::VSwitches>) };
    inline CreateInstanceV1Request& setVSwitches(const vector<CreateInstanceV1Request::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline CreateInstanceV1Request& setVSwitches(vector<CreateInstanceV1Request::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateInstanceV1Request& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceV1Request& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceV1Request& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    shared_ptr<string> adminPassword_ {};
    shared_ptr<CreateInstanceV1Request::AgentNodeGroup> agentNodeGroup_ {};
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<vector<CreateInstanceV1Request::BackendNodeGroups>> backendNodeGroups_ {};
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> dlfCatalogName_ {};
    shared_ptr<string> dlfCatalogType_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<bool> encrypted_ {};
    shared_ptr<vector<CreateInstanceV1Request::FrontendNodeGroups>> frontendNodeGroups_ {};
    shared_ptr<string> gatewayType_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> kmsKeyId_ {};
    shared_ptr<string> linkedRamUserName_ {};
    shared_ptr<vector<CreateInstanceV1Request::ObserverNodeGroups>> observerNodeGroups_ {};
    shared_ptr<string> ossAccessingRoleName_ {};
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // This parameter is required.
    shared_ptr<string> payType_ {};
    shared_ptr<string> pricingCycle_ {};
    shared_ptr<string> principalType_ {};
    shared_ptr<string> promotionOptionNo_ {};
    shared_ptr<string> ramUserId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    // This parameter is required.
    shared_ptr<string> runMode_ {};
    shared_ptr<vector<CreateInstanceV1Request::Tags>> tags_ {};
    shared_ptr<vector<CreateInstanceV1Request::VSwitches>> vSwitches_ {};
    // This parameter is required.
    shared_ptr<string> version_ {};
    // VPC ID。
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
