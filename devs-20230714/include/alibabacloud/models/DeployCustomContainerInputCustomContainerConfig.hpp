// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployCustomContainerInputCustomContainerConfigHealthCheckConfig.hpp>
#include <alibabacloud/models/DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputCustomContainerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_TO_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputCustomContainerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(entrypoint, entrypoint_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(instanceConcurrency, instanceConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceLifecycleConfig, instanceLifecycleConfig_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    DeployCustomContainerInputCustomContainerConfig() = default ;
    DeployCustomContainerInputCustomContainerConfig(const DeployCustomContainerInputCustomContainerConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfig(DeployCustomContainerInputCustomContainerConfig &&) = default ;
    DeployCustomContainerInputCustomContainerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputCustomContainerConfig() = default ;
    DeployCustomContainerInputCustomContainerConfig& operator=(const DeployCustomContainerInputCustomContainerConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfig& operator=(DeployCustomContainerInputCustomContainerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr
        && this->entrypoint_ != nullptr && this->healthCheckConfig_ != nullptr && this->image_ != nullptr && this->instanceConcurrency_ != nullptr && this->instanceLifecycleConfig_ != nullptr
        && this->port_ != nullptr && this->role_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & command() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> command() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline DeployCustomContainerInputCustomContainerConfig& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline DeployCustomContainerInputCustomContainerConfig& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // entrypoint Field Functions 
    bool hasEntrypoint() const { return this->entrypoint_ != nullptr;};
    void deleteEntrypoint() { this->entrypoint_ = nullptr;};
    inline const vector<string> & entrypoint() const { DARABONBA_PTR_GET_CONST(entrypoint_, vector<string>) };
    inline vector<string> entrypoint() { DARABONBA_PTR_GET(entrypoint_, vector<string>) };
    inline DeployCustomContainerInputCustomContainerConfig& setEntrypoint(const vector<string> & entrypoint) { DARABONBA_PTR_SET_VALUE(entrypoint_, entrypoint) };
    inline DeployCustomContainerInputCustomContainerConfig& setEntrypoint(vector<string> && entrypoint) { DARABONBA_PTR_SET_RVALUE(entrypoint_, entrypoint) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig) };
    inline Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig) };
    inline DeployCustomContainerInputCustomContainerConfig& setHealthCheckConfig(const Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline DeployCustomContainerInputCustomContainerConfig& setHealthCheckConfig(Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DeployCustomContainerInputCustomContainerConfig& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // instanceConcurrency Field Functions 
    bool hasInstanceConcurrency() const { return this->instanceConcurrency_ != nullptr;};
    void deleteInstanceConcurrency() { this->instanceConcurrency_ = nullptr;};
    inline int32_t instanceConcurrency() const { DARABONBA_PTR_GET_DEFAULT(instanceConcurrency_, 0) };
    inline DeployCustomContainerInputCustomContainerConfig& setInstanceConcurrency(int32_t instanceConcurrency) { DARABONBA_PTR_SET_VALUE(instanceConcurrency_, instanceConcurrency) };


    // instanceLifecycleConfig Field Functions 
    bool hasInstanceLifecycleConfig() const { return this->instanceLifecycleConfig_ != nullptr;};
    void deleteInstanceLifecycleConfig() { this->instanceLifecycleConfig_ = nullptr;};
    inline const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig & instanceLifecycleConfig() const { DARABONBA_PTR_GET_CONST(instanceLifecycleConfig_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig) };
    inline Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig instanceLifecycleConfig() { DARABONBA_PTR_GET(instanceLifecycleConfig_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig) };
    inline DeployCustomContainerInputCustomContainerConfig& setInstanceLifecycleConfig(const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig & instanceLifecycleConfig) { DARABONBA_PTR_SET_VALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };
    inline DeployCustomContainerInputCustomContainerConfig& setInstanceLifecycleConfig(Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig && instanceLifecycleConfig) { DARABONBA_PTR_SET_RVALUE(instanceLifecycleConfig_, instanceLifecycleConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DeployCustomContainerInputCustomContainerConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DeployCustomContainerInputCustomContainerConfig& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<vector<string>> command_ = nullptr;
    std::shared_ptr<vector<string>> entrypoint_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputCustomContainerConfigHealthCheckConfig> healthCheckConfig_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<int32_t> instanceConcurrency_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig> instanceLifecycleConfig_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
