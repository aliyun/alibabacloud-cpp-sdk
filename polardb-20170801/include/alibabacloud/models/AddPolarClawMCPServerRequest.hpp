// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPOLARCLAWMCPSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPOLARCLAWMCPSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class AddPolarClawMCPServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPolarClawMCPServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(ServerConfig, serverConfig_);
      DARABONBA_PTR_TO_JSON(ServerName, serverName_);
    };
    friend void from_json(const Darabonba::Json& j, AddPolarClawMCPServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(ServerConfig, serverConfig_);
      DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
    };
    AddPolarClawMCPServerRequest() = default ;
    AddPolarClawMCPServerRequest(const AddPolarClawMCPServerRequest &) = default ;
    AddPolarClawMCPServerRequest(AddPolarClawMCPServerRequest &&) = default ;
    AddPolarClawMCPServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPolarClawMCPServerRequest() = default ;
    AddPolarClawMCPServerRequest& operator=(const AddPolarClawMCPServerRequest &) = default ;
    AddPolarClawMCPServerRequest& operator=(AddPolarClawMCPServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->serverConfig_ == nullptr && this->serverName_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AddPolarClawMCPServerRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // serverConfig Field Functions 
    bool hasServerConfig() const { return this->serverConfig_ != nullptr;};
    void deleteServerConfig() { this->serverConfig_ = nullptr;};
    inline     const Darabonba::Json & getServerConfig() const { DARABONBA_GET(serverConfig_) };
    Darabonba::Json & getServerConfig() { DARABONBA_GET(serverConfig_) };
    inline AddPolarClawMCPServerRequest& setServerConfig(const Darabonba::Json & serverConfig) { DARABONBA_SET_VALUE(serverConfig_, serverConfig) };
    inline AddPolarClawMCPServerRequest& setServerConfig(Darabonba::Json && serverConfig) { DARABONBA_SET_RVALUE(serverConfig_, serverConfig) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline AddPolarClawMCPServerRequest& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    Darabonba::Json serverConfig_ {};
    // This parameter is required.
    shared_ptr<string> serverName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
