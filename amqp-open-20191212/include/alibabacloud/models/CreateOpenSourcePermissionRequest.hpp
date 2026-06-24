// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPENSOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPENSOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateOpenSourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpenSourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Configure, configure_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Read, read_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
      DARABONBA_PTR_TO_JSON(Write, write_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpenSourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Configure, configure_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Read, read_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
      DARABONBA_PTR_FROM_JSON(Write, write_);
    };
    CreateOpenSourcePermissionRequest() = default ;
    CreateOpenSourcePermissionRequest(const CreateOpenSourcePermissionRequest &) = default ;
    CreateOpenSourcePermissionRequest(CreateOpenSourcePermissionRequest &&) = default ;
    CreateOpenSourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpenSourcePermissionRequest() = default ;
    CreateOpenSourcePermissionRequest& operator=(const CreateOpenSourcePermissionRequest &) = default ;
    CreateOpenSourcePermissionRequest& operator=(CreateOpenSourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configure_ == nullptr && this->instanceId_ == nullptr && this->read_ == nullptr && this->userName_ == nullptr && this->vhost_ == nullptr
        && this->write_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOpenSourcePermissionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configure Field Functions 
    bool hasConfigure() const { return this->configure_ != nullptr;};
    void deleteConfigure() { this->configure_ = nullptr;};
    inline string getConfigure() const { DARABONBA_PTR_GET_DEFAULT(configure_, "") };
    inline CreateOpenSourcePermissionRequest& setConfigure(string configure) { DARABONBA_PTR_SET_VALUE(configure_, configure) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOpenSourcePermissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // read Field Functions 
    bool hasRead() const { return this->read_ != nullptr;};
    void deleteRead() { this->read_ = nullptr;};
    inline string getRead() const { DARABONBA_PTR_GET_DEFAULT(read_, "") };
    inline CreateOpenSourcePermissionRequest& setRead(string read) { DARABONBA_PTR_SET_VALUE(read_, read) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateOpenSourcePermissionRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline CreateOpenSourcePermissionRequest& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


    // write Field Functions 
    bool hasWrite() const { return this->write_ != nullptr;};
    void deleteWrite() { this->write_ = nullptr;};
    inline string getWrite() const { DARABONBA_PTR_GET_DEFAULT(write_, "") };
    inline CreateOpenSourcePermissionRequest& setWrite(string write) { DARABONBA_PTR_SET_VALUE(write_, write) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The regular expression for the configure permission.
    shared_ptr<string> configure_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The regular expression for the read permission.
    shared_ptr<string> read_ {};
    // The username.
    shared_ptr<string> userName_ {};
    // The vhost name.
    shared_ptr<string> vhost_ {};
    // The regular expression for the write permission.
    shared_ptr<string> write_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
