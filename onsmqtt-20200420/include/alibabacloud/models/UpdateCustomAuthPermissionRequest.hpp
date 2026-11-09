// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMAUTHPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMAUTHPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class UpdateCustomAuthPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PermitAction, permitAction_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PermitAction, permitAction_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateCustomAuthPermissionRequest() = default ;
    UpdateCustomAuthPermissionRequest(const UpdateCustomAuthPermissionRequest &) = default ;
    UpdateCustomAuthPermissionRequest(UpdateCustomAuthPermissionRequest &&) = default ;
    UpdateCustomAuthPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomAuthPermissionRequest() = default ;
    UpdateCustomAuthPermissionRequest& operator=(const UpdateCustomAuthPermissionRequest &) = default ;
    UpdateCustomAuthPermissionRequest& operator=(UpdateCustomAuthPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effect_ == nullptr
        && this->identity_ == nullptr && this->identityType_ == nullptr && this->instanceId_ == nullptr && this->permitAction_ == nullptr && this->topic_ == nullptr; };
    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline UpdateCustomAuthPermissionRequest& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline UpdateCustomAuthPermissionRequest& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline UpdateCustomAuthPermissionRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCustomAuthPermissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // permitAction Field Functions 
    bool hasPermitAction() const { return this->permitAction_ != nullptr;};
    void deletePermitAction() { this->permitAction_ = nullptr;};
    inline string getPermitAction() const { DARABONBA_PTR_GET_DEFAULT(permitAction_, "") };
    inline UpdateCustomAuthPermissionRequest& setPermitAction(string permitAction) { DARABONBA_PTR_SET_VALUE(permitAction_, permitAction) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateCustomAuthPermissionRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // Specifies whether to allow or deny access.
    // 
    // This parameter is required.
    shared_ptr<string> effect_ {};
    // Username or Client ID.
    // 
    // This parameter is required.
    shared_ptr<string> identity_ {};
    // The identity type. Valid values:
    // 
    // *   USER
    // *   CLIENT
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // ID of the Cloud Message Queue MQTT version instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The permissions that you want to grant.
    // 
    // This parameter is required.
    shared_ptr<string> permitAction_ {};
    // Authorized Topic, supporting multi-level MQTT topics and wildcards.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
