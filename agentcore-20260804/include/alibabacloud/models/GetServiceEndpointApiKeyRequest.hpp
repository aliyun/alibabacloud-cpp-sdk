// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEENDPOINTAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEENDPOINTAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetServiceEndpointApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEndpointApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEndpointApiKeyRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetServiceEndpointApiKeyRequest() = default ;
    GetServiceEndpointApiKeyRequest(const GetServiceEndpointApiKeyRequest &) = default ;
    GetServiceEndpointApiKeyRequest(GetServiceEndpointApiKeyRequest &&) = default ;
    GetServiceEndpointApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEndpointApiKeyRequest() = default ;
    GetServiceEndpointApiKeyRequest& operator=(const GetServiceEndpointApiKeyRequest &) = default ;
    GetServiceEndpointApiKeyRequest& operator=(GetServiceEndpointApiKeyRequest &&) = default ;
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
