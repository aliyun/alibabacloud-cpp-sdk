// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateMcpServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(McpServer, mcpServer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMcpServerResponseBody() = default ;
    CreateMcpServerResponseBody(const CreateMcpServerResponseBody &) = default ;
    CreateMcpServerResponseBody(CreateMcpServerResponseBody &&) = default ;
    CreateMcpServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerResponseBody() = default ;
    CreateMcpServerResponseBody& operator=(const CreateMcpServerResponseBody &) = default ;
    CreateMcpServerResponseBody& operator=(CreateMcpServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class McpServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const McpServer& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, McpServer& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->name_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline McpServer& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline McpServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The time when the MCP Server was created.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // The name of the MCP Server.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->mcpServer_ == nullptr
        && this->requestId_ == nullptr; };
    // mcpServer Field Functions 
    bool hasMcpServer() const { return this->mcpServer_ != nullptr;};
    void deleteMcpServer() { this->mcpServer_ = nullptr;};
    inline const CreateMcpServerResponseBody::McpServer & getMcpServer() const { DARABONBA_PTR_GET_CONST(mcpServer_, CreateMcpServerResponseBody::McpServer) };
    inline CreateMcpServerResponseBody::McpServer getMcpServer() { DARABONBA_PTR_GET(mcpServer_, CreateMcpServerResponseBody::McpServer) };
    inline CreateMcpServerResponseBody& setMcpServer(const CreateMcpServerResponseBody::McpServer & mcpServer) { DARABONBA_PTR_SET_VALUE(mcpServer_, mcpServer) };
    inline CreateMcpServerResponseBody& setMcpServer(CreateMcpServerResponseBody::McpServer && mcpServer) { DARABONBA_PTR_SET_RVALUE(mcpServer_, mcpServer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcpServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The created MCP Server.
    shared_ptr<CreateMcpServerResponseBody::McpServer> mcpServer_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
