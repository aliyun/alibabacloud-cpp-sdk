// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMcpServerResponseBody() = default ;
    GetMcpServerResponseBody(const GetMcpServerResponseBody &) = default ;
    GetMcpServerResponseBody(GetMcpServerResponseBody &&) = default ;
    GetMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcpServerResponseBody() = default ;
    GetMcpServerResponseBody& operator=(const GetMcpServerResponseBody &) = default ;
    GetMcpServerResponseBody& operator=(GetMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServer& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      };
      friend void from_json(const Darabonba::Json& j, McpServer& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      };
      McpServer() = default ;
      McpServer(const McpServer &) = default ;
      McpServer(McpServer &&) = default ;
      McpServer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~McpServer() = default ;
      McpServer& operator=(const McpServer &) = default ;
      McpServer& operator=(McpServer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_ANY_TO_JSON(CustomHeaders, customHeaders_);
          DARABONBA_PTR_TO_JSON(Transport, transport_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_ANY_FROM_JSON(CustomHeaders, customHeaders_);
          DARABONBA_PTR_FROM_JSON(Transport, transport_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customHeaders_ == nullptr
        && this->transport_ == nullptr && this->url_ == nullptr; };
        // customHeaders Field Functions 
        bool hasCustomHeaders() const { return this->customHeaders_ != nullptr;};
        void deleteCustomHeaders() { this->customHeaders_ = nullptr;};
        inline         const Darabonba::Json & getCustomHeaders() const { DARABONBA_GET(customHeaders_) };
        Darabonba::Json & getCustomHeaders() { DARABONBA_GET(customHeaders_) };
        inline Config& setCustomHeaders(const Darabonba::Json & customHeaders) { DARABONBA_SET_VALUE(customHeaders_, customHeaders) };
        inline Config& setCustomHeaders(Darabonba::Json && customHeaders) { DARABONBA_SET_RVALUE(customHeaders_, customHeaders) };


        // transport Field Functions 
        bool hasTransport() const { return this->transport_ != nullptr;};
        void deleteTransport() { this->transport_ = nullptr;};
        inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
        inline Config& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Config& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The custom headers.
        Darabonba::Json customHeaders_ {};
        // The transport protocol.
        shared_ptr<string> transport_ {};
        // The service address of the MCP Server.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->creatorId_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->modifierId_ == nullptr && this->name_ == nullptr
        && this->visibility_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const McpServer::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, McpServer::Config) };
      inline McpServer::Config getConfig() { DARABONBA_PTR_GET(config_, McpServer::Config) };
      inline McpServer& setConfig(const McpServer::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline McpServer& setConfig(McpServer::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline McpServer& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline McpServer& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline McpServer& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline McpServer& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline McpServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // visibility Field Functions 
      bool hasVisibility() const { return this->visibility_ != nullptr;};
      void deleteVisibility() { this->visibility_ = nullptr;};
      inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
      inline McpServer& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    protected:
      // The connection configuration for the MCP Server.
      shared_ptr<McpServer::Config> config_ {};
      // The creator ID.
      shared_ptr<string> creatorId_ {};
      // The creation time, provided as a timestamp in milliseconds.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // The modification time, provided as a timestamp in milliseconds.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifiedTime_ {};
      // The modifier ID.
      shared_ptr<string> modifierId_ {};
      // The MCP Server name.
      shared_ptr<string> name_ {};
      // The visibility level. Valid values: TENANT (visible within the account), PROJECT (visible to specified projects), and USER (visible to specified users).
      shared_ptr<string> visibility_ {};
    };

    virtual bool empty() const override { return this->mcpServer_ == nullptr
        && this->requestId_ == nullptr; };
    // mcpServer Field Functions 
    bool hasMcpServer() const { return this->mcpServer_ != nullptr;};
    void deleteMcpServer() { this->mcpServer_ = nullptr;};
    inline const GetMcpServerResponseBody::McpServer & getMcpServer() const { DARABONBA_PTR_GET_CONST(mcpServer_, GetMcpServerResponseBody::McpServer) };
    inline GetMcpServerResponseBody::McpServer getMcpServer() { DARABONBA_PTR_GET(mcpServer_, GetMcpServerResponseBody::McpServer) };
    inline GetMcpServerResponseBody& setMcpServer(const GetMcpServerResponseBody::McpServer & mcpServer) { DARABONBA_PTR_SET_VALUE(mcpServer_, mcpServer) };
    inline GetMcpServerResponseBody& setMcpServer(GetMcpServerResponseBody::McpServer && mcpServer) { DARABONBA_PTR_SET_RVALUE(mcpServer_, mcpServer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The MCP Server configuration.
    shared_ptr<GetMcpServerResponseBody::McpServer> mcpServer_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
