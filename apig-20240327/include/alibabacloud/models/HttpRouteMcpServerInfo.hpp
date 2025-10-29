// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPROUTEMCPSERVERINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPROUTEMCPSERVERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpRouteMcpServerInfoMcpRouteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpRouteMcpServerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpRouteMcpServerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(createFromType, createFromType_);
      DARABONBA_PTR_TO_JSON(importInstanceId, importInstanceId_);
      DARABONBA_PTR_TO_JSON(importMcpServerId, importMcpServerId_);
      DARABONBA_PTR_TO_JSON(importNamespace, importNamespace_);
      DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, HttpRouteMcpServerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(createFromType, createFromType_);
      DARABONBA_PTR_FROM_JSON(importInstanceId, importInstanceId_);
      DARABONBA_PTR_FROM_JSON(importMcpServerId, importMcpServerId_);
      DARABONBA_PTR_FROM_JSON(importNamespace, importNamespace_);
      DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
    };
    HttpRouteMcpServerInfo() = default ;
    HttpRouteMcpServerInfo(const HttpRouteMcpServerInfo &) = default ;
    HttpRouteMcpServerInfo(HttpRouteMcpServerInfo &&) = default ;
    HttpRouteMcpServerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpRouteMcpServerInfo() = default ;
    HttpRouteMcpServerInfo& operator=(const HttpRouteMcpServerInfo &) = default ;
    HttpRouteMcpServerInfo& operator=(HttpRouteMcpServerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createFromType_ == nullptr
        && return this->importInstanceId_ == nullptr && return this->importMcpServerId_ == nullptr && return this->importNamespace_ == nullptr && return this->mcpRouteConfig_ == nullptr && return this->mcpServerConfig_ == nullptr; };
    // createFromType Field Functions 
    bool hasCreateFromType() const { return this->createFromType_ != nullptr;};
    void deleteCreateFromType() { this->createFromType_ = nullptr;};
    inline string createFromType() const { DARABONBA_PTR_GET_DEFAULT(createFromType_, "") };
    inline HttpRouteMcpServerInfo& setCreateFromType(string createFromType) { DARABONBA_PTR_SET_VALUE(createFromType_, createFromType) };


    // importInstanceId Field Functions 
    bool hasImportInstanceId() const { return this->importInstanceId_ != nullptr;};
    void deleteImportInstanceId() { this->importInstanceId_ = nullptr;};
    inline string importInstanceId() const { DARABONBA_PTR_GET_DEFAULT(importInstanceId_, "") };
    inline HttpRouteMcpServerInfo& setImportInstanceId(string importInstanceId) { DARABONBA_PTR_SET_VALUE(importInstanceId_, importInstanceId) };


    // importMcpServerId Field Functions 
    bool hasImportMcpServerId() const { return this->importMcpServerId_ != nullptr;};
    void deleteImportMcpServerId() { this->importMcpServerId_ = nullptr;};
    inline string importMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(importMcpServerId_, "") };
    inline HttpRouteMcpServerInfo& setImportMcpServerId(string importMcpServerId) { DARABONBA_PTR_SET_VALUE(importMcpServerId_, importMcpServerId) };


    // importNamespace Field Functions 
    bool hasImportNamespace() const { return this->importNamespace_ != nullptr;};
    void deleteImportNamespace() { this->importNamespace_ = nullptr;};
    inline string importNamespace() const { DARABONBA_PTR_GET_DEFAULT(importNamespace_, "") };
    inline HttpRouteMcpServerInfo& setImportNamespace(string importNamespace) { DARABONBA_PTR_SET_VALUE(importNamespace_, importNamespace) };


    // mcpRouteConfig Field Functions 
    bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
    void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
    inline const Models::HttpRouteMcpServerInfoMcpRouteConfig & mcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, Models::HttpRouteMcpServerInfoMcpRouteConfig) };
    inline Models::HttpRouteMcpServerInfoMcpRouteConfig mcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, Models::HttpRouteMcpServerInfoMcpRouteConfig) };
    inline HttpRouteMcpServerInfo& setMcpRouteConfig(const Models::HttpRouteMcpServerInfoMcpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
    inline HttpRouteMcpServerInfo& setMcpRouteConfig(Models::HttpRouteMcpServerInfoMcpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline string mcpServerConfig() const { DARABONBA_PTR_GET_DEFAULT(mcpServerConfig_, "") };
    inline HttpRouteMcpServerInfo& setMcpServerConfig(string mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };


  protected:
    std::shared_ptr<string> createFromType_ = nullptr;
    std::shared_ptr<string> importInstanceId_ = nullptr;
    std::shared_ptr<string> importMcpServerId_ = nullptr;
    std::shared_ptr<string> importNamespace_ = nullptr;
    std::shared_ptr<Models::HttpRouteMcpServerInfoMcpRouteConfig> mcpRouteConfig_ = nullptr;
    std::shared_ptr<string> mcpServerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
