// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMES_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesDiskVolume.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesEmptyDirVolume.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesFlexVolume.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesHostPathVolume.hpp>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesNFSVolume.hpp>
#include <vector>
#include <alibabacloud/models/CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestVolumes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestVolumes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestVolumes& obj) { 
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
    CreateEciScalingConfigurationRequestVolumes() = default ;
    CreateEciScalingConfigurationRequestVolumes(const CreateEciScalingConfigurationRequestVolumes &) = default ;
    CreateEciScalingConfigurationRequestVolumes(CreateEciScalingConfigurationRequestVolumes &&) = default ;
    CreateEciScalingConfigurationRequestVolumes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestVolumes() = default ;
    CreateEciScalingConfigurationRequestVolumes& operator=(const CreateEciScalingConfigurationRequestVolumes &) = default ;
    CreateEciScalingConfigurationRequestVolumes& operator=(CreateEciScalingConfigurationRequestVolumes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskVolume_ != nullptr
        && this->emptyDirVolume_ != nullptr && this->flexVolume_ != nullptr && this->hostPathVolume_ != nullptr && this->NFSVolume_ != nullptr && this->configFileVolumeConfigFileToPaths_ != nullptr
        && this->configFileVolumeDefaultMode_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // diskVolume Field Functions 
    bool hasDiskVolume() const { return this->diskVolume_ != nullptr;};
    void deleteDiskVolume() { this->diskVolume_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestVolumesDiskVolume & diskVolume() const { DARABONBA_PTR_GET_CONST(diskVolume_, Models::CreateEciScalingConfigurationRequestVolumesDiskVolume) };
    inline Models::CreateEciScalingConfigurationRequestVolumesDiskVolume diskVolume() { DARABONBA_PTR_GET(diskVolume_, Models::CreateEciScalingConfigurationRequestVolumesDiskVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setDiskVolume(const Models::CreateEciScalingConfigurationRequestVolumesDiskVolume & diskVolume) { DARABONBA_PTR_SET_VALUE(diskVolume_, diskVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setDiskVolume(Models::CreateEciScalingConfigurationRequestVolumesDiskVolume && diskVolume) { DARABONBA_PTR_SET_RVALUE(diskVolume_, diskVolume) };


    // emptyDirVolume Field Functions 
    bool hasEmptyDirVolume() const { return this->emptyDirVolume_ != nullptr;};
    void deleteEmptyDirVolume() { this->emptyDirVolume_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume & emptyDirVolume() const { DARABONBA_PTR_GET_CONST(emptyDirVolume_, Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume) };
    inline Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume emptyDirVolume() { DARABONBA_PTR_GET(emptyDirVolume_, Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setEmptyDirVolume(const Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume & emptyDirVolume) { DARABONBA_PTR_SET_VALUE(emptyDirVolume_, emptyDirVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setEmptyDirVolume(Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume && emptyDirVolume) { DARABONBA_PTR_SET_RVALUE(emptyDirVolume_, emptyDirVolume) };


    // flexVolume Field Functions 
    bool hasFlexVolume() const { return this->flexVolume_ != nullptr;};
    void deleteFlexVolume() { this->flexVolume_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestVolumesFlexVolume & flexVolume() const { DARABONBA_PTR_GET_CONST(flexVolume_, Models::CreateEciScalingConfigurationRequestVolumesFlexVolume) };
    inline Models::CreateEciScalingConfigurationRequestVolumesFlexVolume flexVolume() { DARABONBA_PTR_GET(flexVolume_, Models::CreateEciScalingConfigurationRequestVolumesFlexVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setFlexVolume(const Models::CreateEciScalingConfigurationRequestVolumesFlexVolume & flexVolume) { DARABONBA_PTR_SET_VALUE(flexVolume_, flexVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setFlexVolume(Models::CreateEciScalingConfigurationRequestVolumesFlexVolume && flexVolume) { DARABONBA_PTR_SET_RVALUE(flexVolume_, flexVolume) };


    // hostPathVolume Field Functions 
    bool hasHostPathVolume() const { return this->hostPathVolume_ != nullptr;};
    void deleteHostPathVolume() { this->hostPathVolume_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume & hostPathVolume() const { DARABONBA_PTR_GET_CONST(hostPathVolume_, Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume) };
    inline Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume hostPathVolume() { DARABONBA_PTR_GET(hostPathVolume_, Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setHostPathVolume(const Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume & hostPathVolume) { DARABONBA_PTR_SET_VALUE(hostPathVolume_, hostPathVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setHostPathVolume(Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume && hostPathVolume) { DARABONBA_PTR_SET_RVALUE(hostPathVolume_, hostPathVolume) };


    // NFSVolume Field Functions 
    bool hasNFSVolume() const { return this->NFSVolume_ != nullptr;};
    void deleteNFSVolume() { this->NFSVolume_ = nullptr;};
    inline const Models::CreateEciScalingConfigurationRequestVolumesNFSVolume & NFSVolume() const { DARABONBA_PTR_GET_CONST(NFSVolume_, Models::CreateEciScalingConfigurationRequestVolumesNFSVolume) };
    inline Models::CreateEciScalingConfigurationRequestVolumesNFSVolume NFSVolume() { DARABONBA_PTR_GET(NFSVolume_, Models::CreateEciScalingConfigurationRequestVolumesNFSVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setNFSVolume(const Models::CreateEciScalingConfigurationRequestVolumesNFSVolume & NFSVolume) { DARABONBA_PTR_SET_VALUE(NFSVolume_, NFSVolume) };
    inline CreateEciScalingConfigurationRequestVolumes& setNFSVolume(Models::CreateEciScalingConfigurationRequestVolumesNFSVolume && NFSVolume) { DARABONBA_PTR_SET_RVALUE(NFSVolume_, NFSVolume) };


    // configFileVolumeConfigFileToPaths Field Functions 
    bool hasConfigFileVolumeConfigFileToPaths() const { return this->configFileVolumeConfigFileToPaths_ != nullptr;};
    void deleteConfigFileVolumeConfigFileToPaths() { this->configFileVolumeConfigFileToPaths_ = nullptr;};
    inline const vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths> & configFileVolumeConfigFileToPaths() const { DARABONBA_PTR_GET_CONST(configFileVolumeConfigFileToPaths_, vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths>) };
    inline vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths> configFileVolumeConfigFileToPaths() { DARABONBA_PTR_GET(configFileVolumeConfigFileToPaths_, vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths>) };
    inline CreateEciScalingConfigurationRequestVolumes& setConfigFileVolumeConfigFileToPaths(const vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths> & configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_VALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };
    inline CreateEciScalingConfigurationRequestVolumes& setConfigFileVolumeConfigFileToPaths(vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths> && configFileVolumeConfigFileToPaths) { DARABONBA_PTR_SET_RVALUE(configFileVolumeConfigFileToPaths_, configFileVolumeConfigFileToPaths) };


    // configFileVolumeDefaultMode Field Functions 
    bool hasConfigFileVolumeDefaultMode() const { return this->configFileVolumeDefaultMode_ != nullptr;};
    void deleteConfigFileVolumeDefaultMode() { this->configFileVolumeDefaultMode_ = nullptr;};
    inline int32_t configFileVolumeDefaultMode() const { DARABONBA_PTR_GET_DEFAULT(configFileVolumeDefaultMode_, 0) };
    inline CreateEciScalingConfigurationRequestVolumes& setConfigFileVolumeDefaultMode(int32_t configFileVolumeDefaultMode) { DARABONBA_PTR_SET_VALUE(configFileVolumeDefaultMode_, configFileVolumeDefaultMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEciScalingConfigurationRequestVolumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEciScalingConfigurationRequestVolumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestVolumesDiskVolume> diskVolume_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestVolumesEmptyDirVolume> emptyDirVolume_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestVolumesFlexVolume> flexVolume_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestVolumesHostPathVolume> hostPathVolume_ = nullptr;
    std::shared_ptr<Models::CreateEciScalingConfigurationRequestVolumesNFSVolume> NFSVolume_ = nullptr;
    // The paths to the configuration files.
    std::shared_ptr<vector<Models::CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths>> configFileVolumeConfigFileToPaths_ = nullptr;
    // The default permissions on the ConfigFile volume.
    std::shared_ptr<int32_t> configFileVolumeDefaultMode_ = nullptr;
    // The name of the volume.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the Host directory. Examples: File, Directory, and Socket.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
