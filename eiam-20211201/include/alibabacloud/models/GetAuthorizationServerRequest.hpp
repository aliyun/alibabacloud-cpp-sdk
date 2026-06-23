// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetAuthorizationServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationServerId, authorizationServerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAuthorizationServerRequest() = default ;
    GetAuthorizationServerRequest(const GetAuthorizationServerRequest &) = default ;
    GetAuthorizationServerRequest(GetAuthorizationServerRequest &&) = default ;
    GetAuthorizationServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationServerRequest() = default ;
    GetAuthorizationServerRequest& operator=(const GetAuthorizationServerRequest &) = default ;
    GetAuthorizationServerRequest& operator=(GetAuthorizationServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationServerId_ == nullptr
        && this->instanceId_ == nullptr; };
    // authorizationServerId Field Functions 
    bool hasAuthorizationServerId() const { return this->authorizationServerId_ != nullptr;};
    void deleteAuthorizationServerId() { this->authorizationServerId_ = nullptr;};
    inline string getAuthorizationServerId() const { DARABONBA_PTR_GET_DEFAULT(authorizationServerId_, "") };
    inline GetAuthorizationServerRequest& setAuthorizationServerId(string authorizationServerId) { DARABONBA_PTR_SET_VALUE(authorizationServerId_, authorizationServerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAuthorizationServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的授权服务器资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationServerId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
