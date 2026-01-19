// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERTOCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERTOCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AuthorizeResourceServerToClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeResourceServerToClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientApplicationId, clientApplicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerApplicationId, resourceServerApplicationId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeResourceServerToClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientApplicationId, clientApplicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerApplicationId, resourceServerApplicationId_);
    };
    AuthorizeResourceServerToClientRequest() = default ;
    AuthorizeResourceServerToClientRequest(const AuthorizeResourceServerToClientRequest &) = default ;
    AuthorizeResourceServerToClientRequest(AuthorizeResourceServerToClientRequest &&) = default ;
    AuthorizeResourceServerToClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeResourceServerToClientRequest() = default ;
    AuthorizeResourceServerToClientRequest& operator=(const AuthorizeResourceServerToClientRequest &) = default ;
    AuthorizeResourceServerToClientRequest& operator=(AuthorizeResourceServerToClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientApplicationId_ == nullptr
        && this->instanceId_ == nullptr && this->resourceServerApplicationId_ == nullptr; };
    // clientApplicationId Field Functions 
    bool hasClientApplicationId() const { return this->clientApplicationId_ != nullptr;};
    void deleteClientApplicationId() { this->clientApplicationId_ = nullptr;};
    inline string getClientApplicationId() const { DARABONBA_PTR_GET_DEFAULT(clientApplicationId_, "") };
    inline AuthorizeResourceServerToClientRequest& setClientApplicationId(string clientApplicationId) { DARABONBA_PTR_SET_VALUE(clientApplicationId_, clientApplicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthorizeResourceServerToClientRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerApplicationId Field Functions 
    bool hasResourceServerApplicationId() const { return this->resourceServerApplicationId_ != nullptr;};
    void deleteResourceServerApplicationId() { this->resourceServerApplicationId_ = nullptr;};
    inline string getResourceServerApplicationId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerApplicationId_, "") };
    inline AuthorizeResourceServerToClientRequest& setResourceServerApplicationId(string resourceServerApplicationId) { DARABONBA_PTR_SET_VALUE(resourceServerApplicationId_, resourceServerApplicationId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> clientApplicationId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerApplicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
