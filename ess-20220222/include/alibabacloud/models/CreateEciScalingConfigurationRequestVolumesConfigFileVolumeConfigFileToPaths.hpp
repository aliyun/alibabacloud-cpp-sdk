// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESCONFIGFILEVOLUMECONFIGFILETOPATHS_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTVOLUMESCONFIGFILEVOLUMECONFIGFILETOPATHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths() = default ;
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths(const CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths &) = default ;
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths(CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths &&) = default ;
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths() = default ;
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& operator=(const CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths &) = default ;
    CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& operator=(CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->mode_ != nullptr && this->path_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateEciScalingConfigurationRequestVolumesConfigFileVolumeConfigFileToPaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The content of the configuration file (32 KB).
    std::shared_ptr<string> content_ = nullptr;
    // The permissions on the configuration file.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The name of the environment variable.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
