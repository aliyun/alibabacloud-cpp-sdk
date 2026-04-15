// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFLOWENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFLOWENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetFlowEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFlowEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetFlowEndpointRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetFlowEndpointRequest() = default ;
    GetFlowEndpointRequest(const GetFlowEndpointRequest &) = default ;
    GetFlowEndpointRequest(GetFlowEndpointRequest &&) = default ;
    GetFlowEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFlowEndpointRequest() = default ;
    GetFlowEndpointRequest& operator=(const GetFlowEndpointRequest &) = default ;
    GetFlowEndpointRequest& operator=(GetFlowEndpointRequest &&) = default ;
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
