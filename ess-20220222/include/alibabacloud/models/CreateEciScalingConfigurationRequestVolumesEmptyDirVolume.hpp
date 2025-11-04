// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESEMPTYDIRVOLUME_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESEMPTYDIRVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestVolumesEmptyDirVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& obj) { 
      DARABONBA_PTR_TO_JSON(Medium, medium_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(Medium, medium_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
    };
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume() = default ;
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume(const CreateEciScalingConfigurationRequestVolumesEmptyDirVolume &) = default ;
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume(CreateEciScalingConfigurationRequestVolumesEmptyDirVolume &&) = default ;
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestVolumesEmptyDirVolume() = default ;
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& operator=(const CreateEciScalingConfigurationRequestVolumesEmptyDirVolume &) = default ;
    CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& operator=(CreateEciScalingConfigurationRequestVolumesEmptyDirVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->medium_ == nullptr
        && return this->sizeLimit_ == nullptr; };
    // medium Field Functions 
    bool hasMedium() const { return this->medium_ != nullptr;};
    void deleteMedium() { this->medium_ = nullptr;};
    inline string medium() const { DARABONBA_PTR_GET_DEFAULT(medium_, "") };
    inline CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& setMedium(string medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline string sizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, "") };
    inline CreateEciScalingConfigurationRequestVolumesEmptyDirVolume& setSizeLimit(string sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


  protected:
    std::shared_ptr<string> medium_ = nullptr;
    std::shared_ptr<string> sizeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
