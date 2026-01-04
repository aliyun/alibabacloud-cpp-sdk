// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTAICINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTAICINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RebootAICInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootAICInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootAICInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    RebootAICInstanceRequest() = default ;
    RebootAICInstanceRequest(const RebootAICInstanceRequest &) = default ;
    RebootAICInstanceRequest(RebootAICInstanceRequest &&) = default ;
    RebootAICInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootAICInstanceRequest() = default ;
    RebootAICInstanceRequest& operator=(const RebootAICInstanceRequest &) = default ;
    RebootAICInstanceRequest& operator=(RebootAICInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceIds_ == nullptr && this->serverId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RebootAICInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RebootAICInstanceRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RebootAICInstanceRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RebootAICInstanceRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    // The ID of the AIC instance.
    shared_ptr<string> instanceId_ {};
    // The IDs of the AIC instance groups.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the server.
    shared_ptr<string> serverId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
