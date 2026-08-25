// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetIdentityProviderRequest() = default ;
    GetIdentityProviderRequest(const GetIdentityProviderRequest &) = default ;
    GetIdentityProviderRequest(GetIdentityProviderRequest &&) = default ;
    GetIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderRequest() = default ;
    GetIdentityProviderRequest& operator=(const GetIdentityProviderRequest &) = default ;
    GetIdentityProviderRequest& operator=(GetIdentityProviderRequest &&) = default ;
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
