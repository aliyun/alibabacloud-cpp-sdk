// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesDiskVolume.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesFlexVolume.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesHostPathVolume.hpp>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesNFSVolume.hpp>
#include <vector>
#include <alibabacloud/models/ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestVolumes& obj) { 
      DARABONBA_PTR_TO_JSON(DiskVolume, diskVolume_);
      DARABONBA_PTR_TO_JSON(EmptyDirVolume, emptyDirVolume_);
      DARABONBA_PTR_TO_JSON(FlexVolume, flexVolume_);
      DARABONBA_PTR_TO_JSON(HostPathVolume, hostPathVolume_);
      DARABONBA_PTR_TO_JSON(NFSVolume, NFSVolume_);
      DARABONBA_PTR_TO_JSON(ConfigFileVolumeConfigFileToPath, configFileVolumeConfigFileToPath_);
      DARABONBA_PTR_TO_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestVolumes& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskVolume, diskVolume_);
      DARABONBA_PTR_FROM_JSON(EmptyDirVolume, emptyDirVolume_);
      DARABONBA_PTR_FROM_JSON(FlexVolume, flexVolume_);
      DARABONBA_PTR_FROM_JSON(HostPathVolume, hostPathVolume_);
      DARABONBA_PTR_FROM_JSON(NFSVolume, NFSVolume_);
      DARABONBA_PTR_FROM_JSON(ConfigFileVolumeConfigFileToPath, configFileVolumeConfigFileToPath_);
      DARABONBA_PTR_FROM_JSON(ConfigFileVolumeDefaultMode, configFileVolumeDefaultMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyEciScalingConfigurationRequestVolumes() = default ;
    ModifyEciScalingConfigurationRequestVolumes(const ModifyEciScalingConfigurationRequestVolumes &) = default ;
    ModifyEciScalingConfigurationRequestVolumes(ModifyEciScalingConfigurationRequestVolumes &&) = default ;
    ModifyEciScalingConfigurationRequestVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestVolumes() = default ;
    ModifyEciScalingConfigurationRequestVolumes& operator=(const ModifyEciScalingConfigurationRequestVolumes &) = default ;
    ModifyEciScalingConfigurationRequestVolumes& operator=(ModifyEciScalingConfigurationRequestVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskVolume_ == nullptr
        && return this->emptyDirVolume_ == nullptr && return this->flexVolume_ == nullptr && return this->hostPathVolume_ == nullptr && return this->NFSVolume_ == nullptr && return this->configFileVolumeConfigFileToPath_ == nullptr
        && return this->configFileVolumeDefaultMode_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // diskVolume Field Functions 
    bool hasDiskVolume() const { return this->diskVolume_ != nullptr;};
    void deleteDiskVolume() { this->diskVolume_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume & diskVolume() const { DARABONBA_PTR_GET_CONST(diskVolume_, Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume) };
    inline Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume diskVolume() { DARABONBA_PTR_GET(diskVolume_, Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setDiskVolume(const Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume & diskVolume) { DARABONBA_PTR_SET_VALUE(diskVolume_, diskVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setDiskVolume(Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume && diskVolume) { DARABONBA_PTR_SET_RVALUE(diskVolume_, diskVolume) };


    // emptyDirVolume Field Functions 
    bool hasEmptyDirVolume() const { return this->emptyDirVolume_ != nullptr;};
    void deleteEmptyDirVolume() { this->emptyDirVolume_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume & emptyDirVolume() const { DARABONBA_PTR_GET_CONST(emptyDirVolume_, Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume) };
    inline Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume emptyDirVolume() { DARABONBA_PTR_GET(emptyDirVolume_, Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setEmptyDirVolume(const Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume & emptyDirVolume) { DARABONBA_PTR_SET_VALUE(emptyDirVolume_, emptyDirVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setEmptyDirVolume(Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume && emptyDirVolume) { DARABONBA_PTR_SET_RVALUE(emptyDirVolume_, emptyDirVolume) };


    // flexVolume Field Functions 
    bool hasFlexVolume() const { return this->flexVolume_ != nullptr;};
    void deleteFlexVolume() { this->flexVolume_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume & flexVolume() const { DARABONBA_PTR_GET_CONST(flexVolume_, Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume) };
    inline Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume flexVolume() { DARABONBA_PTR_GET(flexVolume_, Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setFlexVolume(const Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume & flexVolume) { DARABONBA_PTR_SET_VALUE(flexVolume_, flexVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setFlexVolume(Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume && flexVolume) { DARABONBA_PTR_SET_RVALUE(flexVolume_, flexVolume) };


    // hostPathVolume Field Functions 
    bool hasHostPathVolume() const { return this->hostPathVolume_ != nullptr;};
    void deleteHostPathVolume() { this->hostPathVolume_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume & hostPathVolume() const { DARABONBA_PTR_GET_CONST(hostPathVolume_, Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume) };
    inline Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume hostPathVolume() { DARABONBA_PTR_GET(hostPathVolume_, Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setHostPathVolume(const Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume & hostPathVolume) { DARABONBA_PTR_SET_VALUE(hostPathVolume_, hostPathVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setHostPathVolume(Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume && hostPathVolume) { DARABONBA_PTR_SET_RVALUE(hostPathVolume_, hostPathVolume) };


    // NFSVolume Field Functions 
    bool hasNFSVolume() const { return this->NFSVolume_ != nullptr;};
    void deleteNFSVolume() { this->NFSVolume_ = nullptr;};
    inline const Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume & NFSVolume() const { DARABONBA_PTR_GET_CONST(NFSVolume_, Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume) };
    inline Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume NFSVolume() { DARABONBA_PTR_GET(NFSVolume_, Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setNFSVolume(const Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume & NFSVolume) { DARABONBA_PTR_SET_VALUE(NFSVolume_, NFSVolume) };
    inline ModifyEciScalingConfigurationRequestVolumes& setNFSVolume(Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume && NFSVolume) { DARABONBA_PTR_SET_RVALUE(NFSVolume_, NFSVolume) };


    // configFileVolumeConfigFileToPath Field Functions 
    bool hasConfigFileVolumeConfigFileToPath() const { return this->configFileVolumeConfigFileToPath_ != nullptr;};
    void deleteConfigFileVolumeConfigFileToPath() { this->configFileVolumeConfigFileToPath_ = nullptr;};
    inline const vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath> & configFileVolumeConfigFileToPath() const { DARABONBA_PTR_GET_CONST(configFileVolumeConfigFileToPath_, vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath>) };
    inline vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath> configFileVolumeConfigFileToPath() { DARABONBA_PTR_GET(configFileVolumeConfigFileToPath_, vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath>) };
    inline ModifyEciScalingConfigurationRequestVolumes& setConfigFileVolumeConfigFileToPath(const vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath> & configFileVolumeConfigFileToPath) { DARABONBA_PTR_SET_VALUE(configFileVolumeConfigFileToPath_, configFileVolumeConfigFileToPath) };
    inline ModifyEciScalingConfigurationRequestVolumes& setConfigFileVolumeConfigFileToPath(vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath> && configFileVolumeConfigFileToPath) { DARABONBA_PTR_SET_RVALUE(configFileVolumeConfigFileToPath_, configFileVolumeConfigFileToPath) };


    // configFileVolumeDefaultMode Field Functions 
    bool hasConfigFileVolumeDefaultMode() const { return this->configFileVolumeDefaultMode_ != nullptr;};
    void deleteConfigFileVolumeDefaultMode() { this->configFileVolumeDefaultMode_ = nullptr;};
    inline int32_t configFileVolumeDefaultMode() const { DARABONBA_PTR_GET_DEFAULT(configFileVolumeDefaultMode_, 0) };
    inline ModifyEciScalingConfigurationRequestVolumes& setConfigFileVolumeDefaultMode(int32_t configFileVolumeDefaultMode) { DARABONBA_PTR_SET_VALUE(configFileVolumeDefaultMode_, configFileVolumeDefaultMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyEciScalingConfigurationRequestVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyEciScalingConfigurationRequestVolumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestVolumesDiskVolume> diskVolume_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestVolumesEmptyDirVolume> emptyDirVolume_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestVolumesFlexVolume> flexVolume_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestVolumesHostPathVolume> hostPathVolume_ = nullptr;
    std::shared_ptr<Models::ModifyEciScalingConfigurationRequestVolumesNFSVolume> NFSVolume_ = nullptr;
    // The paths to the configuration files.
    std::shared_ptr<vector<Models::ModifyEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPath>> configFileVolumeConfigFileToPath_ = nullptr;
    // The default permissions on the ConfigFile volume.
    std::shared_ptr<int32_t> configFileVolumeDefaultMode_ = nullptr;
    // The volume name.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the Host directory. Examples: File, Directory, and Socket.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
