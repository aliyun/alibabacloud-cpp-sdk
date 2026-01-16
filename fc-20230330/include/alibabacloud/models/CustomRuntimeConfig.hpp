// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMRUNTIMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMRUNTIMECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomHealthCheckConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CustomRuntimeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomRuntimeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(port, port_);
    };
    friend void from_json(const Darabonba::Json& j, CustomRuntimeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(healthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(port, port_);
    };
    CustomRuntimeConfig() = default ;
    CustomRuntimeConfig(const CustomRuntimeConfig &) = default ;
    CustomRuntimeConfig(CustomRuntimeConfig &&) = default ;
    CustomRuntimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomRuntimeConfig() = default ;
    CustomRuntimeConfig& operator=(const CustomRuntimeConfig &) = default ;
    CustomRuntimeConfig& operator=(CustomRuntimeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->args_ == nullptr
        && this->command_ == nullptr && this->healthCheckConfig_ == nullptr && this->port_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & getArgs() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> getArgs() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline CustomRuntimeConfig& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline CustomRuntimeConfig& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline const vector<string> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<string>) };
    inline vector<string> getCommand() { DARABONBA_PTR_GET(command_, vector<string>) };
    inline CustomRuntimeConfig& setCommand(const vector<string> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
    inline CustomRuntimeConfig& setCommand(vector<string> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const CustomHealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, CustomHealthCheckConfig) };
    inline CustomHealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, CustomHealthCheckConfig) };
    inline CustomRuntimeConfig& setHealthCheckConfig(const CustomHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CustomRuntimeConfig& setHealthCheckConfig(CustomHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CustomRuntimeConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    shared_ptr<vector<string>> args_ {};
    shared_ptr<vector<string>> command_ {};
    shared_ptr<CustomHealthCheckConfig> healthCheckConfig_ {};
    shared_ptr<int32_t> port_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
