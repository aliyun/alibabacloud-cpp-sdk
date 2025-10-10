// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveServersFromServerGroupRequestServers.hpp>
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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->serverGroupId_ != nullptr && this->servers_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RemoveServersFromServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RemoveServersFromServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline RemoveServersFromServerGroupRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<RemoveServersFromServerGroupRequestServers> & servers() const { DARABONBA_PTR_GET_CONST(servers_, vector<RemoveServersFromServerGroupRequestServers>) };
    inline vector<RemoveServersFromServerGroupRequestServers> servers() { DARABONBA_PTR_GET(servers_, vector<RemoveServersFromServerGroupRequestServers>) };
    inline RemoveServersFromServerGroupRequest& setServers(const vector<RemoveServersFromServerGroupRequestServers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline RemoveServersFromServerGroupRequest& setServers(vector<RemoveServersFromServerGroupRequestServers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The server group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The backend servers to be removed. You can specify up to 200 backend servers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<RemoveServersFromServerGroupRequestServers>> servers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
