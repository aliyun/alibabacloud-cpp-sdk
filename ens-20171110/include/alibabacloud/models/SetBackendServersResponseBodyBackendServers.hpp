// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_SETBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetBackendServersResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SetBackendServersResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, SetBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    SetBackendServersResponseBodyBackendServers() = default ;
    SetBackendServersResponseBodyBackendServers(const SetBackendServersResponseBodyBackendServers &) = default ;
    SetBackendServersResponseBodyBackendServers(SetBackendServersResponseBodyBackendServers &&) = default ;
    SetBackendServersResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetBackendServersResponseBodyBackendServers() = default ;
    SetBackendServersResponseBodyBackendServers& operator=(const SetBackendServersResponseBodyBackendServers &) = default ;
    SetBackendServersResponseBodyBackendServers& operator=(SetBackendServersResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServer_ == nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::SetBackendServersResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::SetBackendServersResponseBodyBackendServersBackendServer>) };
    inline vector<Models::SetBackendServersResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::SetBackendServersResponseBodyBackendServersBackendServer>) };
    inline SetBackendServersResponseBodyBackendServers& setBackendServer(const vector<Models::SetBackendServersResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline SetBackendServersResponseBodyBackendServers& setBackendServer(vector<Models::SetBackendServersResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::SetBackendServersResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
