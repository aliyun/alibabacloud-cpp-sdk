// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderSyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderSyncJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderSyncJobRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetIdentityProviderSyncJobRequest() = default ;
    GetIdentityProviderSyncJobRequest(const GetIdentityProviderSyncJobRequest &) = default ;
    GetIdentityProviderSyncJobRequest(GetIdentityProviderSyncJobRequest &&) = default ;
    GetIdentityProviderSyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderSyncJobRequest() = default ;
    GetIdentityProviderSyncJobRequest& operator=(const GetIdentityProviderSyncJobRequest &) = default ;
    GetIdentityProviderSyncJobRequest& operator=(GetIdentityProviderSyncJobRequest &&) = default ;
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
