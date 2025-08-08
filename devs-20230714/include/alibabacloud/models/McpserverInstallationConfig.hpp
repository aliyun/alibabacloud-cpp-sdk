// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSERVERINSTALLATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSERVERINSTALLATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class MCPServerInstallationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MCPServerInstallationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(command, command_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(transportType, transportType_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MCPServerInstallationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(command, command_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(transportType, transportType_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    MCPServerInstallationConfig() = default ;
    MCPServerInstallationConfig(const MCPServerInstallationConfig &) = default ;
    MCPServerInstallationConfig(MCPServerInstallationConfig &&) = default ;
    MCPServerInstallationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MCPServerInstallationConfig() = default ;
    MCPServerInstallationConfig& operator=(const MCPServerInstallationConfig &) = default ;
    MCPServerInstallationConfig& operator=(MCPServerInstallationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->command_ != nullptr && this->env_ != nullptr && this->transportType_ != nullptr && this->url_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline MCPServerInstallationConfig& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline MCPServerInstallationConfig& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline const map<string, string> & env() const { DARABONBA_PTR_GET_CONST(env_, map<string, string>) };
    inline map<string, string> env() { DARABONBA_PTR_GET(env_, map<string, string>) };
    inline MCPServerInstallationConfig& setEnv(const map<string, string> & env) { DARABONBA_PTR_SET_VALUE(env_, env) };
    inline MCPServerInstallationConfig& setEnv(map<string, string> && env) { DARABONBA_PTR_SET_RVALUE(env_, env) };


    // transportType Field Functions 
    bool hasTransportType() const { return this->transportType_ != nullptr;};
    void deleteTransportType() { this->transportType_ = nullptr;};
    inline string transportType() const { DARABONBA_PTR_GET_DEFAULT(transportType_, "") };
    inline MCPServerInstallationConfig& setTransportType(string transportType) { DARABONBA_PTR_SET_VALUE(transportType_, transportType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MCPServerInstallationConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> args_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<map<string, string>> env_ = nullptr;
    std::shared_ptr<string> transportType_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
