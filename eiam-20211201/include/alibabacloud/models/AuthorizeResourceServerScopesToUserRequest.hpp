// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOUSERREQUEST_HPP_
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
  class AuthorizeResourceServerScopesToUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeResourceServerScopesToUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeResourceServerScopesToUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AuthorizeResourceServerScopesToUserRequest() = default ;
    AuthorizeResourceServerScopesToUserRequest(const AuthorizeResourceServerScopesToUserRequest &) = default ;
    AuthorizeResourceServerScopesToUserRequest(AuthorizeResourceServerScopesToUserRequest &&) = default ;
    AuthorizeResourceServerScopesToUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeResourceServerScopesToUserRequest() = default ;
    AuthorizeResourceServerScopesToUserRequest& operator=(const AuthorizeResourceServerScopesToUserRequest &) = default ;
    AuthorizeResourceServerScopesToUserRequest& operator=(AuthorizeResourceServerScopesToUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->resourceServerScopeIds_ == nullptr && this->userId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AuthorizeResourceServerScopesToUserRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AuthorizeResourceServerScopesToUserRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthorizeResourceServerScopesToUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerScopeIds Field Functions 
    bool hasResourceServerScopeIds() const { return this->resourceServerScopeIds_ != nullptr;};
    void deleteResourceServerScopeIds() { this->resourceServerScopeIds_ = nullptr;};
    inline const vector<string> & getResourceServerScopeIds() const { DARABONBA_PTR_GET_CONST(resourceServerScopeIds_, vector<string>) };
    inline vector<string> getResourceServerScopeIds() { DARABONBA_PTR_GET(resourceServerScopeIds_, vector<string>) };
    inline AuthorizeResourceServerScopesToUserRequest& setResourceServerScopeIds(const vector<string> & resourceServerScopeIds) { DARABONBA_PTR_SET_VALUE(resourceServerScopeIds_, resourceServerScopeIds) };
    inline AuthorizeResourceServerScopesToUserRequest& setResourceServerScopeIds(vector<string> && resourceServerScopeIds) { DARABONBA_PTR_SET_RVALUE(resourceServerScopeIds_, resourceServerScopeIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AuthorizeResourceServerScopesToUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // ResourceServer权限ID。
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceServerScopeIds_ {};
    // 用户ID。
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
