// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateVirtualHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    CreateVirtualHostRequest() = default ;
    CreateVirtualHostRequest(const CreateVirtualHostRequest &) = default ;
    CreateVirtualHostRequest(CreateVirtualHostRequest &&) = default ;
    CreateVirtualHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualHostRequest() = default ;
    CreateVirtualHostRequest& operator=(const CreateVirtualHostRequest &) = default ;
    CreateVirtualHostRequest& operator=(CreateVirtualHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->virtualHost_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateVirtualHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline CreateVirtualHostRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the vhost that you want to create. Valid values:
    // 
    // *   The name can contain letters, digits, hyphens (-), underscores (_), periods (.), number signs (#), forward slash (/), and at signs (@).
    // *   The name must be 1 to 255 characters in length.
    // *   After the vhost is created, you cannot change its name. If you want to change the name of a vhost, delete the vhost and create another vhost.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
