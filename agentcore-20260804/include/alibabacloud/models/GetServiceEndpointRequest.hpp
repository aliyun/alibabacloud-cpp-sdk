// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetServiceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetServiceEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetServiceEndpointRequest() = default ;
    GetServiceEndpointRequest(const GetServiceEndpointRequest &) = default ;
    GetServiceEndpointRequest(GetServiceEndpointRequest &&) = default ;
    GetServiceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceEndpointRequest() = default ;
    GetServiceEndpointRequest& operator=(const GetServiceEndpointRequest &) = default ;
    GetServiceEndpointRequest& operator=(GetServiceEndpointRequest &&) = default ;
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
