// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERESOURCESERVERSCOPESTOORGANIZATIONALUNITREQUEST_HPP_
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
  class AuthorizeResourceServerScopesToOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeResourceServerScopesToOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeResourceServerScopesToOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitId, organizationalUnitId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    AuthorizeResourceServerScopesToOrganizationalUnitRequest() = default ;
    AuthorizeResourceServerScopesToOrganizationalUnitRequest(const AuthorizeResourceServerScopesToOrganizationalUnitRequest &) = default ;
    AuthorizeResourceServerScopesToOrganizationalUnitRequest(AuthorizeResourceServerScopesToOrganizationalUnitRequest &&) = default ;
    AuthorizeResourceServerScopesToOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeResourceServerScopesToOrganizationalUnitRequest() = default ;
    AuthorizeResourceServerScopesToOrganizationalUnitRequest& operator=(const AuthorizeResourceServerScopesToOrganizationalUnitRequest &) = default ;
    AuthorizeResourceServerScopesToOrganizationalUnitRequest& operator=(AuthorizeResourceServerScopesToOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->organizationalUnitId_ == nullptr && this->resourceServerScopeIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitId Field Functions 
    bool hasOrganizationalUnitId() const { return this->organizationalUnitId_ != nullptr;};
    void deleteOrganizationalUnitId() { this->organizationalUnitId_ = nullptr;};
    inline string getOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitId_, "") };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setOrganizationalUnitId(string organizationalUnitId) { DARABONBA_PTR_SET_VALUE(organizationalUnitId_, organizationalUnitId) };


    // resourceServerScopeIds Field Functions 
    bool hasResourceServerScopeIds() const { return this->resourceServerScopeIds_ != nullptr;};
    void deleteResourceServerScopeIds() { this->resourceServerScopeIds_ = nullptr;};
    inline const vector<string> & getResourceServerScopeIds() const { DARABONBA_PTR_GET_CONST(resourceServerScopeIds_, vector<string>) };
    inline vector<string> getResourceServerScopeIds() { DARABONBA_PTR_GET(resourceServerScopeIds_, vector<string>) };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setResourceServerScopeIds(const vector<string> & resourceServerScopeIds) { DARABONBA_PTR_SET_VALUE(resourceServerScopeIds_, resourceServerScopeIds) };
    inline AuthorizeResourceServerScopesToOrganizationalUnitRequest& setResourceServerScopeIds(vector<string> && resourceServerScopeIds) { DARABONBA_PTR_SET_RVALUE(resourceServerScopeIds_, resourceServerScopeIds) };


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
    // 组织ID。
    // 
    // This parameter is required.
    shared_ptr<string> organizationalUnitId_ {};
    // ResourceServer权限ID。
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceServerScopeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
