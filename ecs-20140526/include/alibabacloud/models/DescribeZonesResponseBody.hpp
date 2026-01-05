// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody(DescribeZonesResponseBody &&) = default ;
    DescribeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody& operator=(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody& operator=(DescribeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
      };
      Zones() = default ;
      Zones(const Zones &) = default ;
      Zones(Zones &&) = default ;
      Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zones() = default ;
      Zones& operator=(const Zones &) = default ;
      Zones& operator=(Zones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zone& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableDedicatedHostTypes, availableDedicatedHostTypes_);
          DARABONBA_PTR_TO_JSON(AvailableDiskCategories, availableDiskCategories_);
          DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
          DARABONBA_PTR_TO_JSON(AvailableResourceCreation, availableResourceCreation_);
          DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_TO_JSON(AvailableVolumeCategories, availableVolumeCategories_);
          DARABONBA_PTR_TO_JSON(DedicatedHostGenerations, dedicatedHostGenerations_);
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableDedicatedHostTypes, availableDedicatedHostTypes_);
          DARABONBA_PTR_FROM_JSON(AvailableDiskCategories, availableDiskCategories_);
          DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
          DARABONBA_PTR_FROM_JSON(AvailableResourceCreation, availableResourceCreation_);
          DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_FROM_JSON(AvailableVolumeCategories, availableVolumeCategories_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostGenerations, dedicatedHostGenerations_);
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
        };
        Zone() = default ;
        Zone(const Zone &) = default ;
        Zone(Zone &&) = default ;
        Zone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zone() = default ;
        Zone& operator=(const Zone &) = default ;
        Zone& operator=(Zone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DedicatedHostGenerations : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DedicatedHostGenerations& obj) { 
            DARABONBA_PTR_TO_JSON(DedicatedHostGeneration, dedicatedHostGeneration_);
          };
          friend void from_json(const Darabonba::Json& j, DedicatedHostGenerations& obj) { 
            DARABONBA_PTR_FROM_JSON(DedicatedHostGeneration, dedicatedHostGeneration_);
          };
          DedicatedHostGenerations() = default ;
          DedicatedHostGenerations(const DedicatedHostGenerations &) = default ;
          DedicatedHostGenerations(DedicatedHostGenerations &&) = default ;
          DedicatedHostGenerations(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DedicatedHostGenerations() = default ;
          DedicatedHostGenerations& operator=(const DedicatedHostGenerations &) = default ;
          DedicatedHostGenerations& operator=(DedicatedHostGenerations &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dedicatedHostGeneration_ == nullptr; };
          // dedicatedHostGeneration Field Functions 
          bool hasDedicatedHostGeneration() const { return this->dedicatedHostGeneration_ != nullptr;};
          void deleteDedicatedHostGeneration() { this->dedicatedHostGeneration_ = nullptr;};
          inline const vector<string> & getDedicatedHostGeneration() const { DARABONBA_PTR_GET_CONST(dedicatedHostGeneration_, vector<string>) };
          inline vector<string> getDedicatedHostGeneration() { DARABONBA_PTR_GET(dedicatedHostGeneration_, vector<string>) };
          inline DedicatedHostGenerations& setDedicatedHostGeneration(const vector<string> & dedicatedHostGeneration) { DARABONBA_PTR_SET_VALUE(dedicatedHostGeneration_, dedicatedHostGeneration) };
          inline DedicatedHostGenerations& setDedicatedHostGeneration(vector<string> && dedicatedHostGeneration) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGeneration_, dedicatedHostGeneration) };


        protected:
          shared_ptr<vector<string>> dedicatedHostGeneration_ {};
        };

        class AvailableVolumeCategories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableVolumeCategories& obj) { 
            DARABONBA_PTR_TO_JSON(VolumeCategories, volumeCategories_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableVolumeCategories& obj) { 
            DARABONBA_PTR_FROM_JSON(VolumeCategories, volumeCategories_);
          };
          AvailableVolumeCategories() = default ;
          AvailableVolumeCategories(const AvailableVolumeCategories &) = default ;
          AvailableVolumeCategories(AvailableVolumeCategories &&) = default ;
          AvailableVolumeCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableVolumeCategories() = default ;
          AvailableVolumeCategories& operator=(const AvailableVolumeCategories &) = default ;
          AvailableVolumeCategories& operator=(AvailableVolumeCategories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->volumeCategories_ == nullptr; };
          // volumeCategories Field Functions 
          bool hasVolumeCategories() const { return this->volumeCategories_ != nullptr;};
          void deleteVolumeCategories() { this->volumeCategories_ = nullptr;};
          inline const vector<string> & getVolumeCategories() const { DARABONBA_PTR_GET_CONST(volumeCategories_, vector<string>) };
          inline vector<string> getVolumeCategories() { DARABONBA_PTR_GET(volumeCategories_, vector<string>) };
          inline AvailableVolumeCategories& setVolumeCategories(const vector<string> & volumeCategories) { DARABONBA_PTR_SET_VALUE(volumeCategories_, volumeCategories) };
          inline AvailableVolumeCategories& setVolumeCategories(vector<string> && volumeCategories) { DARABONBA_PTR_SET_RVALUE(volumeCategories_, volumeCategories) };


        protected:
          shared_ptr<vector<string>> volumeCategories_ {};
        };

        class AvailableResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
            DARABONBA_PTR_TO_JSON(ResourcesInfo, resourcesInfo_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourcesInfo, resourcesInfo_);
          };
          AvailableResources() = default ;
          AvailableResources(const AvailableResources &) = default ;
          AvailableResources(AvailableResources &&) = default ;
          AvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableResources() = default ;
          AvailableResources& operator=(const AvailableResources &) = default ;
          AvailableResources& operator=(AvailableResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourcesInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourcesInfo& obj) { 
              DARABONBA_PTR_TO_JSON(DataDiskCategories, dataDiskCategories_);
              DARABONBA_PTR_TO_JSON(InstanceGenerations, instanceGenerations_);
              DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
              DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
              DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
              DARABONBA_PTR_TO_JSON(NetworkTypes, networkTypes_);
              DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
            };
            friend void from_json(const Darabonba::Json& j, ResourcesInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(DataDiskCategories, dataDiskCategories_);
              DARABONBA_PTR_FROM_JSON(InstanceGenerations, instanceGenerations_);
              DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
              DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
              DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
              DARABONBA_PTR_FROM_JSON(NetworkTypes, networkTypes_);
              DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
            };
            ResourcesInfo() = default ;
            ResourcesInfo(const ResourcesInfo &) = default ;
            ResourcesInfo(ResourcesInfo &&) = default ;
            ResourcesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourcesInfo() = default ;
            ResourcesInfo& operator=(const ResourcesInfo &) = default ;
            ResourcesInfo& operator=(ResourcesInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SystemDiskCategories : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SystemDiskCategories& obj) { 
                DARABONBA_PTR_TO_JSON(supportedSystemDiskCategory, supportedSystemDiskCategory_);
              };
              friend void from_json(const Darabonba::Json& j, SystemDiskCategories& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedSystemDiskCategory, supportedSystemDiskCategory_);
              };
              SystemDiskCategories() = default ;
              SystemDiskCategories(const SystemDiskCategories &) = default ;
              SystemDiskCategories(SystemDiskCategories &&) = default ;
              SystemDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SystemDiskCategories() = default ;
              SystemDiskCategories& operator=(const SystemDiskCategories &) = default ;
              SystemDiskCategories& operator=(SystemDiskCategories &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedSystemDiskCategory_ == nullptr; };
              // supportedSystemDiskCategory Field Functions 
              bool hasSupportedSystemDiskCategory() const { return this->supportedSystemDiskCategory_ != nullptr;};
              void deleteSupportedSystemDiskCategory() { this->supportedSystemDiskCategory_ = nullptr;};
              inline const vector<string> & getSupportedSystemDiskCategory() const { DARABONBA_PTR_GET_CONST(supportedSystemDiskCategory_, vector<string>) };
              inline vector<string> getSupportedSystemDiskCategory() { DARABONBA_PTR_GET(supportedSystemDiskCategory_, vector<string>) };
              inline SystemDiskCategories& setSupportedSystemDiskCategory(const vector<string> & supportedSystemDiskCategory) { DARABONBA_PTR_SET_VALUE(supportedSystemDiskCategory_, supportedSystemDiskCategory) };
              inline SystemDiskCategories& setSupportedSystemDiskCategory(vector<string> && supportedSystemDiskCategory) { DARABONBA_PTR_SET_RVALUE(supportedSystemDiskCategory_, supportedSystemDiskCategory) };


            protected:
              shared_ptr<vector<string>> supportedSystemDiskCategory_ {};
            };

            class NetworkTypes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NetworkTypes& obj) { 
                DARABONBA_PTR_TO_JSON(supportedNetworkCategory, supportedNetworkCategory_);
              };
              friend void from_json(const Darabonba::Json& j, NetworkTypes& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedNetworkCategory, supportedNetworkCategory_);
              };
              NetworkTypes() = default ;
              NetworkTypes(const NetworkTypes &) = default ;
              NetworkTypes(NetworkTypes &&) = default ;
              NetworkTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NetworkTypes() = default ;
              NetworkTypes& operator=(const NetworkTypes &) = default ;
              NetworkTypes& operator=(NetworkTypes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedNetworkCategory_ == nullptr; };
              // supportedNetworkCategory Field Functions 
              bool hasSupportedNetworkCategory() const { return this->supportedNetworkCategory_ != nullptr;};
              void deleteSupportedNetworkCategory() { this->supportedNetworkCategory_ = nullptr;};
              inline const vector<string> & getSupportedNetworkCategory() const { DARABONBA_PTR_GET_CONST(supportedNetworkCategory_, vector<string>) };
              inline vector<string> getSupportedNetworkCategory() { DARABONBA_PTR_GET(supportedNetworkCategory_, vector<string>) };
              inline NetworkTypes& setSupportedNetworkCategory(const vector<string> & supportedNetworkCategory) { DARABONBA_PTR_SET_VALUE(supportedNetworkCategory_, supportedNetworkCategory) };
              inline NetworkTypes& setSupportedNetworkCategory(vector<string> && supportedNetworkCategory) { DARABONBA_PTR_SET_RVALUE(supportedNetworkCategory_, supportedNetworkCategory) };


            protected:
              shared_ptr<vector<string>> supportedNetworkCategory_ {};
            };

            class InstanceTypes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceTypes& obj) { 
                DARABONBA_PTR_TO_JSON(supportedInstanceType, supportedInstanceType_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceTypes& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedInstanceType, supportedInstanceType_);
              };
              InstanceTypes() = default ;
              InstanceTypes(const InstanceTypes &) = default ;
              InstanceTypes(InstanceTypes &&) = default ;
              InstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceTypes() = default ;
              InstanceTypes& operator=(const InstanceTypes &) = default ;
              InstanceTypes& operator=(InstanceTypes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedInstanceType_ == nullptr; };
              // supportedInstanceType Field Functions 
              bool hasSupportedInstanceType() const { return this->supportedInstanceType_ != nullptr;};
              void deleteSupportedInstanceType() { this->supportedInstanceType_ = nullptr;};
              inline const vector<string> & getSupportedInstanceType() const { DARABONBA_PTR_GET_CONST(supportedInstanceType_, vector<string>) };
              inline vector<string> getSupportedInstanceType() { DARABONBA_PTR_GET(supportedInstanceType_, vector<string>) };
              inline InstanceTypes& setSupportedInstanceType(const vector<string> & supportedInstanceType) { DARABONBA_PTR_SET_VALUE(supportedInstanceType_, supportedInstanceType) };
              inline InstanceTypes& setSupportedInstanceType(vector<string> && supportedInstanceType) { DARABONBA_PTR_SET_RVALUE(supportedInstanceType_, supportedInstanceType) };


            protected:
              shared_ptr<vector<string>> supportedInstanceType_ {};
            };

            class InstanceTypeFamilies : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceTypeFamilies& obj) { 
                DARABONBA_PTR_TO_JSON(supportedInstanceTypeFamily, supportedInstanceTypeFamily_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceTypeFamilies& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedInstanceTypeFamily, supportedInstanceTypeFamily_);
              };
              InstanceTypeFamilies() = default ;
              InstanceTypeFamilies(const InstanceTypeFamilies &) = default ;
              InstanceTypeFamilies(InstanceTypeFamilies &&) = default ;
              InstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceTypeFamilies() = default ;
              InstanceTypeFamilies& operator=(const InstanceTypeFamilies &) = default ;
              InstanceTypeFamilies& operator=(InstanceTypeFamilies &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedInstanceTypeFamily_ == nullptr; };
              // supportedInstanceTypeFamily Field Functions 
              bool hasSupportedInstanceTypeFamily() const { return this->supportedInstanceTypeFamily_ != nullptr;};
              void deleteSupportedInstanceTypeFamily() { this->supportedInstanceTypeFamily_ = nullptr;};
              inline const vector<string> & getSupportedInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamily_, vector<string>) };
              inline vector<string> getSupportedInstanceTypeFamily() { DARABONBA_PTR_GET(supportedInstanceTypeFamily_, vector<string>) };
              inline InstanceTypeFamilies& setSupportedInstanceTypeFamily(const vector<string> & supportedInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };
              inline InstanceTypeFamilies& setSupportedInstanceTypeFamily(vector<string> && supportedInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };


            protected:
              shared_ptr<vector<string>> supportedInstanceTypeFamily_ {};
            };

            class InstanceGenerations : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceGenerations& obj) { 
                DARABONBA_PTR_TO_JSON(supportedInstanceGeneration, supportedInstanceGeneration_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceGenerations& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedInstanceGeneration, supportedInstanceGeneration_);
              };
              InstanceGenerations() = default ;
              InstanceGenerations(const InstanceGenerations &) = default ;
              InstanceGenerations(InstanceGenerations &&) = default ;
              InstanceGenerations(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceGenerations() = default ;
              InstanceGenerations& operator=(const InstanceGenerations &) = default ;
              InstanceGenerations& operator=(InstanceGenerations &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedInstanceGeneration_ == nullptr; };
              // supportedInstanceGeneration Field Functions 
              bool hasSupportedInstanceGeneration() const { return this->supportedInstanceGeneration_ != nullptr;};
              void deleteSupportedInstanceGeneration() { this->supportedInstanceGeneration_ = nullptr;};
              inline const vector<string> & getSupportedInstanceGeneration() const { DARABONBA_PTR_GET_CONST(supportedInstanceGeneration_, vector<string>) };
              inline vector<string> getSupportedInstanceGeneration() { DARABONBA_PTR_GET(supportedInstanceGeneration_, vector<string>) };
              inline InstanceGenerations& setSupportedInstanceGeneration(const vector<string> & supportedInstanceGeneration) { DARABONBA_PTR_SET_VALUE(supportedInstanceGeneration_, supportedInstanceGeneration) };
              inline InstanceGenerations& setSupportedInstanceGeneration(vector<string> && supportedInstanceGeneration) { DARABONBA_PTR_SET_RVALUE(supportedInstanceGeneration_, supportedInstanceGeneration) };


            protected:
              shared_ptr<vector<string>> supportedInstanceGeneration_ {};
            };

            class DataDiskCategories : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const DataDiskCategories& obj) { 
                DARABONBA_PTR_TO_JSON(supportedDataDiskCategory, supportedDataDiskCategory_);
              };
              friend void from_json(const Darabonba::Json& j, DataDiskCategories& obj) { 
                DARABONBA_PTR_FROM_JSON(supportedDataDiskCategory, supportedDataDiskCategory_);
              };
              DataDiskCategories() = default ;
              DataDiskCategories(const DataDiskCategories &) = default ;
              DataDiskCategories(DataDiskCategories &&) = default ;
              DataDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~DataDiskCategories() = default ;
              DataDiskCategories& operator=(const DataDiskCategories &) = default ;
              DataDiskCategories& operator=(DataDiskCategories &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->supportedDataDiskCategory_ == nullptr; };
              // supportedDataDiskCategory Field Functions 
              bool hasSupportedDataDiskCategory() const { return this->supportedDataDiskCategory_ != nullptr;};
              void deleteSupportedDataDiskCategory() { this->supportedDataDiskCategory_ = nullptr;};
              inline const vector<string> & getSupportedDataDiskCategory() const { DARABONBA_PTR_GET_CONST(supportedDataDiskCategory_, vector<string>) };
              inline vector<string> getSupportedDataDiskCategory() { DARABONBA_PTR_GET(supportedDataDiskCategory_, vector<string>) };
              inline DataDiskCategories& setSupportedDataDiskCategory(const vector<string> & supportedDataDiskCategory) { DARABONBA_PTR_SET_VALUE(supportedDataDiskCategory_, supportedDataDiskCategory) };
              inline DataDiskCategories& setSupportedDataDiskCategory(vector<string> && supportedDataDiskCategory) { DARABONBA_PTR_SET_RVALUE(supportedDataDiskCategory_, supportedDataDiskCategory) };


            protected:
              shared_ptr<vector<string>> supportedDataDiskCategory_ {};
            };

            virtual bool empty() const override { return this->dataDiskCategories_ == nullptr
        && this->instanceGenerations_ == nullptr && this->instanceTypeFamilies_ == nullptr && this->instanceTypes_ == nullptr && this->ioOptimized_ == nullptr && this->networkTypes_ == nullptr
        && this->systemDiskCategories_ == nullptr; };
            // dataDiskCategories Field Functions 
            bool hasDataDiskCategories() const { return this->dataDiskCategories_ != nullptr;};
            void deleteDataDiskCategories() { this->dataDiskCategories_ = nullptr;};
            inline const ResourcesInfo::DataDiskCategories & getDataDiskCategories() const { DARABONBA_PTR_GET_CONST(dataDiskCategories_, ResourcesInfo::DataDiskCategories) };
            inline ResourcesInfo::DataDiskCategories getDataDiskCategories() { DARABONBA_PTR_GET(dataDiskCategories_, ResourcesInfo::DataDiskCategories) };
            inline ResourcesInfo& setDataDiskCategories(const ResourcesInfo::DataDiskCategories & dataDiskCategories) { DARABONBA_PTR_SET_VALUE(dataDiskCategories_, dataDiskCategories) };
            inline ResourcesInfo& setDataDiskCategories(ResourcesInfo::DataDiskCategories && dataDiskCategories) { DARABONBA_PTR_SET_RVALUE(dataDiskCategories_, dataDiskCategories) };


            // instanceGenerations Field Functions 
            bool hasInstanceGenerations() const { return this->instanceGenerations_ != nullptr;};
            void deleteInstanceGenerations() { this->instanceGenerations_ = nullptr;};
            inline const ResourcesInfo::InstanceGenerations & getInstanceGenerations() const { DARABONBA_PTR_GET_CONST(instanceGenerations_, ResourcesInfo::InstanceGenerations) };
            inline ResourcesInfo::InstanceGenerations getInstanceGenerations() { DARABONBA_PTR_GET(instanceGenerations_, ResourcesInfo::InstanceGenerations) };
            inline ResourcesInfo& setInstanceGenerations(const ResourcesInfo::InstanceGenerations & instanceGenerations) { DARABONBA_PTR_SET_VALUE(instanceGenerations_, instanceGenerations) };
            inline ResourcesInfo& setInstanceGenerations(ResourcesInfo::InstanceGenerations && instanceGenerations) { DARABONBA_PTR_SET_RVALUE(instanceGenerations_, instanceGenerations) };


            // instanceTypeFamilies Field Functions 
            bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
            void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
            inline const ResourcesInfo::InstanceTypeFamilies & getInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, ResourcesInfo::InstanceTypeFamilies) };
            inline ResourcesInfo::InstanceTypeFamilies getInstanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, ResourcesInfo::InstanceTypeFamilies) };
            inline ResourcesInfo& setInstanceTypeFamilies(const ResourcesInfo::InstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
            inline ResourcesInfo& setInstanceTypeFamilies(ResourcesInfo::InstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


            // instanceTypes Field Functions 
            bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
            void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
            inline const ResourcesInfo::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, ResourcesInfo::InstanceTypes) };
            inline ResourcesInfo::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, ResourcesInfo::InstanceTypes) };
            inline ResourcesInfo& setInstanceTypes(const ResourcesInfo::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
            inline ResourcesInfo& setInstanceTypes(ResourcesInfo::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


            // ioOptimized Field Functions 
            bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
            void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
            inline bool getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, false) };
            inline ResourcesInfo& setIoOptimized(bool ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


            // networkTypes Field Functions 
            bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
            void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
            inline const ResourcesInfo::NetworkTypes & getNetworkTypes() const { DARABONBA_PTR_GET_CONST(networkTypes_, ResourcesInfo::NetworkTypes) };
            inline ResourcesInfo::NetworkTypes getNetworkTypes() { DARABONBA_PTR_GET(networkTypes_, ResourcesInfo::NetworkTypes) };
            inline ResourcesInfo& setNetworkTypes(const ResourcesInfo::NetworkTypes & networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };
            inline ResourcesInfo& setNetworkTypes(ResourcesInfo::NetworkTypes && networkTypes) { DARABONBA_PTR_SET_RVALUE(networkTypes_, networkTypes) };


            // systemDiskCategories Field Functions 
            bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
            void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
            inline const ResourcesInfo::SystemDiskCategories & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, ResourcesInfo::SystemDiskCategories) };
            inline ResourcesInfo::SystemDiskCategories getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, ResourcesInfo::SystemDiskCategories) };
            inline ResourcesInfo& setSystemDiskCategories(const ResourcesInfo::SystemDiskCategories & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
            inline ResourcesInfo& setSystemDiskCategories(ResourcesInfo::SystemDiskCategories && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


          protected:
            // The categories of data disks that can be created.
            shared_ptr<ResourcesInfo::DataDiskCategories> dataDiskCategories_ {};
            // The supported generations of instance families.
            shared_ptr<ResourcesInfo::InstanceGenerations> instanceGenerations_ {};
            // The supported instance families.
            shared_ptr<ResourcesInfo::InstanceTypeFamilies> instanceTypeFamilies_ {};
            // The supported instance types.
            shared_ptr<ResourcesInfo::InstanceTypes> instanceTypes_ {};
            // Indicates whether the instance is I/O optimized.
            shared_ptr<bool> ioOptimized_ {};
            // The supported network types.
            shared_ptr<ResourcesInfo::NetworkTypes> networkTypes_ {};
            // The categories of system disks that can be created.
            shared_ptr<ResourcesInfo::SystemDiskCategories> systemDiskCategories_ {};
          };

          virtual bool empty() const override { return this->resourcesInfo_ == nullptr; };
          // resourcesInfo Field Functions 
          bool hasResourcesInfo() const { return this->resourcesInfo_ != nullptr;};
          void deleteResourcesInfo() { this->resourcesInfo_ = nullptr;};
          inline const vector<AvailableResources::ResourcesInfo> & getResourcesInfo() const { DARABONBA_PTR_GET_CONST(resourcesInfo_, vector<AvailableResources::ResourcesInfo>) };
          inline vector<AvailableResources::ResourcesInfo> getResourcesInfo() { DARABONBA_PTR_GET(resourcesInfo_, vector<AvailableResources::ResourcesInfo>) };
          inline AvailableResources& setResourcesInfo(const vector<AvailableResources::ResourcesInfo> & resourcesInfo) { DARABONBA_PTR_SET_VALUE(resourcesInfo_, resourcesInfo) };
          inline AvailableResources& setResourcesInfo(vector<AvailableResources::ResourcesInfo> && resourcesInfo) { DARABONBA_PTR_SET_RVALUE(resourcesInfo_, resourcesInfo) };


        protected:
          shared_ptr<vector<AvailableResources::ResourcesInfo>> resourcesInfo_ {};
        };

        class AvailableResourceCreation : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableResourceCreation& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableResourceCreation& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
          };
          AvailableResourceCreation() = default ;
          AvailableResourceCreation(const AvailableResourceCreation &) = default ;
          AvailableResourceCreation(AvailableResourceCreation &&) = default ;
          AvailableResourceCreation(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableResourceCreation() = default ;
          AvailableResourceCreation& operator=(const AvailableResourceCreation &) = default ;
          AvailableResourceCreation& operator=(AvailableResourceCreation &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceTypes_ == nullptr; };
          // resourceTypes Field Functions 
          bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
          void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
          inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
          inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
          inline AvailableResourceCreation& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
          inline AvailableResourceCreation& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


        protected:
          shared_ptr<vector<string>> resourceTypes_ {};
        };

        class AvailableInstanceTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableInstanceTypes& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableInstanceTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
          };
          AvailableInstanceTypes() = default ;
          AvailableInstanceTypes(const AvailableInstanceTypes &) = default ;
          AvailableInstanceTypes(AvailableInstanceTypes &&) = default ;
          AvailableInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableInstanceTypes() = default ;
          AvailableInstanceTypes& operator=(const AvailableInstanceTypes &) = default ;
          AvailableInstanceTypes& operator=(AvailableInstanceTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceTypes_ == nullptr; };
          // instanceTypes Field Functions 
          bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
          void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
          inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
          inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
          inline AvailableInstanceTypes& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
          inline AvailableInstanceTypes& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


        protected:
          shared_ptr<vector<string>> instanceTypes_ {};
        };

        class AvailableDiskCategories : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableDiskCategories& obj) { 
            DARABONBA_PTR_TO_JSON(DiskCategories, diskCategories_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableDiskCategories& obj) { 
            DARABONBA_PTR_FROM_JSON(DiskCategories, diskCategories_);
          };
          AvailableDiskCategories() = default ;
          AvailableDiskCategories(const AvailableDiskCategories &) = default ;
          AvailableDiskCategories(AvailableDiskCategories &&) = default ;
          AvailableDiskCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableDiskCategories() = default ;
          AvailableDiskCategories& operator=(const AvailableDiskCategories &) = default ;
          AvailableDiskCategories& operator=(AvailableDiskCategories &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->diskCategories_ == nullptr; };
          // diskCategories Field Functions 
          bool hasDiskCategories() const { return this->diskCategories_ != nullptr;};
          void deleteDiskCategories() { this->diskCategories_ = nullptr;};
          inline const vector<string> & getDiskCategories() const { DARABONBA_PTR_GET_CONST(diskCategories_, vector<string>) };
          inline vector<string> getDiskCategories() { DARABONBA_PTR_GET(diskCategories_, vector<string>) };
          inline AvailableDiskCategories& setDiskCategories(const vector<string> & diskCategories) { DARABONBA_PTR_SET_VALUE(diskCategories_, diskCategories) };
          inline AvailableDiskCategories& setDiskCategories(vector<string> && diskCategories) { DARABONBA_PTR_SET_RVALUE(diskCategories_, diskCategories) };


        protected:
          shared_ptr<vector<string>> diskCategories_ {};
        };

        class AvailableDedicatedHostTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableDedicatedHostTypes& obj) { 
            DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableDedicatedHostTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
          };
          AvailableDedicatedHostTypes() = default ;
          AvailableDedicatedHostTypes(const AvailableDedicatedHostTypes &) = default ;
          AvailableDedicatedHostTypes(AvailableDedicatedHostTypes &&) = default ;
          AvailableDedicatedHostTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableDedicatedHostTypes() = default ;
          AvailableDedicatedHostTypes& operator=(const AvailableDedicatedHostTypes &) = default ;
          AvailableDedicatedHostTypes& operator=(AvailableDedicatedHostTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dedicatedHostType_ == nullptr; };
          // dedicatedHostType Field Functions 
          bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
          void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
          inline const vector<string> & getDedicatedHostType() const { DARABONBA_PTR_GET_CONST(dedicatedHostType_, vector<string>) };
          inline vector<string> getDedicatedHostType() { DARABONBA_PTR_GET(dedicatedHostType_, vector<string>) };
          inline AvailableDedicatedHostTypes& setDedicatedHostType(const vector<string> & dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };
          inline AvailableDedicatedHostTypes& setDedicatedHostType(vector<string> && dedicatedHostType) { DARABONBA_PTR_SET_RVALUE(dedicatedHostType_, dedicatedHostType) };


        protected:
          shared_ptr<vector<string>> dedicatedHostType_ {};
        };

        virtual bool empty() const override { return this->availableDedicatedHostTypes_ == nullptr
        && this->availableDiskCategories_ == nullptr && this->availableInstanceTypes_ == nullptr && this->availableResourceCreation_ == nullptr && this->availableResources_ == nullptr && this->availableVolumeCategories_ == nullptr
        && this->dedicatedHostGenerations_ == nullptr && this->localName_ == nullptr && this->zoneId_ == nullptr && this->zoneType_ == nullptr; };
        // availableDedicatedHostTypes Field Functions 
        bool hasAvailableDedicatedHostTypes() const { return this->availableDedicatedHostTypes_ != nullptr;};
        void deleteAvailableDedicatedHostTypes() { this->availableDedicatedHostTypes_ = nullptr;};
        inline const Zone::AvailableDedicatedHostTypes & getAvailableDedicatedHostTypes() const { DARABONBA_PTR_GET_CONST(availableDedicatedHostTypes_, Zone::AvailableDedicatedHostTypes) };
        inline Zone::AvailableDedicatedHostTypes getAvailableDedicatedHostTypes() { DARABONBA_PTR_GET(availableDedicatedHostTypes_, Zone::AvailableDedicatedHostTypes) };
        inline Zone& setAvailableDedicatedHostTypes(const Zone::AvailableDedicatedHostTypes & availableDedicatedHostTypes) { DARABONBA_PTR_SET_VALUE(availableDedicatedHostTypes_, availableDedicatedHostTypes) };
        inline Zone& setAvailableDedicatedHostTypes(Zone::AvailableDedicatedHostTypes && availableDedicatedHostTypes) { DARABONBA_PTR_SET_RVALUE(availableDedicatedHostTypes_, availableDedicatedHostTypes) };


        // availableDiskCategories Field Functions 
        bool hasAvailableDiskCategories() const { return this->availableDiskCategories_ != nullptr;};
        void deleteAvailableDiskCategories() { this->availableDiskCategories_ = nullptr;};
        inline const Zone::AvailableDiskCategories & getAvailableDiskCategories() const { DARABONBA_PTR_GET_CONST(availableDiskCategories_, Zone::AvailableDiskCategories) };
        inline Zone::AvailableDiskCategories getAvailableDiskCategories() { DARABONBA_PTR_GET(availableDiskCategories_, Zone::AvailableDiskCategories) };
        inline Zone& setAvailableDiskCategories(const Zone::AvailableDiskCategories & availableDiskCategories) { DARABONBA_PTR_SET_VALUE(availableDiskCategories_, availableDiskCategories) };
        inline Zone& setAvailableDiskCategories(Zone::AvailableDiskCategories && availableDiskCategories) { DARABONBA_PTR_SET_RVALUE(availableDiskCategories_, availableDiskCategories) };


        // availableInstanceTypes Field Functions 
        bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
        void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
        inline const Zone::AvailableInstanceTypes & getAvailableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, Zone::AvailableInstanceTypes) };
        inline Zone::AvailableInstanceTypes getAvailableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, Zone::AvailableInstanceTypes) };
        inline Zone& setAvailableInstanceTypes(const Zone::AvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
        inline Zone& setAvailableInstanceTypes(Zone::AvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


        // availableResourceCreation Field Functions 
        bool hasAvailableResourceCreation() const { return this->availableResourceCreation_ != nullptr;};
        void deleteAvailableResourceCreation() { this->availableResourceCreation_ = nullptr;};
        inline const Zone::AvailableResourceCreation & getAvailableResourceCreation() const { DARABONBA_PTR_GET_CONST(availableResourceCreation_, Zone::AvailableResourceCreation) };
        inline Zone::AvailableResourceCreation getAvailableResourceCreation() { DARABONBA_PTR_GET(availableResourceCreation_, Zone::AvailableResourceCreation) };
        inline Zone& setAvailableResourceCreation(const Zone::AvailableResourceCreation & availableResourceCreation) { DARABONBA_PTR_SET_VALUE(availableResourceCreation_, availableResourceCreation) };
        inline Zone& setAvailableResourceCreation(Zone::AvailableResourceCreation && availableResourceCreation) { DARABONBA_PTR_SET_RVALUE(availableResourceCreation_, availableResourceCreation) };


        // availableResources Field Functions 
        bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
        void deleteAvailableResources() { this->availableResources_ = nullptr;};
        inline const Zone::AvailableResources & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, Zone::AvailableResources) };
        inline Zone::AvailableResources getAvailableResources() { DARABONBA_PTR_GET(availableResources_, Zone::AvailableResources) };
        inline Zone& setAvailableResources(const Zone::AvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
        inline Zone& setAvailableResources(Zone::AvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


        // availableVolumeCategories Field Functions 
        bool hasAvailableVolumeCategories() const { return this->availableVolumeCategories_ != nullptr;};
        void deleteAvailableVolumeCategories() { this->availableVolumeCategories_ = nullptr;};
        inline const Zone::AvailableVolumeCategories & getAvailableVolumeCategories() const { DARABONBA_PTR_GET_CONST(availableVolumeCategories_, Zone::AvailableVolumeCategories) };
        inline Zone::AvailableVolumeCategories getAvailableVolumeCategories() { DARABONBA_PTR_GET(availableVolumeCategories_, Zone::AvailableVolumeCategories) };
        inline Zone& setAvailableVolumeCategories(const Zone::AvailableVolumeCategories & availableVolumeCategories) { DARABONBA_PTR_SET_VALUE(availableVolumeCategories_, availableVolumeCategories) };
        inline Zone& setAvailableVolumeCategories(Zone::AvailableVolumeCategories && availableVolumeCategories) { DARABONBA_PTR_SET_RVALUE(availableVolumeCategories_, availableVolumeCategories) };


        // dedicatedHostGenerations Field Functions 
        bool hasDedicatedHostGenerations() const { return this->dedicatedHostGenerations_ != nullptr;};
        void deleteDedicatedHostGenerations() { this->dedicatedHostGenerations_ = nullptr;};
        inline const Zone::DedicatedHostGenerations & getDedicatedHostGenerations() const { DARABONBA_PTR_GET_CONST(dedicatedHostGenerations_, Zone::DedicatedHostGenerations) };
        inline Zone::DedicatedHostGenerations getDedicatedHostGenerations() { DARABONBA_PTR_GET(dedicatedHostGenerations_, Zone::DedicatedHostGenerations) };
        inline Zone& setDedicatedHostGenerations(const Zone::DedicatedHostGenerations & dedicatedHostGenerations) { DARABONBA_PTR_SET_VALUE(dedicatedHostGenerations_, dedicatedHostGenerations) };
        inline Zone& setDedicatedHostGenerations(Zone::DedicatedHostGenerations && dedicatedHostGenerations) { DARABONBA_PTR_SET_RVALUE(dedicatedHostGenerations_, dedicatedHostGenerations) };


        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Zone& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneType Field Functions 
        bool hasZoneType() const { return this->zoneType_ != nullptr;};
        void deleteZoneType() { this->zoneType_ = nullptr;};
        inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
        inline Zone& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


      protected:
        // The supported dedicated host types.
        shared_ptr<Zone::AvailableDedicatedHostTypes> availableDedicatedHostTypes_ {};
        // The categories of cloud disks that can be created. Valid values:
        // 
        // *   cloud: basic disk
        // *   cloud_ssd: standard SSD
        // *   cloud_efficiency: ultra disk
        // *   cloud_essd: ESSD
        shared_ptr<Zone::AvailableDiskCategories> availableDiskCategories_ {};
        // The supported instance types.
        shared_ptr<Zone::AvailableInstanceTypes> availableInstanceTypes_ {};
        // The types of resources that can be created. Valid values:
        // 
        // *   VSwitch: vSwitch
        // *   IoOptimized: I/O optimized instance
        // *   Instance: instance
        // *   DedicatedHost: dedicated host
        // *   disk: cloud disk
        shared_ptr<Zone::AvailableResourceCreation> availableResourceCreation_ {};
        // Details about the resources that can be created in the zone.
        shared_ptr<Zone::AvailableResources> availableResources_ {};
        // The supported Shared Block Storage device categories.
        shared_ptr<Zone::AvailableVolumeCategories> availableVolumeCategories_ {};
        // The supported generations of dedicated hosts.
        shared_ptr<Zone::DedicatedHostGenerations> dedicatedHostGenerations_ {};
        // The name of the zone in the local language.
        shared_ptr<string> localName_ {};
        // The ID of the zone.
        shared_ptr<string> zoneId_ {};
        // The type of the zone. Valid values:
        // 
        // *   AvailabilityZone: zone for the Alibaba Cloud public cloud
        // *   CloudBoxZone: zone for CloudBox
        shared_ptr<string> zoneType_ {};
      };

      virtual bool empty() const override { return this->zone_ == nullptr; };
      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline const vector<Zones::Zone> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Zones::Zone>) };
      inline vector<Zones::Zone> getZone() { DARABONBA_PTR_GET(zone_, vector<Zones::Zone>) };
      inline Zones& setZone(const vector<Zones::Zone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
      inline Zones& setZone(vector<Zones::Zone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


    protected:
      shared_ptr<vector<Zones::Zone>> zone_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const DescribeZonesResponseBody::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody::Zones getZones() { DARABONBA_PTR_GET(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody& setZones(const DescribeZonesResponseBody::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZonesResponseBody& setZones(DescribeZonesResponseBody::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about the zones and their supported resources.
    shared_ptr<DescribeZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
