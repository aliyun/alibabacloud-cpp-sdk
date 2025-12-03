// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateMasterSlaveServerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMasterSlaveServerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMasterSlaveServerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMasterSlaveServerGroupResponseBody() = default ;
    CreateMasterSlaveServerGroupResponseBody(const CreateMasterSlaveServerGroupResponseBody &) = default ;
    CreateMasterSlaveServerGroupResponseBody(CreateMasterSlaveServerGroupResponseBody &&) = default ;
    CreateMasterSlaveServerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMasterSlaveServerGroupResponseBody() = default ;
    CreateMasterSlaveServerGroupResponseBody& operator=(const CreateMasterSlaveServerGroupResponseBody &) = default ;
    CreateMasterSlaveServerGroupResponseBody& operator=(CreateMasterSlaveServerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveBackendServers_ == nullptr
        && return this->masterSlaveServerGroupId_ == nullptr && return this->requestId_ == nullptr; };
    // masterSlaveBackendServers Field Functions 
    bool hasMasterSlaveBackendServers() const { return this->masterSlaveBackendServers_ != nullptr;};
    void deleteMasterSlaveBackendServers() { this->masterSlaveBackendServers_ = nullptr;};
    inline const CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers & masterSlaveBackendServers() const { DARABONBA_PTR_GET_CONST(masterSlaveBackendServers_, CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers masterSlaveBackendServers() { DARABONBA_PTR_GET(masterSlaveBackendServers_, CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveBackendServers(const CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers & masterSlaveBackendServers) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveBackendServers(CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers && masterSlaveBackendServers) { DARABONBA_PTR_SET_RVALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline CreateMasterSlaveServerGroupResponseBody& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMasterSlaveServerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backend servers in the primary/secondary server group.
    std::shared_ptr<CreateMasterSlaveServerGroupResponseBodyMasterSlaveBackendServers> masterSlaveBackendServers_ = nullptr;
    // The ID of the active/standby server group.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
