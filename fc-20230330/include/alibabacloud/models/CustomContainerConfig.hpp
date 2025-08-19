// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AccelerationInfo.hpp>
#include <vector>
#include <alibabacloud/models/CustomHealthCheckConfig.hpp>
#include <alibabacloud/models/RegistryConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CustomContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(accelerationInfo, accelerationInfo_);
      DARABONBA_PTR_TO_JSON(accelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_TO_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_TO_JSON(resolvedImageUri, resolvedImageUri_);
    };
    friend void from_json(const Darabonba::Json& j, CustomContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(accelerationInfo, accelerationInfo_);
      DARABONBA_PTR_FROM_JSON(accelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(registryConfig, registryConfig_);
      DARABONBA_PTR_FROM_JSON(resolvedImageUri, resolvedImageUri_);
    };
    CustomContainerConfig() = default ;
    CustomContainerConfig(const CustomContainerConfig &) = default ;
    CustomContainerConfig(CustomContainerConfig &&) = default ;
    CustomContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomContainerConfig() = default ;
    CustomContainerConfig& operator=(const CustomContainerConfig &) = default ;
    CustomContainerConfig& operator=(CustomContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accelerationInfo_ != nullptr
        && this->accelerationType_ != nullptr && this->acrInstanceId_ != nullptr && this->command_ != nullptr && this->entrypoint_ != nullptr && this->healthCheckConfig_ != nullptr
        && this->image_ != nullptr && this->port_ != nullptr && this->registryConfig_ != nullptr && this->resolvedImageUri_ != nullptr; };
    // accelerationInfo Field Functions 
    bool hasAccelerationInfo() const { return this->accelerationInfo_ != nullptr;};
    void deleteAccelerationInfo() { this->accelerationInfo_ = nullptr;};
    inline const AccelerationInfo & accelerationInfo() const { DARABONBA_PTR_GET_CONST(accelerationInfo_, AccelerationInfo) };
    inline AccelerationInfo accelerationInfo() { DARABONBA_PTR_GET(accelerationInfo_, AccelerationInfo) };
    inline CustomContainerConfig& setAccelerationInfo(const AccelerationInfo & accelerationInfo) { DARABONBA_PTR_SET_VALUE(accelerationInfo_, accelerationInfo) };
    inline CustomContainerConfig& setAccelerationInfo(AccelerationInfo && accelerationInfo) { DARABONBA_PTR_SET_RVALUE(accelerationInfo_, accelerationInfo) };


    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string accelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline CustomContainerConfig& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string acrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline CustomContainerConfig& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline CustomContainerConfig& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline CustomContainerConfig& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // entrypoint Field Functions 
    bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
    void deleteEntrypoint() { this->entrypoint_ = nullptr;};
    inline const vector<string> & entrypoint() const { DARABONBA_PTR_GET_CONST(entrypoint_, vector<string>) };
    inline vector<string> entrypoint() { DARABONBA_PTR_GET(entrypoint_, vector<string>) };
    inline CustomContainerConfig& setEntrypoint(const vector<string> & entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };
    inline CustomContainerConfig& setEntrypoint(vector<string> && entrypoint) { DARABONBA_PTR_SET_RVALUE(entrypoint_, entrypoint) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const CustomHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, CustomHealthCheckConfig) };
    inline CustomHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, CustomHealthCheckConfig) };
    inline CustomContainerConfig& setHealthCheckConfig(const CustomHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CustomContainerConfig& setHealthCheckConfig(CustomHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CustomContainerConfig& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CustomContainerConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // registryConfig Field Functions 
    bool hasRegistryConfig() const { return this->registryConfig_ != nullptr;};
    void deleteRegistryConfig() { this->registryConfig_ = nullptr;};
    inline const RegistryConfig & registryConfig() const { DARABONBA_PTR_GET_CONST(registryConfig_, RegistryConfig) };
    inline RegistryConfig registryConfig() { DARABONBA_PTR_GET(registryConfig_, RegistryConfig) };
    inline CustomContainerConfig& setRegistryConfig(const RegistryConfig & registryConfig) { DARABONBA_PTR_SET_VALUE(registryConfig_, registryConfig) };
    inline CustomContainerConfig& setRegistryConfig(RegistryConfig && registryConfig) { DARABONBA_PTR_SET_RVALUE(registryConfig_, registryConfig) };


    // resolvedImageUri Field Functions 
    bool hasResolvedImageUri() const { return this->resolvedImageUri_ != nullptr;};
    void deleteResolvedImageUri() { this->resolvedImageUri_ = nullptr;};
    inline string resolvedImageUri() const { DARABONBA_PTR_GET_DEFAULT(resolvedImageUri_, "") };
    inline CustomContainerConfig& setResolvedImageUri(string resolvedImageUri) { DARABONBA_PTR_SET_VALUE(resolvedImageUri_, resolvedImageUri) };


  protected:
    std::shared_ptr<AccelerationInfo> accelerationInfo_ = nullptr;
    std::shared_ptr<string> accelerationType_ = nullptr;
    std::shared_ptr<string> acrInstanceId_ = nullptr;
    std::shared_ptr<vector<string>> command_ = nullptr;
    std::shared_ptr<vector<string>> entrypoint_ = nullptr;
    std::shared_ptr<CustomHealthCheckConfig> healthCheckConfig_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<RegistryConfig> registryConfig_ = nullptr;
    std::shared_ptr<string> resolvedImageUri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
