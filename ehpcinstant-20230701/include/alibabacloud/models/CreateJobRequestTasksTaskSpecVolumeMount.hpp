// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECVOLUMEMOUNT_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPECVOLUMEMOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpecVolumeMount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpecVolumeMount& obj) { 
      DARABONBA_PTR_TO_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(VolumeDriver, volumeDriver_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpecVolumeMount& obj) { 
      DARABONBA_PTR_FROM_JSON(MountOptions, mountOptions_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(VolumeDriver, volumeDriver_);
    };
    CreateJobRequestTasksTaskSpecVolumeMount() = default ;
    CreateJobRequestTasksTaskSpecVolumeMount(const CreateJobRequestTasksTaskSpecVolumeMount &) = default ;
    CreateJobRequestTasksTaskSpecVolumeMount(CreateJobRequestTasksTaskSpecVolumeMount &&) = default ;
    CreateJobRequestTasksTaskSpecVolumeMount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpecVolumeMount() = default ;
    CreateJobRequestTasksTaskSpecVolumeMount& operator=(const CreateJobRequestTasksTaskSpecVolumeMount &) = default ;
    CreateJobRequestTasksTaskSpecVolumeMount& operator=(CreateJobRequestTasksTaskSpecVolumeMount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountOptions_ != nullptr
        && this->mountPath_ != nullptr && this->readOnly_ != nullptr && this->volumeDriver_ != nullptr; };
    // mountOptions Field Functions 
    bool hasMountOptions() const { return this->mountOptions_ != nullptr;};
    void deleteMountOptions() { this->mountOptions_ = nullptr;};
    inline string mountOptions() const { DARABONBA_PTR_GET_DEFAULT(mountOptions_, "") };
    inline CreateJobRequestTasksTaskSpecVolumeMount& setMountOptions(string mountOptions) { DARABONBA_PTR_SET_VALUE(mountOptions_, mountOptions) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline CreateJobRequestTasksTaskSpecVolumeMount& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline CreateJobRequestTasksTaskSpecVolumeMount& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // volumeDriver Field Functions 
    bool hasVolumeDriver() const { return this->volumeDriver_ != nullptr;};
    void deleteVolumeDriver() { this->volumeDriver_ = nullptr;};
    inline string volumeDriver() const { DARABONBA_PTR_GET_DEFAULT(volumeDriver_, "") };
    inline CreateJobRequestTasksTaskSpecVolumeMount& setVolumeDriver(string volumeDriver) { DARABONBA_PTR_SET_VALUE(volumeDriver_, volumeDriver) };


  protected:
    std::shared_ptr<string> mountOptions_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> volumeDriver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
