// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODY_HPP_
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
  class DescribeEciScalingConfigurationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfiguration, scalingConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfiguration, scalingConfiguration_);
    };
    DescribeEciScalingConfigurationDetailResponseBody() = default ;
    DescribeEciScalingConfigurationDetailResponseBody(const DescribeEciScalingConfigurationDetailResponseBody &) = default ;
    DescribeEciScalingConfigurationDetailResponseBody(DescribeEciScalingConfigurationDetailResponseBody &&) = default ;
    DescribeEciScalingConfigurationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationDetailResponseBody() = default ;
    DescribeEciScalingConfigurationDetailResponseBody& operator=(const DescribeEciScalingConfigurationDetailResponseBody &) = default ;
    DescribeEciScalingConfigurationDetailResponseBody& operator=(DescribeEciScalingConfigurationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
        DARABONBA_PTR_TO_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
        DARABONBA_PTR_TO_JSON(AutoCreateEip, autoCreateEip_);
        DARABONBA_PTR_TO_JSON(AutoMatchImageCache, autoMatchImageCache_);
        DARABONBA_PTR_TO_JSON(ComputeCategory, computeCategory_);
        DARABONBA_PTR_TO_JSON(ContainerGroupName, containerGroupName_);
        DARABONBA_PTR_TO_JSON(Containers, containers_);
        DARABONBA_PTR_TO_JSON(CostOptimization, costOptimization_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CpuOptionsCore, cpuOptionsCore_);
        DARABONBA_PTR_TO_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataCacheBucket, dataCacheBucket_);
        DARABONBA_PTR_TO_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
        DARABONBA_PTR_TO_JSON(DataCachePL, dataCachePL_);
        DARABONBA_PTR_TO_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DnsConfigNameServers, dnsConfigNameServers_);
        DARABONBA_PTR_TO_JSON(DnsConfigOptions, dnsConfigOptions_);
        DARABONBA_PTR_TO_JSON(DnsConfigSearches, dnsConfigSearches_);
        DARABONBA_PTR_TO_JSON(DnsPolicy, dnsPolicy_);
        DARABONBA_PTR_TO_JSON(EgressBandwidth, egressBandwidth_);
        DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
        DARABONBA_PTR_TO_JSON(EipCommonBandwidthPackage, eipCommonBandwidthPackage_);
        DARABONBA_PTR_TO_JSON(EipISP, eipISP_);
        DARABONBA_PTR_TO_JSON(EipPublicIpAddressPoolId, eipPublicIpAddressPoolId_);
        DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
        DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
        DARABONBA_PTR_TO_JSON(ImageSnapshotId, imageSnapshotId_);
        DARABONBA_PTR_TO_JSON(IngressBandwidth, ingressBandwidth_);
        DARABONBA_PTR_TO_JSON(InitContainers, initContainers_);
        DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NtpServers, ntpServers_);
        DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RestartPolicy, restartPolicy_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityContextSysCtls, securityContextSysCtls_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SlsEnable, slsEnable_);
        DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
        DARABONBA_PTR_TO_JSON(Volumes, volumes_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
        DARABONBA_PTR_FROM_JSON(ActiveDeadlineSeconds, activeDeadlineSeconds_);
        DARABONBA_PTR_FROM_JSON(AutoCreateEip, autoCreateEip_);
        DARABONBA_PTR_FROM_JSON(AutoMatchImageCache, autoMatchImageCache_);
        DARABONBA_PTR_FROM_JSON(ComputeCategory, computeCategory_);
        DARABONBA_PTR_FROM_JSON(ContainerGroupName, containerGroupName_);
        DARABONBA_PTR_FROM_JSON(Containers, containers_);
        DARABONBA_PTR_FROM_JSON(CostOptimization, costOptimization_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CpuOptionsCore, cpuOptionsCore_);
        DARABONBA_PTR_FROM_JSON(CpuOptionsThreadsPerCore, cpuOptionsThreadsPerCore_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataCacheBucket, dataCacheBucket_);
        DARABONBA_PTR_FROM_JSON(DataCacheBurstingEnabled, dataCacheBurstingEnabled_);
        DARABONBA_PTR_FROM_JSON(DataCachePL, dataCachePL_);
        DARABONBA_PTR_FROM_JSON(DataCacheProvisionedIops, dataCacheProvisionedIops_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DnsConfigNameServers, dnsConfigNameServers_);
        DARABONBA_PTR_FROM_JSON(DnsConfigOptions, dnsConfigOptions_);
        DARABONBA_PTR_FROM_JSON(DnsConfigSearches, dnsConfigSearches_);
        DARABONBA_PTR_FROM_JSON(DnsPolicy, dnsPolicy_);
        DARABONBA_PTR_FROM_JSON(EgressBandwidth, egressBandwidth_);
        DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
        DARABONBA_PTR_FROM_JSON(EipCommonBandwidthPackage, eipCommonBandwidthPackage_);
        DARABONBA_PTR_FROM_JSON(EipISP, eipISP_);
        DARABONBA_PTR_FROM_JSON(EipPublicIpAddressPoolId, eipPublicIpAddressPoolId_);
        DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
        DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
        DARABONBA_PTR_FROM_JSON(ImageSnapshotId, imageSnapshotId_);
        DARABONBA_PTR_FROM_JSON(IngressBandwidth, ingressBandwidth_);
        DARABONBA_PTR_FROM_JSON(InitContainers, initContainers_);
        DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NtpServers, ntpServers_);
        DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RestartPolicy, restartPolicy_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityContextSysCtls, securityContextSysCtls_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SlsEnable, slsEnable_);
        DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
        DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
      };
      ScalingConfiguration() = default ;
      ScalingConfiguration(const ScalingConfiguration &) = default ;
      ScalingConfiguration(ScalingConfiguration &&) = default ;
      ScalingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingConfiguration() = default ;
      ScalingConfiguration& operator=(const ScalingConfiguration &) = default ;
      ScalingConfiguration& operator=(ScalingConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Volumes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Volumes& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigFileVolumeConfigFileToPaths, configFileVolumeConfigFileToPaths_);
          DARABONBA_PTR_TO_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
          DARABONBA_PTR_TO_JSON(DiskVolumeDiskId, diskVolumeDiskId_);
          DARABONBA_PTR_TO_JSON(DiskVolumeDiskSize, diskVolumeDiskSize_);
          DARABONBA_PTR_TO_JSON(DiskVolumeFsType, diskVolumeFsType_);
          DARABONBA_PTR_TO_JSON(EmptyDirVolumeMedium, emptyDirVolumeMedium_);
          DARABONBA_PTR_TO_JSON(EmptyDirVolumeSizeLimit, emptyDirVolumeSizeLimit_);
          DARABONBA_PTR_TO_JSON(FlexVolumeDriver, flexVolumeDriver_);
          DARABONBA_PTR_TO_JSON(FlexVolumeFsType, flexVolumeFsType_);
          DARABONBA_PTR_TO_JSON(FlexVolumeOptions, flexVolumeOptions_);
          DARABONBA_PTR_TO_JSON(HostPathVolumePath, hostPathVolumePath_);
          DARABONBA_PTR_TO_JSON(HostPathVolumeType, hostPathVolumeType_);
          DARABONBA_PTR_TO_JSON(NFSVolumePath, NFSVolumePath_);
          DARABONBA_PTR_TO_JSON(NFSVolumeReadOnly, NFSVolumeReadOnly_);
          DARABONBA_PTR_TO_JSON(NFSVolumeServer, NFSVolumeServer_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Volumes& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigFileVolumeConfigFileToPaths, configFileVolumeConfigFileToPaths_);
          DARABONBA_PTR_FROM_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
          DARABONBA_PTR_FROM_JSON(DiskVolumeDiskId, diskVolumeDiskId_);
          DARABONBA_PTR_FROM_JSON(DiskVolumeDiskSize, diskVolumeDiskSize_);
          DARABONBA_PTR_FROM_JSON(DiskVolumeFsType, diskVolumeFsType_);
          DARABONBA_PTR_FROM_JSON(EmptyDirVolumeMedium, emptyDirVolumeMedium_);
          DARABONBA_PTR_FROM_JSON(EmptyDirVolumeSizeLimit, emptyDirVolumeSizeLimit_);
          DARABONBA_PTR_FROM_JSON(FlexVolumeDriver, flexVolumeDriver_);
          DARABONBA_PTR_FROM_JSON(FlexVolumeFsType, flexVolumeFsType_);
          DARABONBA_PTR_FROM_JSON(FlexVolumeOptions, flexVolumeOptions_);
          DARABONBA_PTR_FROM_JSON(HostPathVolumePath, hostPathVolumePath_);
          DARABONBA_PTR_FROM_JSON(HostPathVolumeType, hostPathVolumeType_);
          DARABONBA_PTR_FROM_JSON(NFSVolumePath, NFSVolumePath_);
          DARABONBA_PTR_FROM_JSON(NFSVolumeReadOnly, NFSVolumeReadOnly_);
          DARABONBA_PTR_FROM_JSON(NFSVolumeServer, NFSVolumeServer_);
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
          // The content of the configuration file.
          shared_ptr<string> content_ {};
          // The directory permissions of the ConfigFileVolume.
          shared_ptr<int32_t> mode_ {};
          // The path.
          shared_ptr<string> path_ {};
        };

        virtual bool empty() const override { return this->configFileVolumeConfigFileToPaths_ == nullptr
        && this->configFileVolumeDefaultMode_ == nullptr && this->diskVolumeDiskId_ == nullptr && this->diskVolumeDiskSize_ == nullptr && this->diskVolumeFsType_ == nullptr && this->emptyDirVolumeMedium_ == nullptr
        && this->emptyDirVolumeSizeLimit_ == nullptr && this->flexVolumeDriver_ == nullptr && this->flexVolumeFsType_ == nullptr && this->flexVolumeOptions_ == nullptr && this->hostPathVolumePath_ == nullptr
        && this->hostPathVolumeType_ == nullptr && this->NFSVolumePath_ == nullptr && this->NFSVolumeReadOnly_ == nullptr && this->NFSVolumeServer_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr; };
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


        // diskVolumeDiskId Field Functions 
        bool hasDiskVolumeDiskId() const { return this->diskVolumeDiskId_ != nullptr;};
        void deleteDiskVolumeDiskId() { this->diskVolumeDiskId_ = nullptr;};
        inline string getDiskVolumeDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeDiskId_, "") };
        inline Volumes& setDiskVolumeDiskId(string diskVolumeDiskId) { DARABONBA_PTR_SET_VALUE(diskVolumeDiskId_, diskVolumeDiskId) };


        // diskVolumeDiskSize Field Functions 
        bool hasDiskVolumeDiskSize() const { return this->diskVolumeDiskSize_ != nullptr;};
        void deleteDiskVolumeDiskSize() { this->diskVolumeDiskSize_ = nullptr;};
        inline int32_t getDiskVolumeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeDiskSize_, 0) };
        inline Volumes& setDiskVolumeDiskSize(int32_t diskVolumeDiskSize) { DARABONBA_PTR_SET_VALUE(diskVolumeDiskSize_, diskVolumeDiskSize) };


        // diskVolumeFsType Field Functions 
        bool hasDiskVolumeFsType() const { return this->diskVolumeFsType_ != nullptr;};
        void deleteDiskVolumeFsType() { this->diskVolumeFsType_ = nullptr;};
        inline string getDiskVolumeFsType() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeFsType_, "") };
        inline Volumes& setDiskVolumeFsType(string diskVolumeFsType) { DARABONBA_PTR_SET_VALUE(diskVolumeFsType_, diskVolumeFsType) };


        // emptyDirVolumeMedium Field Functions 
        bool hasEmptyDirVolumeMedium() const { return this->emptyDirVolumeMedium_ != nullptr;};
        void deleteEmptyDirVolumeMedium() { this->emptyDirVolumeMedium_ = nullptr;};
        inline string getEmptyDirVolumeMedium() const { DARABONBA_PTR_GET_DEFAULT(emptyDirVolumeMedium_, "") };
        inline Volumes& setEmptyDirVolumeMedium(string emptyDirVolumeMedium) { DARABONBA_PTR_SET_VALUE(emptyDirVolumeMedium_, emptyDirVolumeMedium) };


        // emptyDirVolumeSizeLimit Field Functions 
        bool hasEmptyDirVolumeSizeLimit() const { return this->emptyDirVolumeSizeLimit_ != nullptr;};
        void deleteEmptyDirVolumeSizeLimit() { this->emptyDirVolumeSizeLimit_ = nullptr;};
        inline string getEmptyDirVolumeSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(emptyDirVolumeSizeLimit_, "") };
        inline Volumes& setEmptyDirVolumeSizeLimit(string emptyDirVolumeSizeLimit) { DARABONBA_PTR_SET_VALUE(emptyDirVolumeSizeLimit_, emptyDirVolumeSizeLimit) };


        // flexVolumeDriver Field Functions 
        bool hasFlexVolumeDriver() const { return this->flexVolumeDriver_ != nullptr;};
        void deleteFlexVolumeDriver() { this->flexVolumeDriver_ = nullptr;};
        inline string getFlexVolumeDriver() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeDriver_, "") };
        inline Volumes& setFlexVolumeDriver(string flexVolumeDriver) { DARABONBA_PTR_SET_VALUE(flexVolumeDriver_, flexVolumeDriver) };


        // flexVolumeFsType Field Functions 
        bool hasFlexVolumeFsType() const { return this->flexVolumeFsType_ != nullptr;};
        void deleteFlexVolumeFsType() { this->flexVolumeFsType_ = nullptr;};
        inline string getFlexVolumeFsType() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeFsType_, "") };
        inline Volumes& setFlexVolumeFsType(string flexVolumeFsType) { DARABONBA_PTR_SET_VALUE(flexVolumeFsType_, flexVolumeFsType) };


        // flexVolumeOptions Field Functions 
        bool hasFlexVolumeOptions() const { return this->flexVolumeOptions_ != nullptr;};
        void deleteFlexVolumeOptions() { this->flexVolumeOptions_ = nullptr;};
        inline string getFlexVolumeOptions() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeOptions_, "") };
        inline Volumes& setFlexVolumeOptions(string flexVolumeOptions) { DARABONBA_PTR_SET_VALUE(flexVolumeOptions_, flexVolumeOptions) };


        // hostPathVolumePath Field Functions 
        bool hasHostPathVolumePath() const { return this->hostPathVolumePath_ != nullptr;};
        void deleteHostPathVolumePath() { this->hostPathVolumePath_ = nullptr;};
        inline string getHostPathVolumePath() const { DARABONBA_PTR_GET_DEFAULT(hostPathVolumePath_, "") };
        inline Volumes& setHostPathVolumePath(string hostPathVolumePath) { DARABONBA_PTR_SET_VALUE(hostPathVolumePath_, hostPathVolumePath) };


        // hostPathVolumeType Field Functions 
        bool hasHostPathVolumeType() const { return this->hostPathVolumeType_ != nullptr;};
        void deleteHostPathVolumeType() { this->hostPathVolumeType_ = nullptr;};
        inline string getHostPathVolumeType() const { DARABONBA_PTR_GET_DEFAULT(hostPathVolumeType_, "") };
        inline Volumes& setHostPathVolumeType(string hostPathVolumeType) { DARABONBA_PTR_SET_VALUE(hostPathVolumeType_, hostPathVolumeType) };


        // NFSVolumePath Field Functions 
        bool hasNFSVolumePath() const { return this->NFSVolumePath_ != nullptr;};
        void deleteNFSVolumePath() { this->NFSVolumePath_ = nullptr;};
        inline string getNFSVolumePath() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumePath_, "") };
        inline Volumes& setNFSVolumePath(string NFSVolumePath) { DARABONBA_PTR_SET_VALUE(NFSVolumePath_, NFSVolumePath) };


        // NFSVolumeReadOnly Field Functions 
        bool hasNFSVolumeReadOnly() const { return this->NFSVolumeReadOnly_ != nullptr;};
        void deleteNFSVolumeReadOnly() { this->NFSVolumeReadOnly_ = nullptr;};
        inline bool getNFSVolumeReadOnly() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumeReadOnly_, false) };
        inline Volumes& setNFSVolumeReadOnly(bool NFSVolumeReadOnly) { DARABONBA_PTR_SET_VALUE(NFSVolumeReadOnly_, NFSVolumeReadOnly) };


        // NFSVolumeServer Field Functions 
        bool hasNFSVolumeServer() const { return this->NFSVolumeServer_ != nullptr;};
        void deleteNFSVolumeServer() { this->NFSVolumeServer_ = nullptr;};
        inline string getNFSVolumeServer() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumeServer_, "") };
        inline Volumes& setNFSVolumeServer(string NFSVolumeServer) { DARABONBA_PTR_SET_VALUE(NFSVolumeServer_, NFSVolumeServer) };


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
        // The list of configuration file paths.
        shared_ptr<vector<Volumes::ConfigFileVolumeConfigFileToPaths>> configFileVolumeConfigFileToPaths_ {};
        // The default permissions of the ConfigFileVolume.
        shared_ptr<int32_t> configFileVolumeDefaultMode_ {};
        // The ID of the disk volume.
        shared_ptr<string> diskVolumeDiskId_ {};
        // The size of the disk volume. Unit: GiB.
        shared_ptr<int32_t> diskVolumeDiskSize_ {};
        // The file system type of the disk volume.
        shared_ptr<string> diskVolumeFsType_ {};
        // The storage medium of the EmptyDirVolume. The default value is empty, which indicates that the node file system is used. If this parameter is set to memory, the memory is used.
        shared_ptr<string> emptyDirVolumeMedium_ {};
        // The size of the EmptyDir volume.
        shared_ptr<string> emptyDirVolumeSizeLimit_ {};
        // The name of the driver used for the FlexVolume.
        shared_ptr<string> flexVolumeDriver_ {};
        // The mounted file system type. The default value depends on the script of the FlexVolume.
        shared_ptr<string> flexVolumeFsType_ {};
        // The list of options for the FlexVolume object.
        shared_ptr<string> flexVolumeOptions_ {};
        // The directory path of the HostPath volume on the host.
        shared_ptr<string> hostPathVolumePath_ {};
        // The type of the HostPath volume.
        shared_ptr<string> hostPathVolumeType_ {};
        // The path of the NFS volume.
        shared_ptr<string> NFSVolumePath_ {};
        // Specifies whether the NFS volume is read-only.
        // 
        // Default value: false.
        shared_ptr<bool> NFSVolumeReadOnly_ {};
        // The address of the NFS server.
        shared_ptr<string> NFSVolumeServer_ {};
        // The name of the volume.
        shared_ptr<string> name_ {};
        // The volume type. Valid values:
        // - EmptyDirVolume.
        // - NFSVolume.
        // - ConfigFileVolume.
        // - FlexVolume.
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class SecurityContextSysCtls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityContextSysCtls& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityContextSysCtls& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SecurityContextSysCtls() = default ;
        SecurityContextSysCtls(const SecurityContextSysCtls &) = default ;
        SecurityContextSysCtls(SecurityContextSysCtls &&) = default ;
        SecurityContextSysCtls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityContextSysCtls() = default ;
        SecurityContextSysCtls& operator=(const SecurityContextSysCtls &) = default ;
        SecurityContextSysCtls& operator=(SecurityContextSysCtls &&) = default ;
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
        inline SecurityContextSysCtls& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline SecurityContextSysCtls& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The system control parameter name of the security context in which the instance runs.
        shared_ptr<string> name_ {};
        // The variable value of the contextual security context in which the instance runs.
        shared_ptr<string> value_ {};
      };

      class InitContainers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InitContainers& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Gpu, gpu_);
          DARABONBA_PTR_TO_JSON(Image, image_);
          DARABONBA_PTR_TO_JSON(ImagePullPolicy, imagePullPolicy_);
          DARABONBA_PTR_TO_JSON(InitContainerArgs, initContainerArgs_);
          DARABONBA_PTR_TO_JSON(InitContainerCommands, initContainerCommands_);
          DARABONBA_PTR_TO_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
          DARABONBA_PTR_TO_JSON(InitContainerPorts, initContainerPorts_);
          DARABONBA_PTR_TO_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
          DARABONBA_PTR_TO_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
          DARABONBA_PTR_TO_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
          DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
        };
        friend void from_json(const Darabonba::Json& j, InitContainers& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
          DARABONBA_PTR_FROM_JSON(Image, image_);
          DARABONBA_PTR_FROM_JSON(ImagePullPolicy, imagePullPolicy_);
          DARABONBA_PTR_FROM_JSON(InitContainerArgs, initContainerArgs_);
          DARABONBA_PTR_FROM_JSON(InitContainerCommands, initContainerCommands_);
          DARABONBA_PTR_FROM_JSON(InitContainerEnvironmentVars, initContainerEnvironmentVars_);
          DARABONBA_PTR_FROM_JSON(InitContainerPorts, initContainerPorts_);
          DARABONBA_PTR_FROM_JSON(InitContainerVolumeMounts, initContainerVolumeMounts_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
          DARABONBA_PTR_FROM_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
          DARABONBA_PTR_FROM_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
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
          // The directory in the container where the volume is mounted.    
          // 
          // > The content in the mount directory of the container is directly overwritten by the content of the volume. Use this parameter with caution.
          shared_ptr<string> mountPath_ {};
          // The mount propagation settings of the data volume. Mount propagation allows volumes mounted by a container to be shared with other containers in the same pod, or even with other pods on the same node. Valid values:
          // - None: the volume does not perceive any subsequent mount operations performed on the volume or its subdirectories.
          // - HostToCotainer: the volume perceives subsequent mount operations performed on the volume or its subdirectories.
          // - Bidirectional: similar to HostToCotainer, the volume perceives mount operations. Additionally, the volume is propagated back to the host and to all containers of all pods that use the same volume.
          // Default value: None.
          shared_ptr<string> mountPropagation_ {};
          // The name of the mounted data volume.
          shared_ptr<string> name_ {};
          // Specifies whether the mount path is read-only.
          // 
          // Default value: false.
          shared_ptr<bool> readOnly_ {};
          // The subpath of the data volume.
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
          // >This parameter is not available.
          shared_ptr<string> fieldRefFieldPath_ {};
          // The name of the environment variable.
          shared_ptr<string> key_ {};
          // The value of the environment variable.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->gpu_ == nullptr && this->image_ == nullptr && this->imagePullPolicy_ == nullptr && this->initContainerArgs_ == nullptr && this->initContainerCommands_ == nullptr
        && this->initContainerEnvironmentVars_ == nullptr && this->initContainerPorts_ == nullptr && this->initContainerVolumeMounts_ == nullptr && this->memory_ == nullptr && this->name_ == nullptr
        && this->securityContextCapabilityAdds_ == nullptr && this->securityContextReadOnlyRootFilesystem_ == nullptr && this->securityContextRunAsUser_ == nullptr && this->workingDir_ == nullptr; };
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


        // initContainerArgs Field Functions 
        bool hasInitContainerArgs() const { return this->initContainerArgs_ != nullptr;};
        void deleteInitContainerArgs() { this->initContainerArgs_ = nullptr;};
        inline const vector<string> & getInitContainerArgs() const { DARABONBA_PTR_GET_CONST(initContainerArgs_, vector<string>) };
        inline vector<string> getInitContainerArgs() { DARABONBA_PTR_GET(initContainerArgs_, vector<string>) };
        inline InitContainers& setInitContainerArgs(const vector<string> & initContainerArgs) { DARABONBA_PTR_SET_VALUE(initContainerArgs_, initContainerArgs) };
        inline InitContainers& setInitContainerArgs(vector<string> && initContainerArgs) { DARABONBA_PTR_SET_RVALUE(initContainerArgs_, initContainerArgs) };


        // initContainerCommands Field Functions 
        bool hasInitContainerCommands() const { return this->initContainerCommands_ != nullptr;};
        void deleteInitContainerCommands() { this->initContainerCommands_ = nullptr;};
        inline const vector<string> & getInitContainerCommands() const { DARABONBA_PTR_GET_CONST(initContainerCommands_, vector<string>) };
        inline vector<string> getInitContainerCommands() { DARABONBA_PTR_GET(initContainerCommands_, vector<string>) };
        inline InitContainers& setInitContainerCommands(const vector<string> & initContainerCommands) { DARABONBA_PTR_SET_VALUE(initContainerCommands_, initContainerCommands) };
        inline InitContainers& setInitContainerCommands(vector<string> && initContainerCommands) { DARABONBA_PTR_SET_RVALUE(initContainerCommands_, initContainerCommands) };


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


        // securityContextCapabilityAdds Field Functions 
        bool hasSecurityContextCapabilityAdds() const { return this->securityContextCapabilityAdds_ != nullptr;};
        void deleteSecurityContextCapabilityAdds() { this->securityContextCapabilityAdds_ = nullptr;};
        inline const vector<string> & getSecurityContextCapabilityAdds() const { DARABONBA_PTR_GET_CONST(securityContextCapabilityAdds_, vector<string>) };
        inline vector<string> getSecurityContextCapabilityAdds() { DARABONBA_PTR_GET(securityContextCapabilityAdds_, vector<string>) };
        inline InitContainers& setSecurityContextCapabilityAdds(const vector<string> & securityContextCapabilityAdds) { DARABONBA_PTR_SET_VALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };
        inline InitContainers& setSecurityContextCapabilityAdds(vector<string> && securityContextCapabilityAdds) { DARABONBA_PTR_SET_RVALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };


        // securityContextReadOnlyRootFilesystem Field Functions 
        bool hasSecurityContextReadOnlyRootFilesystem() const { return this->securityContextReadOnlyRootFilesystem_ != nullptr;};
        void deleteSecurityContextReadOnlyRootFilesystem() { this->securityContextReadOnlyRootFilesystem_ = nullptr;};
        inline bool getSecurityContextReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(securityContextReadOnlyRootFilesystem_, false) };
        inline InitContainers& setSecurityContextReadOnlyRootFilesystem(bool securityContextReadOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(securityContextReadOnlyRootFilesystem_, securityContextReadOnlyRootFilesystem) };


        // securityContextRunAsUser Field Functions 
        bool hasSecurityContextRunAsUser() const { return this->securityContextRunAsUser_ != nullptr;};
        void deleteSecurityContextRunAsUser() { this->securityContextRunAsUser_ = nullptr;};
        inline string getSecurityContextRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(securityContextRunAsUser_, "") };
        inline InitContainers& setSecurityContextRunAsUser(string securityContextRunAsUser) { DARABONBA_PTR_SET_VALUE(securityContextRunAsUser_, securityContextRunAsUser) };


        // workingDir Field Functions 
        bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
        void deleteWorkingDir() { this->workingDir_ = nullptr;};
        inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
        inline InitContainers& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


      protected:
        // The number of CPU cores for the container.
        shared_ptr<float> cpu_ {};
        // The number of GPUs used by the container.
        shared_ptr<int32_t> gpu_ {};
        // The container image.
        shared_ptr<string> image_ {};
        // The image pull policy.
        shared_ptr<string> imagePullPolicy_ {};
        // The startup arguments for the container.
        shared_ptr<vector<string>> initContainerArgs_ {};
        // The startup commands for the container.
        shared_ptr<vector<string>> initContainerCommands_ {};
        // The environment variables for the init container.
        shared_ptr<vector<InitContainers::InitContainerEnvironmentVars>> initContainerEnvironmentVars_ {};
        // The port information for the init container.
        shared_ptr<vector<InitContainers::InitContainerPorts>> initContainerPorts_ {};
        // The array of mount point information for the init container.
        shared_ptr<vector<InitContainers::InitContainerVolumeMounts>> initContainerVolumeMounts_ {};
        // The memory size.
        shared_ptr<float> memory_ {};
        // The name of the container.
        shared_ptr<string> name_ {};
        // Grants specific permissions to processes in the container. Currently, only NET_ADMIN and NET_RAW are supported.
        shared_ptr<vector<string>> securityContextCapabilityAdds_ {};
        // Specifies whether the root file system is read-only. Only true is supported.
        shared_ptr<bool> securityContextReadOnlyRootFilesystem_ {};
        // The user ID used to run the container.
        shared_ptr<string> securityContextRunAsUser_ {};
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
        // The password for the image registry.
        shared_ptr<string> password_ {};
        // The server address of the image registry.
        shared_ptr<string> server_ {};
        // The username for the image registry.
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
        // The hostnames to add.
        shared_ptr<vector<string>> hostnames_ {};
        // The IP address to add.
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
        // The variable name of the object.
        shared_ptr<string> name_ {};
        // The variable value of the object.
        shared_ptr<string> value_ {};
      };

      class Containers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Containers& obj) { 
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
          DARABONBA_PTR_TO_JSON(LivenessProbeExecCommands, livenessProbeExecCommands_);
          DARABONBA_PTR_TO_JSON(LivenessProbeFailureThreshold, livenessProbeFailureThreshold_);
          DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetPath, livenessProbeHttpGetPath_);
          DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetPort, livenessProbeHttpGetPort_);
          DARABONBA_PTR_TO_JSON(LivenessProbeHttpGetScheme, livenessProbeHttpGetScheme_);
          DARABONBA_PTR_TO_JSON(LivenessProbeInitialDelaySeconds, livenessProbeInitialDelaySeconds_);
          DARABONBA_PTR_TO_JSON(LivenessProbePeriodSeconds, livenessProbePeriodSeconds_);
          DARABONBA_PTR_TO_JSON(LivenessProbeSuccessThreshold, livenessProbeSuccessThreshold_);
          DARABONBA_PTR_TO_JSON(LivenessProbeTcpSocketPort, livenessProbeTcpSocketPort_);
          DARABONBA_PTR_TO_JSON(LivenessProbeTimeoutSeconds, livenessProbeTimeoutSeconds_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeExecCommands, readinessProbeExecCommands_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeFailureThreshold, readinessProbeFailureThreshold_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetPath, readinessProbeHttpGetPath_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetPort, readinessProbeHttpGetPort_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeHttpGetScheme, readinessProbeHttpGetScheme_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeInitialDelaySeconds, readinessProbeInitialDelaySeconds_);
          DARABONBA_PTR_TO_JSON(ReadinessProbePeriodSeconds, readinessProbePeriodSeconds_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeSuccessThreshold, readinessProbeSuccessThreshold_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeTcpSocketPort, readinessProbeTcpSocketPort_);
          DARABONBA_PTR_TO_JSON(ReadinessProbeTimeoutSeconds, readinessProbeTimeoutSeconds_);
          DARABONBA_PTR_TO_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
          DARABONBA_PTR_TO_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
          DARABONBA_PTR_TO_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
          DARABONBA_PTR_TO_JSON(Stdin, stdin_);
          DARABONBA_PTR_TO_JSON(StdinOnce, stdinOnce_);
          DARABONBA_PTR_TO_JSON(Tty, tty_);
          DARABONBA_PTR_TO_JSON(VolumeMounts, volumeMounts_);
          DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
        };
        friend void from_json(const Darabonba::Json& j, Containers& obj) { 
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
          DARABONBA_PTR_FROM_JSON(LivenessProbeExecCommands, livenessProbeExecCommands_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeFailureThreshold, livenessProbeFailureThreshold_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetPath, livenessProbeHttpGetPath_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetPort, livenessProbeHttpGetPort_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeHttpGetScheme, livenessProbeHttpGetScheme_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeInitialDelaySeconds, livenessProbeInitialDelaySeconds_);
          DARABONBA_PTR_FROM_JSON(LivenessProbePeriodSeconds, livenessProbePeriodSeconds_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeSuccessThreshold, livenessProbeSuccessThreshold_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeTcpSocketPort, livenessProbeTcpSocketPort_);
          DARABONBA_PTR_FROM_JSON(LivenessProbeTimeoutSeconds, livenessProbeTimeoutSeconds_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeExecCommands, readinessProbeExecCommands_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeFailureThreshold, readinessProbeFailureThreshold_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetPath, readinessProbeHttpGetPath_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetPort, readinessProbeHttpGetPort_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeHttpGetScheme, readinessProbeHttpGetScheme_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeInitialDelaySeconds, readinessProbeInitialDelaySeconds_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbePeriodSeconds, readinessProbePeriodSeconds_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeSuccessThreshold, readinessProbeSuccessThreshold_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeTcpSocketPort, readinessProbeTcpSocketPort_);
          DARABONBA_PTR_FROM_JSON(ReadinessProbeTimeoutSeconds, readinessProbeTimeoutSeconds_);
          DARABONBA_PTR_FROM_JSON(SecurityContextCapabilityAdds, securityContextCapabilityAdds_);
          DARABONBA_PTR_FROM_JSON(SecurityContextReadOnlyRootFilesystem, securityContextReadOnlyRootFilesystem_);
          DARABONBA_PTR_FROM_JSON(SecurityContextRunAsUser, securityContextRunAsUser_);
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
          // The directory where the data volume is mounted in the container.
          // >Notice: The content in the mount directory of the container is directly overwritten by the content of the volume. Use this parameter with caution.
          shared_ptr<string> mountPath_ {};
          // The mount propagation settings of the data volume. Mount propagation allows volumes mounted by a container to be shared with other containers in the same pod, or even with other pods on the same node. Valid values:
          // - None: the volume does not perceive any subsequent mount operations performed on the volume or its subdirectories.
          // - HostToCotainer: the volume perceives subsequent mount operations performed on the volume or its subdirectories.
          // - Bidirectional: similar to HostToCotainer, the volume perceives mount operations. Additionally, the volume is propagated back to the host and to all containers of all pods that use the same volume.
          // Default value: None.
          shared_ptr<string> mountPropagation_ {};
          // The name of the mounted data volume.
          shared_ptr<string> name_ {};
          // Specifies whether the data volume is read-only.
          // Default value: false.
          shared_ptr<bool> readOnly_ {};
          // The subpath of the data volume.
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
          // >This parameter is not available.
          shared_ptr<string> fieldRefFieldPath_ {};
          // The name of the environment variable.
          shared_ptr<string> key_ {};
          // The value of the environment variable.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->args_ == nullptr
        && this->commands_ == nullptr && this->cpu_ == nullptr && this->environmentVars_ == nullptr && this->gpu_ == nullptr && this->image_ == nullptr
        && this->imagePullPolicy_ == nullptr && this->lifecyclePostStartHandlerExecs_ == nullptr && this->lifecyclePostStartHandlerHttpGetHost_ == nullptr && this->lifecyclePostStartHandlerHttpGetPath_ == nullptr && this->lifecyclePostStartHandlerHttpGetPort_ == nullptr
        && this->lifecyclePostStartHandlerHttpGetScheme_ == nullptr && this->lifecyclePostStartHandlerTcpSocketHost_ == nullptr && this->lifecyclePostStartHandlerTcpSocketPort_ == nullptr && this->lifecyclePreStopHandlerExecs_ == nullptr && this->lifecyclePreStopHandlerHttpGetHost_ == nullptr
        && this->lifecyclePreStopHandlerHttpGetPath_ == nullptr && this->lifecyclePreStopHandlerHttpGetPort_ == nullptr && this->lifecyclePreStopHandlerHttpGetScheme_ == nullptr && this->lifecyclePreStopHandlerTcpSocketHost_ == nullptr && this->lifecyclePreStopHandlerTcpSocketPort_ == nullptr
        && this->livenessProbeExecCommands_ == nullptr && this->livenessProbeFailureThreshold_ == nullptr && this->livenessProbeHttpGetPath_ == nullptr && this->livenessProbeHttpGetPort_ == nullptr && this->livenessProbeHttpGetScheme_ == nullptr
        && this->livenessProbeInitialDelaySeconds_ == nullptr && this->livenessProbePeriodSeconds_ == nullptr && this->livenessProbeSuccessThreshold_ == nullptr && this->livenessProbeTcpSocketPort_ == nullptr && this->livenessProbeTimeoutSeconds_ == nullptr
        && this->memory_ == nullptr && this->name_ == nullptr && this->ports_ == nullptr && this->readinessProbeExecCommands_ == nullptr && this->readinessProbeFailureThreshold_ == nullptr
        && this->readinessProbeHttpGetPath_ == nullptr && this->readinessProbeHttpGetPort_ == nullptr && this->readinessProbeHttpGetScheme_ == nullptr && this->readinessProbeInitialDelaySeconds_ == nullptr && this->readinessProbePeriodSeconds_ == nullptr
        && this->readinessProbeSuccessThreshold_ == nullptr && this->readinessProbeTcpSocketPort_ == nullptr && this->readinessProbeTimeoutSeconds_ == nullptr && this->securityContextCapabilityAdds_ == nullptr && this->securityContextReadOnlyRootFilesystem_ == nullptr
        && this->securityContextRunAsUser_ == nullptr && this->stdin_ == nullptr && this->stdinOnce_ == nullptr && this->tty_ == nullptr && this->volumeMounts_ == nullptr
        && this->workingDir_ == nullptr; };
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


        // livenessProbeExecCommands Field Functions 
        bool hasLivenessProbeExecCommands() const { return this->livenessProbeExecCommands_ != nullptr;};
        void deleteLivenessProbeExecCommands() { this->livenessProbeExecCommands_ = nullptr;};
        inline const vector<string> & getLivenessProbeExecCommands() const { DARABONBA_PTR_GET_CONST(livenessProbeExecCommands_, vector<string>) };
        inline vector<string> getLivenessProbeExecCommands() { DARABONBA_PTR_GET(livenessProbeExecCommands_, vector<string>) };
        inline Containers& setLivenessProbeExecCommands(const vector<string> & livenessProbeExecCommands) { DARABONBA_PTR_SET_VALUE(livenessProbeExecCommands_, livenessProbeExecCommands) };
        inline Containers& setLivenessProbeExecCommands(vector<string> && livenessProbeExecCommands) { DARABONBA_PTR_SET_RVALUE(livenessProbeExecCommands_, livenessProbeExecCommands) };


        // livenessProbeFailureThreshold Field Functions 
        bool hasLivenessProbeFailureThreshold() const { return this->livenessProbeFailureThreshold_ != nullptr;};
        void deleteLivenessProbeFailureThreshold() { this->livenessProbeFailureThreshold_ = nullptr;};
        inline int32_t getLivenessProbeFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeFailureThreshold_, 0) };
        inline Containers& setLivenessProbeFailureThreshold(int32_t livenessProbeFailureThreshold) { DARABONBA_PTR_SET_VALUE(livenessProbeFailureThreshold_, livenessProbeFailureThreshold) };


        // livenessProbeHttpGetPath Field Functions 
        bool hasLivenessProbeHttpGetPath() const { return this->livenessProbeHttpGetPath_ != nullptr;};
        void deleteLivenessProbeHttpGetPath() { this->livenessProbeHttpGetPath_ = nullptr;};
        inline string getLivenessProbeHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetPath_, "") };
        inline Containers& setLivenessProbeHttpGetPath(string livenessProbeHttpGetPath) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetPath_, livenessProbeHttpGetPath) };


        // livenessProbeHttpGetPort Field Functions 
        bool hasLivenessProbeHttpGetPort() const { return this->livenessProbeHttpGetPort_ != nullptr;};
        void deleteLivenessProbeHttpGetPort() { this->livenessProbeHttpGetPort_ = nullptr;};
        inline int32_t getLivenessProbeHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetPort_, 0) };
        inline Containers& setLivenessProbeHttpGetPort(int32_t livenessProbeHttpGetPort) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetPort_, livenessProbeHttpGetPort) };


        // livenessProbeHttpGetScheme Field Functions 
        bool hasLivenessProbeHttpGetScheme() const { return this->livenessProbeHttpGetScheme_ != nullptr;};
        void deleteLivenessProbeHttpGetScheme() { this->livenessProbeHttpGetScheme_ = nullptr;};
        inline string getLivenessProbeHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeHttpGetScheme_, "") };
        inline Containers& setLivenessProbeHttpGetScheme(string livenessProbeHttpGetScheme) { DARABONBA_PTR_SET_VALUE(livenessProbeHttpGetScheme_, livenessProbeHttpGetScheme) };


        // livenessProbeInitialDelaySeconds Field Functions 
        bool hasLivenessProbeInitialDelaySeconds() const { return this->livenessProbeInitialDelaySeconds_ != nullptr;};
        void deleteLivenessProbeInitialDelaySeconds() { this->livenessProbeInitialDelaySeconds_ = nullptr;};
        inline int32_t getLivenessProbeInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeInitialDelaySeconds_, 0) };
        inline Containers& setLivenessProbeInitialDelaySeconds(int32_t livenessProbeInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(livenessProbeInitialDelaySeconds_, livenessProbeInitialDelaySeconds) };


        // livenessProbePeriodSeconds Field Functions 
        bool hasLivenessProbePeriodSeconds() const { return this->livenessProbePeriodSeconds_ != nullptr;};
        void deleteLivenessProbePeriodSeconds() { this->livenessProbePeriodSeconds_ = nullptr;};
        inline int32_t getLivenessProbePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbePeriodSeconds_, 0) };
        inline Containers& setLivenessProbePeriodSeconds(int32_t livenessProbePeriodSeconds) { DARABONBA_PTR_SET_VALUE(livenessProbePeriodSeconds_, livenessProbePeriodSeconds) };


        // livenessProbeSuccessThreshold Field Functions 
        bool hasLivenessProbeSuccessThreshold() const { return this->livenessProbeSuccessThreshold_ != nullptr;};
        void deleteLivenessProbeSuccessThreshold() { this->livenessProbeSuccessThreshold_ = nullptr;};
        inline int32_t getLivenessProbeSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeSuccessThreshold_, 0) };
        inline Containers& setLivenessProbeSuccessThreshold(int32_t livenessProbeSuccessThreshold) { DARABONBA_PTR_SET_VALUE(livenessProbeSuccessThreshold_, livenessProbeSuccessThreshold) };


        // livenessProbeTcpSocketPort Field Functions 
        bool hasLivenessProbeTcpSocketPort() const { return this->livenessProbeTcpSocketPort_ != nullptr;};
        void deleteLivenessProbeTcpSocketPort() { this->livenessProbeTcpSocketPort_ = nullptr;};
        inline int32_t getLivenessProbeTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeTcpSocketPort_, 0) };
        inline Containers& setLivenessProbeTcpSocketPort(int32_t livenessProbeTcpSocketPort) { DARABONBA_PTR_SET_VALUE(livenessProbeTcpSocketPort_, livenessProbeTcpSocketPort) };


        // livenessProbeTimeoutSeconds Field Functions 
        bool hasLivenessProbeTimeoutSeconds() const { return this->livenessProbeTimeoutSeconds_ != nullptr;};
        void deleteLivenessProbeTimeoutSeconds() { this->livenessProbeTimeoutSeconds_ = nullptr;};
        inline int32_t getLivenessProbeTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(livenessProbeTimeoutSeconds_, 0) };
        inline Containers& setLivenessProbeTimeoutSeconds(int32_t livenessProbeTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(livenessProbeTimeoutSeconds_, livenessProbeTimeoutSeconds) };


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


        // readinessProbeExecCommands Field Functions 
        bool hasReadinessProbeExecCommands() const { return this->readinessProbeExecCommands_ != nullptr;};
        void deleteReadinessProbeExecCommands() { this->readinessProbeExecCommands_ = nullptr;};
        inline const vector<string> & getReadinessProbeExecCommands() const { DARABONBA_PTR_GET_CONST(readinessProbeExecCommands_, vector<string>) };
        inline vector<string> getReadinessProbeExecCommands() { DARABONBA_PTR_GET(readinessProbeExecCommands_, vector<string>) };
        inline Containers& setReadinessProbeExecCommands(const vector<string> & readinessProbeExecCommands) { DARABONBA_PTR_SET_VALUE(readinessProbeExecCommands_, readinessProbeExecCommands) };
        inline Containers& setReadinessProbeExecCommands(vector<string> && readinessProbeExecCommands) { DARABONBA_PTR_SET_RVALUE(readinessProbeExecCommands_, readinessProbeExecCommands) };


        // readinessProbeFailureThreshold Field Functions 
        bool hasReadinessProbeFailureThreshold() const { return this->readinessProbeFailureThreshold_ != nullptr;};
        void deleteReadinessProbeFailureThreshold() { this->readinessProbeFailureThreshold_ = nullptr;};
        inline int32_t getReadinessProbeFailureThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeFailureThreshold_, 0) };
        inline Containers& setReadinessProbeFailureThreshold(int32_t readinessProbeFailureThreshold) { DARABONBA_PTR_SET_VALUE(readinessProbeFailureThreshold_, readinessProbeFailureThreshold) };


        // readinessProbeHttpGetPath Field Functions 
        bool hasReadinessProbeHttpGetPath() const { return this->readinessProbeHttpGetPath_ != nullptr;};
        void deleteReadinessProbeHttpGetPath() { this->readinessProbeHttpGetPath_ = nullptr;};
        inline string getReadinessProbeHttpGetPath() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetPath_, "") };
        inline Containers& setReadinessProbeHttpGetPath(string readinessProbeHttpGetPath) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetPath_, readinessProbeHttpGetPath) };


        // readinessProbeHttpGetPort Field Functions 
        bool hasReadinessProbeHttpGetPort() const { return this->readinessProbeHttpGetPort_ != nullptr;};
        void deleteReadinessProbeHttpGetPort() { this->readinessProbeHttpGetPort_ = nullptr;};
        inline int32_t getReadinessProbeHttpGetPort() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetPort_, 0) };
        inline Containers& setReadinessProbeHttpGetPort(int32_t readinessProbeHttpGetPort) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetPort_, readinessProbeHttpGetPort) };


        // readinessProbeHttpGetScheme Field Functions 
        bool hasReadinessProbeHttpGetScheme() const { return this->readinessProbeHttpGetScheme_ != nullptr;};
        void deleteReadinessProbeHttpGetScheme() { this->readinessProbeHttpGetScheme_ = nullptr;};
        inline string getReadinessProbeHttpGetScheme() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeHttpGetScheme_, "") };
        inline Containers& setReadinessProbeHttpGetScheme(string readinessProbeHttpGetScheme) { DARABONBA_PTR_SET_VALUE(readinessProbeHttpGetScheme_, readinessProbeHttpGetScheme) };


        // readinessProbeInitialDelaySeconds Field Functions 
        bool hasReadinessProbeInitialDelaySeconds() const { return this->readinessProbeInitialDelaySeconds_ != nullptr;};
        void deleteReadinessProbeInitialDelaySeconds() { this->readinessProbeInitialDelaySeconds_ = nullptr;};
        inline int32_t getReadinessProbeInitialDelaySeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeInitialDelaySeconds_, 0) };
        inline Containers& setReadinessProbeInitialDelaySeconds(int32_t readinessProbeInitialDelaySeconds) { DARABONBA_PTR_SET_VALUE(readinessProbeInitialDelaySeconds_, readinessProbeInitialDelaySeconds) };


        // readinessProbePeriodSeconds Field Functions 
        bool hasReadinessProbePeriodSeconds() const { return this->readinessProbePeriodSeconds_ != nullptr;};
        void deleteReadinessProbePeriodSeconds() { this->readinessProbePeriodSeconds_ = nullptr;};
        inline int32_t getReadinessProbePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbePeriodSeconds_, 0) };
        inline Containers& setReadinessProbePeriodSeconds(int32_t readinessProbePeriodSeconds) { DARABONBA_PTR_SET_VALUE(readinessProbePeriodSeconds_, readinessProbePeriodSeconds) };


        // readinessProbeSuccessThreshold Field Functions 
        bool hasReadinessProbeSuccessThreshold() const { return this->readinessProbeSuccessThreshold_ != nullptr;};
        void deleteReadinessProbeSuccessThreshold() { this->readinessProbeSuccessThreshold_ = nullptr;};
        inline int32_t getReadinessProbeSuccessThreshold() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeSuccessThreshold_, 0) };
        inline Containers& setReadinessProbeSuccessThreshold(int32_t readinessProbeSuccessThreshold) { DARABONBA_PTR_SET_VALUE(readinessProbeSuccessThreshold_, readinessProbeSuccessThreshold) };


        // readinessProbeTcpSocketPort Field Functions 
        bool hasReadinessProbeTcpSocketPort() const { return this->readinessProbeTcpSocketPort_ != nullptr;};
        void deleteReadinessProbeTcpSocketPort() { this->readinessProbeTcpSocketPort_ = nullptr;};
        inline int32_t getReadinessProbeTcpSocketPort() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeTcpSocketPort_, 0) };
        inline Containers& setReadinessProbeTcpSocketPort(int32_t readinessProbeTcpSocketPort) { DARABONBA_PTR_SET_VALUE(readinessProbeTcpSocketPort_, readinessProbeTcpSocketPort) };


        // readinessProbeTimeoutSeconds Field Functions 
        bool hasReadinessProbeTimeoutSeconds() const { return this->readinessProbeTimeoutSeconds_ != nullptr;};
        void deleteReadinessProbeTimeoutSeconds() { this->readinessProbeTimeoutSeconds_ = nullptr;};
        inline int32_t getReadinessProbeTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(readinessProbeTimeoutSeconds_, 0) };
        inline Containers& setReadinessProbeTimeoutSeconds(int32_t readinessProbeTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(readinessProbeTimeoutSeconds_, readinessProbeTimeoutSeconds) };


        // securityContextCapabilityAdds Field Functions 
        bool hasSecurityContextCapabilityAdds() const { return this->securityContextCapabilityAdds_ != nullptr;};
        void deleteSecurityContextCapabilityAdds() { this->securityContextCapabilityAdds_ = nullptr;};
        inline const vector<string> & getSecurityContextCapabilityAdds() const { DARABONBA_PTR_GET_CONST(securityContextCapabilityAdds_, vector<string>) };
        inline vector<string> getSecurityContextCapabilityAdds() { DARABONBA_PTR_GET(securityContextCapabilityAdds_, vector<string>) };
        inline Containers& setSecurityContextCapabilityAdds(const vector<string> & securityContextCapabilityAdds) { DARABONBA_PTR_SET_VALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };
        inline Containers& setSecurityContextCapabilityAdds(vector<string> && securityContextCapabilityAdds) { DARABONBA_PTR_SET_RVALUE(securityContextCapabilityAdds_, securityContextCapabilityAdds) };


        // securityContextReadOnlyRootFilesystem Field Functions 
        bool hasSecurityContextReadOnlyRootFilesystem() const { return this->securityContextReadOnlyRootFilesystem_ != nullptr;};
        void deleteSecurityContextReadOnlyRootFilesystem() { this->securityContextReadOnlyRootFilesystem_ = nullptr;};
        inline bool getSecurityContextReadOnlyRootFilesystem() const { DARABONBA_PTR_GET_DEFAULT(securityContextReadOnlyRootFilesystem_, false) };
        inline Containers& setSecurityContextReadOnlyRootFilesystem(bool securityContextReadOnlyRootFilesystem) { DARABONBA_PTR_SET_VALUE(securityContextReadOnlyRootFilesystem_, securityContextReadOnlyRootFilesystem) };


        // securityContextRunAsUser Field Functions 
        bool hasSecurityContextRunAsUser() const { return this->securityContextRunAsUser_ != nullptr;};
        void deleteSecurityContextRunAsUser() { this->securityContextRunAsUser_ = nullptr;};
        inline int64_t getSecurityContextRunAsUser() const { DARABONBA_PTR_GET_DEFAULT(securityContextRunAsUser_, 0L) };
        inline Containers& setSecurityContextRunAsUser(int64_t securityContextRunAsUser) { DARABONBA_PTR_SET_VALUE(securityContextRunAsUser_, securityContextRunAsUser) };


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
        // The startup arguments for the container.
        shared_ptr<vector<string>> args_ {};
        // The startup commands for the container.
        shared_ptr<vector<string>> commands_ {};
        // The number of vCPUs.
        shared_ptr<float> cpu_ {};
        // The environment variable information.
        shared_ptr<vector<Containers::EnvironmentVars>> environmentVars_ {};
        // The number of GPUs.
        shared_ptr<int32_t> gpu_ {};
        // The container image.
        shared_ptr<string> image_ {};
        // The image pull policy.
        shared_ptr<string> imagePullPolicy_ {};
        // The commands executed in the container when the postStart callback function is configured by using the command line.
        shared_ptr<vector<string>> lifecyclePostStartHandlerExecs_ {};
        // The host address that receives HTTP GET requests when the postStart callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePostStartHandlerHttpGetHost_ {};
        // The path checked by HTTP GET requests when the postStart callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePostStartHandlerHttpGetPath_ {};
        // The port number checked by HTTP GET requests when the postStart callback function is configured by using HTTP requests.
        shared_ptr<int32_t> lifecyclePostStartHandlerHttpGetPort_ {};
        // The protocol type used for HTTP GET requests when the postStart callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePostStartHandlerHttpGetScheme_ {};
        // The host address checked by TCP sockets when the postStart callback function is configured by using TCP sockets.
        shared_ptr<string> lifecyclePostStartHandlerTcpSocketHost_ {};
        // The port checked by TCP sockets when the postStart callback function is configured by using TCP sockets.
        shared_ptr<int32_t> lifecyclePostStartHandlerTcpSocketPort_ {};
        // The commands executed in the container when the preStop callback function is configured by using the command line.
        shared_ptr<vector<string>> lifecyclePreStopHandlerExecs_ {};
        // The host address that receives HTTP GET requests when the preStop callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePreStopHandlerHttpGetHost_ {};
        // The path checked by HTTP GET requests when the preStop callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePreStopHandlerHttpGetPath_ {};
        // The port number checked by HTTP GET requests when the preStop callback function is configured by using HTTP requests.
        shared_ptr<int32_t> lifecyclePreStopHandlerHttpGetPort_ {};
        // The protocol type used for HTTP GET requests when the preStop callback function is configured by using HTTP requests.
        shared_ptr<string> lifecyclePreStopHandlerHttpGetScheme_ {};
        // The host address checked by TCP sockets when the preStop callback function is configured by using TCP sockets.
        shared_ptr<string> lifecyclePreStopHandlerTcpSocketHost_ {};
        // The port checked by TCP sockets when the preStop callback function is configured by using TCP sockets.
        shared_ptr<int32_t> lifecyclePreStopHandlerTcpSocketPort_ {};
        // The commands executed in the container when command-line health checks are performed.
        shared_ptr<vector<string>> livenessProbeExecCommands_ {};
        // The minimum consecutive failures for the readiness probe to be considered failed after having succeeded.
        // Default value: 3.
        shared_ptr<int32_t> livenessProbeFailureThreshold_ {};
        // The path for the HTTP GET readiness probe.
        shared_ptr<string> livenessProbeHttpGetPath_ {};
        // The port for the HTTP GET liveness probe.
        shared_ptr<int32_t> livenessProbeHttpGetPort_ {};
        // The protocol type of the HTTP GET request when HTTP requests are used for health checks. Valid values:
        // - HTTP
        // - HTTPS
        shared_ptr<string> livenessProbeHttpGetScheme_ {};
        // The delay before the readiness probe is initiated after the container starts.
        shared_ptr<int32_t> livenessProbeInitialDelaySeconds_ {};
        // The interval at which the liveness probe is performed. Default value: 10 seconds. Minimum value: 1 second.
        shared_ptr<int32_t> livenessProbePeriodSeconds_ {};
        // The minimum consecutive successes for the probe to be considered successful after having failed. Default value: 1. The current value must be 1.
        shared_ptr<int32_t> livenessProbeSuccessThreshold_ {};
        // The port number for the TCP socket liveness probe.
        shared_ptr<int32_t> livenessProbeTcpSocketPort_ {};
        // The timeout period for the liveness probe. Default value: 1 second. Minimum value: 1 second.
        shared_ptr<int32_t> livenessProbeTimeoutSeconds_ {};
        // The memory size.
        shared_ptr<float> memory_ {};
        // The name of the container.
        shared_ptr<string> name_ {};
        // The exposed ports and protocols.
        shared_ptr<vector<Containers::Ports>> ports_ {};
        // The commands executed in the container when command-line health checks are performed.
        shared_ptr<vector<string>> readinessProbeExecCommands_ {};
        // The minimum consecutive failures for the readiness probe to be considered failed after having succeeded.
        // Default value: 3.
        shared_ptr<int32_t> readinessProbeFailureThreshold_ {};
        // The path for the HTTP GET readiness probe.
        shared_ptr<string> readinessProbeHttpGetPath_ {};
        // The path for the HTTP GET readiness probe.
        shared_ptr<int32_t> readinessProbeHttpGetPort_ {};
        // The protocol type of the HTTP GET request when HTTP requests are used for health checks. Valid values:
        // - HTTP
        // - HTTPS
        shared_ptr<string> readinessProbeHttpGetScheme_ {};
        // The delay before the readiness probe is initiated after the container starts.
        shared_ptr<int32_t> readinessProbeInitialDelaySeconds_ {};
        // The interval at which the readiness probe is performed. Default value: 10 seconds. Minimum value: 1 second.
        shared_ptr<int32_t> readinessProbePeriodSeconds_ {};
        // The minimum consecutive successes for the probe to be considered successful after having failed. Default value: 1. The current value must be 1.
        shared_ptr<int32_t> readinessProbeSuccessThreshold_ {};
        // The port number for the TCP socket liveness probe.
        shared_ptr<int32_t> readinessProbeTcpSocketPort_ {};
        // The timeout period for the readiness probe. Default value: 1 second. Minimum value: 1 second.
        shared_ptr<int32_t> readinessProbeTimeoutSeconds_ {};
        // Grants specific permissions to processes in the container. Currently, only NET_ADMIN and NET_RAW are supported.
        shared_ptr<vector<string>> securityContextCapabilityAdds_ {};
        // Specifies whether the root file system is read-only. Only true is supported.
        shared_ptr<bool> securityContextReadOnlyRootFilesystem_ {};
        // The UID used to run the entrypoint of the container process.
        shared_ptr<int64_t> securityContextRunAsUser_ {};
        // Specifies whether to allocate a buffer for standard input during container runtime. If this parameter is not set, reading from standard input in the container results in an EOF. Default value: false.
        shared_ptr<bool> stdin_ {};
        // Specifies whether the standard input stream remains in the enabling status across multiple attached sessions when standard input is set to true.
        // 
        // If StdinOnce is set to true, standard input is opened when the container starts, remains empty until the first client attaches to it, and then stays in the enabling status to accept data until the client disconnects. After the client disconnects, standard input enters shutdown and remains in shutdown until the container is restarted.
        shared_ptr<bool> stdinOnce_ {};
        // Specifies whether to enable interaction. Valid values:
        // - true: enabled.
        // - false: disabled.
        // For example, if Command is set to /bin/bash, set this parameter to true.
        // Default value: false.
        shared_ptr<bool> tty_ {};
        // The volume mounts.
        shared_ptr<vector<Containers::VolumeMounts>> volumeMounts_ {};
        // The working directory in the container.
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
        // The domain names of the ACR Enterprise instance. By default, all domain names of the instance are used. You can specify specific domain names and separate multiple domain names with commas (,).
        shared_ptr<vector<string>> domains_ {};
        // The instance ID of the ACR Enterprise instance.
        shared_ptr<string> instanceId_ {};
        // The name of the ACR Enterprise instance.
        shared_ptr<string> instanceName_ {};
        // The region to which the ACR Enterprise instance belongs.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && this->activeDeadlineSeconds_ == nullptr && this->autoCreateEip_ == nullptr && this->autoMatchImageCache_ == nullptr && this->computeCategory_ == nullptr && this->containerGroupName_ == nullptr
        && this->containers_ == nullptr && this->costOptimization_ == nullptr && this->cpu_ == nullptr && this->cpuOptionsCore_ == nullptr && this->cpuOptionsThreadsPerCore_ == nullptr
        && this->creationTime_ == nullptr && this->dataCacheBucket_ == nullptr && this->dataCacheBurstingEnabled_ == nullptr && this->dataCachePL_ == nullptr && this->dataCacheProvisionedIops_ == nullptr
        && this->description_ == nullptr && this->dnsConfigNameServers_ == nullptr && this->dnsConfigOptions_ == nullptr && this->dnsConfigSearches_ == nullptr && this->dnsPolicy_ == nullptr
        && this->egressBandwidth_ == nullptr && this->eipBandwidth_ == nullptr && this->eipCommonBandwidthPackage_ == nullptr && this->eipISP_ == nullptr && this->eipPublicIpAddressPoolId_ == nullptr
        && this->ephemeralStorage_ == nullptr && this->hostAliases_ == nullptr && this->hostName_ == nullptr && this->imageRegistryCredentials_ == nullptr && this->imageSnapshotId_ == nullptr
        && this->ingressBandwidth_ == nullptr && this->initContainers_ == nullptr && this->instanceFamilyLevel_ == nullptr && this->instanceTypes_ == nullptr && this->ipv6AddressCount_ == nullptr
        && this->lifecycleState_ == nullptr && this->loadBalancerWeight_ == nullptr && this->memory_ == nullptr && this->ntpServers_ == nullptr && this->ramRoleName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->restartPolicy_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingConfigurationName_ == nullptr
        && this->scalingGroupId_ == nullptr && this->securityContextSysCtls_ == nullptr && this->securityGroupId_ == nullptr && this->slsEnable_ == nullptr && this->spotPriceLimit_ == nullptr
        && this->spotStrategy_ == nullptr && this->tags_ == nullptr && this->terminationGracePeriodSeconds_ == nullptr && this->volumes_ == nullptr; };
      // acrRegistryInfos Field Functions 
      bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
      void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
      inline const vector<ScalingConfiguration::AcrRegistryInfos> & getAcrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<ScalingConfiguration::AcrRegistryInfos>) };
      inline vector<ScalingConfiguration::AcrRegistryInfos> getAcrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<ScalingConfiguration::AcrRegistryInfos>) };
      inline ScalingConfiguration& setAcrRegistryInfos(const vector<ScalingConfiguration::AcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
      inline ScalingConfiguration& setAcrRegistryInfos(vector<ScalingConfiguration::AcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


      // activeDeadlineSeconds Field Functions 
      bool hasActiveDeadlineSeconds() const { return this->activeDeadlineSeconds_ != nullptr;};
      void deleteActiveDeadlineSeconds() { this->activeDeadlineSeconds_ = nullptr;};
      inline int32_t getActiveDeadlineSeconds() const { DARABONBA_PTR_GET_DEFAULT(activeDeadlineSeconds_, 0) };
      inline ScalingConfiguration& setActiveDeadlineSeconds(int32_t activeDeadlineSeconds) { DARABONBA_PTR_SET_VALUE(activeDeadlineSeconds_, activeDeadlineSeconds) };


      // autoCreateEip Field Functions 
      bool hasAutoCreateEip() const { return this->autoCreateEip_ != nullptr;};
      void deleteAutoCreateEip() { this->autoCreateEip_ = nullptr;};
      inline bool getAutoCreateEip() const { DARABONBA_PTR_GET_DEFAULT(autoCreateEip_, false) };
      inline ScalingConfiguration& setAutoCreateEip(bool autoCreateEip) { DARABONBA_PTR_SET_VALUE(autoCreateEip_, autoCreateEip) };


      // autoMatchImageCache Field Functions 
      bool hasAutoMatchImageCache() const { return this->autoMatchImageCache_ != nullptr;};
      void deleteAutoMatchImageCache() { this->autoMatchImageCache_ = nullptr;};
      inline bool getAutoMatchImageCache() const { DARABONBA_PTR_GET_DEFAULT(autoMatchImageCache_, false) };
      inline ScalingConfiguration& setAutoMatchImageCache(bool autoMatchImageCache) { DARABONBA_PTR_SET_VALUE(autoMatchImageCache_, autoMatchImageCache) };


      // computeCategory Field Functions 
      bool hasComputeCategory() const { return this->computeCategory_ != nullptr;};
      void deleteComputeCategory() { this->computeCategory_ = nullptr;};
      inline const vector<string> & getComputeCategory() const { DARABONBA_PTR_GET_CONST(computeCategory_, vector<string>) };
      inline vector<string> getComputeCategory() { DARABONBA_PTR_GET(computeCategory_, vector<string>) };
      inline ScalingConfiguration& setComputeCategory(const vector<string> & computeCategory) { DARABONBA_PTR_SET_VALUE(computeCategory_, computeCategory) };
      inline ScalingConfiguration& setComputeCategory(vector<string> && computeCategory) { DARABONBA_PTR_SET_RVALUE(computeCategory_, computeCategory) };


      // containerGroupName Field Functions 
      bool hasContainerGroupName() const { return this->containerGroupName_ != nullptr;};
      void deleteContainerGroupName() { this->containerGroupName_ = nullptr;};
      inline string getContainerGroupName() const { DARABONBA_PTR_GET_DEFAULT(containerGroupName_, "") };
      inline ScalingConfiguration& setContainerGroupName(string containerGroupName) { DARABONBA_PTR_SET_VALUE(containerGroupName_, containerGroupName) };


      // containers Field Functions 
      bool hasContainers() const { return this->containers_ != nullptr;};
      void deleteContainers() { this->containers_ = nullptr;};
      inline const vector<ScalingConfiguration::Containers> & getContainers() const { DARABONBA_PTR_GET_CONST(containers_, vector<ScalingConfiguration::Containers>) };
      inline vector<ScalingConfiguration::Containers> getContainers() { DARABONBA_PTR_GET(containers_, vector<ScalingConfiguration::Containers>) };
      inline ScalingConfiguration& setContainers(const vector<ScalingConfiguration::Containers> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
      inline ScalingConfiguration& setContainers(vector<ScalingConfiguration::Containers> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


      // costOptimization Field Functions 
      bool hasCostOptimization() const { return this->costOptimization_ != nullptr;};
      void deleteCostOptimization() { this->costOptimization_ = nullptr;};
      inline bool getCostOptimization() const { DARABONBA_PTR_GET_DEFAULT(costOptimization_, false) };
      inline ScalingConfiguration& setCostOptimization(bool costOptimization) { DARABONBA_PTR_SET_VALUE(costOptimization_, costOptimization) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
      inline ScalingConfiguration& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // cpuOptionsCore Field Functions 
      bool hasCpuOptionsCore() const { return this->cpuOptionsCore_ != nullptr;};
      void deleteCpuOptionsCore() { this->cpuOptionsCore_ = nullptr;};
      inline int32_t getCpuOptionsCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsCore_, 0) };
      inline ScalingConfiguration& setCpuOptionsCore(int32_t cpuOptionsCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsCore_, cpuOptionsCore) };


      // cpuOptionsThreadsPerCore Field Functions 
      bool hasCpuOptionsThreadsPerCore() const { return this->cpuOptionsThreadsPerCore_ != nullptr;};
      void deleteCpuOptionsThreadsPerCore() { this->cpuOptionsThreadsPerCore_ = nullptr;};
      inline int32_t getCpuOptionsThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(cpuOptionsThreadsPerCore_, 0) };
      inline ScalingConfiguration& setCpuOptionsThreadsPerCore(int32_t cpuOptionsThreadsPerCore) { DARABONBA_PTR_SET_VALUE(cpuOptionsThreadsPerCore_, cpuOptionsThreadsPerCore) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ScalingConfiguration& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataCacheBucket Field Functions 
      bool hasDataCacheBucket() const { return this->dataCacheBucket_ != nullptr;};
      void deleteDataCacheBucket() { this->dataCacheBucket_ = nullptr;};
      inline string getDataCacheBucket() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBucket_, "") };
      inline ScalingConfiguration& setDataCacheBucket(string dataCacheBucket) { DARABONBA_PTR_SET_VALUE(dataCacheBucket_, dataCacheBucket) };


      // dataCacheBurstingEnabled Field Functions 
      bool hasDataCacheBurstingEnabled() const { return this->dataCacheBurstingEnabled_ != nullptr;};
      void deleteDataCacheBurstingEnabled() { this->dataCacheBurstingEnabled_ = nullptr;};
      inline bool getDataCacheBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataCacheBurstingEnabled_, false) };
      inline ScalingConfiguration& setDataCacheBurstingEnabled(bool dataCacheBurstingEnabled) { DARABONBA_PTR_SET_VALUE(dataCacheBurstingEnabled_, dataCacheBurstingEnabled) };


      // dataCachePL Field Functions 
      bool hasDataCachePL() const { return this->dataCachePL_ != nullptr;};
      void deleteDataCachePL() { this->dataCachePL_ = nullptr;};
      inline string getDataCachePL() const { DARABONBA_PTR_GET_DEFAULT(dataCachePL_, "") };
      inline ScalingConfiguration& setDataCachePL(string dataCachePL) { DARABONBA_PTR_SET_VALUE(dataCachePL_, dataCachePL) };


      // dataCacheProvisionedIops Field Functions 
      bool hasDataCacheProvisionedIops() const { return this->dataCacheProvisionedIops_ != nullptr;};
      void deleteDataCacheProvisionedIops() { this->dataCacheProvisionedIops_ = nullptr;};
      inline int32_t getDataCacheProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(dataCacheProvisionedIops_, 0) };
      inline ScalingConfiguration& setDataCacheProvisionedIops(int32_t dataCacheProvisionedIops) { DARABONBA_PTR_SET_VALUE(dataCacheProvisionedIops_, dataCacheProvisionedIops) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScalingConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dnsConfigNameServers Field Functions 
      bool hasDnsConfigNameServers() const { return this->dnsConfigNameServers_ != nullptr;};
      void deleteDnsConfigNameServers() { this->dnsConfigNameServers_ = nullptr;};
      inline const vector<string> & getDnsConfigNameServers() const { DARABONBA_PTR_GET_CONST(dnsConfigNameServers_, vector<string>) };
      inline vector<string> getDnsConfigNameServers() { DARABONBA_PTR_GET(dnsConfigNameServers_, vector<string>) };
      inline ScalingConfiguration& setDnsConfigNameServers(const vector<string> & dnsConfigNameServers) { DARABONBA_PTR_SET_VALUE(dnsConfigNameServers_, dnsConfigNameServers) };
      inline ScalingConfiguration& setDnsConfigNameServers(vector<string> && dnsConfigNameServers) { DARABONBA_PTR_SET_RVALUE(dnsConfigNameServers_, dnsConfigNameServers) };


      // dnsConfigOptions Field Functions 
      bool hasDnsConfigOptions() const { return this->dnsConfigOptions_ != nullptr;};
      void deleteDnsConfigOptions() { this->dnsConfigOptions_ = nullptr;};
      inline const vector<ScalingConfiguration::DnsConfigOptions> & getDnsConfigOptions() const { DARABONBA_PTR_GET_CONST(dnsConfigOptions_, vector<ScalingConfiguration::DnsConfigOptions>) };
      inline vector<ScalingConfiguration::DnsConfigOptions> getDnsConfigOptions() { DARABONBA_PTR_GET(dnsConfigOptions_, vector<ScalingConfiguration::DnsConfigOptions>) };
      inline ScalingConfiguration& setDnsConfigOptions(const vector<ScalingConfiguration::DnsConfigOptions> & dnsConfigOptions) { DARABONBA_PTR_SET_VALUE(dnsConfigOptions_, dnsConfigOptions) };
      inline ScalingConfiguration& setDnsConfigOptions(vector<ScalingConfiguration::DnsConfigOptions> && dnsConfigOptions) { DARABONBA_PTR_SET_RVALUE(dnsConfigOptions_, dnsConfigOptions) };


      // dnsConfigSearches Field Functions 
      bool hasDnsConfigSearches() const { return this->dnsConfigSearches_ != nullptr;};
      void deleteDnsConfigSearches() { this->dnsConfigSearches_ = nullptr;};
      inline const vector<string> & getDnsConfigSearches() const { DARABONBA_PTR_GET_CONST(dnsConfigSearches_, vector<string>) };
      inline vector<string> getDnsConfigSearches() { DARABONBA_PTR_GET(dnsConfigSearches_, vector<string>) };
      inline ScalingConfiguration& setDnsConfigSearches(const vector<string> & dnsConfigSearches) { DARABONBA_PTR_SET_VALUE(dnsConfigSearches_, dnsConfigSearches) };
      inline ScalingConfiguration& setDnsConfigSearches(vector<string> && dnsConfigSearches) { DARABONBA_PTR_SET_RVALUE(dnsConfigSearches_, dnsConfigSearches) };


      // dnsPolicy Field Functions 
      bool hasDnsPolicy() const { return this->dnsPolicy_ != nullptr;};
      void deleteDnsPolicy() { this->dnsPolicy_ = nullptr;};
      inline string getDnsPolicy() const { DARABONBA_PTR_GET_DEFAULT(dnsPolicy_, "") };
      inline ScalingConfiguration& setDnsPolicy(string dnsPolicy) { DARABONBA_PTR_SET_VALUE(dnsPolicy_, dnsPolicy) };


      // egressBandwidth Field Functions 
      bool hasEgressBandwidth() const { return this->egressBandwidth_ != nullptr;};
      void deleteEgressBandwidth() { this->egressBandwidth_ = nullptr;};
      inline int64_t getEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(egressBandwidth_, 0L) };
      inline ScalingConfiguration& setEgressBandwidth(int64_t egressBandwidth) { DARABONBA_PTR_SET_VALUE(egressBandwidth_, egressBandwidth) };


      // eipBandwidth Field Functions 
      bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
      void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
      inline int32_t getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
      inline ScalingConfiguration& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


      // eipCommonBandwidthPackage Field Functions 
      bool hasEipCommonBandwidthPackage() const { return this->eipCommonBandwidthPackage_ != nullptr;};
      void deleteEipCommonBandwidthPackage() { this->eipCommonBandwidthPackage_ = nullptr;};
      inline string getEipCommonBandwidthPackage() const { DARABONBA_PTR_GET_DEFAULT(eipCommonBandwidthPackage_, "") };
      inline ScalingConfiguration& setEipCommonBandwidthPackage(string eipCommonBandwidthPackage) { DARABONBA_PTR_SET_VALUE(eipCommonBandwidthPackage_, eipCommonBandwidthPackage) };


      // eipISP Field Functions 
      bool hasEipISP() const { return this->eipISP_ != nullptr;};
      void deleteEipISP() { this->eipISP_ = nullptr;};
      inline string getEipISP() const { DARABONBA_PTR_GET_DEFAULT(eipISP_, "") };
      inline ScalingConfiguration& setEipISP(string eipISP) { DARABONBA_PTR_SET_VALUE(eipISP_, eipISP) };


      // eipPublicIpAddressPoolId Field Functions 
      bool hasEipPublicIpAddressPoolId() const { return this->eipPublicIpAddressPoolId_ != nullptr;};
      void deleteEipPublicIpAddressPoolId() { this->eipPublicIpAddressPoolId_ = nullptr;};
      inline string getEipPublicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(eipPublicIpAddressPoolId_, "") };
      inline ScalingConfiguration& setEipPublicIpAddressPoolId(string eipPublicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(eipPublicIpAddressPoolId_, eipPublicIpAddressPoolId) };


      // ephemeralStorage Field Functions 
      bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
      void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
      inline int32_t getEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0) };
      inline ScalingConfiguration& setEphemeralStorage(int32_t ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


      // hostAliases Field Functions 
      bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
      void deleteHostAliases() { this->hostAliases_ = nullptr;};
      inline const vector<ScalingConfiguration::HostAliases> & getHostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<ScalingConfiguration::HostAliases>) };
      inline vector<ScalingConfiguration::HostAliases> getHostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<ScalingConfiguration::HostAliases>) };
      inline ScalingConfiguration& setHostAliases(const vector<ScalingConfiguration::HostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
      inline ScalingConfiguration& setHostAliases(vector<ScalingConfiguration::HostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline ScalingConfiguration& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageRegistryCredentials Field Functions 
      bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
      void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
      inline const vector<ScalingConfiguration::ImageRegistryCredentials> & getImageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<ScalingConfiguration::ImageRegistryCredentials>) };
      inline vector<ScalingConfiguration::ImageRegistryCredentials> getImageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<ScalingConfiguration::ImageRegistryCredentials>) };
      inline ScalingConfiguration& setImageRegistryCredentials(const vector<ScalingConfiguration::ImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
      inline ScalingConfiguration& setImageRegistryCredentials(vector<ScalingConfiguration::ImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


      // imageSnapshotId Field Functions 
      bool hasImageSnapshotId() const { return this->imageSnapshotId_ != nullptr;};
      void deleteImageSnapshotId() { this->imageSnapshotId_ = nullptr;};
      inline string getImageSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(imageSnapshotId_, "") };
      inline ScalingConfiguration& setImageSnapshotId(string imageSnapshotId) { DARABONBA_PTR_SET_VALUE(imageSnapshotId_, imageSnapshotId) };


      // ingressBandwidth Field Functions 
      bool hasIngressBandwidth() const { return this->ingressBandwidth_ != nullptr;};
      void deleteIngressBandwidth() { this->ingressBandwidth_ = nullptr;};
      inline int64_t getIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ingressBandwidth_, 0L) };
      inline ScalingConfiguration& setIngressBandwidth(int64_t ingressBandwidth) { DARABONBA_PTR_SET_VALUE(ingressBandwidth_, ingressBandwidth) };


      // initContainers Field Functions 
      bool hasInitContainers() const { return this->initContainers_ != nullptr;};
      void deleteInitContainers() { this->initContainers_ = nullptr;};
      inline const vector<ScalingConfiguration::InitContainers> & getInitContainers() const { DARABONBA_PTR_GET_CONST(initContainers_, vector<ScalingConfiguration::InitContainers>) };
      inline vector<ScalingConfiguration::InitContainers> getInitContainers() { DARABONBA_PTR_GET(initContainers_, vector<ScalingConfiguration::InitContainers>) };
      inline ScalingConfiguration& setInitContainers(const vector<ScalingConfiguration::InitContainers> & initContainers) { DARABONBA_PTR_SET_VALUE(initContainers_, initContainers) };
      inline ScalingConfiguration& setInitContainers(vector<ScalingConfiguration::InitContainers> && initContainers) { DARABONBA_PTR_SET_RVALUE(initContainers_, initContainers) };


      // instanceFamilyLevel Field Functions 
      bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
      void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
      inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
      inline ScalingConfiguration& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
      inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
      inline ScalingConfiguration& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline ScalingConfiguration& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // ipv6AddressCount Field Functions 
      bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
      void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
      inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
      inline ScalingConfiguration& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline ScalingConfiguration& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // loadBalancerWeight Field Functions 
      bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
      void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
      inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
      inline ScalingConfiguration& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline ScalingConfiguration& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // ntpServers Field Functions 
      bool hasNtpServers() const { return this->ntpServers_ != nullptr;};
      void deleteNtpServers() { this->ntpServers_ = nullptr;};
      inline const vector<string> & getNtpServers() const { DARABONBA_PTR_GET_CONST(ntpServers_, vector<string>) };
      inline vector<string> getNtpServers() { DARABONBA_PTR_GET(ntpServers_, vector<string>) };
      inline ScalingConfiguration& setNtpServers(const vector<string> & ntpServers) { DARABONBA_PTR_SET_VALUE(ntpServers_, ntpServers) };
      inline ScalingConfiguration& setNtpServers(vector<string> && ntpServers) { DARABONBA_PTR_SET_RVALUE(ntpServers_, ntpServers) };


      // ramRoleName Field Functions 
      bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
      void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
      inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
      inline ScalingConfiguration& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ScalingConfiguration& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ScalingConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // restartPolicy Field Functions 
      bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
      void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
      inline string getRestartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
      inline ScalingConfiguration& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


      // scalingConfigurationId Field Functions 
      bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
      void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
      inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
      inline ScalingConfiguration& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


      // scalingConfigurationName Field Functions 
      bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
      void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
      inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
      inline ScalingConfiguration& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingConfiguration& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // securityContextSysCtls Field Functions 
      bool hasSecurityContextSysCtls() const { return this->securityContextSysCtls_ != nullptr;};
      void deleteSecurityContextSysCtls() { this->securityContextSysCtls_ = nullptr;};
      inline const vector<ScalingConfiguration::SecurityContextSysCtls> & getSecurityContextSysCtls() const { DARABONBA_PTR_GET_CONST(securityContextSysCtls_, vector<ScalingConfiguration::SecurityContextSysCtls>) };
      inline vector<ScalingConfiguration::SecurityContextSysCtls> getSecurityContextSysCtls() { DARABONBA_PTR_GET(securityContextSysCtls_, vector<ScalingConfiguration::SecurityContextSysCtls>) };
      inline ScalingConfiguration& setSecurityContextSysCtls(const vector<ScalingConfiguration::SecurityContextSysCtls> & securityContextSysCtls) { DARABONBA_PTR_SET_VALUE(securityContextSysCtls_, securityContextSysCtls) };
      inline ScalingConfiguration& setSecurityContextSysCtls(vector<ScalingConfiguration::SecurityContextSysCtls> && securityContextSysCtls) { DARABONBA_PTR_SET_RVALUE(securityContextSysCtls_, securityContextSysCtls) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline ScalingConfiguration& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // slsEnable Field Functions 
      bool hasSlsEnable() const { return this->slsEnable_ != nullptr;};
      void deleteSlsEnable() { this->slsEnable_ = nullptr;};
      inline bool getSlsEnable() const { DARABONBA_PTR_GET_DEFAULT(slsEnable_, false) };
      inline ScalingConfiguration& setSlsEnable(bool slsEnable) { DARABONBA_PTR_SET_VALUE(slsEnable_, slsEnable) };


      // spotPriceLimit Field Functions 
      bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
      void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
      inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
      inline ScalingConfiguration& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline ScalingConfiguration& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ScalingConfiguration::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScalingConfiguration::Tags>) };
      inline vector<ScalingConfiguration::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ScalingConfiguration::Tags>) };
      inline ScalingConfiguration& setTags(const vector<ScalingConfiguration::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingConfiguration& setTags(vector<ScalingConfiguration::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // terminationGracePeriodSeconds Field Functions 
      bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
      void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
      inline int32_t getTerminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
      inline ScalingConfiguration& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


      // volumes Field Functions 
      bool hasVolumes() const { return this->volumes_ != nullptr;};
      void deleteVolumes() { this->volumes_ = nullptr;};
      inline const vector<ScalingConfiguration::Volumes> & getVolumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<ScalingConfiguration::Volumes>) };
      inline vector<ScalingConfiguration::Volumes> getVolumes() { DARABONBA_PTR_GET(volumes_, vector<ScalingConfiguration::Volumes>) };
      inline ScalingConfiguration& setVolumes(const vector<ScalingConfiguration::Volumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
      inline ScalingConfiguration& setVolumes(vector<ScalingConfiguration::Volumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


    protected:
      // The information about the ACR Enterprise instance.
      shared_ptr<vector<ScalingConfiguration::AcrRegistryInfos>> acrRegistryInfos_ {};
      // The validity period. Unit: seconds.
      shared_ptr<int32_t> activeDeadlineSeconds_ {};
      // Specifies whether the automatic creation of an elastic IP address (EIP) is enabled in order to attach it to the ECI instance.
      shared_ptr<bool> autoCreateEip_ {};
      // Specifies whether to automatically match an image cache.
      // Default value: false.
      shared_ptr<bool> autoMatchImageCache_ {};
      // The computing power category. A value of economy indicates that instances of economy instance types are queried.
      shared_ptr<vector<string>> computeCategory_ {};
      // The name of the container group.
      shared_ptr<string> containerGroupName_ {};
      // The list of containers included in the instance.
      shared_ptr<vector<ScalingConfiguration::Containers>> containers_ {};
      // Specifies whether to enable cost optimization. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> costOptimization_ {};
      // The number of vCPUs for the instance. Unit: cores.
      shared_ptr<float> cpu_ {};
      // The number of physical CPU cores. Only specific instance types support custom settings.
      shared_ptr<int32_t> cpuOptionsCore_ {};
      // The number of threads per core. Only specific instance types support custom settings. A value of 1 indicates that hyper-threading is disabled. For more information, see [Customize CPU options](https://help.aliyun.com/document_detail/197781.html).
      shared_ptr<int32_t> cpuOptionsThreadsPerCore_ {};
      // The time when the scaling configuration was created. The time follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The data cache bucket.
      shared_ptr<string> dataCacheBucket_ {};
      // Specifies whether to enable the burst feature for the ESSD AutoPL cloud disk used for data caching. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      // 
      // Default value: false.
      // 
      // >For more information about ESSD AutoPL cloud disks, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<bool> dataCacheBurstingEnabled_ {};
      // The performance level (PL) of the cloud disk used for data caching. We recommend that you use standard SSDs. Valid values for the PL of a standard SSD:
      // 
      // - PL0: A single standard SSD can deliver up to 10,000 random read/write IOPS.
      // - PL1: A single standard SSD can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single standard SSD can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single standard SSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // >For more information about standard SSDs, see [standard SSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> dataCachePL_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL cloud disk used for data caching. Valid values: 0 to min{50000, 1000 × Capacity - Baseline performance}, where Baseline performance = min{1800 + 50 × Capacity, 50000}.
      // 
      // >For more information about ESSD AutoPL cloud disks, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int32_t> dataCacheProvisionedIops_ {};
      // >This parameter is not available.
      shared_ptr<string> description_ {};
      // The list of IP addresses of the DNS servers.
      shared_ptr<vector<string>> dnsConfigNameServers_ {};
      // The DNS configuration options.
      shared_ptr<vector<ScalingConfiguration::DnsConfigOptions>> dnsConfigOptions_ {};
      // The list of DNS search domains.
      shared_ptr<vector<string>> dnsConfigSearches_ {};
      // The DNS policy.
      shared_ptr<string> dnsPolicy_ {};
      // The outbound bandwidth limit. Unit: bytes.
      shared_ptr<int64_t> egressBandwidth_ {};
      // The bandwidth of the EIP. Default value: 5 Mbit/s.
      shared_ptr<int32_t> eipBandwidth_ {};
      // The existing Internet Shared Bandwidth instance to associate.
      shared_ptr<string> eipCommonBandwidthPackage_ {};
      // The line type of the elastic IP address (EIP). Valid values:
      // 
      // - BGP: BGP (Multi-ISP) line. This is the default value.
      // - BGP_PRO: BGP (Multi-ISP) Pro line.
      shared_ptr<string> eipISP_ {};
      // The ID of the IP address pool.
      shared_ptr<string> eipPublicIpAddressPoolId_ {};
      // The size of the ephemeral storage space. Unit: GiB.
      shared_ptr<int32_t> ephemeralStorage_ {};
      // The custom hostname mappings for a container in the instance.
      shared_ptr<vector<ScalingConfiguration::HostAliases>> hostAliases_ {};
      // The hostname.
      shared_ptr<string> hostName_ {};
      // The image registry information.
      shared_ptr<vector<ScalingConfiguration::ImageRegistryCredentials>> imageRegistryCredentials_ {};
      // The ID of the image cache.
      shared_ptr<string> imageSnapshotId_ {};
      // The inbound bandwidth limit. Unit: bytes.
      shared_ptr<int64_t> ingressBandwidth_ {};
      // The list of init containers.
      shared_ptr<vector<ScalingConfiguration::InitContainers>> initContainers_ {};
      // The instance family level, which is used to filter instance types that meet the requirements. This parameter takes effect only when CostOptimization is enabled. Valid values:
      // 
      // - EntryLevel: Entry-level, which refers to shared instance types. This level provides lower costs but cannot guarantee stable computing performance. It is suitable for business scenarios with low CPU utilization. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // - EnterpriseLevel: Enterprise-level. This level provides stable performance and dedicated resources, and is suitable for business scenarios that require high stability. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // - CreditEntryLevel: Credit-based entry-level, which refers to burstable instances. This level uses CPU credits to maintain computing performance and is suitable for business scenarios with low baseline CPU utilization and occasional CPU usage spikes. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> instanceFamilyLevel_ {};
      // The specified ECS instance types. You can specify up to five instance types.
      shared_ptr<vector<string>> instanceTypes_ {};
      // The number of IPv6 addresses.
      shared_ptr<int32_t> ipv6AddressCount_ {};
      // The state of the scaling configuration in the scaling group. Valid values:
      // 
      // - Active: Active. The scaling group uses active scaling configurations for the automatic creation of Elastic Container Instance (ECI) instances.
      // - Inacitve: Inactive. Inactive scaling configurations exist in the scaling group, but the scaling group does not use them for the automatic creation of ECI instances.
      shared_ptr<string> lifecycleState_ {};
      // The weight of the ECI instance when it serves as a backend server for load balancing. Valid values: 1 to 100.
      // Default value: 50.
      shared_ptr<int32_t> loadBalancerWeight_ {};
      // The memory size. Unit: GiB.
      // You can specify both CPU and Memory to define a range of instance types. For example, CPU=2 and Memory=16 defines all instance types that have 2 vCPUs and 16 GiB of memory. Auto Scaling determines the available instance types based on factors such as I/O optimization and zones, and creates the instance with the lowest price.
      // >This configuration takes effect only in cost optimization mode and when no instance type is specified in the scaling configuration.
      shared_ptr<float> memory_ {};
      // The NTP servers.
      shared_ptr<vector<string>> ntpServers_ {};
      // The name of the Resource Access Management (RAM) role for the instance. ECIs and Elastic Compute Service (ECS) instances share the same RAM role. For more information, see [Use an instance RAM role by calling API operations](https://help.aliyun.com/document_detail/61178.html).
      shared_ptr<string> ramRoleName_ {};
      // The region ID of the scaling group to which the scaling rule belongs.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The restart policy of the pod. Valid values:
      // - Never: no restart.
      // - Always: always restart.
      // - OnFailure: restart on failure.
      shared_ptr<string> restartPolicy_ {};
      // The ID of the scaling configuration.
      shared_ptr<string> scalingConfigurationId_ {};
      // The name of the scaling configuration.
      shared_ptr<string> scalingConfigurationName_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The system info of the contextual security context in which the instance runs.
      shared_ptr<vector<ScalingConfiguration::SecurityContextSysCtls>> securityContextSysCtls_ {};
      // The ID of the security group to which the Elastic Container Instance (ECI) belongs. ECIs in the same security group can access each other.
      shared_ptr<string> securityGroupId_ {};
      // Specifies whether to enable user log collection. Default value: **false**.
      shared_ptr<bool> slsEnable_ {};
      // The maximum hourly price of the spot instance.
      // This parameter is returned only when SpotStrategy is set to SpotWithPriceLimit.
      shared_ptr<float> spotPriceLimit_ {};
      // The preemption policy of the instance. Valid values:
      // - NoSpot: regular pay-as-you-go instance.
      // - SpotWithPriceLimit: spot instance with a specified maximum price.
      // - SpotAsPriceGo: spot instance whose price is automatically offered by the system based on the current market price.
      shared_ptr<string> spotStrategy_ {};
      // The tag key-value pairs of the instance.
      shared_ptr<vector<ScalingConfiguration::Tags>> tags_ {};
      // The buffer time for the program to handle operations before shutdown.
      shared_ptr<int32_t> terminationGracePeriodSeconds_ {};
      // The volume information.
      shared_ptr<vector<ScalingConfiguration::Volumes>> volumes_ {};
    };

    virtual bool empty() const override { return this->output_ == nullptr
        && this->requestId_ == nullptr && this->scalingConfiguration_ == nullptr; };
    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfiguration Field Functions 
    bool hasScalingConfiguration() const { return this->scalingConfiguration_ != nullptr;};
    void deleteScalingConfiguration() { this->scalingConfiguration_ = nullptr;};
    inline const DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration & getScalingConfiguration() const { DARABONBA_PTR_GET_CONST(scalingConfiguration_, DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration getScalingConfiguration() { DARABONBA_PTR_GET(scalingConfiguration_, DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBody& setScalingConfiguration(const DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration & scalingConfiguration) { DARABONBA_PTR_SET_VALUE(scalingConfiguration_, scalingConfiguration) };
    inline DescribeEciScalingConfigurationDetailResponseBody& setScalingConfiguration(DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration && scalingConfiguration) { DARABONBA_PTR_SET_RVALUE(scalingConfiguration_, scalingConfiguration) };


  protected:
    // The YAML output content of the scaling configuration.
    shared_ptr<string> output_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scaling configuration information.
    shared_ptr<DescribeEciScalingConfigurationDetailResponseBody::ScalingConfiguration> scalingConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
