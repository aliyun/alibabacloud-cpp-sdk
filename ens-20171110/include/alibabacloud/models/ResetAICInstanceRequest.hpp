// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAICINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETAICINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ResetAICInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAICInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAICInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    ResetAICInstanceRequest() = default ;
    ResetAICInstanceRequest(const ResetAICInstanceRequest &) = default ;
    ResetAICInstanceRequest(ResetAICInstanceRequest &&) = default ;
    ResetAICInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAICInstanceRequest() = default ;
    ResetAICInstanceRequest& operator=(const ResetAICInstanceRequest &) = default ;
    ResetAICInstanceRequest& operator=(ResetAICInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->serverId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResetAICInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline ResetAICInstanceRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    // The ID of the AIC instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the server.
    shared_ptr<string> serverId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
