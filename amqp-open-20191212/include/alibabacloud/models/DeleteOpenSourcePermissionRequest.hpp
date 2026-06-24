// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPENSOURCEPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPENSOURCEPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class DeleteOpenSourcePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpenSourcePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Vhost, vhost_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpenSourcePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(Vhost, vhost_);
    };
    DeleteOpenSourcePermissionRequest() = default ;
    DeleteOpenSourcePermissionRequest(const DeleteOpenSourcePermissionRequest &) = default ;
    DeleteOpenSourcePermissionRequest(DeleteOpenSourcePermissionRequest &&) = default ;
    DeleteOpenSourcePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpenSourcePermissionRequest() = default ;
    DeleteOpenSourcePermissionRequest& operator=(const DeleteOpenSourcePermissionRequest &) = default ;
    DeleteOpenSourcePermissionRequest& operator=(DeleteOpenSourcePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->userName_ == nullptr && this->vhost_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteOpenSourcePermissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteOpenSourcePermissionRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vhost Field Functions 
    bool hasVhost() const { return this->vhost_ != nullptr;};
    void deleteVhost() { this->vhost_ = nullptr;};
    inline string getVhost() const { DARABONBA_PTR_GET_DEFAULT(vhost_, "") };
    inline DeleteOpenSourcePermissionRequest& setVhost(string vhost) { DARABONBA_PTR_SET_VALUE(vhost_, vhost) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The username.
    // 
    // This parameter is required.
    shared_ptr<string> userName_ {};
    // The vhost name.
    // 
    // This parameter is required.
    shared_ptr<string> vhost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
