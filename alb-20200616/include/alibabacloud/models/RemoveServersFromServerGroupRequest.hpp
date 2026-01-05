// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class RemoveServersFromServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveServersFromServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveServersFromServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
    };
    RemoveServersFromServerGroupRequest() = default ;
    RemoveServersFromServerGroupRequest(const RemoveServersFromServerGroupRequest &) = default ;
    RemoveServersFromServerGroupRequest(RemoveServersFromServerGroupRequest &&) = default ;
    RemoveServersFromServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveServersFromServerGroupRequest() = default ;
    RemoveServersFromServerGroupRequest& operator=(const RemoveServersFromServerGroupRequest &) = default ;
    RemoveServersFromServerGroupRequest& operator=(RemoveServersFromServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Servers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Servers& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      };
      friend void from_json(const Darabonba::Json& j, Servers& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      };
      Servers() = default ;
      Servers(const Servers &) = default ;
      Servers(Servers &&) = default ;
      Servers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Servers() = default ;
      Servers& operator=(const Servers &) = default ;
      Servers& operator=(Servers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->serverType_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Servers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline Servers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // serverIp Field Functions 
      bool hasServerIp() const { return this->serverIp_ != nullptr;};
      void deleteServerIp() { this->serverIp_ = nullptr;};
      inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
      inline Servers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline Servers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    protected:
      // The port that is used by the backend server. Valid values: **1** to **65535**.
      // 
      // >  This parameter is required when you set **ServerType** to **Ecs**, **Eni**, **Eci**, or **Ip**.
      shared_ptr<int32_t> port_ {};
      // The backend server ID.
      // 
      // *   If the server group is of the **Instance** type, set ServerId to the ID of a resource of the **Ecs**, **Eni**, or **Eci** type.
      // *   If the server group is of the **Ip** type, set this parameter to IP addresses.
      // *   If the server group is of the **Fc** type, set ServerId to the Alibaba Cloud Resource Name (ARN) of a function.
      // 
      // >  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/2254862.html) operation to query information about the server group type so that you can set ServerId to a proper value.
      // 
      // This parameter is required.
      shared_ptr<string> serverId_ {};
      // The IP address of the elastic network interface (ENI) in inclusive mode.
      shared_ptr<string> serverIp_ {};
      // The type of the backend server. Valid values:
      // 
      // *   **Ecs**: Elastic Compute Service (ECS) instance
      // *   **Eni**: ENI
      // *   **Eci**: elastic container instance
      // *   **Ip**: IP address
      // *   **Fc**: Function Compute instance
      // 
      // This parameter is required.
      shared_ptr<string> serverType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->serverGroupId_ == nullptr && this->servers_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveServersFromServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveServersFromServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline RemoveServersFromServerGroupRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<RemoveServersFromServerGroupRequest::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<RemoveServersFromServerGroupRequest::Servers>) };
    inline vector<RemoveServersFromServerGroupRequest::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<RemoveServersFromServerGroupRequest::Servers>) };
    inline RemoveServersFromServerGroupRequest& setServers(const vector<RemoveServersFromServerGroupRequest::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline RemoveServersFromServerGroupRequest& setServers(vector<RemoveServersFromServerGroupRequest::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The server group ID.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
    // The backend servers to be removed. You can specify up to 200 backend servers.
    // 
    // This parameter is required.
    shared_ptr<vector<RemoveServersFromServerGroupRequest::Servers>> servers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
