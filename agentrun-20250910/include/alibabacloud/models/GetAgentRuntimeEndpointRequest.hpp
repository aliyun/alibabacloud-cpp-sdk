// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTRUNTIMEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTRUNTIMEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetAgentRuntimeEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRuntimeEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRuntimeEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAgentRuntimeEndpointRequest() = default ;
    GetAgentRuntimeEndpointRequest(const GetAgentRuntimeEndpointRequest &) = default ;
    GetAgentRuntimeEndpointRequest(GetAgentRuntimeEndpointRequest &&) = default ;
    GetAgentRuntimeEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRuntimeEndpointRequest() = default ;
    GetAgentRuntimeEndpointRequest& operator=(const GetAgentRuntimeEndpointRequest &) = default ;
    GetAgentRuntimeEndpointRequest& operator=(GetAgentRuntimeEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
