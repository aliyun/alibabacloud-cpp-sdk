// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODYSCALINGCONFIGURATIONVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONDETAILRESPONSEBODYSCALINGCONFIGURATIONVOLUMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& obj) { 
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
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes() = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes(const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes &) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes(DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes &&) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes() = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& operator=(const DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes &) = default ;
    DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& operator=(DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configFileVolumeConfigFileToPaths_ != nullptr
        && this->configFileVolumeDefaultMode_ != nullptr && this->diskVolumeDiskId_ != nullptr && this->diskVolumeDiskSize_ != nullptr && this->diskVolumeFsType_ != nullptr && this->emptyDirVolumeMedium_ != nullptr
        && this->emptyDirVolumeSizeLimit_ != nullptr && this->flexVolumeDriver_ != nullptr && this->flexVolumeFsType_ != nullptr && this->flexVolumeOptions_ != nullptr && this->hostPathVolumePath_ != nullptr
        && this->hostPathVolumeType_ != nullptr && this->NFSVolumePath_ != nullptr && this->NFSVolumeReadOnly_ != nullptr && this->NFSVolumeServer_ != nullptr && this->name_ != nullptr
        && this->type_ != nullptr; };
    // configFileVolumeConfigFileToPaths Field Functions 
    bool hasConfigFileVolumeConfigFileToPaths() const { return this->configFileVolumeConfigFileToPaths_ != nullptr;};
    void deleteConfigFileVolumeConfigFileToPaths() { this->configFileVolumeConfigFileToPaths_ = nullptr;};
    inline const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths> & configFileVolumeConfigFileToPaths() const { DARABONBA_PTR_GET_CONST(configFileVolumeConfigFileToPaths_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths>) };
    inline vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths> configFileVolumeConfigFileToPaths() { DARABONBA_PTR_GET(configFileVolumeConfigFileToPaths_, vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths>) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setConfigFileVolumeConfigFileToPaths(const vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths> & configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_VALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setConfigFileVolumeConfigFileToPaths(vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths> && configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_RVALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };


    // configFileVolumeDefaultMode Field Functions 
    bool hasConfigFileVolumeDefaultMode() const { return this->configFileVolumeDefaultMode_ != nullptr;};
    void deleteConfigFileVolumeDefaultMode() { this->configFileVolumeDefaultMode_ = nullptr;};
    inline int32_t configFileVolumeDefaultMode() const { DARABONBA_PTR_GET_DEFAULT(configFileVolumeDefaultMode_, 0) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setConfigFileVolumeDefaultMode(int32_t configFileVolumeDefaultMode) { DARABONBA_PTR_SET_VALUE(configFileVolumeDefaultMode_, configFileVolumeDefaultMode) };


    // diskVolumeDiskId Field Functions 
    bool hasDiskVolumeDiskId() const { return this->diskVolumeDiskId_ != nullptr;};
    void deleteDiskVolumeDiskId() { this->diskVolumeDiskId_ = nullptr;};
    inline string diskVolumeDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeDiskId_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setDiskVolumeDiskId(string diskVolumeDiskId) { DARABONBA_PTR_SET_VALUE(diskVolumeDiskId_, diskVolumeDiskId) };


    // diskVolumeDiskSize Field Functions 
    bool hasDiskVolumeDiskSize() const { return this->diskVolumeDiskSize_ != nullptr;};
    void deleteDiskVolumeDiskSize() { this->diskVolumeDiskSize_ = nullptr;};
    inline int32_t diskVolumeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeDiskSize_, 0) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setDiskVolumeDiskSize(int32_t diskVolumeDiskSize) { DARABONBA_PTR_SET_VALUE(diskVolumeDiskSize_, diskVolumeDiskSize) };


    // diskVolumeFsType Field Functions 
    bool hasDiskVolumeFsType() const { return this->diskVolumeFsType_ != nullptr;};
    void deleteDiskVolumeFsType() { this->diskVolumeFsType_ = nullptr;};
    inline string diskVolumeFsType() const { DARABONBA_PTR_GET_DEFAULT(diskVolumeFsType_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setDiskVolumeFsType(string diskVolumeFsType) { DARABONBA_PTR_SET_VALUE(diskVolumeFsType_, diskVolumeFsType) };


    // emptyDirVolumeMedium Field Functions 
    bool hasEmptyDirVolumeMedium() const { return this->emptyDirVolumeMedium_ != nullptr;};
    void deleteEmptyDirVolumeMedium() { this->emptyDirVolumeMedium_ = nullptr;};
    inline string emptyDirVolumeMedium() const { DARABONBA_PTR_GET_DEFAULT(emptyDirVolumeMedium_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setEmptyDirVolumeMedium(string emptyDirVolumeMedium) { DARABONBA_PTR_SET_VALUE(emptyDirVolumeMedium_, emptyDirVolumeMedium) };


    // emptyDirVolumeSizeLimit Field Functions 
    bool hasEmptyDirVolumeSizeLimit() const { return this->emptyDirVolumeSizeLimit_ != nullptr;};
    void deleteEmptyDirVolumeSizeLimit() { this->emptyDirVolumeSizeLimit_ = nullptr;};
    inline string emptyDirVolumeSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(emptyDirVolumeSizeLimit_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setEmptyDirVolumeSizeLimit(string emptyDirVolumeSizeLimit) { DARABONBA_PTR_SET_VALUE(emptyDirVolumeSizeLimit_, emptyDirVolumeSizeLimit) };


    // flexVolumeDriver Field Functions 
    bool hasFlexVolumeDriver() const { return this->flexVolumeDriver_ != nullptr;};
    void deleteFlexVolumeDriver() { this->flexVolumeDriver_ = nullptr;};
    inline string flexVolumeDriver() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeDriver_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setFlexVolumeDriver(string flexVolumeDriver) { DARABONBA_PTR_SET_VALUE(flexVolumeDriver_, flexVolumeDriver) };


    // flexVolumeFsType Field Functions 
    bool hasFlexVolumeFsType() const { return this->flexVolumeFsType_ != nullptr;};
    void deleteFlexVolumeFsType() { this->flexVolumeFsType_ = nullptr;};
    inline string flexVolumeFsType() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeFsType_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setFlexVolumeFsType(string flexVolumeFsType) { DARABONBA_PTR_SET_VALUE(flexVolumeFsType_, flexVolumeFsType) };


    // flexVolumeOptions Field Functions 
    bool hasFlexVolumeOptions() const { return this->flexVolumeOptions_ != nullptr;};
    void deleteFlexVolumeOptions() { this->flexVolumeOptions_ = nullptr;};
    inline string flexVolumeOptions() const { DARABONBA_PTR_GET_DEFAULT(flexVolumeOptions_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setFlexVolumeOptions(string flexVolumeOptions) { DARABONBA_PTR_SET_VALUE(flexVolumeOptions_, flexVolumeOptions) };


    // hostPathVolumePath Field Functions 
    bool hasHostPathVolumePath() const { return this->hostPathVolumePath_ != nullptr;};
    void deleteHostPathVolumePath() { this->hostPathVolumePath_ = nullptr;};
    inline string hostPathVolumePath() const { DARABONBA_PTR_GET_DEFAULT(hostPathVolumePath_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setHostPathVolumePath(string hostPathVolumePath) { DARABONBA_PTR_SET_VALUE(hostPathVolumePath_, hostPathVolumePath) };


    // hostPathVolumeType Field Functions 
    bool hasHostPathVolumeType() const { return this->hostPathVolumeType_ != nullptr;};
    void deleteHostPathVolumeType() { this->hostPathVolumeType_ = nullptr;};
    inline string hostPathVolumeType() const { DARABONBA_PTR_GET_DEFAULT(hostPathVolumeType_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setHostPathVolumeType(string hostPathVolumeType) { DARABONBA_PTR_SET_VALUE(hostPathVolumeType_, hostPathVolumeType) };


    // NFSVolumePath Field Functions 
    bool hasNFSVolumePath() const { return this->NFSVolumePath_ != nullptr;};
    void deleteNFSVolumePath() { this->NFSVolumePath_ = nullptr;};
    inline string NFSVolumePath() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumePath_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setNFSVolumePath(string NFSVolumePath) { DARABONBA_PTR_SET_VALUE(NFSVolumePath_, NFSVolumePath) };


    // NFSVolumeReadOnly Field Functions 
    bool hasNFSVolumeReadOnly() const { return this->NFSVolumeReadOnly_ != nullptr;};
    void deleteNFSVolumeReadOnly() { this->NFSVolumeReadOnly_ = nullptr;};
    inline bool NFSVolumeReadOnly() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumeReadOnly_, false) };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setNFSVolumeReadOnly(bool NFSVolumeReadOnly) { DARABONBA_PTR_SET_VALUE(NFSVolumeReadOnly_, NFSVolumeReadOnly) };


    // NFSVolumeServer Field Functions 
    bool hasNFSVolumeServer() const { return this->NFSVolumeServer_ != nullptr;};
    void deleteNFSVolumeServer() { this->NFSVolumeServer_ = nullptr;};
    inline string NFSVolumeServer() const { DARABONBA_PTR_GET_DEFAULT(NFSVolumeServer_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setNFSVolumeServer(string NFSVolumeServer) { DARABONBA_PTR_SET_VALUE(NFSVolumeServer_, NFSVolumeServer) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The paths to the configuration files.
    std::shared_ptr<vector<Models::DescribeEciScalingConfigurationDetailResponseBodyScalingConfigurationVolumesConfigFileVolumeConfigFileToPaths>> configFileVolumeConfigFileToPaths_ = nullptr;
    // The default permissions on the ConfigFile volume.
    std::shared_ptr<int32_t> configFileVolumeDefaultMode_ = nullptr;
    // The ID of the disk volume.
    std::shared_ptr<string> diskVolumeDiskId_ = nullptr;
    // The size of the disk volume. Unit: GiB.
    std::shared_ptr<int32_t> diskVolumeDiskSize_ = nullptr;
    // The system type of the disk volume.
    std::shared_ptr<string> diskVolumeFsType_ = nullptr;
    // The storage medium of the emptyDir volume. If you do not specify a storage medium for the emptyDir volume, the volume stores data in the file system of the node by default. We recommend that you set this parameter to memory. In this case, the emptyDir volume stores data in the specified memory.
    std::shared_ptr<string> emptyDirVolumeMedium_ = nullptr;
    // The storage size of the emptyDir volume.
    std::shared_ptr<string> emptyDirVolumeSizeLimit_ = nullptr;
    // The name of the FlexVolume driver.
    std::shared_ptr<string> flexVolumeDriver_ = nullptr;
    // The type of the mounted file system. The default value is determined by the script of FlexVolume.
    std::shared_ptr<string> flexVolumeFsType_ = nullptr;
    // The FlexVolume options.
    std::shared_ptr<string> flexVolumeOptions_ = nullptr;
    // The path to the HostPath volume on the host.
    std::shared_ptr<string> hostPathVolumePath_ = nullptr;
    // The type of the HostPath volume.
    std::shared_ptr<string> hostPathVolumeType_ = nullptr;
    // The path to the Network File System (NFS) volume.
    std::shared_ptr<string> NFSVolumePath_ = nullptr;
    // Indicates whether the NFS volume is read-only.
    // 
    // Default value: false.
    std::shared_ptr<bool> NFSVolumeReadOnly_ = nullptr;
    // The endpoint of the NFS server.
    std::shared_ptr<string> NFSVolumeServer_ = nullptr;
    // The volume name.
    std::shared_ptr<string> name_ = nullptr;
    // The volume type. Valid values:
    // 
    // *   EmptyDirVolume
    // *   NFSVolume
    // *   ConfigFileVolume
    // *   FlexVolume
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
