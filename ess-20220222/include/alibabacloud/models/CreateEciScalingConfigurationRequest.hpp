// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_TO_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_TO_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_TO_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_TO_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_TO_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_TO_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_TO_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_TO_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_TO_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_TO_JSON(DnsConfigSearchs, dnsConfigSearchs_);
      DARABONBA_PTR_TO_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_TO_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(EnableSls, enableSls_);
      DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_TO_JSON(ImageSnapshotId, imageSnapshotId_);
      DARABONBA_PTR_TO_JSON(IngressBandwidth, ingressBandwidth_);
      DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityContextSysctls, securityContextSysctls_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
      DARABONBA_PTR_FROM_JSON(AutoCreateEip, autoCreateEip_);
      DARABONBA_PTR_FROM_JSON(AutoMatchImageCache, autoMatchImageCache_);
      DARABONBA_PTR_FROM_JSON(ContainerGroupName, containerGroupName_);
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(CostOptimization, costOptimization_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsCore, cpuOptionsCore_);
      DARABONBA_PTR_FROM_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
      DARABONBA_PTR_FROM_JSON(DataCacheBucket, dataCacheBucket_);
      DARABONBA_PTR_FROM_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
      DARABONBA_PTR_FROM_JSON(DataCachePL, dataCachePL_);
      DARABONBA_PTR_FROM_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsConfigNameServers, dnsConfigNameServers_);
      DARABONBA_PTR_FROM_JSON(DnsConfigOptions, dnsConfigOptions_);
      DARABONBA_PTR_FROM_JSON(DnsConfigSearchs, dnsConfigSearchs_);
      DARABONBA_PTR_FROM_JSON(DnsPolicy, dnsPolicy_);
      DARABONBA_PTR_FROM_JSON(EgressBandwidth, egressBandwidth_);
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(EnableSls, enableSls_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_FROM_JSON(ImageSnapshotId, imageSnapshotId_);
      DARABONBA_PTR_FROM_JSON(IngressBandwidth, ingressBandwidth_);
      DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NtpServers, ntpServers_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityContextSysctls, securityContextSysctls_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    CreateEciScalingConfigurationRequest() = default ;
    CreateEciScalingConfigurationRequest(const CreateEciScalingConfigurationRequest &) = default ;
    CreateEciScalingConfigurationRequest(CreateEciScalingConfigurationRequest &&) = default ;
    CreateEciScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequest() = default ;
    CreateEciScalingConfigurationRequest& operator=(const CreateEciScalingConfigurationRequest &) = default ;
    CreateEciScalingConfigurationRequest& operator=(CreateEciScalingConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Volumes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Volumes& obj) { 
        DARABONBA_PTR_TO_JSON(DiskVolume, diskVolume_);
        DARABONBA_PTR_TO_JSON(EmptyDirVolume, emptyDirVolume_);
        DARABONBA_PTR_TO_JSON(FlexVolume, flexVolume_);
        DARABONBA_PTR_TO_JSON(HostPathVolume, hostPathVolume_);
        DARABONBA_PTR_TO_JSON(NFSVolume, NFSVolume_);
        DARABONBA_PTR_TO_JSON(ConfigFileVolumeConfigFileToPaths, configFileVolumeConfigFileToPaths_);
        DARABONBA_PTR_TO_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Volumes& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskVolume, diskVolume_);
        DARABONBA_PTR_FROM_JSON(EmptyDirVolume, emptyDirVolume_);
        DARABONBA_PTR_FROM_JSON(FlexVolume, flexVolume_);
        DARABONBA_PTR_FROM_JSON(HostPathVolume, hostPathVolume_);
        DARABONBA_PTR_FROM_JSON(NFSVolume, NFSVolume_);
        DARABONBA_PTR_FROM_JSON(ConfigFileVolumeConfigFileToPaths, configFileVolumeConfigFileToPaths_);
        DARABONBA_PTR_FROM_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Volumes() = default ;
      Volumes(const Volumes &) = default ;
      Volumes(Volumes &&) = default ;
      Volumes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Volumes() = default ;
      Volumes& operator=(const Volumes &) = default ;
      Volumes& operator=(Volumes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConfigFileVolumeConfigFileToPaths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigFileVolumeConfigFileToPaths& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigFileVolumeConfigFileToPaths& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        ConfigFileVolumeConfigFileToPaths() = default ;
        ConfigFileVolumeConfigFileToPaths(const ConfigFileVolumeConfigFileToPaths &) = default ;
        ConfigFileVolumeConfigFileToPaths(ConfigFileVolumeConfigFileToPaths &&) = default ;
        ConfigFileVolumeConfigFileToPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigFileVolumeConfigFileToPaths() = default ;
        ConfigFileVolumeConfigFileToPaths& operator=(const ConfigFileVolumeConfigFileToPaths &) = default ;
        ConfigFileVolumeConfigFileToPaths& operator=(ConfigFileVolumeConfigFileToPaths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->mode_ == nullptr && this->path_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ConfigFileVolumeConfigFileToPaths& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
        inline ConfigFileVolumeConfigFileToPaths& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ConfigFileVolumeConfigFileToPaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The content of the configuration file (32 KB).
        shared_ptr<string> content_ {};
        // The directory permissions of the ConfigFileVolume.
        shared_ptr<int32_t> mode_ {};
        // The name of the environment variable.
        shared_ptr<string> path_ {};
      };

      class NFSVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NFSVolume& obj) { 
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(Server, server_);
        };
        friend void from_json(const Darabonba::Json& j, NFSVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(Server, server_);
        };
        NFSVolume() = default ;
        NFSVolume(const NFSVolume &) = default ;
        NFSVolume(NFSVolume &&) = default ;
        NFSVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NFSVolume() = default ;
        NFSVolume& operator=(const NFSVolume &) = default ;
        NFSVolume& operator=(NFSVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->path_ == nullptr
        && this->readOnly_ == nullptr && this->server_ == nullptr; };
        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline NFSVolume& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline NFSVolume& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // server Field Functions 
        bool hasServer() const { return this->server_ != nullptr;};
        void deleteServer() { this->server_ = nullptr;};
        inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
        inline NFSVolume& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      protected:
        // The path of the NFS volume.
        shared_ptr<string> path_ {};
        // Specifies whether the NFS volume is read-only. Valid values:
        // - true: Yes.
        // - false: No.
        // Default value: false.
        shared_ptr<bool> readOnly_ {};
        // The address of the NFS server.
        shared_ptr<string> server_ {};
      };

      class HostPathVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HostPathVolume& obj) { 
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, HostPathVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        HostPathVolume() = default ;
        HostPathVolume(const HostPathVolume &) = default ;
        HostPathVolume(HostPathVolume &&) = default ;
        HostPathVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HostPathVolume() = default ;
        HostPathVolume& operator=(const HostPathVolume &) = default ;
        HostPathVolume& operator=(HostPathVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline HostPathVolume& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HostPathVolume& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The absolute path on the host.
        shared_ptr<string> path_ {};
        // The type of the host directory. Examples: File, Directory, and Socket.
        shared_ptr<string> type_ {};
      };

      class FlexVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlexVolume& obj) { 
          DARABONBA_PTR_TO_JSON(Driver, driver_);
          DARABONBA_PTR_TO_JSON(FsType, fsType_);
          DARABONBA_PTR_TO_JSON(Options, options_);
        };
        friend void from_json(const Darabonba::Json& j, FlexVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(Driver, driver_);
          DARABONBA_PTR_FROM_JSON(FsType, fsType_);
          DARABONBA_PTR_FROM_JSON(Options, options_);
        };
        FlexVolume() = default ;
        FlexVolume(const FlexVolume &) = default ;
        FlexVolume(FlexVolume &&) = default ;
        FlexVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlexVolume() = default ;
        FlexVolume& operator=(const FlexVolume &) = default ;
        FlexVolume& operator=(FlexVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->driver_ == nullptr
        && this->fsType_ == nullptr && this->options_ == nullptr; };
        // driver Field Functions 
        bool hasDriver() const { return this->driver_ != nullptr;};
        void deleteDriver() { this->driver_ = nullptr;};
        inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
        inline FlexVolume& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


        // fsType Field Functions 
        bool hasFsType() const { return this->fsType_ != nullptr;};
        void deleteFsType() { this->fsType_ = nullptr;};
        inline string getFsType() const { DARABONBA_PTR_GET_DEFAULT(fsType_, "") };
        inline FlexVolume& setFsType(string fsType) { DARABONBA_PTR_SET_VALUE(fsType_, fsType) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline FlexVolume& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


      protected:
        // The name of the driver used for the FlexVolume.
        shared_ptr<string> driver_ {};
        // The type of the file system to be mounted. The default value depends on the script of the FlexVolume.
        shared_ptr<string> fsType_ {};
        // The list of FlexVolume object options. The options are in key-value pairs and passed in JSON format.
        // For example, when you mount a cloud disk by using FlexVolume, the format of Options is `{"volumeId":"d-2zehdahrwoa7srg****","performanceLevel": "PL2"}`.
        shared_ptr<string> options_ {};
      };

      class EmptyDirVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EmptyDirVolume& obj) { 
          DARABONBA_PTR_TO_JSON(Medium, medium_);
          DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
        };
        friend void from_json(const Darabonba::Json& j, EmptyDirVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(Medium, medium_);
          DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
        };
        EmptyDirVolume() = default ;
        EmptyDirVolume(const EmptyDirVolume &) = default ;
        EmptyDirVolume(EmptyDirVolume &&) = default ;
        EmptyDirVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EmptyDirVolume() = default ;
        EmptyDirVolume& operator=(const EmptyDirVolume &) = default ;
        EmptyDirVolume& operator=(EmptyDirVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->medium_ == nullptr
        && this->sizeLimit_ == nullptr; };
        // medium Field Functions 
        bool hasMedium() const { return this->medium_ != nullptr;};
        void deleteMedium() { this->medium_ = nullptr;};
        inline string getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
        inline EmptyDirVolume& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


        // sizeLimit Field Functions 
        bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
        void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
        inline string getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, "") };
        inline EmptyDirVolume& setSizeLimit(string sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


      protected:
        // The storage medium of the EmptyDirVolume. The default value is empty, which indicates that the node file system is used. The value memory is supported, which indicates that memory is used.
        shared_ptr<string> medium_ {};
        // The size of the EmptyDir volume. Specify a unit for the value. Use Gi or Mi.
        shared_ptr<string> sizeLimit_ {};
      };

      class DiskVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DiskVolume& obj) { 
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(FsType, fsType_);
        };
        friend void from_json(const Darabonba::Json& j, DiskVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(FsType, fsType_);
        };
        DiskVolume() = default ;
        DiskVolume(const DiskVolume &) = default ;
        DiskVolume(DiskVolume &&) = default ;
        DiskVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DiskVolume() = default ;
        DiskVolume& operator=(const DiskVolume &) = default ;
        DiskVolume& operator=(DiskVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskId_ == nullptr
        && this->diskSize_ == nullptr && this->fsType_ == nullptr; };
        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline DiskVolume& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline DiskVolume& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // fsType Field Functions 
        bool hasFsType() const { return this->fsType_ != nullptr;};
        void deleteFsType() { this->fsType_ = nullptr;};
        inline string getFsType() const { DARABONBA_PTR_GET_DEFAULT(fsType_, "") };
        inline DiskVolume& setFsType(string fsType) { DARABONBA_PTR_SET_VALUE(fsType_, fsType) };


      protected:
        // The ID of the DiskVolume.
        shared_ptr<string> diskId_ {};
        // The size of the DiskVolume. Unit: GiB.
        shared_ptr<int32_t> diskSize_ {};
        // This file system type is not recommended. Use the FlexVolume.FsType parameter instead.
        shared_ptr<string> fsType_ {};
      };

      virtual bool empty() const override { return this->diskVolume_ == nullptr
        && this->emptyDirVolume_ == nullptr && this->flexVolume_ == nullptr && this->hostPathVolume_ == nullptr && this->NFSVolume_ == nullptr && this->configFileVolumeConfigFileToPaths_ == nullptr
        && this->configFileVolumeDefaultMode_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // diskVolume Field Functions 
      bool hasDiskVolume() const { return this->diskVolume_ != nullptr;};
      void deleteDiskVolume() { this->diskVolume_ = nullptr;};
      inline const Volumes::DiskVolume & getDiskVolume() const { DARABONBA_PTR_GET_CONST(diskVolume_, Volumes::DiskVolume) };
      inline Volumes::DiskVolume getDiskVolume() { DARABONBA_PTR_GET(diskVolume_, Volumes::DiskVolume) };
      inline Volumes& setDiskVolume(const Volumes::DiskVolume & diskVolume) { DARABONBA_PTR_SET_VALUE(diskVolume_, diskVolume) };
      inline Volumes& setDiskVolume(Volumes::DiskVolume && diskVolume) { DARABONBA_PTR_SET_RVALUE(diskVolume_, diskVolume) };


      // emptyDirVolume Field Functions 
      bool hasEmptyDirVolume() const { return this->emptyDirVolume_ != nullptr;};
      void deleteEmptyDirVolume() { this->emptyDirVolume_ = nullptr;};
      inline const Volumes::EmptyDirVolume & getEmptyDirVolume() const { DARABONBA_PTR_GET_CONST(emptyDirVolume_, Volumes::EmptyDirVolume) };
      inline Volumes::EmptyDirVolume getEmptyDirVolume() { DARABONBA_PTR_GET(emptyDirVolume_, Volumes::EmptyDirVolume) };
      inline Volumes& setEmptyDirVolume(const Volumes::EmptyDirVolume & emptyDirVolume) { DARABONBA_PTR_SET_VALUE(emptyDirVolume_, emptyDirVolume) };
      inline Volumes& setEmptyDirVolume(Volumes::EmptyDirVolume && emptyDirVolume) { DARABONBA_PTR_SET_RVALUE(emptyDirVolume_, emptyDirVolume) };


      // flexVolume Field Functions 
      bool hasFlexVolume() const { return this->flexVolume_ != nullptr;};
      void deleteFlexVolume() { this->flexVolume_ = nullptr;};
      inline const Volumes::FlexVolume & getFlexVolume() const { DARABONBA_PTR_GET_CONST(flexVolume_, Volumes::FlexVolume) };
      inline Volumes::FlexVolume getFlexVolume() { DARABONBA_PTR_GET(flexVolume_, Volumes::FlexVolume) };
      inline Volumes& setFlexVolume(const Volumes::FlexVolume & flexVolume) { DARABONBA_PTR_SET_VALUE(flexVolume_, flexVolume) };
      inline Volumes& setFlexVolume(Volumes::FlexVolume && flexVolume) { DARABONBA_PTR_SET_RVALUE(flexVolume_, flexVolume) };


      // hostPathVolume Field Functions 
      bool hasHostPathVolume() const { return this->hostPathVolume_ != nullptr;};
      void deleteHostPathVolume() { this->hostPathVolume_ = nullptr;};
      inline const Volumes::HostPathVolume & getHostPathVolume() const { DARABONBA_PTR_GET_CONST(hostPathVolume_, Volumes::HostPathVolume) };
      inline Volumes::HostPathVolume getHostPathVolume() { DARABONBA_PTR_GET(hostPathVolume_, Volumes::HostPathVolume) };
      inline Volumes& setHostPathVolume(const Volumes::HostPathVolume & hostPathVolume) { DARABONBA_PTR_SET_VALUE(hostPathVolume_, hostPathVolume) };
      inline Volumes& setHostPathVolume(Volumes::HostPathVolume && hostPathVolume) { DARABONBA_PTR_SET_RVALUE(hostPathVolume_, hostPathVolume) };


      // NFSVolume Field Functions 
      bool hasNFSVolume() const { return this->NFSVolume_ != nullptr;};
      void deleteNFSVolume() { this->NFSVolume_ = nullptr;};
      inline const Volumes::NFSVolume & getNFSVolume() const { DARABONBA_PTR_GET_CONST(NFSVolume_, Volumes::NFSVolume) };
      inline Volumes::NFSVolume getNFSVolume() { DARABONBA_PTR_GET(NFSVolume_, Volumes::NFSVolume) };
      inline Volumes& setNFSVolume(const Volumes::NFSVolume & nFSVolume) { DARABONBA_PTR_SET_VALUE(NFSVolume_, nFSVolume) };
      inline Volumes& setNFSVolume(Volumes::NFSVolume && nFSVolume) { DARABONBA_PTR_SET_RVALUE(NFSVolume_, nFSVolume) };


      // configFileVolumeConfigFileToPaths Field Functions 
      bool hasConfigFileVolumeConfigFileToPaths() const { return this->configFileVolumeConfigFileToPaths_ != nullptr;};
      void deleteConfigFileVolumeConfigFileToPaths() { this->configFileVolumeConfigFileToPaths_ = nullptr;};
      inline const vector<Volumes::ConfigFileVolumeConfigFileToPaths> & getConfigFileVolumeConfigFileToPaths() const { DARABONBA_PTR_GET_CONST(configFileVolumeConfigFileToPaths_, vector<Volumes::ConfigFileVolumeConfigFileToPaths>) };
      inline vector<Volumes::ConfigFileVolumeConfigFileToPaths> getConfigFileVolumeConfigFileToPaths() { DARABONBA_PTR_GET(configFileVolumeConfigFileToPaths_, vector<Volumes::ConfigFileVolumeConfigFileToPaths>) };
      inline Volumes& setConfigFileVolumeConfigFileToPaths(const vector<Volumes::ConfigFileVolumeConfigFileToPaths> & configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_VALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };
      inline Volumes& setConfigFileVolumeConfigFileToPaths(vector<Volumes::ConfigFileVolumeConfigFileToPaths> && configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_RVALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };


      // configFileVolumeDefaultMode Field Functions 
      bool hasConfigFileVolumeDefaultMode() const { return this->configFileVolumeDefaultMode_ != nullptr;};
      void deleteConfigFileVolumeDefaultMode() { this->configFileVolumeDefaultMode_ = nullptr;};
      inline int32_t getConfigFileVolumeDefaultMode() const { DARABONBA_PTR_GET_DEFAULT(configFileVolumeDefaultMode_, 0) };
      inline Volumes& setConfigFileVolumeDefaultMode(int32_t configFileVolumeDefaultMode) { DARABONBA_PTR_SET_VALUE(configFileVolumeDefaultMode_, configFileVolumeDefaultMode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Volumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Volumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Volumes::DiskVolume> diskVolume_ {};
      shared_ptr<Volumes::EmptyDirVolume> emptyDirVolume_ {};
      shared_ptr<Volumes::FlexVolume> flexVolume_ {};
      shared_ptr<Volumes::HostPathVolume> hostPathVolume_ {};
      shared_ptr<Volumes::NFSVolume> NFSVolume_ {};
      // The list of configuration file paths.
      shared_ptr<vector<Volumes::ConfigFileVolumeConfigFileToPaths>> configFileVolumeConfigFileToPaths_ {};
      // The default permissions of the ConfigFileVolume.
      shared_ptr<int32_t> configFileVolumeDefaultMode_ {};
      // The name of the volume.
      shared_ptr<string> name_ {};
      // The volume type. Valid values:
      // - EmptyDirVolume: the EmptyDir volume, which represents an empty directory.
      // - NFSVolume: the NFS volume, which represents a network file system.
      // - ConfigFileVolume: the ConfigFile volume, which represents a configuration file.
      // - FlexVolume: uses the FlexVolume plug-in to extend storage types and supports mounting cloud disks.
      // - HostPathVolume: the HostPath volume, which represents a file or directory on the host node.
      // - DiskVolume (not recommended): the cloud disk volume. Use FlexVolume to mount cloud disks instead.
      shared_ptr<string> type_ {};
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
      // The tag key of the instance.
      // 
      // If you specify this parameter, it cannot be an empty string. It can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the instance.
      // 
      // If you specify this parameter, it can be an empty string. It can be up to 128 characters in length, and cannot start with `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class SecurityContextSysctls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityContextSysctls& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityContextSysctls& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SecurityContextSysctls() = default ;
      SecurityContextSysctls(const SecurityContextSysctls &) = default ;
      SecurityContextSysctls(SecurityContextSysctls &&) = default ;
      SecurityContextSysctls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityContextSysctls() = default ;
      SecurityContextSysctls& operator=(const SecurityContextSysctls &) = default ;
      SecurityContextSysctls& operator=(SecurityContextSysctls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityContextSysctls& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SecurityContextSysctls& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The system name of the security context for the instance.
      shared_ptr<string> name_ {};
      // The contextual variable value of the security context for the instance.
      shared_ptr<string> value_ {};
    };

    class InitContainers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InitContainers& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Commands, commands_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(Gpu, gpu_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
        DARABONBA_PTR_TO_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
        DARABONBA_PTR_TO_JSON(InitContainerPorts, initContainerPorts_);
        DARABONBA_PTR_TO_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      };
      friend void from_json(const Darabonba::Json& j, InitContainers& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
        DARABONBA_PTR_FROM_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
        DARABONBA_PTR_FROM_JSON(InitContainerPorts, initContainerPorts_);
        DARABONBA_PTR_FROM_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      };
      InitContainers() = default ;
      InitContainers(const InitContainers &) = default ;
      InitContainers(InitContainers &&) = default ;
      InitContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InitContainers() = default ;
      InitContainers& operator=(const InitContainers &) = default ;
      InitContainers& operator=(InitContainers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InitContainerVolumeMounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InitContainerVolumeMounts& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(MountPropagation, mountPropagation_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(SubPath, subPath_);
        };
        friend void from_json(const Darabonba::Json& j, InitContainerVolumeMounts& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(MountPropagation, mountPropagation_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
        };
        InitContainerVolumeMounts() = default ;
        InitContainerVolumeMounts(const InitContainerVolumeMounts &) = default ;
        InitContainerVolumeMounts(InitContainerVolumeMounts &&) = default ;
        InitContainerVolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InitContainerVolumeMounts() = default ;
        InitContainerVolumeMounts& operator=(const InitContainerVolumeMounts &) = default ;
        InitContainerVolumeMounts& operator=(InitContainerVolumeMounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->mountPropagation_ == nullptr && this->name_ == nullptr && this->readOnly_ == nullptr && this->subPath_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline InitContainerVolumeMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // mountPropagation Field Functions 
        bool hasMountPropagation() const { return this->mountPropagation_ != nullptr;};
        void deleteMountPropagation() { this->mountPropagation_ = nullptr;};
        inline string getMountPropagation() const { DARABONBA_PTR_GET_DEFAULT(mountPropagation_, "") };
        inline InitContainerVolumeMounts& setMountPropagation(string mountPropagation) { DARABONBA_PTR_SET_VALUE(mountPropagation_, mountPropagation) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InitContainerVolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline InitContainerVolumeMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // subPath Field Functions 
        bool hasSubPath() const { return this->subPath_ != nullptr;};
        void deleteSubPath() { this->subPath_ = nullptr;};
        inline string getSubPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
        inline InitContainerVolumeMounts& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


      protected:
        // The mount directory. The content in the mount directory of the container is directly overwritten by the content of the volume. Use this parameter with caution.
        shared_ptr<string> mountPath_ {};
        // The mount propagation settings of the volume. Mount propagation allows a volume mounted by a container to be shared with other containers in the same pod, or even with other pods on the same node. Valid values:
        // - None: The volume is not aware of any subsequent mount operations performed on this volume or its subdirectories.
        // - HostToCotainer: The volume is aware of subsequent mount operations performed on this volume or its subdirectories.
        // - Bidirectional: Similar to HostToCotainer, the volume is aware of mount operations. In addition, the volume is propagated back to the host and to all containers of all pods that use the same volume.
        shared_ptr<string> mountPropagation_ {};
        // The name of the mounted volume.
        shared_ptr<string> name_ {};
        // Specifies whether the mount path is read-only.
        // Default value: false.
        shared_ptr<bool> readOnly_ {};
        // The subdirectory under the volume. This allows a pod to mount different directories under the same volume to different directories in the container.
        shared_ptr<string> subPath_ {};
      };

      class InitContainerPorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InitContainerPorts& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, InitContainerPorts& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        InitContainerPorts() = default ;
        InitContainerPorts(const InitContainerPorts &) = default ;
        InitContainerPorts(InitContainerPorts &&) = default ;
        InitContainerPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InitContainerPorts() = default ;
        InitContainerPorts& operator=(const InitContainerPorts &) = default ;
        InitContainerPorts& operator=(InitContainerPorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline InitContainerPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline InitContainerPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The port number. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The protocol type. Valid values:
        // 
        // - TCP
        // - UDP
        shared_ptr<string> protocol_ {};
      };

      class InitContainerEnvironmentVars : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InitContainerEnvironmentVars& obj) { 
          DARABONBA_PTR_TO_JSON(FieldRefFieldPath, fieldRefFieldPath_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, InitContainerEnvironmentVars& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldRefFieldPath, fieldRefFieldPath_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        InitContainerEnvironmentVars() = default ;
        InitContainerEnvironmentVars(const InitContainerEnvironmentVars &) = default ;
        InitContainerEnvironmentVars(InitContainerEnvironmentVars &&) = default ;
        InitContainerEnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InitContainerEnvironmentVars() = default ;
        InitContainerEnvironmentVars& operator=(const InitContainerEnvironmentVars &) = default ;
        InitContainerEnvironmentVars& operator=(InitContainerEnvironmentVars &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldRefFieldPath_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
        // fieldRefFieldPath Field Functions 
        bool hasFieldRefFieldPath() const { return this->fieldRefFieldPath_ != nullptr;};
        void deleteFieldRefFieldPath() { this->fieldRefFieldPath_ = nullptr;};
        inline string getFieldRefFieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldRefFieldPath_, "") };
        inline InitContainerEnvironmentVars& setFieldRefFieldPath(string fieldRefFieldPath) { DARABONBA_PTR_SET_VALUE(fieldRefFieldPath_, fieldRefFieldPath) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline InitContainerEnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline InitContainerEnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // >This parameter is unavailable.
        shared_ptr<string> fieldRefFieldPath_ {};
        // The name of the environment variable. The name must be 1 to 128 characters in length and can contain letters, digits, and underscores (_). It cannot start with a digit.
        shared_ptr<string> key_ {};
        // The value of the environment variable. The value must be 0 to 256 characters in length.
        shared_ptr<string> value_ {};
      };

      class SecurityContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityContext& obj) { 
          DARABONBA_PTR_TO_JSON(Capability, capability_);
          DARABONBA_PTR_TO_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
          DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityContext& obj) { 
          DARABONBA_PTR_FROM_JSON(Capability, capability_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
          DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
        };
        SecurityContext() = default ;
        SecurityContext(const SecurityContext &) = default ;
        SecurityContext(SecurityContext &&) = default ;
        SecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityContext() = default ;
        SecurityContext& operator=(const SecurityContext &) = default ;
        SecurityContext& operator=(SecurityContext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Capability : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capability& obj) { 
            DARABONBA_PTR_TO_JSON(Adds, adds_);
          };
          friend void from_json(const Darabonba::Json& j, Capability& obj) { 
            DARABONBA_PTR_FROM_JSON(Adds, adds_);
          };
          Capability() = default ;
          Capability(const Capability &) = default ;
          Capability(Capability &&) = default ;
          Capability(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capability() = default ;
          Capability& operator=(const Capability &) = default ;
          Capability& operator=(Capability &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adds_ == nullptr; };
          // adds Field Functions 
          bool hasAdds() const { return this->adds_ != nullptr;};
          void deleteAdds() { this->adds_ = nullptr;};
          inline const vector<string> & getAdds() const { DARABONBA_PTR_GET_CONST(adds_, vector<string>) };
          inline vector<string> getAdds() { DARABONBA_PTR_GET(adds_, vector<string>) };
          inline Capability& setAdds(const vector<string> & adds) { DARABONBA_PTR_SET_VALUE(adds_, adds) };
          inline Capability& setAdds(vector<string> && adds) { DARABONBA_PTR_SET_RVALUE(adds_, adds) };


        protected:
          // Grants specific permissions to processes in the container. Only NET_ADMIN and NET_RAW are supported.
          // > NET_RAW is not supported by default. Submit a ticket to apply for this permission.
          shared_ptr<vector<string>> adds_ {};
        };

        virtual bool empty() const override { return this->capability_ == nullptr
        && this->readOnlyRootFilesystem_ == nullptr && this->runAsUser_ == nullptr; };
        // capability Field Functions 
        bool hasCapability() const { return this->capability_ != nullptr;};
        void deleteCapability() { this->capability_ = nullptr;};
        inline const SecurityContext::Capability & getCapability() const { DARABONBA_PTR_GET_CONST(capability_, SecurityContext::Capability) };
        inline SecurityContext::Capability getCapability() { DARABONBA_PTR_GET(capability_, SecurityContext::Capability) };
        inline SecurityContext& setCapability(const SecurityContext::Capability & capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };
        inline SecurityContext& setCapability(SecurityContext::Capability && capability) { DARABONBA_PTR_SET_RVALUE(capability_, capability) };


        // readOnlyRootFilesystem Field Functions 
        bool hasReadOnlyRootFilesystem() const { return this->readOnlyRootFilesystem_ != nullptr;};
        void deleteReadOnlyRootFilesystem() { this->readOnlyRootFilesystem_ = nullptr;};
        inline bool getReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(readOnlyRootFilesystem_, false) };
        inline SecurityContext& setReadOnlyRootFilesystem(bool readOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(readOnlyRootFilesystem_, readOnlyRootFilesystem) };


        // runAsUser Field Functions 
        bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
        void deleteRunAsUser() { this->runAsUser_ = nullptr;};
        inline int64_t getRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
        inline SecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


      protected:
        shared_ptr<SecurityContext::Capability> capability_ {};
        // Specifies whether the root file system where the container runs is read-only. Only true is supported.
        shared_ptr<bool> readOnlyRootFilesystem_ {};
        // The user ID used to run the container.
        shared_ptr<int64_t> runAsUser_ {};
      };

      virtual bool empty() const override { return this->securityContext_ == nullptr
        && this->args_ == nullptr && this->commands_ == nullptr && this->cpu_ == nullptr && this->gpu_ == nullptr && this->image_ == nullptr
        && this->imagePullPolicy_ == nullptr && this->initContainerEnvironmentVars_ == nullptr && this->initContainerPorts_ == nullptr && this->initContainerVolumeMounts_ == nullptr && this->memory_ == nullptr
        && this->name_ == nullptr && this->workingDir_ == nullptr; };
      // securityContext Field Functions 
      bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
      void deleteSecurityContext() { this->securityContext_ = nullptr;};
      inline const InitContainers::SecurityContext & getSecurityContext() const { DARABONBA_PTR_GET_CONST(securityContext_, InitContainers::SecurityContext) };
      inline InitContainers::SecurityContext getSecurityContext() { DARABONBA_PTR_GET(securityContext_, InitContainers::SecurityContext) };
      inline InitContainers& setSecurityContext(const InitContainers::SecurityContext & securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };
      inline InitContainers& setSecurityContext(InitContainers::SecurityContext && securityContext) { DARABONBA_PTR_SET_RVALUE(securityContext_, securityContext) };


      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
      inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
      inline InitContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline InitContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // commands Field Functions 
      bool hasCommands() const { return this->commands_ != nullptr;};
      void deleteCommands() { this->commands_ = nullptr;};
      inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
      inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
      inline InitContainers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
      inline InitContainers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline InitContainers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
      inline InitContainers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline InitContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imagePullPolicy Field Functions 
      bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
      void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
      inline string getImagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
      inline InitContainers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


      // initContainerEnvironmentVars Field Functions 
      bool hasInitContainerEnvironmentVars() const { return this->initContainerEnvironmentVars_ != nullptr;};
      void deleteInitContainerEnvironmentVars() { this->initContainerEnvironmentVars_ = nullptr;};
      inline const vector<InitContainers::InitContainerEnvironmentVars> & getInitContainerEnvironmentVars() const { DARABONBA_PTR_GET_CONST(initContainerEnvironmentVars_, vector<InitContainers::InitContainerEnvironmentVars>) };
      inline vector<InitContainers::InitContainerEnvironmentVars> getInitContainerEnvironmentVars() { DARABONBA_PTR_GET(initContainerEnvironmentVars_, vector<InitContainers::InitContainerEnvironmentVars>) };
      inline InitContainers& setInitContainerEnvironmentVars(const vector<InitContainers::InitContainerEnvironmentVars> & initContainerEnvironmentVars) { DARABONBA_PTR_SET_VALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };
      inline InitContainers& setInitContainerEnvironmentVars(vector<InitContainers::InitContainerEnvironmentVars> && initContainerEnvironmentVars) { DARABONBA_PTR_SET_RVALUE(initContainerEnvironmentVars_, initContainerEnvironmentVars) };


      // initContainerPorts Field Functions 
      bool hasInitContainerPorts() const { return this->initContainerPorts_ != nullptr;};
      void deleteInitContainerPorts() { this->initContainerPorts_ = nullptr;};
      inline const vector<InitContainers::InitContainerPorts> & getInitContainerPorts() const { DARABONBA_PTR_GET_CONST(initContainerPorts_, vector<InitContainers::InitContainerPorts>) };
      inline vector<InitContainers::InitContainerPorts> getInitContainerPorts() { DARABONBA_PTR_GET(initContainerPorts_, vector<InitContainers::InitContainerPorts>) };
      inline InitContainers& setInitContainerPorts(const vector<InitContainers::InitContainerPorts> & initContainerPorts) { DARABONBA_PTR_SET_VALUE(initContainerPorts_, initContainerPorts) };
      inline InitContainers& setInitContainerPorts(vector<InitContainers::InitContainerPorts> && initContainerPorts) { DARABONBA_PTR_SET_RVALUE(initContainerPorts_, initContainerPorts) };


      // initContainerVolumeMounts Field Functions 
      bool hasInitContainerVolumeMounts() const { return this->initContainerVolumeMounts_ != nullptr;};
      void deleteInitContainerVolumeMounts() { this->initContainerVolumeMounts_ = nullptr;};
      inline const vector<InitContainers::InitContainerVolumeMounts> & getInitContainerVolumeMounts() const { DARABONBA_PTR_GET_CONST(initContainerVolumeMounts_, vector<InitContainers::InitContainerVolumeMounts>) };
      inline vector<InitContainers::InitContainerVolumeMounts> getInitContainerVolumeMounts() { DARABONBA_PTR_GET(initContainerVolumeMounts_, vector<InitContainers::InitContainerVolumeMounts>) };
      inline InitContainers& setInitContainerVolumeMounts(const vector<InitContainers::InitContainerVolumeMounts> & initContainerVolumeMounts) { DARABONBA_PTR_SET_VALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };
      inline InitContainers& setInitContainerVolumeMounts(vector<InitContainers::InitContainerVolumeMounts> && initContainerVolumeMounts) { DARABONBA_PTR_SET_RVALUE(initContainerVolumeMounts_, initContainerVolumeMounts) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline InitContainers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline InitContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // workingDir Field Functions 
      bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
      void deleteWorkingDir() { this->workingDir_ = nullptr;};
      inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
      inline InitContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    protected:
      shared_ptr<InitContainers::SecurityContext> securityContext_ {};
      // The arguments for the container startup command. A maximum of 10 arguments are supported.
      shared_ptr<vector<string>> args_ {};
      // The startup commands of the container.
      shared_ptr<vector<string>> commands_ {};
      // The number of vCPUs for the container. Unit: cores.
      shared_ptr<float> cpu_ {};
      // The number of GPUs allocated to the container.
      shared_ptr<int32_t> gpu_ {};
      // The image used by the container.
      shared_ptr<string> image_ {};
      // The image pull policy.
      shared_ptr<string> imagePullPolicy_ {};
      // The environment variable information of the init container.
      shared_ptr<vector<InitContainers::InitContainerEnvironmentVars>> initContainerEnvironmentVars_ {};
      // The list of port mappings for the init container.
      shared_ptr<vector<InitContainers::InitContainerPorts>> initContainerPorts_ {};
      // The array of mount point information for the init container.
      shared_ptr<vector<InitContainers::InitContainerVolumeMounts>> initContainerVolumeMounts_ {};
      // The memory size. Unit: GiB.
      shared_ptr<float> memory_ {};
      // The name of the container.
      shared_ptr<string> name_ {};
      // The working directory.
      shared_ptr<string> workingDir_ {};
    };

    class ImageRegistryCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      ImageRegistryCredentials() = default ;
      ImageRegistryCredentials(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials(ImageRegistryCredentials &&) = default ;
      ImageRegistryCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRegistryCredentials() = default ;
      ImageRegistryCredentials& operator=(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials& operator=(ImageRegistryCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->server_ == nullptr && this->userName_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline ImageRegistryCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline ImageRegistryCredentials& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ImageRegistryCredentials& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The password of the image registry.
      shared_ptr<string> password_ {};
      // The address of the image registry.
      shared_ptr<string> server_ {};
      // The username of the image registry.
      shared_ptr<string> userName_ {};
    };

    class HostAliases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostAliases& obj) { 
        DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, HostAliases& obj) { 
        DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
      };
      HostAliases() = default ;
      HostAliases(const HostAliases &) = default ;
      HostAliases(HostAliases &&) = default ;
      HostAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostAliases() = default ;
      HostAliases& operator=(const HostAliases &) = default ;
      HostAliases& operator=(HostAliases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hostnames_ == nullptr
        && this->ip_ == nullptr; };
      // hostnames Field Functions 
      bool hasHostnames() const { return this->hostnames_ != nullptr;};
      void deleteHostnames() { this->hostnames_ = nullptr;};
      inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
      inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
      inline HostAliases& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
      inline HostAliases& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline HostAliases& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      // The hostname to be added.
      shared_ptr<vector<string>> hostnames_ {};
      // The IP address to be added.
      shared_ptr<string> ip_ {};
    };

    class DnsConfigOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsConfigOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DnsConfigOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DnsConfigOptions() = default ;
      DnsConfigOptions(const DnsConfigOptions &) = default ;
      DnsConfigOptions(DnsConfigOptions &&) = default ;
      DnsConfigOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsConfigOptions() = default ;
      DnsConfigOptions& operator=(const DnsConfigOptions &) = default ;
      DnsConfigOptions& operator=(DnsConfigOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DnsConfigOptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DnsConfigOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the object variable.
      shared_ptr<string> name_ {};
      // The value of the object variable.
      shared_ptr<string> value_ {};
    };

    class Containers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Containers& obj) { 
        DARABONBA_PTR_TO_JSON(LivenessProbe, livenessProbe_);
        DARABONBA_PTR_TO_JSON(ReadinessProbe, readinessProbe_);
        DARABONBA_PTR_TO_JSON(SecurityContext, securityContext_);
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Commands, commands_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(EnvironmentVars, environmentVars_);
        DARABONBA_PTR_TO_JSON(Gpu, gpu_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerExecs, lifecyclePostStartHandlerExecs_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetHost, lifecyclePostStartHandlerHttpGetHost_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetPath, lifecyclePostStartHandlerHttpGetPath_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetPort, lifecyclePostStartHandlerHttpGetPort_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerHttpGetScheme, lifecyclePostStartHandlerHttpGetScheme_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerTcpSocketHost, lifecyclePostStartHandlerTcpSocketHost_);
        DARABONBA_PTR_TO_JSON(LifecyclePostStartHandlerTcpSocketPort, lifecyclePostStartHandlerTcpSocketPort_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerExecs, lifecyclePreStopHandlerExecs_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetHost, lifecyclePreStopHandlerHttpGetHost_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetPath, lifecyclePreStopHandlerHttpGetPath_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetPort, lifecyclePreStopHandlerHttpGetPort_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerHttpGetScheme, lifecyclePreStopHandlerHttpGetScheme_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerTcpSocketHost, lifecyclePreStopHandlerTcpSocketHost_);
        DARABONBA_PTR_TO_JSON(LifecyclePreStopHandlerTcpSocketPort, lifecyclePreStopHandlerTcpSocketPort_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Ports, ports_);
        DARABONBA_PTR_TO_JSON(Stdin, stdin_);
        DARABONBA_PTR_TO_JSON(StdinOnce, stdinOnce_);
        DARABONBA_PTR_TO_JSON(Tty, tty_);
        DARABONBA_PTR_TO_JSON(VolumeMounts, volumeMounts_);
        DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
      };
      friend void from_json(const Darabonba::Json& j, Containers& obj) { 
        DARABONBA_PTR_FROM_JSON(LivenessProbe, livenessProbe_);
        DARABONBA_PTR_FROM_JSON(ReadinessProbe, readinessProbe_);
        DARABONBA_PTR_FROM_JSON(SecurityContext, securityContext_);
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Commands, commands_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(EnvironmentVars, environmentVars_);
        DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerExecs, lifecyclePostStartHandlerExecs_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetHost, lifecyclePostStartHandlerHttpGetHost_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetPath, lifecyclePostStartHandlerHttpGetPath_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetPort, lifecyclePostStartHandlerHttpGetPort_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerHttpGetScheme, lifecyclePostStartHandlerHttpGetScheme_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerTcpSocketHost, lifecyclePostStartHandlerTcpSocketHost_);
        DARABONBA_PTR_FROM_JSON(LifecyclePostStartHandlerTcpSocketPort, lifecyclePostStartHandlerTcpSocketPort_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerExecs, lifecyclePreStopHandlerExecs_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetHost, lifecyclePreStopHandlerHttpGetHost_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetPath, lifecyclePreStopHandlerHttpGetPath_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetPort, lifecyclePreStopHandlerHttpGetPort_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerHttpGetScheme, lifecyclePreStopHandlerHttpGetScheme_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerTcpSocketHost, lifecyclePreStopHandlerTcpSocketHost_);
        DARABONBA_PTR_FROM_JSON(LifecyclePreStopHandlerTcpSocketPort, lifecyclePreStopHandlerTcpSocketPort_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Ports, ports_);
        DARABONBA_PTR_FROM_JSON(Stdin, stdin_);
        DARABONBA_PTR_FROM_JSON(StdinOnce, stdinOnce_);
        DARABONBA_PTR_FROM_JSON(Tty, tty_);
        DARABONBA_PTR_FROM_JSON(VolumeMounts, volumeMounts_);
        DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
      };
      Containers() = default ;
      Containers(const Containers &) = default ;
      Containers(Containers &&) = default ;
      Containers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Containers() = default ;
      Containers& operator=(const Containers &) = default ;
      Containers& operator=(Containers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VolumeMounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VolumeMounts& obj) { 
          DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
          DARABONBA_PTR_TO_JSON(MountPropagation, mountPropagation_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_TO_JSON(SubPath, subPath_);
        };
        friend void from_json(const Darabonba::Json& j, VolumeMounts& obj) { 
          DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
          DARABONBA_PTR_FROM_JSON(MountPropagation, mountPropagation_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
          DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
        };
        VolumeMounts() = default ;
        VolumeMounts(const VolumeMounts &) = default ;
        VolumeMounts(VolumeMounts &&) = default ;
        VolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VolumeMounts() = default ;
        VolumeMounts& operator=(const VolumeMounts &) = default ;
        VolumeMounts& operator=(VolumeMounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountPath_ == nullptr
        && this->mountPropagation_ == nullptr && this->name_ == nullptr && this->readOnly_ == nullptr && this->subPath_ == nullptr; };
        // mountPath Field Functions 
        bool hasMountPath() const { return this->mountPath_ != nullptr;};
        void deleteMountPath() { this->mountPath_ = nullptr;};
        inline string getMountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
        inline VolumeMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


        // mountPropagation Field Functions 
        bool hasMountPropagation() const { return this->mountPropagation_ != nullptr;};
        void deleteMountPropagation() { this->mountPropagation_ = nullptr;};
        inline string getMountPropagation() const { DARABONBA_PTR_GET_DEFAULT(mountPropagation_, "") };
        inline VolumeMounts& setMountPropagation(string mountPropagation) { DARABONBA_PTR_SET_VALUE(mountPropagation_, mountPropagation) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline VolumeMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


        // subPath Field Functions 
        bool hasSubPath() const { return this->subPath_ != nullptr;};
        void deleteSubPath() { this->subPath_ = nullptr;};
        inline string getSubPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
        inline VolumeMounts& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


      protected:
        // The directory where the volume is mounted in the container.
        // 
        // >Notice: The contents of the container mount directory are directly overwritten by the contents of the volume. Proceed with caution.
        shared_ptr<string> mountPath_ {};
        // The mount propagation settings for the volume. Mount propagation allows volumes mounted by a container to be shared with other containers in the same pod, or even with other pods on the same node. Valid values:
        // 
        // - None: The volume is not aware of any subsequent mount operations performed on the volume or its subdirectories.
        // - HostToCotainer: The volume is aware of subsequent mount operations performed on the volume or its subdirectories.
        // - Bidirectional: Similar to HostToCotainer, the volume is aware of mount operations. In addition, the volume is propagated back to the host and to all containers of all pods that use the same volume.
        // 
        // Default value: None.
        shared_ptr<string> mountPropagation_ {};
        // The name of the volume. The value must be the same as the Name value in Volumes.
        shared_ptr<string> name_ {};
        // Specifies whether the volume is read-only. Valid values:
        // 
        // - true: Yes.
        // 
        // - false: No.
        // 
        // Default value: false.
        shared_ptr<bool> readOnly_ {};
        // The subpath of the volume.
        shared_ptr<string> subPath_ {};
      };

      class Ports : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ports& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, Ports& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        Ports() = default ;
        Ports(const Ports &) = default ;
        Ports(Ports &&) = default ;
        Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ports() = default ;
        Ports& operator=(const Ports &) = default ;
        Ports& operator=(Ports &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Ports& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Ports& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The port number. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The protocol type. Valid values:
        // 
        // - TCP
        // - UDP
        shared_ptr<string> protocol_ {};
      };

      class EnvironmentVars : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnvironmentVars& obj) { 
          DARABONBA_PTR_TO_JSON(FieldRefFieldPath, fieldRefFieldPath_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, EnvironmentVars& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldRefFieldPath, fieldRefFieldPath_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        EnvironmentVars() = default ;
        EnvironmentVars(const EnvironmentVars &) = default ;
        EnvironmentVars(EnvironmentVars &&) = default ;
        EnvironmentVars(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnvironmentVars() = default ;
        EnvironmentVars& operator=(const EnvironmentVars &) = default ;
        EnvironmentVars& operator=(EnvironmentVars &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldRefFieldPath_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
        // fieldRefFieldPath Field Functions 
        bool hasFieldRefFieldPath() const { return this->fieldRefFieldPath_ != nullptr;};
        void deleteFieldRefFieldPath() { this->fieldRefFieldPath_ = nullptr;};
        inline string getFieldRefFieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldRefFieldPath_, "") };
        inline EnvironmentVars& setFieldRefFieldPath(string fieldRefFieldPath) { DARABONBA_PTR_SET_VALUE(fieldRefFieldPath_, fieldRefFieldPath) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline EnvironmentVars& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline EnvironmentVars& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // >This parameter is unavailable.
        shared_ptr<string> fieldRefFieldPath_ {};
        // The name of the environment variable. The name must be 1 to 128 characters in length and can contain letters, digits, and underscores (_). It cannot start with a digit.
        shared_ptr<string> key_ {};
        // The value of the environment variable. The value must be 0 to 256 characters in length.
        shared_ptr<string> value_ {};
      };

      class SecurityContext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityContext& obj) { 
          DARABONBA_PTR_TO_JSON(Capability, capability_);
          DARABONBA_PTR_TO_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
          DARABONBA_PTR_TO_JSON(RunAsUser, runAsUser_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityContext& obj) { 
          DARABONBA_PTR_FROM_JSON(Capability, capability_);
          DARABONBA_PTR_FROM_JSON(ReadOnlyRootFilesystem, readOnlyRootFilesystem_);
          DARABONBA_PTR_FROM_JSON(RunAsUser, runAsUser_);
        };
        SecurityContext() = default ;
        SecurityContext(const SecurityContext &) = default ;
        SecurityContext(SecurityContext &&) = default ;
        SecurityContext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityContext() = default ;
        SecurityContext& operator=(const SecurityContext &) = default ;
        SecurityContext& operator=(SecurityContext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Capability : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capability& obj) { 
            DARABONBA_PTR_TO_JSON(Add, add_);
          };
          friend void from_json(const Darabonba::Json& j, Capability& obj) { 
            DARABONBA_PTR_FROM_JSON(Add, add_);
          };
          Capability() = default ;
          Capability(const Capability &) = default ;
          Capability(Capability &&) = default ;
          Capability(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capability() = default ;
          Capability& operator=(const Capability &) = default ;
          Capability& operator=(Capability &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->add_ == nullptr; };
          // add Field Functions 
          bool hasAdd() const { return this->add_ != nullptr;};
          void deleteAdd() { this->add_ = nullptr;};
          inline const vector<string> & getAdd() const { DARABONBA_PTR_GET_CONST(add_, vector<string>) };
          inline vector<string> getAdd() { DARABONBA_PTR_GET(add_, vector<string>) };
          inline Capability& setAdd(const vector<string> & add) { DARABONBA_PTR_SET_VALUE(add_, add) };
          inline Capability& setAdd(vector<string> && add) { DARABONBA_PTR_SET_RVALUE(add_, add) };


        protected:
          // Grants specific privileges to processes in the container. Currently, only NET_ADMIN and NET_RAW are supported.
          // 
          // > NET_RAW is not supported by default. To use NET_RAW, submit a ticket.
          shared_ptr<vector<string>> add_ {};
        };

        virtual bool empty() const override { return this->capability_ == nullptr
        && this->readOnlyRootFilesystem_ == nullptr && this->runAsUser_ == nullptr; };
        // capability Field Functions 
        bool hasCapability() const { return this->capability_ != nullptr;};
        void deleteCapability() { this->capability_ = nullptr;};
        inline const SecurityContext::Capability & getCapability() const { DARABONBA_PTR_GET_CONST(capability_, SecurityContext::Capability) };
        inline SecurityContext::Capability getCapability() { DARABONBA_PTR_GET(capability_, SecurityContext::Capability) };
        inline SecurityContext& setCapability(const SecurityContext::Capability & capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };
        inline SecurityContext& setCapability(SecurityContext::Capability && capability) { DARABONBA_PTR_SET_RVALUE(capability_, capability) };


        // readOnlyRootFilesystem Field Functions 
        bool hasReadOnlyRootFilesystem() const { return this->readOnlyRootFilesystem_ != nullptr;};
        void deleteReadOnlyRootFilesystem() { this->readOnlyRootFilesystem_ = nullptr;};
        inline bool getReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(readOnlyRootFilesystem_, false) };
        inline SecurityContext& setReadOnlyRootFilesystem(bool readOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(readOnlyRootFilesystem_, readOnlyRootFilesystem) };


        // runAsUser Field Functions 
        bool hasRunAsUser() const { return this->runAsUser_ != nullptr;};
        void deleteRunAsUser() { this->runAsUser_ = nullptr;};
        inline int64_t getRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(runAsUser_, 0L) };
        inline SecurityContext& setRunAsUser(int64_t runAsUser) { DARABONBA_PTR_SET_VALUE(runAsUser_, runAsUser) };


      protected:
        shared_ptr<SecurityContext::Capability> capability_ {};
        // Specifies whether the root file system of the container is read-only. Currently, only true is supported.
        shared_ptr<bool> readOnlyRootFilesystem_ {};
        // The user ID used to run the container.
        shared_ptr<int64_t> runAsUser_ {};
      };

      class ReadinessProbe : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReadinessProbe& obj) { 
          DARABONBA_PTR_TO_JSON(Exec, exec_);
          DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
          DARABONBA_PTR_TO_JSON(HttpGet, httpGet_);
          DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
          DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
          DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
          DARABONBA_PTR_TO_JSON(TcpSocket, tcpSocket_);
          DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, ReadinessProbe& obj) { 
          DARABONBA_PTR_FROM_JSON(Exec, exec_);
          DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
          DARABONBA_PTR_FROM_JSON(HttpGet, httpGet_);
          DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
          DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
          DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
          DARABONBA_PTR_FROM_JSON(TcpSocket, tcpSocket_);
          DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        ReadinessProbe() = default ;
        ReadinessProbe(const ReadinessProbe &) = default ;
        ReadinessProbe(ReadinessProbe &&) = default ;
        ReadinessProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReadinessProbe() = default ;
        ReadinessProbe& operator=(const ReadinessProbe &) = default ;
        ReadinessProbe& operator=(ReadinessProbe &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TcpSocket : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TcpSocket& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
          };
          friend void from_json(const Darabonba::Json& j, TcpSocket& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
          };
          TcpSocket() = default ;
          TcpSocket(const TcpSocket &) = default ;
          TcpSocket(TcpSocket &&) = default ;
          TcpSocket(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TcpSocket() = default ;
          TcpSocket& operator=(const TcpSocket &) = default ;
          TcpSocket& operator=(TcpSocket &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->port_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline TcpSocket& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        protected:
          // The port number on which the TCP socket probe performs health checks.
          shared_ptr<int32_t> port_ {};
        };

        class HttpGet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpGet& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Scheme, scheme_);
          };
          friend void from_json(const Darabonba::Json& j, HttpGet& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
          };
          HttpGet() = default ;
          HttpGet(const HttpGet &) = default ;
          HttpGet(HttpGet &&) = default ;
          HttpGet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpGet() = default ;
          HttpGet& operator=(const HttpGet &) = default ;
          HttpGet& operator=(HttpGet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr
        && this->port_ == nullptr && this->scheme_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline HttpGet& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline HttpGet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // scheme Field Functions 
          bool hasScheme() const { return this->scheme_ != nullptr;};
          void deleteScheme() { this->scheme_ = nullptr;};
          inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
          inline HttpGet& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


        protected:
          // The path accessed by the HTTP GET request when the HTTP probe is used for health checks.
          shared_ptr<string> path_ {};
          // The port number on which the HTTP GET probe performs health checks.
          shared_ptr<int32_t> port_ {};
          // The protocol type used for the HTTP GET request when the HTTP probe is used for health checks. Valid values:
          // 
          // - HTTP
          // - HTTPS
          shared_ptr<string> scheme_ {};
        };

        class Exec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Exec& obj) { 
            DARABONBA_PTR_TO_JSON(Commands, commands_);
          };
          friend void from_json(const Darabonba::Json& j, Exec& obj) { 
            DARABONBA_PTR_FROM_JSON(Commands, commands_);
          };
          Exec() = default ;
          Exec(const Exec &) = default ;
          Exec(Exec &&) = default ;
          Exec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Exec() = default ;
          Exec& operator=(const Exec &) = default ;
          Exec& operator=(Exec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->commands_ == nullptr; };
          // commands Field Functions 
          bool hasCommands() const { return this->commands_ != nullptr;};
          void deleteCommands() { this->commands_ = nullptr;};
          inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
          inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
          inline Exec& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
          inline Exec& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        protected:
          // The command executed in the container when the exec probe is used for health checks.
          shared_ptr<vector<string>> commands_ {};
        };

        virtual bool empty() const override { return this->exec_ == nullptr
        && this->failureThreshold_ == nullptr && this->httpGet_ == nullptr && this->initialDelaySeconds_ == nullptr && this->periodSeconds_ == nullptr && this->successThreshold_ == nullptr
        && this->tcpSocket_ == nullptr && this->timeoutSeconds_ == nullptr; };
        // exec Field Functions 
        bool hasExec() const { return this->exec_ != nullptr;};
        void deleteExec() { this->exec_ = nullptr;};
        inline const ReadinessProbe::Exec & getExec() const { DARABONBA_PTR_GET_CONST(exec_, ReadinessProbe::Exec) };
        inline ReadinessProbe::Exec getExec() { DARABONBA_PTR_GET(exec_, ReadinessProbe::Exec) };
        inline ReadinessProbe& setExec(const ReadinessProbe::Exec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
        inline ReadinessProbe& setExec(ReadinessProbe::Exec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


        // failureThreshold Field Functions 
        bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
        void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
        inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
        inline ReadinessProbe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


        // httpGet Field Functions 
        bool hasHttpGet() const { return this->httpGet_ != nullptr;};
        void deleteHttpGet() { this->httpGet_ = nullptr;};
        inline const ReadinessProbe::HttpGet & getHttpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, ReadinessProbe::HttpGet) };
        inline ReadinessProbe::HttpGet getHttpGet() { DARABONBA_PTR_GET(httpGet_, ReadinessProbe::HttpGet) };
        inline ReadinessProbe& setHttpGet(const ReadinessProbe::HttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
        inline ReadinessProbe& setHttpGet(ReadinessProbe::HttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


        // initialDelaySeconds Field Functions 
        bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
        void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
        inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
        inline ReadinessProbe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


        // periodSeconds Field Functions 
        bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
        void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
        inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
        inline ReadinessProbe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


        // successThreshold Field Functions 
        bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
        void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
        inline int32_t getSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
        inline ReadinessProbe& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


        // tcpSocket Field Functions 
        bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
        void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
        inline const ReadinessProbe::TcpSocket & getTcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, ReadinessProbe::TcpSocket) };
        inline ReadinessProbe::TcpSocket getTcpSocket() { DARABONBA_PTR_GET(tcpSocket_, ReadinessProbe::TcpSocket) };
        inline ReadinessProbe& setTcpSocket(const ReadinessProbe::TcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
        inline ReadinessProbe& setTcpSocket(ReadinessProbe::TcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


        // timeoutSeconds Field Functions 
        bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
        void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
        inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
        inline ReadinessProbe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


      protected:
        shared_ptr<ReadinessProbe::Exec> exec_ {};
        // The minimum consecutive failures for the probe to be considered failed after having succeeded. Default value: 3.
        shared_ptr<int32_t> failureThreshold_ {};
        shared_ptr<ReadinessProbe::HttpGet> httpGet_ {};
        // The number of seconds after the container has started before the probe is initiated.
        shared_ptr<int32_t> initialDelaySeconds_ {};
        // The interval at which the probe is performed in seconds. Default value: 10. Minimum value: 1.
        shared_ptr<int32_t> periodSeconds_ {};
        // The minimum consecutive successes for the probe to be considered successful after having failed. Default value: 1. The current value must be 1.
        shared_ptr<int32_t> successThreshold_ {};
        shared_ptr<ReadinessProbe::TcpSocket> tcpSocket_ {};
        // The timeout period for the probe in seconds. Default value: 1. Minimum value: 1.
        shared_ptr<int32_t> timeoutSeconds_ {};
      };

      class LivenessProbe : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LivenessProbe& obj) { 
          DARABONBA_PTR_TO_JSON(Exec, exec_);
          DARABONBA_PTR_TO_JSON(FailureThreshold, failureThreshold_);
          DARABONBA_PTR_TO_JSON(HttpGet, httpGet_);
          DARABONBA_PTR_TO_JSON(InitialDelaySeconds, initialDelaySeconds_);
          DARABONBA_PTR_TO_JSON(PeriodSeconds, periodSeconds_);
          DARABONBA_PTR_TO_JSON(SuccessThreshold, successThreshold_);
          DARABONBA_PTR_TO_JSON(TcpSocket, tcpSocket_);
          DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        friend void from_json(const Darabonba::Json& j, LivenessProbe& obj) { 
          DARABONBA_PTR_FROM_JSON(Exec, exec_);
          DARABONBA_PTR_FROM_JSON(FailureThreshold, failureThreshold_);
          DARABONBA_PTR_FROM_JSON(HttpGet, httpGet_);
          DARABONBA_PTR_FROM_JSON(InitialDelaySeconds, initialDelaySeconds_);
          DARABONBA_PTR_FROM_JSON(PeriodSeconds, periodSeconds_);
          DARABONBA_PTR_FROM_JSON(SuccessThreshold, successThreshold_);
          DARABONBA_PTR_FROM_JSON(TcpSocket, tcpSocket_);
          DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
        };
        LivenessProbe() = default ;
        LivenessProbe(const LivenessProbe &) = default ;
        LivenessProbe(LivenessProbe &&) = default ;
        LivenessProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LivenessProbe() = default ;
        LivenessProbe& operator=(const LivenessProbe &) = default ;
        LivenessProbe& operator=(LivenessProbe &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TcpSocket : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TcpSocket& obj) { 
            DARABONBA_PTR_TO_JSON(Port, port_);
          };
          friend void from_json(const Darabonba::Json& j, TcpSocket& obj) { 
            DARABONBA_PTR_FROM_JSON(Port, port_);
          };
          TcpSocket() = default ;
          TcpSocket(const TcpSocket &) = default ;
          TcpSocket(TcpSocket &&) = default ;
          TcpSocket(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TcpSocket() = default ;
          TcpSocket& operator=(const TcpSocket &) = default ;
          TcpSocket& operator=(TcpSocket &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->port_ == nullptr; };
          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline TcpSocket& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        protected:
          // The port number on which the TCP socket probe performs health checks.
          shared_ptr<int32_t> port_ {};
        };

        class HttpGet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpGet& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Scheme, scheme_);
          };
          friend void from_json(const Darabonba::Json& j, HttpGet& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
          };
          HttpGet() = default ;
          HttpGet(const HttpGet &) = default ;
          HttpGet(HttpGet &&) = default ;
          HttpGet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpGet() = default ;
          HttpGet& operator=(const HttpGet &) = default ;
          HttpGet& operator=(HttpGet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr
        && this->port_ == nullptr && this->scheme_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline HttpGet& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline HttpGet& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // scheme Field Functions 
          bool hasScheme() const { return this->scheme_ != nullptr;};
          void deleteScheme() { this->scheme_ = nullptr;};
          inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
          inline HttpGet& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


        protected:
          // The path accessed by the HTTP GET request when the HTTP probe is used for health checks.
          shared_ptr<string> path_ {};
          // The port number on which the HTTP GET probe performs health checks.
          shared_ptr<int32_t> port_ {};
          // The protocol type used for the HTTP GET request when the HTTP probe is used for health checks. Valid values:
          // 
          // - HTTP
          // - HTTPS
          shared_ptr<string> scheme_ {};
        };

        class Exec : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Exec& obj) { 
            DARABONBA_PTR_TO_JSON(Commands, commands_);
          };
          friend void from_json(const Darabonba::Json& j, Exec& obj) { 
            DARABONBA_PTR_FROM_JSON(Commands, commands_);
          };
          Exec() = default ;
          Exec(const Exec &) = default ;
          Exec(Exec &&) = default ;
          Exec(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Exec() = default ;
          Exec& operator=(const Exec &) = default ;
          Exec& operator=(Exec &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->commands_ == nullptr; };
          // commands Field Functions 
          bool hasCommands() const { return this->commands_ != nullptr;};
          void deleteCommands() { this->commands_ = nullptr;};
          inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
          inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
          inline Exec& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
          inline Exec& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


        protected:
          // The command executed in the container when the exec probe is used for health checks.
          shared_ptr<vector<string>> commands_ {};
        };

        virtual bool empty() const override { return this->exec_ == nullptr
        && this->failureThreshold_ == nullptr && this->httpGet_ == nullptr && this->initialDelaySeconds_ == nullptr && this->periodSeconds_ == nullptr && this->successThreshold_ == nullptr
        && this->tcpSocket_ == nullptr && this->timeoutSeconds_ == nullptr; };
        // exec Field Functions 
        bool hasExec() const { return this->exec_ != nullptr;};
        void deleteExec() { this->exec_ = nullptr;};
        inline const LivenessProbe::Exec & getExec() const { DARABONBA_PTR_GET_CONST(exec_, LivenessProbe::Exec) };
        inline LivenessProbe::Exec getExec() { DARABONBA_PTR_GET(exec_, LivenessProbe::Exec) };
        inline LivenessProbe& setExec(const LivenessProbe::Exec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
        inline LivenessProbe& setExec(LivenessProbe::Exec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


        // failureThreshold Field Functions 
        bool hasFailureThreshold() const { return this->failureThreshold_ != nullptr;};
        void deleteFailureThreshold() { this->failureThreshold_ = nullptr;};
        inline int32_t getFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(failureThreshold_, 0) };
        inline LivenessProbe& setFailureThreshold(int32_t failureThreshold) { DARABONBA_PTR_SET_VALUE(failureThreshold_, failureThreshold) };


        // httpGet Field Functions 
        bool hasHttpGet() const { return this->httpGet_ != nullptr;};
        void deleteHttpGet() { this->httpGet_ = nullptr;};
        inline const LivenessProbe::HttpGet & getHttpGet() const { DARABONBA_PTR_GET_CONST(httpGet_, LivenessProbe::HttpGet) };
        inline LivenessProbe::HttpGet getHttpGet() { DARABONBA_PTR_GET(httpGet_, LivenessProbe::HttpGet) };
        inline LivenessProbe& setHttpGet(const LivenessProbe::HttpGet & httpGet) { DARABONBA_PTR_SET_VALUE(httpGet_, httpGet) };
        inline LivenessProbe& setHttpGet(LivenessProbe::HttpGet && httpGet) { DARABONBA_PTR_SET_RVALUE(httpGet_, httpGet) };


        // initialDelaySeconds Field Functions 
        bool hasInitialDelaySeconds() const { return this->initialDelaySeconds_ != nullptr;};
        void deleteInitialDelaySeconds() { this->initialDelaySeconds_ = nullptr;};
        inline int32_t getInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(initialDelaySeconds_, 0) };
        inline LivenessProbe& setInitialDelaySeconds(int32_t initialDelaySeconds) { DARABONBA_PTR_SET_VALUE(initialDelaySeconds_, initialDelaySeconds) };


        // periodSeconds Field Functions 
        bool hasPeriodSeconds() const { return this->periodSeconds_ != nullptr;};
        void deletePeriodSeconds() { this->periodSeconds_ = nullptr;};
        inline int32_t getPeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(periodSeconds_, 0) };
        inline LivenessProbe& setPeriodSeconds(int32_t periodSeconds) { DARABONBA_PTR_SET_VALUE(periodSeconds_, periodSeconds) };


        // successThreshold Field Functions 
        bool hasSuccessThreshold() const { return this->successThreshold_ != nullptr;};
        void deleteSuccessThreshold() { this->successThreshold_ = nullptr;};
        inline int32_t getSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(successThreshold_, 0) };
        inline LivenessProbe& setSuccessThreshold(int32_t successThreshold) { DARABONBA_PTR_SET_VALUE(successThreshold_, successThreshold) };


        // tcpSocket Field Functions 
        bool hasTcpSocket() const { return this->tcpSocket_ != nullptr;};
        void deleteTcpSocket() { this->tcpSocket_ = nullptr;};
        inline const LivenessProbe::TcpSocket & getTcpSocket() const { DARABONBA_PTR_GET_CONST(tcpSocket_, LivenessProbe::TcpSocket) };
        inline LivenessProbe::TcpSocket getTcpSocket() { DARABONBA_PTR_GET(tcpSocket_, LivenessProbe::TcpSocket) };
        inline LivenessProbe& setTcpSocket(const LivenessProbe::TcpSocket & tcpSocket) { DARABONBA_PTR_SET_VALUE(tcpSocket_, tcpSocket) };
        inline LivenessProbe& setTcpSocket(LivenessProbe::TcpSocket && tcpSocket) { DARABONBA_PTR_SET_RVALUE(tcpSocket_, tcpSocket) };


        // timeoutSeconds Field Functions 
        bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
        void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
        inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
        inline LivenessProbe& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


      protected:
        shared_ptr<LivenessProbe::Exec> exec_ {};
        // The minimum consecutive failures for the probe to be considered failed after having succeeded.
        // 
        // Default value: 3.
        shared_ptr<int32_t> failureThreshold_ {};
        shared_ptr<LivenessProbe::HttpGet> httpGet_ {};
        // The number of seconds after the container has started before the probe is initiated.
        shared_ptr<int32_t> initialDelaySeconds_ {};
        // The interval at which the probe is performed in seconds. Default value: 10. Minimum value: 1.
        shared_ptr<int32_t> periodSeconds_ {};
        // The minimum consecutive successes for the probe to be considered successful after having failed. Default value: 1. The current value must be 1.
        shared_ptr<int32_t> successThreshold_ {};
        shared_ptr<LivenessProbe::TcpSocket> tcpSocket_ {};
        // The timeout period for the probe in seconds. Default value: 1. Minimum value: 1.
        shared_ptr<int32_t> timeoutSeconds_ {};
      };

      virtual bool empty() const override { return this->livenessProbe_ == nullptr
        && this->readinessProbe_ == nullptr && this->securityContext_ == nullptr && this->args_ == nullptr && this->commands_ == nullptr && this->cpu_ == nullptr
        && this->environmentVars_ == nullptr && this->gpu_ == nullptr && this->image_ == nullptr && this->imagePullPolicy_ == nullptr && this->lifecyclePostStartHandlerExecs_ == nullptr
        && this->lifecyclePostStartHandlerHttpGetHost_ == nullptr && this->lifecyclePostStartHandlerHttpGetPath_ == nullptr && this->lifecyclePostStartHandlerHttpGetPort_ == nullptr && this->lifecyclePostStartHandlerHttpGetScheme_ == nullptr && this->lifecyclePostStartHandlerTcpSocketHost_ == nullptr
        && this->lifecyclePostStartHandlerTcpSocketPort_ == nullptr && this->lifecyclePreStopHandlerExecs_ == nullptr && this->lifecyclePreStopHandlerHttpGetHost_ == nullptr && this->lifecyclePreStopHandlerHttpGetPath_ == nullptr && this->lifecyclePreStopHandlerHttpGetPort_ == nullptr
        && this->lifecyclePreStopHandlerHttpGetScheme_ == nullptr && this->lifecyclePreStopHandlerTcpSocketHost_ == nullptr && this->lifecyclePreStopHandlerTcpSocketPort_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr
        && this->ports_ == nullptr && this->stdin_ == nullptr && this->stdinOnce_ == nullptr && this->tty_ == nullptr && this->volumeMounts_ == nullptr
        && this->workingDir_ == nullptr; };
      // livenessProbe Field Functions 
      bool hasLivenessProbe() const { return this->livenessProbe_ != nullptr;};
      void deleteLivenessProbe() { this->livenessProbe_ = nullptr;};
      inline const Containers::LivenessProbe & getLivenessProbe() const { DARABONBA_PTR_GET_CONST(livenessProbe_, Containers::LivenessProbe) };
      inline Containers::LivenessProbe getLivenessProbe() { DARABONBA_PTR_GET(livenessProbe_, Containers::LivenessProbe) };
      inline Containers& setLivenessProbe(const Containers::LivenessProbe & livenessProbe) { DARABONBA_PTR_SET_VALUE(livenessProbe_, livenessProbe) };
      inline Containers& setLivenessProbe(Containers::LivenessProbe && livenessProbe) { DARABONBA_PTR_SET_RVALUE(livenessProbe_, livenessProbe) };


      // readinessProbe Field Functions 
      bool hasReadinessProbe() const { return this->readinessProbe_ != nullptr;};
      void deleteReadinessProbe() { this->readinessProbe_ = nullptr;};
      inline const Containers::ReadinessProbe & getReadinessProbe() const { DARABONBA_PTR_GET_CONST(readinessProbe_, Containers::ReadinessProbe) };
      inline Containers::ReadinessProbe getReadinessProbe() { DARABONBA_PTR_GET(readinessProbe_, Containers::ReadinessProbe) };
      inline Containers& setReadinessProbe(const Containers::ReadinessProbe & readinessProbe) { DARABONBA_PTR_SET_VALUE(readinessProbe_, readinessProbe) };
      inline Containers& setReadinessProbe(Containers::ReadinessProbe && readinessProbe) { DARABONBA_PTR_SET_RVALUE(readinessProbe_, readinessProbe) };


      // securityContext Field Functions 
      bool hasSecurityContext() const { return this->securityContext_ != nullptr;};
      void deleteSecurityContext() { this->securityContext_ = nullptr;};
      inline const Containers::SecurityContext & getSecurityContext() const { DARABONBA_PTR_GET_CONST(securityContext_, Containers::SecurityContext) };
      inline Containers::SecurityContext getSecurityContext() { DARABONBA_PTR_GET(securityContext_, Containers::SecurityContext) };
      inline Containers& setSecurityContext(const Containers::SecurityContext & securityContext) { DARABONBA_PTR_SET_VALUE(securityContext_, securityContext) };
      inline Containers& setSecurityContext(Containers::SecurityContext && securityContext) { DARABONBA_PTR_SET_RVALUE(securityContext_, securityContext) };


      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
      inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
      inline Containers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
      inline Containers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


      // commands Field Functions 
      bool hasCommands() const { return this->commands_ != nullptr;};
      void deleteCommands() { this->commands_ = nullptr;};
      inline const vector<string> & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
      inline vector<string> getCommands() { DARABONBA_PTR_GET(commands_, vector<string>) };
      inline Containers& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
      inline Containers& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline Containers& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // environmentVars Field Functions 
      bool hasEnvironmentVars() const { return this->environmentVars_ != nullptr;};
      void deleteEnvironmentVars() { this->environmentVars_ = nullptr;};
      inline const vector<Containers::EnvironmentVars> & getEnvironmentVars() const { DARABONBA_PTR_GET_CONST(environmentVars_, vector<Containers::EnvironmentVars>) };
      inline vector<Containers::EnvironmentVars> getEnvironmentVars() { DARABONBA_PTR_GET(environmentVars_, vector<Containers::EnvironmentVars>) };
      inline Containers& setEnvironmentVars(const vector<Containers::EnvironmentVars> & environmentVars) { DARABONBA_PTR_SET_VALUE(environmentVars_, environmentVars) };
      inline Containers& setEnvironmentVars(vector<Containers::EnvironmentVars> && environmentVars) { DARABONBA_PTR_SET_RVALUE(environmentVars_, environmentVars) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int32_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0) };
      inline Containers& setGpu(int32_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline Containers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


      // imagePullPolicy Field Functions 
      bool hasImagePullPolicy() const { return this->imagePullPolicy_ != nullptr;};
      void deleteImagePullPolicy() { this->imagePullPolicy_ = nullptr;};
      inline string getImagePullPolicy() const { DARABONBA_PTR_GET_DEFAULT(imagePullPolicy_, "") };
      inline Containers& setImagePullPolicy(string imagePullPolicy) { DARABONBA_PTR_SET_VALUE(imagePullPolicy_, imagePullPolicy) };


      // lifecyclePostStartHandlerExecs Field Functions 
      bool hasLifecyclePostStartHandlerExecs() const { return this->lifecyclePostStartHandlerExecs_ != nullptr;};
      void deleteLifecyclePostStartHandlerExecs() { this->lifecyclePostStartHandlerExecs_ = nullptr;};
      inline const vector<string> & getLifecyclePostStartHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePostStartHandlerExecs_, vector<string>) };
      inline vector<string> getLifecyclePostStartHandlerExecs() { DARABONBA_PTR_GET(lifecyclePostStartHandlerExecs_, vector<string>) };
      inline Containers& setLifecyclePostStartHandlerExecs(const vector<string> & lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };
      inline Containers& setLifecyclePostStartHandlerExecs(vector<string> && lifecyclePostStartHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePostStartHandlerExecs_, lifecyclePostStartHandlerExecs) };


      // lifecyclePostStartHandlerHttpGetHost Field Functions 
      bool hasLifecyclePostStartHandlerHttpGetHost() const { return this->lifecyclePostStartHandlerHttpGetHost_ != nullptr;};
      void deleteLifecyclePostStartHandlerHttpGetHost() { this->lifecyclePostStartHandlerHttpGetHost_ = nullptr;};
      inline string getLifecyclePostStartHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetHost_, "") };
      inline Containers& setLifecyclePostStartHandlerHttpGetHost(string lifecyclePostStartHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetHost_, lifecyclePostStartHandlerHttpGetHost) };


      // lifecyclePostStartHandlerHttpGetPath Field Functions 
      bool hasLifecyclePostStartHandlerHttpGetPath() const { return this->lifecyclePostStartHandlerHttpGetPath_ != nullptr;};
      void deleteLifecyclePostStartHandlerHttpGetPath() { this->lifecyclePostStartHandlerHttpGetPath_ = nullptr;};
      inline string getLifecyclePostStartHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPath_, "") };
      inline Containers& setLifecyclePostStartHandlerHttpGetPath(string lifecyclePostStartHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPath_, lifecyclePostStartHandlerHttpGetPath) };


      // lifecyclePostStartHandlerHttpGetPort Field Functions 
      bool hasLifecyclePostStartHandlerHttpGetPort() const { return this->lifecyclePostStartHandlerHttpGetPort_ != nullptr;};
      void deleteLifecyclePostStartHandlerHttpGetPort() { this->lifecyclePostStartHandlerHttpGetPort_ = nullptr;};
      inline int32_t getLifecyclePostStartHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetPort_, 0) };
      inline Containers& setLifecyclePostStartHandlerHttpGetPort(int32_t lifecyclePostStartHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetPort_, lifecyclePostStartHandlerHttpGetPort) };


      // lifecyclePostStartHandlerHttpGetScheme Field Functions 
      bool hasLifecyclePostStartHandlerHttpGetScheme() const { return this->lifecyclePostStartHandlerHttpGetScheme_ != nullptr;};
      void deleteLifecyclePostStartHandlerHttpGetScheme() { this->lifecyclePostStartHandlerHttpGetScheme_ = nullptr;};
      inline string getLifecyclePostStartHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerHttpGetScheme_, "") };
      inline Containers& setLifecyclePostStartHandlerHttpGetScheme(string lifecyclePostStartHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerHttpGetScheme_, lifecyclePostStartHandlerHttpGetScheme) };


      // lifecyclePostStartHandlerTcpSocketHost Field Functions 
      bool hasLifecyclePostStartHandlerTcpSocketHost() const { return this->lifecyclePostStartHandlerTcpSocketHost_ != nullptr;};
      void deleteLifecyclePostStartHandlerTcpSocketHost() { this->lifecyclePostStartHandlerTcpSocketHost_ = nullptr;};
      inline string getLifecyclePostStartHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketHost_, "") };
      inline Containers& setLifecyclePostStartHandlerTcpSocketHost(string lifecyclePostStartHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketHost_, lifecyclePostStartHandlerTcpSocketHost) };


      // lifecyclePostStartHandlerTcpSocketPort Field Functions 
      bool hasLifecyclePostStartHandlerTcpSocketPort() const { return this->lifecyclePostStartHandlerTcpSocketPort_ != nullptr;};
      void deleteLifecyclePostStartHandlerTcpSocketPort() { this->lifecyclePostStartHandlerTcpSocketPort_ = nullptr;};
      inline int32_t getLifecyclePostStartHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePostStartHandlerTcpSocketPort_, 0) };
      inline Containers& setLifecyclePostStartHandlerTcpSocketPort(int32_t lifecyclePostStartHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePostStartHandlerTcpSocketPort_, lifecyclePostStartHandlerTcpSocketPort) };


      // lifecyclePreStopHandlerExecs Field Functions 
      bool hasLifecyclePreStopHandlerExecs() const { return this->lifecyclePreStopHandlerExecs_ != nullptr;};
      void deleteLifecyclePreStopHandlerExecs() { this->lifecyclePreStopHandlerExecs_ = nullptr;};
      inline const vector<string> & getLifecyclePreStopHandlerExecs() const { DARABONBA_PTR_GET_CONST(lifecyclePreStopHandlerExecs_, vector<string>) };
      inline vector<string> getLifecyclePreStopHandlerExecs() { DARABONBA_PTR_GET(lifecyclePreStopHandlerExecs_, vector<string>) };
      inline Containers& setLifecyclePreStopHandlerExecs(const vector<string> & lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };
      inline Containers& setLifecyclePreStopHandlerExecs(vector<string> && lifecyclePreStopHandlerExecs) { DARABONBA_PTR_SET_RVALUE(lifecyclePreStopHandlerExecs_, lifecyclePreStopHandlerExecs) };


      // lifecyclePreStopHandlerHttpGetHost Field Functions 
      bool hasLifecyclePreStopHandlerHttpGetHost() const { return this->lifecyclePreStopHandlerHttpGetHost_ != nullptr;};
      void deleteLifecyclePreStopHandlerHttpGetHost() { this->lifecyclePreStopHandlerHttpGetHost_ = nullptr;};
      inline string getLifecyclePreStopHandlerHttpGetHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetHost_, "") };
      inline Containers& setLifecyclePreStopHandlerHttpGetHost(string lifecyclePreStopHandlerHttpGetHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetHost_, lifecyclePreStopHandlerHttpGetHost) };


      // lifecyclePreStopHandlerHttpGetPath Field Functions 
      bool hasLifecyclePreStopHandlerHttpGetPath() const { return this->lifecyclePreStopHandlerHttpGetPath_ != nullptr;};
      void deleteLifecyclePreStopHandlerHttpGetPath() { this->lifecyclePreStopHandlerHttpGetPath_ = nullptr;};
      inline string getLifecyclePreStopHandlerHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPath_, "") };
      inline Containers& setLifecyclePreStopHandlerHttpGetPath(string lifecyclePreStopHandlerHttpGetPath) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPath_, lifecyclePreStopHandlerHttpGetPath) };


      // lifecyclePreStopHandlerHttpGetPort Field Functions 
      bool hasLifecyclePreStopHandlerHttpGetPort() const { return this->lifecyclePreStopHandlerHttpGetPort_ != nullptr;};
      void deleteLifecyclePreStopHandlerHttpGetPort() { this->lifecyclePreStopHandlerHttpGetPort_ = nullptr;};
      inline int32_t getLifecyclePreStopHandlerHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetPort_, 0) };
      inline Containers& setLifecyclePreStopHandlerHttpGetPort(int32_t lifecyclePreStopHandlerHttpGetPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetPort_, lifecyclePreStopHandlerHttpGetPort) };


      // lifecyclePreStopHandlerHttpGetScheme Field Functions 
      bool hasLifecyclePreStopHandlerHttpGetScheme() const { return this->lifecyclePreStopHandlerHttpGetScheme_ != nullptr;};
      void deleteLifecyclePreStopHandlerHttpGetScheme() { this->lifecyclePreStopHandlerHttpGetScheme_ = nullptr;};
      inline string getLifecyclePreStopHandlerHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerHttpGetScheme_, "") };
      inline Containers& setLifecyclePreStopHandlerHttpGetScheme(string lifecyclePreStopHandlerHttpGetScheme) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerHttpGetScheme_, lifecyclePreStopHandlerHttpGetScheme) };


      // lifecyclePreStopHandlerTcpSocketHost Field Functions 
      bool hasLifecyclePreStopHandlerTcpSocketHost() const { return this->lifecyclePreStopHandlerTcpSocketHost_ != nullptr;};
      void deleteLifecyclePreStopHandlerTcpSocketHost() { this->lifecyclePreStopHandlerTcpSocketHost_ = nullptr;};
      inline string getLifecyclePreStopHandlerTcpSocketHost() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketHost_, "") };
      inline Containers& setLifecyclePreStopHandlerTcpSocketHost(string lifecyclePreStopHandlerTcpSocketHost) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketHost_, lifecyclePreStopHandlerTcpSocketHost) };


      // lifecyclePreStopHandlerTcpSocketPort Field Functions 
      bool hasLifecyclePreStopHandlerTcpSocketPort() const { return this->lifecyclePreStopHandlerTcpSocketPort_ != nullptr;};
      void deleteLifecyclePreStopHandlerTcpSocketPort() { this->lifecyclePreStopHandlerTcpSocketPort_ = nullptr;};
      inline int32_t getLifecyclePreStopHandlerTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(lifecyclePreStopHandlerTcpSocketPort_, 0) };
      inline Containers& setLifecyclePreStopHandlerTcpSocketPort(int32_t lifecyclePreStopHandlerTcpSocketPort) { DARABONBA_PTR_SET_VALUE(lifecyclePreStopHandlerTcpSocketPort_, lifecyclePreStopHandlerTcpSocketPort) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline Containers& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Containers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ports Field Functions 
      bool hasPorts() const { return this->ports_ != nullptr;};
      void deletePorts() { this->ports_ = nullptr;};
      inline const vector<Containers::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<Containers::Ports>) };
      inline vector<Containers::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<Containers::Ports>) };
      inline Containers& setPorts(const vector<Containers::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
      inline Containers& setPorts(vector<Containers::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


      // stdin Field Functions 
      bool hasStdin() const { return this->stdin_ != nullptr;};
      void deleteStdin() { this->stdin_ = nullptr;};
      inline bool getStdin() const { DARABONBA_PTR_GET_DEFAULT(stdin_, false) };
      inline Containers& setStdin(bool stdin) { DARABONBA_PTR_SET_VALUE(stdin_, stdin) };


      // stdinOnce Field Functions 
      bool hasStdinOnce() const { return this->stdinOnce_ != nullptr;};
      void deleteStdinOnce() { this->stdinOnce_ = nullptr;};
      inline bool getStdinOnce() const { DARABONBA_PTR_GET_DEFAULT(stdinOnce_, false) };
      inline Containers& setStdinOnce(bool stdinOnce) { DARABONBA_PTR_SET_VALUE(stdinOnce_, stdinOnce) };


      // tty Field Functions 
      bool hasTty() const { return this->tty_ != nullptr;};
      void deleteTty() { this->tty_ = nullptr;};
      inline bool getTty() const { DARABONBA_PTR_GET_DEFAULT(tty_, false) };
      inline Containers& setTty(bool tty) { DARABONBA_PTR_SET_VALUE(tty_, tty) };


      // volumeMounts Field Functions 
      bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
      void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
      inline const vector<Containers::VolumeMounts> & getVolumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<Containers::VolumeMounts>) };
      inline vector<Containers::VolumeMounts> getVolumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<Containers::VolumeMounts>) };
      inline Containers& setVolumeMounts(const vector<Containers::VolumeMounts> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
      inline Containers& setVolumeMounts(vector<Containers::VolumeMounts> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


      // workingDir Field Functions 
      bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
      void deleteWorkingDir() { this->workingDir_ = nullptr;};
      inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
      inline Containers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


    protected:
      shared_ptr<Containers::LivenessProbe> livenessProbe_ {};
      shared_ptr<Containers::ReadinessProbe> readinessProbe_ {};
      shared_ptr<Containers::SecurityContext> securityContext_ {};
      // The arguments for the container startup command. A maximum of 10 arguments are supported.
      shared_ptr<vector<string>> args_ {};
      // The startup commands for the container. A maximum of 20 commands are supported. Each command can contain up to 256 characters.
      shared_ptr<vector<string>> commands_ {};
      // The number of CPU cores allocated to the container.
      shared_ptr<float> cpu_ {};
      // The environment variable information.
      shared_ptr<vector<Containers::EnvironmentVars>> environmentVars_ {};
      // The number of GPUs allocated to the container.
      shared_ptr<int32_t> gpu_ {};
      // The container image. You can pull images from an image repository such as Docker Hub and Alibaba Cloud Container Registry (ACR). When you pull an image over the Internet, if no NAT gateway is created in the VPC, you must associate the ECI instance with an EIP.
      shared_ptr<string> image_ {};
      // The image pull policy for the container. Valid values:
      // 
      // - Always: Always pulls the image.
      // - IfNotPresent: Pulls the image only if it is not present locally.
      // - Never: Never pulls the image. Only local images are used.
      // 
      // > If image caching is enabled, ImagePullPolicy is overridden to Always when the container is created.
      shared_ptr<string> imagePullPolicy_ {};
      // The command executed in the container when the command line method is used to configure the postStart callback function.
      shared_ptr<vector<string>> lifecyclePostStartHandlerExecs_ {};
      // The host address that receives the HTTP GET request when the HTTP request method is used to configure the postStart callback function.
      shared_ptr<string> lifecyclePostStartHandlerHttpGetHost_ {};
      // The path accessed by the HTTP GET request when the HTTP request method is used to configure the postStart callback function.
      shared_ptr<string> lifecyclePostStartHandlerHttpGetPath_ {};
      // The port number checked by the HTTP GET request when the HTTP request method is used to configure the postStart callback function.
      shared_ptr<int32_t> lifecyclePostStartHandlerHttpGetPort_ {};
      // The protocol type used for the HTTP GET request when the HTTP request method is used to configure the postStart callback function. Valid values:
      // 
      // - HTTP
      // - HTTPS
      shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme_ {};
      // The host address checked by the TCP socket when the TCP socket method is used to configure the postStart callback function.
      shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost_ {};
      // The port checked by the TCP socket when the TCP socket method is used to configure the postStart callback function.
      shared_ptr<int32_t> lifecyclePostStartHandlerTcpSocketPort_ {};
      // The command executed in the container when the command line method is used to configure the preStop callback function.
      shared_ptr<vector<string>> lifecyclePreStopHandlerExecs_ {};
      // The host address that receives the HTTP GET request when the HTTP request method is used to configure the preStop callback function.
      shared_ptr<string> lifecyclePreStopHandlerHttpGetHost_ {};
      // The path accessed by the HTTP GET request when the HTTP request method is used to configure the preStop callback function.
      shared_ptr<string> lifecyclePreStopHandlerHttpGetPath_ {};
      // The port number checked by the HTTP GET request when the HTTP request method is used to configure the preStop callback function.
      shared_ptr<int32_t> lifecyclePreStopHandlerHttpGetPort_ {};
      // The protocol type used for the HTTP GET request when the HTTP request method is used to configure the preStop callback function. Valid values:
      // 
      // - HTTP
      // - HTTPS
      shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme_ {};
      // The host address checked by the TCP socket when the TCP socket method is used to configure the preStop callback function.
      shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost_ {};
      // The port checked by the TCP socket when the TCP socket method is used to configure the preStop callback function.
      shared_ptr<int32_t> lifecyclePreStopHandlerTcpSocketPort_ {};
      // The memory size of the container. Unit: GiB.
      shared_ptr<float> memory_ {};
      // The name of the container image.
      shared_ptr<string> name_ {};
      // The list of ports.
      shared_ptr<vector<Containers::Ports>> ports_ {};
      // Specifies whether to allocate a buffer for standard input (stdin) during container runtime. If this parameter is not set, reads from stdin in the container result in an EOF.
      // 
      // Default value: false.
      shared_ptr<bool> stdin_ {};
      // Specifies whether the standard input stream maintains the enabling status across multiple attached sessions when stdin is set to true.
      // 
      // If StdinOnce is set to true, standard input is opened when the container starts and remains empty until the first client attaches to it. It then stays open to accept data until the client disconnects, at which point standard input is shutdown and remains shutdown until the container is restarted.
      shared_ptr<bool> stdinOnce_ {};
      // Specifies whether to enable interactive mode. Valid values:
      // - true: Enabled.
      // - false: Disabled.
      // 
      // For example, if Command is set to /bin/bash, set this parameter to true.
      // 
      // Default value: false.
      shared_ptr<bool> tty_ {};
      // The volume mount information of the container.
      shared_ptr<vector<Containers::VolumeMounts>> volumeMounts_ {};
      // The working directory of the container.
      shared_ptr<string> workingDir_ {};
    };

    class AcrRegistryInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AcrRegistryInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Domains, domains_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AcrRegistryInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AcrRegistryInfos() = default ;
      AcrRegistryInfos(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos(AcrRegistryInfos &&) = default ;
      AcrRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AcrRegistryInfos() = default ;
      AcrRegistryInfos& operator=(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos& operator=(AcrRegistryInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domains_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
      inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
      inline AcrRegistryInfos& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline AcrRegistryInfos& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AcrRegistryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline AcrRegistryInfos& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AcrRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The domain names of the Container Registry Enterprise instance. By default, all domain names of the instance are used. You can specify one or more domain names. Separate multiple domain names with commas (,).
      shared_ptr<vector<string>> domains_ {};
      // The instance ID of the Container Registry Enterprise instance.
      shared_ptr<string> instanceId_ {};
      // The name of the Container Registry Enterprise instance.
      shared_ptr<string> instanceName_ {};
      // The region where the Container Registry Enterprise instance resides.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && this->activeDeadlineSeconds_ == nullptr && this->autoCreateEip_ == nullptr && this->autoMatchImageCache_ == nullptr && this->containerGroupName_ == nullptr && this->containers_ == nullptr
        && this->costOptimization_ == nullptr && this->cpu_ == nullptr && this->cpuOptionsCore_ == nullptr && this->cpuOptionsThreadsPerCore_ == nullptr && this->dataCacheBucket_ == nullptr
        && this->dataCacheBurstingEnabled_ == nullptr && this->dataCachePL_ == nullptr && this->dataCacheProvisionedIops_ == nullptr && this->description_ == nullptr && this->dnsConfigNameServers_ == nullptr
        && this->dnsConfigOptions_ == nullptr && this->dnsConfigSearchs_ == nullptr && this->dnsPolicy_ == nullptr && this->egressBandwidth_ == nullptr && this->eipBandwidth_ == nullptr
        && this->enableSls_ == nullptr && this->ephemeralStorage_ == nullptr && this->gpuDriverVersion_ == nullptr && this->hostAliases_ == nullptr && this->hostName_ == nullptr
        && this->imageRegistryCredentials_ == nullptr && this->imageSnapshotId_ == nullptr && this->ingressBandwidth_ == nullptr && this->initContainers_ == nullptr && this->instanceFamilyLevel_ == nullptr
        && this->instanceTypes_ == nullptr && this->ipv6AddressCount_ == nullptr && this->loadBalancerWeight_ == nullptr && this->memory_ == nullptr && this->ntpServers_ == nullptr
        && this->ownerId_ == nullptr && this->ramRoleName_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->restartPolicy_ == nullptr
        && this->scalingConfigurationName_ == nullptr && this->scalingGroupId_ == nullptr && this->securityContextSysctls_ == nullptr && this->securityGroupId_ == nullptr && this->spotPriceLimit_ == nullptr
        && this->spotStrategy_ == nullptr && this->tags_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr && this->volumes_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos> & getAcrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos>) };
    inline vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos> getAcrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos>) };
    inline CreateEciScalingConfigurationRequest& setAcrRegistryInfos(const vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateEciScalingConfigurationRequest& setAcrRegistryInfos(vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // activeDeadlineSeconds Field Functions 
    bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
    void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
    inline int64_t getActiveDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0L) };
    inline CreateEciScalingConfigurationRequest& setActiveDeadlineSeconds(int64_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


    // autoCreateEip Field Functions 
    bool hasAutoCreateEip() const { return this->autoCreateEip_ != nullptr;};
    void deleteAutoCreateEip() { this->autoCreateEip_ = nullptr;};
    inline bool getAutoCreateEip() const { DARABONBA_PTR_GET_DEFAULT(autoCreateEip_, false) };
    inline CreateEciScalingConfigurationRequest& setAutoCreateEip(bool autoCreateEip) { DARABONBA_PTR_SET_VALUE(autoCreateEip_, autoCreateEip) };


    // autoMatchImageCache Field Functions 
    bool hasAutoMatchImageCache() const { return this->autoMatchImageCache_ != nullptr;};
    void deleteAutoMatchImageCache() { this->autoMatchImageCache_ = nullptr;};
    inline bool getAutoMatchImageCache() const { DARABONBA_PTR_GET_DEFAULT(autoMatchImageCache_, false) };
    inline CreateEciScalingConfigurationRequest& setAutoMatchImageCache(bool autoMatchImageCache) { DARABONBA_PTR_SET_VALUE(autoMatchImageCache_, autoMatchImageCache) };


    // containerGroupName Field Functions 
    bool hasContainerGroupName() const { return this->containerGroupName_ != nullptr;};
    void deleteContainerGroupName() { this->containerGroupName_ = nullptr;};
    inline string getContainerGroupName() const { DARABONBA_PTR_GET_DEFAULT(containerGroupName_, "") };
    inline CreateEciScalingConfigurationRequest& setContainerGroupName(string containerGroupName) { DARABONBA_PTR_SET_VALUE(containerGroupName_, containerGroupName) };


    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::Containers> & getContainers() const { DARABONBA_PTR_GET_CONST(containers_, vector<CreateEciScalingConfigurationRequest::Containers>) };
    inline vector<CreateEciScalingConfigurationRequest::Containers> getContainers() { DARABONBA_PTR_GET(containers_, vector<CreateEciScalingConfigurationRequest::Containers>) };
    inline CreateEciScalingConfigurationRequest& setContainers(const vector<CreateEciScalingConfigurationRequest::Containers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline CreateEciScalingConfigurationRequest& setContainers(vector<CreateEciScalingConfigurationRequest::Containers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // costOptimization Field Functions 
    bool hasCostOptimization() const { return this->costOptimization_ != nullptr;};
    void deleteCostOptimization() { this->costOptimization_ = nullptr;};
    inline bool getCostOptimization() const { DARABONBA_PTR_GET_DEFAULT(costOptimization_, false) };
    inline CreateEciScalingConfigurationRequest& setCostOptimization(bool costOptimization) { DARABONBA_PTR_SET_VALUE(costOptimization_, costOptimization) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // cpuOptionsCore Field Functions 
    bool hasCpuOptionsCore() const { return this->cpuOptionsCore_ != nullptr;};
    void deleteCpuOptionsCore() { this->cpuOptionsCore_ = nullptr;};
    inline int32_t getCpuOptionsCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsCore_, 0) };
    inline CreateEciScalingConfigurationRequest& setCpuOptionsCore(int32_t cpuOptionsCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsCore_, cpuOptionsCore) };


    // cpuOptionsThreadsPerCore Field Functions 
    bool hasCpuOptionsThreadsPerCore() const { return this->cpuOptionsThreadsPerCore_ != nullptr;};
    void deleteCpuOptionsThreadsPerCore() { this->cpuOptionsThreadsPerCore_ = nullptr;};
    inline int32_t getCpuOptionsThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsThreadsPerCore_, 0) };
    inline CreateEciScalingConfigurationRequest& setCpuOptionsThreadsPerCore(int32_t cpuOptionsThreadsPerCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsThreadsPerCore_, cpuOptionsThreadsPerCore) };


    // dataCacheBucket Field Functions 
    bool hasDataCacheBucket() const { return this->dataCacheBucket_ != nullptr;};
    void deleteDataCacheBucket() { this->dataCacheBucket_ = nullptr;};
    inline string getDataCacheBucket() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBucket_, "") };
    inline CreateEciScalingConfigurationRequest& setDataCacheBucket(string dataCacheBucket) { DARABONBA_PTR_SET_VALUE(dataCacheBucket_, dataCacheBucket) };


    // dataCacheBurstingEnabled Field Functions 
    bool hasDataCacheBurstingEnabled() const { return this->dataCacheBurstingEnabled_ != nullptr;};
    void deleteDataCacheBurstingEnabled() { this->dataCacheBurstingEnabled_ = nullptr;};
    inline bool getDataCacheBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBurstingEnabled_, false) };
    inline CreateEciScalingConfigurationRequest& setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) { DARABONBA_PTR_SET_VALUE(dataCacheBurstingEnabled_, dataCacheBurstingEnabled) };


    // dataCachePL Field Functions 
    bool hasDataCachePL() const { return this->dataCachePL_ != nullptr;};
    void deleteDataCachePL() { this->dataCachePL_ = nullptr;};
    inline string getDataCachePL() const { DARABONBA_PTR_GET_DEFAULT(dataCachePL_, "") };
    inline CreateEciScalingConfigurationRequest& setDataCachePL(string dataCachePL) { DARABONBA_PTR_SET_VALUE(dataCachePL_, dataCachePL) };


    // dataCacheProvisionedIops Field Functions 
    bool hasDataCacheProvisionedIops() const { return this->dataCacheProvisionedIops_ != nullptr;};
    void deleteDataCacheProvisionedIops() { this->dataCacheProvisionedIops_ = nullptr;};
    inline int32_t getDataCacheProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(dataCacheProvisionedIops_, 0) };
    inline CreateEciScalingConfigurationRequest& setDataCacheProvisionedIops(int32_t dataCacheProvisionedIops) { DARABONBA_PTR_SET_VALUE(dataCacheProvisionedIops_, dataCacheProvisionedIops) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEciScalingConfigurationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsConfigNameServers Field Functions 
    bool hasDnsConfigNameServers() const { return this->dnsConfigNameServers_ != nullptr;};
    void deleteDnsConfigNameServers() { this->dnsConfigNameServers_ = nullptr;};
    inline const vector<string> & getDnsConfigNameServers() const { DARABONBA_PTR_GET_CONST(dnsConfigNameServers_, vector<string>) };
    inline vector<string> getDnsConfigNameServers() { DARABONBA_PTR_GET(dnsConfigNameServers_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigNameServers(const vector<string> & dnsConfigNameServers) { DARABONBA_PTR_SET_VALUE(dnsConfigNameServers_, dnsConfigNameServers) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigNameServers(vector<string> && dnsConfigNameServers) { DARABONBA_PTR_SET_RVALUE(dnsConfigNameServers_, dnsConfigNameServers) };


    // dnsConfigOptions Field Functions 
    bool hasDnsConfigOptions() const { return this->dnsConfigOptions_ != nullptr;};
    void deleteDnsConfigOptions() { this->dnsConfigOptions_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::DnsConfigOptions> & getDnsConfigOptions() const { DARABONBA_PTR_GET_CONST(dnsConfigOptions_, vector<CreateEciScalingConfigurationRequest::DnsConfigOptions>) };
    inline vector<CreateEciScalingConfigurationRequest::DnsConfigOptions> getDnsConfigOptions() { DARABONBA_PTR_GET(dnsConfigOptions_, vector<CreateEciScalingConfigurationRequest::DnsConfigOptions>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigOptions(const vector<CreateEciScalingConfigurationRequest::DnsConfigOptions> & dnsConfigOptions) { DARABONBA_PTR_SET_VALUE(dnsConfigOptions_, dnsConfigOptions) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigOptions(vector<CreateEciScalingConfigurationRequest::DnsConfigOptions> && dnsConfigOptions) { DARABONBA_PTR_SET_RVALUE(dnsConfigOptions_, dnsConfigOptions) };


    // dnsConfigSearchs Field Functions 
    bool hasDnsConfigSearchs() const { return this->dnsConfigSearchs_ != nullptr;};
    void deleteDnsConfigSearchs() { this->dnsConfigSearchs_ = nullptr;};
    inline const vector<string> & getDnsConfigSearchs() const { DARABONBA_PTR_GET_CONST(dnsConfigSearchs_, vector<string>) };
    inline vector<string> getDnsConfigSearchs() { DARABONBA_PTR_GET(dnsConfigSearchs_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigSearchs(const vector<string> & dnsConfigSearchs) { DARABONBA_PTR_SET_VALUE(dnsConfigSearchs_, dnsConfigSearchs) };
    inline CreateEciScalingConfigurationRequest& setDnsConfigSearchs(vector<string> && dnsConfigSearchs) { DARABONBA_PTR_SET_RVALUE(dnsConfigSearchs_, dnsConfigSearchs) };


    // dnsPolicy Field Functions 
    bool hasDnsPolicy() const { return this->dnsPolicy_ != nullptr;};
    void deleteDnsPolicy() { this->dnsPolicy_ = nullptr;};
    inline string getDnsPolicy() const { DARABONBA_PTR_GET_DEFAULT(dnsPolicy_, "") };
    inline CreateEciScalingConfigurationRequest& setDnsPolicy(string dnsPolicy) { DARABONBA_PTR_SET_VALUE(dnsPolicy_, dnsPolicy) };


    // egressBandwidth Field Functions 
    bool hasEgressBandwidth() const { return this->egressBandwidth_ != nullptr;};
    void deleteEgressBandwidth() { this->egressBandwidth_ = nullptr;};
    inline int64_t getEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(egressBandwidth_, 0L) };
    inline CreateEciScalingConfigurationRequest& setEgressBandwidth(int64_t egressBandwidth) { DARABONBA_PTR_SET_VALUE(egressBandwidth_, egressBandwidth) };


    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline CreateEciScalingConfigurationRequest& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // enableSls Field Functions 
    bool hasEnableSls() const { return this->enableSls_ != nullptr;};
    void deleteEnableSls() { this->enableSls_ = nullptr;};
    inline bool getEnableSls() const { DARABONBA_PTR_GET_DEFAULT(enableSls_, false) };
    inline CreateEciScalingConfigurationRequest& setEnableSls(bool enableSls) { DARABONBA_PTR_SET_VALUE(enableSls_, enableSls) };


    // ephemeralStorage Field Functions 
    bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
    void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
    inline int32_t getEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0) };
    inline CreateEciScalingConfigurationRequest& setEphemeralStorage(int32_t ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline CreateEciScalingConfigurationRequest& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::HostAliases> & getHostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<CreateEciScalingConfigurationRequest::HostAliases>) };
    inline vector<CreateEciScalingConfigurationRequest::HostAliases> getHostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<CreateEciScalingConfigurationRequest::HostAliases>) };
    inline CreateEciScalingConfigurationRequest& setHostAliases(const vector<CreateEciScalingConfigurationRequest::HostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline CreateEciScalingConfigurationRequest& setHostAliases(vector<CreateEciScalingConfigurationRequest::HostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateEciScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials> & getImageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials>) };
    inline vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials> getImageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials>) };
    inline CreateEciScalingConfigurationRequest& setImageRegistryCredentials(const vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateEciScalingConfigurationRequest& setImageRegistryCredentials(vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // imageSnapshotId Field Functions 
    bool hasImageSnapshotId() const { return this->imageSnapshotId_ != nullptr;};
    void deleteImageSnapshotId() { this->imageSnapshotId_ = nullptr;};
    inline string getImageSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(imageSnapshotId_, "") };
    inline CreateEciScalingConfigurationRequest& setImageSnapshotId(string imageSnapshotId) { DARABONBA_PTR_SET_VALUE(imageSnapshotId_, imageSnapshotId) };


    // ingressBandwidth Field Functions 
    bool hasIngressBandwidth() const { return this->ingressBandwidth_ != nullptr;};
    void deleteIngressBandwidth() { this->ingressBandwidth_ = nullptr;};
    inline int64_t getIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ingressBandwidth_, 0L) };
    inline CreateEciScalingConfigurationRequest& setIngressBandwidth(int64_t ingressBandwidth) { DARABONBA_PTR_SET_VALUE(ingressBandwidth_, ingressBandwidth) };


    // initContainers Field Functions 
    bool hasInitContainers() const { return this->initContainers_ != nullptr;};
    void deleteInitContainers() { this->initContainers_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::InitContainers> & getInitContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<CreateEciScalingConfigurationRequest::InitContainers>) };
    inline vector<CreateEciScalingConfigurationRequest::InitContainers> getInitContainers() { DARABONBA_PTR_GET(initContainers_, vector<CreateEciScalingConfigurationRequest::InitContainers>) };
    inline CreateEciScalingConfigurationRequest& setInitContainers(const vector<CreateEciScalingConfigurationRequest::InitContainers> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
    inline CreateEciScalingConfigurationRequest& setInitContainers(vector<CreateEciScalingConfigurationRequest::InitContainers> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline CreateEciScalingConfigurationRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateEciScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateEciScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline CreateEciScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // ntpServers Field Functions 
    bool hasNtpServers() const { return this->ntpServers_ != nullptr;};
    void deleteNtpServers() { this->ntpServers_ = nullptr;};
    inline const vector<string> & getNtpServers() const { DARABONBA_PTR_GET_CONST(ntpServers_, vector<string>) };
    inline vector<string> getNtpServers() { DARABONBA_PTR_GET(ntpServers_, vector<string>) };
    inline CreateEciScalingConfigurationRequest& setNtpServers(const vector<string> & ntpServers) { DARABONBA_PTR_SET_VALUE(ntpServers_, ntpServers) };
    inline CreateEciScalingConfigurationRequest& setNtpServers(vector<string> && ntpServers) { DARABONBA_PTR_SET_RVALUE(ntpServers_, ntpServers) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateEciScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateEciScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateEciScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // restartPolicy Field Functions 
    bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
    void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
    inline string getRestartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
    inline CreateEciScalingConfigurationRequest& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline CreateEciScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // securityContextSysctls Field Functions 
    bool hasSecurityContextSysctls() const { return this->securityContextSysctls_ != nullptr;};
    void deleteSecurityContextSysctls() { this->securityContextSysctls_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls> & getSecurityContextSysctls() const { DARABONBA_PTR_GET_CONST(securityContextSysctls_, vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls>) };
    inline vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls> getSecurityContextSysctls() { DARABONBA_PTR_GET(securityContextSysctls_, vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls>) };
    inline CreateEciScalingConfigurationRequest& setSecurityContextSysctls(const vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls> & securityContextSysctls) { DARABONBA_PTR_SET_VALUE(securityContextSysctls_, securityContextSysctls) };
    inline CreateEciScalingConfigurationRequest& setSecurityContextSysctls(vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls> && securityContextSysctls) { DARABONBA_PTR_SET_RVALUE(securityContextSysctls_, securityContextSysctls) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateEciScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline CreateEciScalingConfigurationRequest& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateEciScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEciScalingConfigurationRequest::Tags>) };
    inline vector<CreateEciScalingConfigurationRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateEciScalingConfigurationRequest::Tags>) };
    inline CreateEciScalingConfigurationRequest& setTags(const vector<CreateEciScalingConfigurationRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEciScalingConfigurationRequest& setTags(vector<CreateEciScalingConfigurationRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int64_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0L) };
    inline CreateEciScalingConfigurationRequest& setTerminationGracePeriodSeconds(int64_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<CreateEciScalingConfigurationRequest::Volumes> & getVolumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<CreateEciScalingConfigurationRequest::Volumes>) };
    inline vector<CreateEciScalingConfigurationRequest::Volumes> getVolumes() { DARABONBA_PTR_GET(volumes_, vector<CreateEciScalingConfigurationRequest::Volumes>) };
    inline CreateEciScalingConfigurationRequest& setVolumes(const vector<CreateEciScalingConfigurationRequest::Volumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline CreateEciScalingConfigurationRequest& setVolumes(vector<CreateEciScalingConfigurationRequest::Volumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // The information about the Container Registry Enterprise instances.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::AcrRegistryInfos>> acrRegistryInfos_ {};
    // The validity period. Unit: seconds.
    shared_ptr<int64_t> activeDeadlineSeconds_ {};
    // Specifies whether automatic creation of an elastic IP address (EIP) is performed and the EIP is attached to the ECI instance.
    shared_ptr<bool> autoCreateEip_ {};
    // Specifies whether to automatically match an image cache. Valid values:
    // - true: Yes.
    // - false: No.
    // 
    // Default value: false.
    shared_ptr<bool> autoMatchImageCache_ {};
    // The name of the ECI instance, which is the name of the container group.
    // 
    // To set a sequential instance name, use the following format: name_prefix(AUTO_INCREMENT)[begin_number,bits]name_suffix.
    // 
    // - **name_prefix**: the prefix of the hostname.
    // 
    // - **(AUTO_INCREMENT)**: a fixed value that identifies this sorting method.
    // 
    // - **begin_number**: the start value of the sequential number. Valid values: 0 to 999999.
    // 
    // - **bits**: the number of digits of the sequential number. Valid values: 1 to 6. If the number of digits of the specified begin_number is greater than the value of bits, bits defaults to 6.
    // <notice>We recommend that you set bits to at least 3. Otherwise, the upper limit of the sequential number is easily reached. After the upper limit is reached, if scale-out is still required, the scaling activity reports an error and stops. In this case, you must reset the rule for generating hostnames.</notice>
    // 
    // - **name_suffix** (optional): the suffix of the hostname.
    // 
    // <notice>No spaces are allowed in [begin_number,bits]. The system increments the number sequentially by default. However, if an ECI instance created during scale-out fails to start, the instance is removed from the scaling group and a new ECI instance is created. Therefore, the hostnames of ECI instances in the scaling group may be incremented discontinuously.</notice>
    // 
    // **Example:** If you set the value to nginx-test-(AUTO_INCREMENT)[0,3], the container group names are nginx-test-000, nginx-test-001, and nginx-test-002.
    // 
    // The rules for setting sequential ECI instance names are the same as those for setting sequential ECS instance names in a scaling group. For more information, see [Set a rule for sequential and unique instance names or hostnames](https://help.aliyun.com/document_detail/203831.html).
    shared_ptr<string> containerGroupName_ {};
    // The list of containers included in the instance.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::Containers>> containers_ {};
    // Specifies whether to enable cost optimization. Valid values:
    // - true: Enabled.
    // - false: Disabled.
    shared_ptr<bool> costOptimization_ {};
    // The number of vCPUs for the instance. Unit: cores.
    shared_ptr<float> cpu_ {};
    // The number of physical CPU cores. Only specific instance types support custom settings. For more information, see [Customize CPU options](https://help.aliyun.com/document_detail/197781.html).
    shared_ptr<int32_t> cpuOptionsCore_ {};
    // The number of threads per core. Only specific instance types support custom settings. A value of 1 indicates that hyper-threading is disabled. For more information, see [Customize CPU options](https://help.aliyun.com/document_detail/197781.html).
    shared_ptr<int32_t> cpuOptionsThreadsPerCore_ {};
    // The data cache bucket.
    shared_ptr<string> dataCacheBucket_ {};
    // Specifies whether to enable the burst feature for the ESSD AutoPL cloud disk used for data caching. Valid values:
    // 
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: false.
    // > For more information about ESSD AutoPL cloud disks, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<bool> dataCacheBurstingEnabled_ {};
    // The performance level of the cloud disk used for data caching. ESSDs are recommended. Valid values for the performance level of an ESSD:
    // 
    // - PL0: An ESSD at PL0 delivers up to 10,000 random read/write IOPS.
    // - PL1: An ESSD at PL1 delivers up to 50,000 random read/write IOPS.
    // - PL2: An ESSD at PL2 delivers up to 100,000 random read/write IOPS.
    // - PL3: An ESSD at PL3 delivers up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // > For more information about ESSDs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    shared_ptr<string> dataCachePL_ {};
    // The provisioned read/write IOPS of the ESSD AutoPL cloud disk used for data caching. Valid values: 0 to min{50000, 1000 × capacity - baseline performance}, where baseline performance = min{1800 + 50 × capacity, 50000}.
    // 
    // > For more information about ESSD AutoPL cloud disks, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<int32_t> dataCacheProvisionedIops_ {};
    // >This parameter is unavailable.
    shared_ptr<string> description_ {};
    // The list of IP addresses of DNS servers.
    shared_ptr<vector<string>> dnsConfigNameServers_ {};
    // The list of object options. Each object consists of a Name and an optional Value.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::DnsConfigOptions>> dnsConfigOptions_ {};
    // The list of DNS search domains.
    shared_ptr<vector<string>> dnsConfigSearchs_ {};
    // The DNS policy. Valid values:
    // 
    // - None: Uses the DNS settings specified in the DnsConfig field.
    // 
    // - Default: Inherits the DNS settings of the runtime environment.
    shared_ptr<string> dnsPolicy_ {};
    // The outbound bandwidth limit. Unit: bytes.
    shared_ptr<int64_t> egressBandwidth_ {};
    // The bandwidth of the EIP. Default value: 5 Mbit/s.
    shared_ptr<int32_t> eipBandwidth_ {};
    // >This parameter is unavailable.
    shared_ptr<bool> enableSls_ {};
    // The size of the ephemeral storage space. By default, a PL1 ESSD cloud disk is used. Unit: GiB.
    shared_ptr<int32_t> ephemeralStorage_ {};
    // The GPU driver version. Valid values:
    // - tesla=470.82.01 (default)
    // - tesla=525.85.12
    // 
    // > Only specific instance types support switching the GPU driver version. For more information, see [Create a GPU-accelerated instance](https://help.aliyun.com/document_detail/2579486.html).
    shared_ptr<string> gpuDriverVersion_ {};
    // The custom hostname mappings for a container in the instance.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::HostAliases>> hostAliases_ {};
    // The hostname, which is the name of the container group.
    shared_ptr<string> hostName_ {};
    // The details of the image registry.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::ImageRegistryCredentials>> imageRegistryCredentials_ {};
    // The ID of the image cache.
    shared_ptr<string> imageSnapshotId_ {};
    // The inbound bandwidth limit. Unit: bytes.
    shared_ptr<int64_t> ingressBandwidth_ {};
    // The list of init containers.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::InitContainers>> initContainers_ {};
    // The instance family level, which is used to filter instance types that meet your requirements. This parameter takes effect only when CostOptimization is enabled. Valid values:
    // 
    // - EntryLevel: entry-level, which indicates shared instance types. Shared instance types are more cost-effective but cannot guarantee stable computing performance. They are suitable for business scenarios with low average CPU utilization. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // - EnterpriseLevel: enterprise-level. Enterprise-level instance types provide stable performance and dedicated resources, and are suitable for business scenarios that require high stability. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    // - CreditEntryLevel: credit entry-level, which indicates burstable instances. Burstable instances use CPU credits to ensure computing performance and are suitable for business scenarios with low average CPU utilization but occasional CPU bursts. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> instanceFamilyLevel_ {};
    // The specified ECS instance types. You can specify up to five instance types.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The number of IPv6 addresses.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The weight of the ECI instance when it is used as a backend server for load balancing. Valid values: 1 to 100.
    // 
    // Default value: 50.
    shared_ptr<int32_t> loadBalancerWeight_ {};
    // The memory size for the instance. Unit: GiB.
    shared_ptr<float> memory_ {};
    // The NTP server.
    shared_ptr<vector<string>> ntpServers_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the instance RAM role. ECI and ECS share instance RAM roles. For more information, see [Instance RAM roles](https://help.aliyun.com/document_detail/61175.html).
    shared_ptr<string> ramRoleName_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The restart policy of the ECI instance. Valid values:
    // 
    // - Always: Always restarts the instance.
    // - Never: Never restarts the instance.
    // - OnFailure: Restarts the instance upon failure.
    // 
    // Default value: Always.
    shared_ptr<string> restartPolicy_ {};
    // The name of the scaling configuration. The name must be 2 to 64 characters in length and start with a digit, letter, or Chinese character. It can contain digits, underscores (_), hyphens (-), and periods (.).
    // 
    // The name must be unique within a scaling group in a region. If you do not specify this parameter, the ID of the scaling configuration is used by default.
    shared_ptr<string> scalingConfigurationName_ {};
    // The ID of the scaling group to which the scaling configuration belongs.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The security context system information for the instance.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::SecurityContextSysctls>> securityContextSysctls_ {};
    // The ID of the security group to which the ECI instance belongs. ECI instances in the same security group can access each other.
    // 
    // If you do not specify a security group, the system automatically uses the default security group in the selected region. You must ensure that the inbound rules of this security group include the protocols and ports that the containers need to expose. If no default security group exists in the region, the system performs automatic creation of a default security group and adds the declared container protocols and ports to the inbound rules of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The maximum hourly price for the spot instance. The value is accurate to three decimal places.
    // 
    // This parameter is required when SpotStrategy is set to SpotWithPriceLimit.
    shared_ptr<float> spotPriceLimit_ {};
    // The preemption policy for the instance. Valid values:
    // 
    // - NoSpot: Regular pay-as-you-go instance.
    // - SpotWithPriceLimit: Spot instance with a maximum price limit.
    // - SpotAsPriceGo: Spot instance whose price automatically follows the current market price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The tags of the ECI instance. Tags are passed as key-value pairs. You can use up to 20 tags. The requirements for keys and values are as follows:
    //          
    // - A key can be up to 64 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. A key cannot be an empty string.
    // - A value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. A value can be an empty string.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::Tags>> tags_ {};
    // The buffer time for the program to handle operations before shutdown. Unit: seconds.
    shared_ptr<int64_t> terminationGracePeriodSeconds_ {};
    // The volume information.
    shared_ptr<vector<CreateEciScalingConfigurationRequest::Volumes>> volumes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
