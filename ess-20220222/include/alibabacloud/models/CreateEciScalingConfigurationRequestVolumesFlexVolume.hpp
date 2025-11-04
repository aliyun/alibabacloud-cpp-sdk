// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESFLEXVOLUME_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESFLEXVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestVolumesFlexVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestVolumesFlexVolume& obj) { 
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(FsType, fsType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestVolumesFlexVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(FsType, fsType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    CreateEciScalingConfigurationRequestVolumesFlexVolume() = default ;
    CreateEciScalingConfigurationRequestVolumesFlexVolume(const CreateEciScalingConfigurationRequestVolumesFlexVolume &) = default ;
    CreateEciScalingConfigurationRequestVolumesFlexVolume(CreateEciScalingConfigurationRequestVolumesFlexVolume &&) = default ;
    CreateEciScalingConfigurationRequestVolumesFlexVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestVolumesFlexVolume() = default ;
    CreateEciScalingConfigurationRequestVolumesFlexVolume& operator=(const CreateEciScalingConfigurationRequestVolumesFlexVolume &) = default ;
    CreateEciScalingConfigurationRequestVolumesFlexVolume& operator=(CreateEciScalingConfigurationRequestVolumesFlexVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->driver_ == nullptr
        && return this->fsType_ == nullptr && return this->options_ == nullptr; };
    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline CreateEciScalingConfigurationRequestVolumesFlexVolume& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // fsType Field Functions 
    bool hasFsType() const { return this->fsType_ != nullptr;};
    void deleteFsType() { this->fsType_ = nullptr;};
    inline string fsType() const { DARABONBA_PTR_GET_DEFAULT(fsType_, "") };
    inline CreateEciScalingConfigurationRequestVolumesFlexVolume& setFsType(string fsType) { DARABONBA_PTR_SET_VALUE(fsType_, fsType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateEciScalingConfigurationRequestVolumesFlexVolume& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    std::shared_ptr<string> driver_ = nullptr;
    std::shared_ptr<string> fsType_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
