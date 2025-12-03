// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHSTATUSRESPONSEBODYBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthStatusResponseBodyBackendServersBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeHealthStatusResponseBodyBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthStatusResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthStatusResponseBodyBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
    };
    DescribeHealthStatusResponseBodyBackendServers() = default ;
    DescribeHealthStatusResponseBodyBackendServers(const DescribeHealthStatusResponseBodyBackendServers &) = default ;
    DescribeHealthStatusResponseBodyBackendServers(DescribeHealthStatusResponseBodyBackendServers &&) = default ;
    DescribeHealthStatusResponseBodyBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthStatusResponseBodyBackendServers() = default ;
    DescribeHealthStatusResponseBodyBackendServers& operator=(const DescribeHealthStatusResponseBodyBackendServers &) = default ;
    DescribeHealthStatusResponseBodyBackendServers& operator=(DescribeHealthStatusResponseBodyBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServer_ == nullptr; };
    // backendServer Field Functions 
    bool hasBackendServer() const { return this->backendServer_ != nullptr;};
    void deleteBackendServer() { this->backendServer_ = nullptr;};
    inline const vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer> & backendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer>) };
    inline vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer> backendServer() { DARABONBA_PTR_GET(backendServer_, vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer>) };
    inline DescribeHealthStatusResponseBodyBackendServers& setBackendServer(const vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
    inline DescribeHealthStatusResponseBodyBackendServers& setBackendServer(vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


  protected:
    std::shared_ptr<vector<Models::DescribeHealthStatusResponseBodyBackendServersBackendServer>> backendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
