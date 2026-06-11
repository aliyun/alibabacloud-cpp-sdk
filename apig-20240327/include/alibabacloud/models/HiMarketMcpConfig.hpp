// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETMCPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETMCPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketMcpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketMcpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_TO_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketMcpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(mcpServerConfig, mcpServerConfig_);
      DARABONBA_PTR_FROM_JSON(mcpServerName, mcpServerName_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    HiMarketMcpConfig() = default ;
    HiMarketMcpConfig(const HiMarketMcpConfig &) = default ;
    HiMarketMcpConfig(HiMarketMcpConfig &&) = default ;
    HiMarketMcpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketMcpConfig() = default ;
    HiMarketMcpConfig& operator=(const HiMarketMcpConfig &) = default ;
    HiMarketMcpConfig& operator=(HiMarketMcpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      };
      Meta() = default ;
      Meta(const Meta &) = default ;
      Meta(Meta &&) = default ;
      Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Meta() = default ;
      Meta& operator=(const Meta &) = default ;
      Meta& operator=(Meta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->protocol_ == nullptr; };
      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Meta& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The communication protocol. Can be `http` or `https`.
      shared_ptr<string> protocol_ {};
    };

    class McpServerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(domains, domains_);
        DARABONBA_PTR_TO_JSON(path, path_);
      };
      friend void from_json(const Darabonba::Json& j, McpServerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(domains, domains_);
        DARABONBA_PTR_FROM_JSON(path, path_);
      };
      McpServerConfig() = default ;
      McpServerConfig(const McpServerConfig &) = default ;
      McpServerConfig(McpServerConfig &&) = default ;
      McpServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServerConfig() = default ;
      McpServerConfig& operator=(const McpServerConfig &) = default ;
      McpServerConfig& operator=(McpServerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domains_ == nullptr
        && this->path_ == nullptr; };
      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<HiMarketDomain> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<HiMarketDomain>) };
      inline vector<HiMarketDomain> getDomains() { DARABONBA_PTR_GET(domains_, vector<HiMarketDomain>) };
      inline McpServerConfig& setDomains(const vector<HiMarketDomain> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline McpServerConfig& setDomains(vector<HiMarketDomain> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline McpServerConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The domains managed by the server.
      shared_ptr<vector<HiMarketDomain>> domains_ {};
      // The base path for the service endpoint.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->mcpServerConfig_ == nullptr
        && this->mcpServerName_ == nullptr && this->meta_ == nullptr && this->tools_ == nullptr; };
    // mcpServerConfig Field Functions 
    bool hasMcpServerConfig() const { return this->mcpServerConfig_ != nullptr;};
    void deleteMcpServerConfig() { this->mcpServerConfig_ = nullptr;};
    inline const HiMarketMcpConfig::McpServerConfig & getMcpServerConfig() const { DARABONBA_PTR_GET_CONST(mcpServerConfig_, HiMarketMcpConfig::McpServerConfig) };
    inline HiMarketMcpConfig::McpServerConfig getMcpServerConfig() { DARABONBA_PTR_GET(mcpServerConfig_, HiMarketMcpConfig::McpServerConfig) };
    inline HiMarketMcpConfig& setMcpServerConfig(const HiMarketMcpConfig::McpServerConfig & mcpServerConfig) { DARABONBA_PTR_SET_VALUE(mcpServerConfig_, mcpServerConfig) };
    inline HiMarketMcpConfig& setMcpServerConfig(HiMarketMcpConfig::McpServerConfig && mcpServerConfig) { DARABONBA_PTR_SET_RVALUE(mcpServerConfig_, mcpServerConfig) };


    // mcpServerName Field Functions 
    bool hasMcpServerName() const { return this->mcpServerName_ != nullptr;};
    void deleteMcpServerName() { this->mcpServerName_ = nullptr;};
    inline string getMcpServerName() const { DARABONBA_PTR_GET_DEFAULT(mcpServerName_, "") };
    inline HiMarketMcpConfig& setMcpServerName(string mcpServerName) { DARABONBA_PTR_SET_VALUE(mcpServerName_, mcpServerName) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const HiMarketMcpConfig::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, HiMarketMcpConfig::Meta) };
    inline HiMarketMcpConfig::Meta getMeta() { DARABONBA_PTR_GET(meta_, HiMarketMcpConfig::Meta) };
    inline HiMarketMcpConfig& setMeta(const HiMarketMcpConfig::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline HiMarketMcpConfig& setMeta(HiMarketMcpConfig::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline string getTools() const { DARABONBA_PTR_GET_DEFAULT(tools_, "") };
    inline HiMarketMcpConfig& setTools(string tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };


  protected:
    // Configuration for the MCP server.
    shared_ptr<HiMarketMcpConfig::McpServerConfig> mcpServerConfig_ {};
    // A unique name for the MCP server.
    shared_ptr<string> mcpServerName_ {};
    // Metadata for the configuration.
    shared_ptr<HiMarketMcpConfig::Meta> meta_ {};
    // The tools associated with this configuration, typically provided as a JSON-formatted string.
    shared_ptr<string> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
