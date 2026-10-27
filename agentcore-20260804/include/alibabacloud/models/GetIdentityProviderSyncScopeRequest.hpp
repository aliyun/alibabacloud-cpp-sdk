// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderSyncScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderSyncScopeRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderSyncScopeRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetIdentityProviderSyncScopeRequest() = default ;
    GetIdentityProviderSyncScopeRequest(const GetIdentityProviderSyncScopeRequest &) = default ;
    GetIdentityProviderSyncScopeRequest(GetIdentityProviderSyncScopeRequest &&) = default ;
    GetIdentityProviderSyncScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderSyncScopeRequest() = default ;
    GetIdentityProviderSyncScopeRequest& operator=(const GetIdentityProviderSyncScopeRequest &) = default ;
    GetIdentityProviderSyncScopeRequest& operator=(GetIdentityProviderSyncScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
