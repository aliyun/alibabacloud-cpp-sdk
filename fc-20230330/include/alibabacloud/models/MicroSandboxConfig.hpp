// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MICROSANDBOXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MICROSANDBOXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RegistryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class MicroSandboxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MicroSandboxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(osType, osType_);
      DARABONBA_PTR_TO_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_TO_JSON(startCommand, startCommand_);
    };
    friend void from_json(const Darabonba::Json& j, MicroSandboxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(osType, osType_);
      DARABONBA_PTR_FROM_JSON(readyCommand, readyCommand_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_FROM_JSON(startCommand, startCommand_);
    };
    MicroSandboxConfig() = default ;
    MicroSandboxConfig(const MicroSandboxConfig &) = default ;
    MicroSandboxConfig(MicroSandboxConfig &&) = default ;
    MicroSandboxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MicroSandboxConfig() = default ;
    MicroSandboxConfig& operator=(const MicroSandboxConfig &) = default ;
    MicroSandboxConfig& operator=(MicroSandboxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->image_ == nullptr && this->osType_ == nullptr && this->readyCommand_ == nullptr && this->registryConfig_ == nullptr && this->startCommand_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline MicroSandboxConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline MicroSandboxConfig& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline MicroSandboxConfig& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // readyCommand Field Functions 
    bool hasReadyCommand() const { return this->readyCommand_ != nullptr;};
    void deleteReadyCommand() { this->readyCommand_ = nullptr;};
    inline string getReadyCommand() const { DARABONBA_PTR_GET_DEFAULT(readyCommand_, "") };
    inline MicroSandboxConfig& setReadyCommand(string readyCommand) { DARABONBA_PTR_SET_VALUE(readyCommand_, readyCommand) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const RegistryConfig & getRegistryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, RegistryConfig) };
    inline RegistryConfig getRegistryConfig() { DARABONBA_PTR_GET(registryConfig_, RegistryConfig) };
    inline MicroSandboxConfig& setRegistryConfig(const RegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline MicroSandboxConfig& setRegistryConfig(RegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


    // startCommand Field Functions 
    bool hasStartCommand() const { return this->startCommand_ != nullptr;};
    void deleteStartCommand() { this->startCommand_ = nullptr;};
    inline string getStartCommand() const { DARABONBA_PTR_GET_DEFAULT(startCommand_, "") };
    inline MicroSandboxConfig& setStartCommand(string startCommand) { DARABONBA_PTR_SET_VALUE(startCommand_, startCommand) };


  protected:
    // The ID of the ACR Enterprise Edition image repository instance. Used in pair with MicroSandbox images. This parameter is optional. If not provided, the server resolves it as needed.
    shared_ptr<string> acrInstanceId_ {};
    // The image address.
    shared_ptr<string> image_ {};
    shared_ptr<string> osType_ {};
    shared_ptr<string> readyCommand_ {};
    // The image repository configuration.
    shared_ptr<RegistryConfig> registryConfig_ {};
    shared_ptr<string> startCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
