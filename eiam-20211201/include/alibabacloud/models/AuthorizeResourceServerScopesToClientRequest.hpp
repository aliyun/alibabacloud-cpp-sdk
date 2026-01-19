// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOCLIENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOCLIENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AuthorizeResourceServerScopesToClientRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeResourceServerScopesToClientRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientApplicationId, clientApplicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerApplicationId, resourceServerApplicationId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeResourceServerScopesToClientRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientApplicationId, clientApplicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerApplicationId, resourceServerApplicationId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    AuthorizeResourceServerScopesToClientRequest() = default ;
    AuthorizeResourceServerScopesToClientRequest(const AuthorizeResourceServerScopesToClientRequest &) = default ;
    AuthorizeResourceServerScopesToClientRequest(AuthorizeResourceServerScopesToClientRequest &&) = default ;
    AuthorizeResourceServerScopesToClientRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeResourceServerScopesToClientRequest() = default ;
    AuthorizeResourceServerScopesToClientRequest& operator=(const AuthorizeResourceServerScopesToClientRequest &) = default ;
    AuthorizeResourceServerScopesToClientRequest& operator=(AuthorizeResourceServerScopesToClientRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientApplicationId_ == nullptr
        && this->instanceId_ == nullptr && this->resourceServerApplicationId_ == nullptr && this->resourceServerScopeIds_ == nullptr; };
    // clientApplicationId Field Functions 
    bool hasClientApplicationId() const { return this->clientApplicationId_ != nullptr;};
    void deleteClientApplicationId() { this->clientApplicationId_ = nullptr;};
    inline string getClientApplicationId() const { DARABONBA_PTR_GET_DEFAULT(clientApplicationId_, "") };
    inline AuthorizeResourceServerScopesToClientRequest& setClientApplicationId(string clientApplicationId) { DARABONBA_PTR_SET_VALUE(clientApplicationId_, clientApplicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthorizeResourceServerScopesToClientRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerApplicationId Field Functions 
    bool hasResourceServerApplicationId() const { return this->resourceServerApplicationId_ != nullptr;};
    void deleteResourceServerApplicationId() { this->resourceServerApplicationId_ = nullptr;};
    inline string getResourceServerApplicationId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerApplicationId_, "") };
    inline AuthorizeResourceServerScopesToClientRequest& setResourceServerApplicationId(string resourceServerApplicationId) { DARABONBA_PTR_SET_VALUE(resourceServerApplicationId_, resourceServerApplicationId) };


    // resourceServerScopeIds Field Functions 
    bool hasResourceServerScopeIds() const { return this->resourceServerScopeIds_ != nullptr;};
    void deleteResourceServerScopeIds() { this->resourceServerScopeIds_ = nullptr;};
    inline const vector<string> & getResourceServerScopeIds() const { DARABONBA_PTR_GET_CONST(resourceServerScopeIds_, vector<string>) };
    inline vector<string> getResourceServerScopeIds() { DARABONBA_PTR_GET(resourceServerScopeIds_, vector<string>) };
    inline AuthorizeResourceServerScopesToClientRequest& setResourceServerScopeIds(const vector<string> & resourceServerScopeIds) { DARABONBA_PTR_SET_VALUE(resourceServerScopeIds_, resourceServerScopeIds) };
    inline AuthorizeResourceServerScopesToClientRequest& setResourceServerScopeIds(vector<string> && resourceServerScopeIds) { DARABONBA_PTR_SET_RVALUE(resourceServerScopeIds_, resourceServerScopeIds) };


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
    // ResourceServer权限ID。
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceServerScopeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
