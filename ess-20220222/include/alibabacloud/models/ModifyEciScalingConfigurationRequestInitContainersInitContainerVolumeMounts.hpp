// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERVOLUMEMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSINITCONTAINERVOLUMEMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(SubPath, subPath_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
    };
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts(const ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts(ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts() = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& operator=(const ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& operator=(ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPath_ != nullptr
        && this->mountPropagation_ != nullptr && this->name_ != nullptr && this->readOnly_ != nullptr && this->subPath_ != nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // mountPropagation Field Functions 
    bool hasMountPropagation() const { return this->mountPropagation_ != nullptr;};
    void deleteMountPropagation() { this->mountPropagation_ = nullptr;};
    inline string mountPropagation() const { DARABONBA_PTR_GET_DEFAULT(mountPropagation_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& setMountPropagation(string mountPropagation) { DARABONBA_PTR_SET_VALUE(mountPropagation_, mountPropagation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // subPath Field Functions 
    bool hasSubPath() const { return this->subPath_ != nullptr;};
    void deleteSubPath() { this->subPath_ = nullptr;};
    inline string subPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
    inline ModifyEciScalingConfigurationRequestInitContainersInitContainerVolumeMounts& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


  protected:
    // The directory within the init container onto which you want to mount the volume.
    // 
    // >  The information stored within this directory is overwritten by the data on the mounted volume. Exercise caution when you specify this parameter.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount propagation settings of the volume. Mount propagation enables volumes mounted on one container to be shared among other containers within the same pod or across distinct pods residing on the same node. Valid values:
    // 
    // *   None: Subsequent mounts executed on the volume or its subdirectories do not propagate to the volume.
    // *   HostToCotainer: Subsequent mounts executed on the volume or its subdirectories propagate to the volume.
    // *   Bidirectional: This value is similar to HostToCotainer. Subsequent mounts executed on the volume or its subdirectories propagate to the volume. In addition, volume mounts executed on the container propagate back to the underlying instance and to all containers across every pod that uses the same volume.
    // 
    // Default value: None.
    std::shared_ptr<string> mountPropagation_ = nullptr;
    // The name of the volume.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether the mount path is read-only.
    // 
    // Default value: false.
    std::shared_ptr<bool> readOnly_ = nullptr;
    // The volume subdirectory. The pod can mount different directories of the same volume to different subdirectories of init containers.
    std::shared_ptr<string> subPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
