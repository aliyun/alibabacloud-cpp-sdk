// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_ADDBACKENDSERVERSRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddBackendServersResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AddBackendServersResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, AddBackendServersResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    AddBackendServersResponseBodyBackendServers() = default ;
    AddBackendServersResponseBodyBackendServers(const AddBackendServersResponseBodyBackendServers &) = default ;
    AddBackendServersResponseBodyBackendServers(AddBackendServersResponseBodyBackendServers &&) = default ;
    AddBackendServersResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBackendServersResponseBodyBackendServers() = default ;
    AddBackendServersResponseBodyBackendServers& operator=(const AddBackendServersResponseBodyBackendServers &) = default ;
    AddBackendServersResponseBodyBackendServers& operator=(AddBackendServersResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendServer_ != nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::AddBackendServersResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::AddBackendServersResponseBodyBackendServersBackendServer>) };
    inline vector<Models::AddBackendServersResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::AddBackendServersResponseBodyBackendServersBackendServer>) };
    inline AddBackendServersResponseBodyBackendServers& setBackendServer(const vector<Models::AddBackendServersResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline AddBackendServersResponseBodyBackendServers& setBackendServer(vector<Models::AddBackendServersResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::AddBackendServersResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
