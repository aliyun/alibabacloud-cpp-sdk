// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMAUTHPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMAUTHPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class DeleteCustomAuthPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DeleteCustomAuthPermissionRequest() = default ;
    DeleteCustomAuthPermissionRequest(const DeleteCustomAuthPermissionRequest &) = default ;
    DeleteCustomAuthPermissionRequest(DeleteCustomAuthPermissionRequest &&) = default ;
    DeleteCustomAuthPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomAuthPermissionRequest() = default ;
    DeleteCustomAuthPermissionRequest& operator=(const DeleteCustomAuthPermissionRequest &) = default ;
    DeleteCustomAuthPermissionRequest& operator=(DeleteCustomAuthPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identity_ == nullptr
        && this->identityType_ == nullptr && this->instanceId_ == nullptr && this->topic_ == nullptr; };
    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline DeleteCustomAuthPermissionRequest& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline DeleteCustomAuthPermissionRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCustomAuthPermissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DeleteCustomAuthPermissionRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The username or client ID.
    // 
    // This parameter is required.
    shared_ptr<string> identity_ {};
    // The identity type. Valid values:
    // - USER: username only.
    // - CLIENT: specific client.
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // The ID of the Micro MSMQ MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The authorized topic. Multi-level MQTT topics and wildcards are supported.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
