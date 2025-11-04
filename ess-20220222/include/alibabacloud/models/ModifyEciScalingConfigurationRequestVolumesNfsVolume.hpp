// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMESNFSVOLUME_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTVOLUMESNFSVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestVolumesNFSVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestVolumesNFSVolume& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(Server, server_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestVolumesNFSVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(Server, server_);
    };
    ModifyEciScalingConfigurationRequestVolumesNFSVolume() = default ;
    ModifyEciScalingConfigurationRequestVolumesNFSVolume(const ModifyEciScalingConfigurationRequestVolumesNFSVolume &) = default ;
    ModifyEciScalingConfigurationRequestVolumesNFSVolume(ModifyEciScalingConfigurationRequestVolumesNFSVolume &&) = default ;
    ModifyEciScalingConfigurationRequestVolumesNFSVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestVolumesNFSVolume() = default ;
    ModifyEciScalingConfigurationRequestVolumesNFSVolume& operator=(const ModifyEciScalingConfigurationRequestVolumesNFSVolume &) = default ;
    ModifyEciScalingConfigurationRequestVolumesNFSVolume& operator=(ModifyEciScalingConfigurationRequestVolumesNFSVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->path_ == nullptr
        && return this->readOnly_ == nullptr && return this->server_ == nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyEciScalingConfigurationRequestVolumesNFSVolume& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline ModifyEciScalingConfigurationRequestVolumesNFSVolume& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string server() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline ModifyEciScalingConfigurationRequestVolumesNFSVolume& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> server_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
