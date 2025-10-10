// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReplaceServersInServerGroupRequestAddedServers.hpp>
#include <alibabacloud/models/ReplaceServersInServerGroupRequestRemovedServers.hpp>
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
    virtual bool empty() const override { this->addedServers_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->removedServers_ != nullptr && this->serverGroupId_ != nullptr; };
    // addedServers Field Functions 
    bool hasAddedServers() const { return this->addedServers_ != nullptr;};
    void deleteAddedServers() { this->addedServers_ = nullptr;};
    inline const vector<ReplaceServersInServerGroupRequestAddedServers> & addedServers() const { DARABONBA_PTR_GET_CONST(addedServers_, vector<ReplaceServersInServerGroupRequestAddedServers>) };
    inline vector<ReplaceServersInServerGroupRequestAddedServers> addedServers() { DARABONBA_PTR_GET(addedServers_, vector<ReplaceServersInServerGroupRequestAddedServers>) };
    inline ReplaceServersInServerGroupRequest& setAddedServers(const vector<ReplaceServersInServerGroupRequestAddedServers> & addedServers) { DARABONBA_PTR_SET_VALUE(addedServers_, addedServers) };
    inline ReplaceServersInServerGroupRequest& setAddedServers(vector<ReplaceServersInServerGroupRequestAddedServers> && addedServers) { DARABONBA_PTR_SET_RVALUE(addedServers_, addedServers) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReplaceServersInServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ReplaceServersInServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // removedServers Field Functions 
    bool hasRemovedServers() const { return this->removedServers_ != nullptr;};
    void deleteRemovedServers() { this->removedServers_ = nullptr;};
    inline const vector<ReplaceServersInServerGroupRequestRemovedServers> & removedServers() const { DARABONBA_PTR_GET_CONST(removedServers_, vector<ReplaceServersInServerGroupRequestRemovedServers>) };
    inline vector<ReplaceServersInServerGroupRequestRemovedServers> removedServers() { DARABONBA_PTR_GET(removedServers_, vector<ReplaceServersInServerGroupRequestRemovedServers>) };
    inline ReplaceServersInServerGroupRequest& setRemovedServers(const vector<ReplaceServersInServerGroupRequestRemovedServers> & removedServers) { DARABONBA_PTR_SET_VALUE(removedServers_, removedServers) };
    inline ReplaceServersInServerGroupRequest& setRemovedServers(vector<ReplaceServersInServerGroupRequestRemovedServers> && removedServers) { DARABONBA_PTR_SET_RVALUE(removedServers_, removedServers) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ReplaceServersInServerGroupRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // The backend servers. You can specify at most 200 servers in each call.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ReplaceServersInServerGroupRequestAddedServers>> addedServers_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx` HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The backend servers that you want to remove.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ReplaceServersInServerGroupRequestRemovedServers>> removedServers_ = nullptr;
    // The ID of the server group.
    // 
    // > You cannot perform this operation on a server group of the Function type.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
