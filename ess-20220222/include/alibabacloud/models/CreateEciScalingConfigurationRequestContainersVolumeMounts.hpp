// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSVOLUMEMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSVOLUMEMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestContainersVolumeMounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestContainersVolumeMounts& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(SubPath, subPath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestContainersVolumeMounts& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
    };
    CreateEciScalingConfigurationRequestContainersVolumeMounts() = default ;
    CreateEciScalingConfigurationRequestContainersVolumeMounts(const CreateEciScalingConfigurationRequestContainersVolumeMounts &) = default ;
    CreateEciScalingConfigurationRequestContainersVolumeMounts(CreateEciScalingConfigurationRequestContainersVolumeMounts &&) = default ;
    CreateEciScalingConfigurationRequestContainersVolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestContainersVolumeMounts() = default ;
    CreateEciScalingConfigurationRequestContainersVolumeMounts& operator=(const CreateEciScalingConfigurationRequestContainersVolumeMounts &) = default ;
    CreateEciScalingConfigurationRequestContainersVolumeMounts& operator=(CreateEciScalingConfigurationRequestContainersVolumeMounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPath_ == nullptr
        && return this->mountPropagation_ == nullptr && return this->name_ == nullptr && return this->readOnly_ == nullptr && return this->subPath_ == nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateEciScalingConfigurationRequestContainersVolumeMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // mountPropagation Field Functions 
    bool hasMountPropagation() const { return this->mountPropagation_ != nullptr;};
    void deleteMountPropagation() { this->mountPropagation_ = nullptr;};
    inline string mountPropagation() const { DARABONBA_PTR_GET_DEFAULT(mountPropagation_, "") };
    inline CreateEciScalingConfigurationRequestContainersVolumeMounts& setMountPropagation(string mountPropagation) { DARABONBA_PTR_SET_VALUE(mountPropagation_, mountPropagation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEciScalingConfigurationRequestContainersVolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline CreateEciScalingConfigurationRequestContainersVolumeMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // subPath Field Functions 
    bool hasSubPath() const { return this->subPath_ != nullptr;};
    void deleteSubPath() { this->subPath_ = nullptr;};
    inline string subPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
    inline CreateEciScalingConfigurationRequestContainersVolumeMounts& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


  protected:
    // The directory in which the container mounts the volume.
    // 
    // >  Data in this directory is overwritten by data on the volume. Specify this parameter with caution.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount propagation setting. Mount propagation enables volume sharing from one container to other containers within the same pod or to containers across separate pods on the same node. Valid values:
    // 
    // *   None: Subsequent mounts executed on the volume or its subdirectories are not propagated to the volume.
    // *   HostToCotainer: Subsequent mounts executed on the volume or its subdirectories are propagated to the volume.
    // *   Bidirectional: This value is similar to HostToCotainer. Subsequent mounts executed on the volume or its subdirectories are propagated to the volume. All volume mounts executed on the container are not only propagate back to the underlying host but also to all containers across every pod that uses the same volume.
    // 
    // Default value: None.
    std::shared_ptr<string> mountPropagation_ = nullptr;
    // The volume name. The value of this parameter is the same as the value of Volumes.Name.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether the volume is read-only. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> readOnly_ = nullptr;
    // The volume subdirectory.
    std::shared_ptr<string> subPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
