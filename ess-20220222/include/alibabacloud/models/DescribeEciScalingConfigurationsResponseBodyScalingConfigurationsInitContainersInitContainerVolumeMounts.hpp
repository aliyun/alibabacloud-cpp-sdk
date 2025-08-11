// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSINITCONTAINERSINITCONTAINERVOLUMEMOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECISCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSINITCONTAINERSINITCONTAINERVOLUMEMOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(SubPath, subPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(MountPropagation, mountPropagation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(SubPath, subPath_);
    };
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts(DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts &&) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts() = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& operator=(const DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts &) = default ;
    DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& operator=(DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts &&) = default ;
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
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // mountPropagation Field Functions 
    bool hasMountPropagation() const { return this->mountPropagation_ != nullptr;};
    void deleteMountPropagation() { this->mountPropagation_ = nullptr;};
    inline string mountPropagation() const { DARABONBA_PTR_GET_DEFAULT(mountPropagation_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& setMountPropagation(string mountPropagation) { DARABONBA_PTR_SET_VALUE(mountPropagation_, mountPropagation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // subPath Field Functions 
    bool hasSubPath() const { return this->subPath_ != nullptr;};
    void deleteSubPath() { this->subPath_ = nullptr;};
    inline string subPath() const { DARABONBA_PTR_GET_DEFAULT(subPath_, "") };
    inline DescribeEciScalingConfigurationsResponseBodyScalingConfigurationsInitContainersInitContainerVolumeMounts& setSubPath(string subPath) { DARABONBA_PTR_SET_VALUE(subPath_, subPath) };


  protected:
    // The directory to which the volume is mounted. Data under this directory is overwritten by the data on the volume.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount propagation setting. Mount propagation enables volumes mounted on one container to be shared among other containers within the same pod or across distinct pods residing on the same node. Valid values:
    // 
    // *   None: Subsequent mounts executed either on the volume itself or its subdirectories do not propagate to the already established volume mount.
    // *   HostToCotainer: Subsequent mounts executed either on the volume itself or its subdirectories propagate to the already established volume mount.
    // *   Bidirectional: This value is similar to HostToCotainer. Subsequent mounts executed either on the volume itself or its subdirectories propagate to the already established volume mount. In addition, any volume mounts executed on a container not only propagate back to the underlying host but also to all containers across every pod that uses the same volume.
    // 
    // Default value: None.
    std::shared_ptr<string> mountPropagation_ = nullptr;
    // The volume name.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the mount directory is read-only.
    // 
    // Default value: false.
    std::shared_ptr<bool> readOnly_ = nullptr;
    // The volume subdirectory. A pod can mount different directories of the same volume to different directories of the init container.
    std::shared_ptr<string> subPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
