// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetAgentSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpaceRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAgentSpaceRequest() = default ;
    GetAgentSpaceRequest(const GetAgentSpaceRequest &) = default ;
    GetAgentSpaceRequest(GetAgentSpaceRequest &&) = default ;
    GetAgentSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpaceRequest() = default ;
    GetAgentSpaceRequest& operator=(const GetAgentSpaceRequest &) = default ;
    GetAgentSpaceRequest& operator=(GetAgentSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
