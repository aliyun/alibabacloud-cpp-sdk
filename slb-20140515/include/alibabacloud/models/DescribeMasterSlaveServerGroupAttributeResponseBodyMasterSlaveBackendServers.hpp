// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODYMASTERSLAVEBACKENDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTERESPONSEBODYMASTERSLAVEBACKENDSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServer, masterSlaveBackendServer_);
    };
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers(const DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers(DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers &&) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers() = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& operator=(const DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers &) = default ;
    DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& operator=(DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveBackendServer_ == nullptr; };
    // masterSlaveBackendServer Field Functions 
    bool hasMasterSlaveBackendServer() const { return this->masterSlaveBackendServer_ != nullptr;};
    void deleteMasterSlaveBackendServer() { this->masterSlaveBackendServer_ = nullptr;};
    inline const vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> & masterSlaveBackendServer() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServer_, vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>) };
    inline vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> masterSlaveBackendServer() { DARABONBA_PTR_GET(masterSlaveBackendServer_, vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& setMasterSlaveBackendServer(const vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> & masterSlaveBackendServer) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };
    inline DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServers& setMasterSlaveBackendServer(vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer> && masterSlaveBackendServer) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServer_, masterSlaveBackendServer) };


  protected:
    std::shared_ptr<vector<Models::DescribeMasterSlaveServerGroupAttributeResponseBodyMasterSlaveBackendServersMasterSlaveBackendServer>> masterSlaveBackendServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
