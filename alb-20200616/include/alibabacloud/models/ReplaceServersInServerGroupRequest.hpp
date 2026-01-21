// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUEST_HPP_
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
  class ReplaceServersInServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceServersInServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddedServers, addedServers_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RemovedServers, removedServers_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceServersInServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedServers, addedServers_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RemovedServers, removedServers_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    ReplaceServersInServerGroupRequest() = default ;
    ReplaceServersInServerGroupRequest(const ReplaceServersInServerGroupRequest &) = default ;
    ReplaceServersInServerGroupRequest(ReplaceServersInServerGroupRequest &&) = default ;
    ReplaceServersInServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceServersInServerGroupRequest() = default ;
    ReplaceServersInServerGroupRequest& operator=(const ReplaceServersInServerGroupRequest &) = default ;
    ReplaceServersInServerGroupRequest& operator=(ReplaceServersInServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemovedServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemovedServers& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      };
      friend void from_json(const Darabonba::Json& j, RemovedServers& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      };
      RemovedServers() = default ;
      RemovedServers(const RemovedServers &) = default ;
      RemovedServers(RemovedServers &&) = default ;
      RemovedServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemovedServers() = default ;
      RemovedServers& operator=(const RemovedServers &) = default ;
      RemovedServers& operator=(RemovedServers &&) = default ;
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
      inline RemovedServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline RemovedServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // serverIp Field Functions 
      bool hasServerIp() const { return this->serverIp_ != nullptr;};
      void deleteServerIp() { this->serverIp_ = nullptr;};
      inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
      inline RemovedServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline RemovedServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    protected:
      // The port that is used by the backend server. Valid values: **1** to **65535**. You can specify at most 200 servers in each call.
      shared_ptr<int32_t> port_ {};
      // The ID of the backend server. You can specify at most 200 servers in each call.
      // 
      // *   If the server group is of the **Instance** type, set ServerId to the ID of a resource of the **Ecs**, **Eni**, or **Eci** type.
      // *   If the server group is of the **Ip** type, set ServerId to IP addresses.
      // 
      // >  You cannot perform this operation on a server group of the Function Compute type. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the type of server groups.
      // 
      // This parameter is required.
      shared_ptr<string> serverId_ {};
      // The IP address of the ENI in exclusive mode.
      shared_ptr<string> serverIp_ {};
      // The type of backend server. You can specify at most 200 servers in each call. Valid values:
      // 
      // *   **Ecs**: ECS instance
      // *   **Eni**: ENI
      // *   **Eci**: elastic container instance
      shared_ptr<string> serverType_ {};
    };

    class AddedServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddedServers& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, AddedServers& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      AddedServers() = default ;
      AddedServers(const AddedServers &) = default ;
      AddedServers(AddedServers &&) = default ;
      AddedServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddedServers() = default ;
      AddedServers& operator=(const AddedServers &) = default ;
      AddedServers& operator=(AddedServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->serverType_ == nullptr && this->weight_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AddedServers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AddedServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline AddedServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // serverIp Field Functions 
      bool hasServerIp() const { return this->serverIp_ != nullptr;};
      void deleteServerIp() { this->serverIp_ = nullptr;};
      inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
      inline AddedServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


      // serverType Field Functions 
      bool hasServerType() const { return this->serverType_ != nullptr;};
      void deleteServerType() { this->serverType_ = nullptr;};
      inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
      inline AddedServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline AddedServers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> serverId_ {};
      shared_ptr<string> serverIp_ {};
      shared_ptr<string> serverType_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->addedServers_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->removedServers_ == nullptr && this->serverGroupId_ == nullptr; };
    // addedServers Field Functions 
    bool hasAddedServers() const { return this->addedServers_ != nullptr;};
    void deleteAddedServers() { this->addedServers_ = nullptr;};
    inline const vector<ReplaceServersInServerGroupRequest::AddedServers> & getAddedServers() const { DARABONBA_PTR_GET_CONST(addedServers_, vector<ReplaceServersInServerGroupRequest::AddedServers>) };
    inline vector<ReplaceServersInServerGroupRequest::AddedServers> getAddedServers() { DARABONBA_PTR_GET(addedServers_, vector<ReplaceServersInServerGroupRequest::AddedServers>) };
    inline ReplaceServersInServerGroupRequest& setAddedServers(const vector<ReplaceServersInServerGroupRequest::AddedServers> & addedServers) { DARABONBA_PTR_SET_VALUE(addedServers_, addedServers) };
    inline ReplaceServersInServerGroupRequest& setAddedServers(vector<ReplaceServersInServerGroupRequest::AddedServers> && addedServers) { DARABONBA_PTR_SET_RVALUE(addedServers_, addedServers) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceServersInServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ReplaceServersInServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // removedServers Field Functions 
    bool hasRemovedServers() const { return this->removedServers_ != nullptr;};
    void deleteRemovedServers() { this->removedServers_ = nullptr;};
    inline const vector<ReplaceServersInServerGroupRequest::RemovedServers> & getRemovedServers() const { DARABONBA_PTR_GET_CONST(removedServers_, vector<ReplaceServersInServerGroupRequest::RemovedServers>) };
    inline vector<ReplaceServersInServerGroupRequest::RemovedServers> getRemovedServers() { DARABONBA_PTR_GET(removedServers_, vector<ReplaceServersInServerGroupRequest::RemovedServers>) };
    inline ReplaceServersInServerGroupRequest& setRemovedServers(const vector<ReplaceServersInServerGroupRequest::RemovedServers> & removedServers) { DARABONBA_PTR_SET_VALUE(removedServers_, removedServers) };
    inline ReplaceServersInServerGroupRequest& setRemovedServers(vector<ReplaceServersInServerGroupRequest::RemovedServers> && removedServers) { DARABONBA_PTR_SET_RVALUE(removedServers_, removedServers) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ReplaceServersInServerGroupRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ReplaceServersInServerGroupRequest::AddedServers>> addedServers_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx` HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The backend servers that you want to remove.
    // 
    // This parameter is required.
    shared_ptr<vector<ReplaceServersInServerGroupRequest::RemovedServers>> removedServers_ {};
    // The ID of the server group.
    // 
    // > You cannot perform this operation on a server group of the Function type.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
