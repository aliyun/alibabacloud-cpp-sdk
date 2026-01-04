// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPSERVERSATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPSERVERSATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateServerGroupServersAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupServersAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupServersAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
    };
    UpdateServerGroupServersAttributeRequest() = default ;
    UpdateServerGroupServersAttributeRequest(const UpdateServerGroupServersAttributeRequest &) = default ;
    UpdateServerGroupServersAttributeRequest(UpdateServerGroupServersAttributeRequest &&) = default ;
    UpdateServerGroupServersAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupServersAttributeRequest() = default ;
    UpdateServerGroupServersAttributeRequest& operator=(const UpdateServerGroupServersAttributeRequest &) = default ;
    UpdateServerGroupServersAttributeRequest& operator=(UpdateServerGroupServersAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Servers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Servers& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_TO_JSON(ServerType, serverType_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Servers& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
        DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->port_ == nullptr && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->serverType_ == nullptr && this->weight_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Servers& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Servers& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The description of the backend server.
      // 
      // The description must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at sings (@), underscores (_), and hyphens (-).
      shared_ptr<string> description_ {};
      // The port used by the backend server. Valid values: **1** to **65535**.
      // 
      // >  This parameter cannot be modified.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // The backend server ID.
      // 
      // *   If the server group is of the **Instance** type, set this parameter to the IDs of servers of the **Ecs**, **Eni**, or **Eci** type.
      // *   If the server group is of the **Ip** type, set this parameter to IP addresses.
      // 
      // This parameter is required.
      shared_ptr<string> serverId_ {};
      // The IP addresses of servers. If the server group type is **Ip**, set the ServerId parameter to IP addresses.
      shared_ptr<string> serverIp_ {};
      // The type of the backend server. Valid values:
      // 
      // *   **Ecs**: Elastic Compute Service (ECS) instance
      // *   **Eni**: elastic network interface (ENI)
      // *   **Eci**: elastic container instance
      // *   **Ip**: IP address
      // 
      // This parameter is required.
      shared_ptr<string> serverType_ {};
      // The weight of the backend server. Valid values: **0** to **100**. Default value: **100**. If the value is set to **0**, no requests are forwarded to the server.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->serverGroupId_ == nullptr && this->servers_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServerGroupServersAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServerGroupServersAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServerGroupServersAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateServerGroupServersAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<UpdateServerGroupServersAttributeRequest::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<UpdateServerGroupServersAttributeRequest::Servers>) };
    inline vector<UpdateServerGroupServersAttributeRequest::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<UpdateServerGroupServersAttributeRequest::Servers>) };
    inline UpdateServerGroupServersAttributeRequest& setServers(const vector<UpdateServerGroupServersAttributeRequest::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline UpdateServerGroupServersAttributeRequest& setServers(vector<UpdateServerGroupServersAttributeRequest::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


  protected:
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate this value. Ensure that the value is unique among all requests. Only ASCII characters are allowed.
    // 
    // >  If you do not specify this parameter, the value of **RequestId** is used.**** **RequestId** of each request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The server group ID.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
    // The backend servers. You can specify at most 200 backend servers in each call.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateServerGroupServersAttributeRequest::Servers>> servers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
