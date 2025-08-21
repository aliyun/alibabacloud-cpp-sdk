// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTAICINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTAICINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RebootAICInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootAICInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
    };
    friend void from_json(const Darabonba::Json& j, RebootAICInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
    };
    RebootAICInstanceShrinkRequest() = default ;
    RebootAICInstanceShrinkRequest(const RebootAICInstanceShrinkRequest &) = default ;
    RebootAICInstanceShrinkRequest(RebootAICInstanceShrinkRequest &&) = default ;
    RebootAICInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootAICInstanceShrinkRequest() = default ;
    RebootAICInstanceShrinkRequest& operator=(const RebootAICInstanceShrinkRequest &) = default ;
    RebootAICInstanceShrinkRequest& operator=(RebootAICInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceIdsShrink_ != nullptr && this->serverId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RebootAICInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RebootAICInstanceShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RebootAICInstanceShrinkRequest& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


  protected:
    // The ID of the AIC instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of the AIC instance groups.
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> serverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
