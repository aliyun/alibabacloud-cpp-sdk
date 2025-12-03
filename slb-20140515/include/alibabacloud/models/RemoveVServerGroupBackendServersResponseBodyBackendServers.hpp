// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class RemoveVServerGroupBackendServersResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVServerGroupBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVServerGroupBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    RemoveVServerGroupBackendServersResponseBodyBackendServers() = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServers(const RemoveVServerGroupBackendServersResponseBodyBackendServers &) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServers(RemoveVServerGroupBackendServersResponseBodyBackendServers &&) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVServerGroupBackendServersResponseBodyBackendServers() = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServers& operator=(const RemoveVServerGroupBackendServersResponseBodyBackendServers &) = default ;
    RemoveVServerGroupBackendServersResponseBodyBackendServers& operator=(RemoveVServerGroupBackendServersResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServer_ == nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer>) };
    inline vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer>) };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServers& setBackendServer(const vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline RemoveVServerGroupBackendServersResponseBodyBackendServers& setBackendServer(vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::RemoveVServerGroupBackendServersResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
