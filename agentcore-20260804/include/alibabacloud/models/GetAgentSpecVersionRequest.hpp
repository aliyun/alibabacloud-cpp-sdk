// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPECVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPECVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetAgentSpecVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpecVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpecVersionRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetAgentSpecVersionRequest() = default ;
    GetAgentSpecVersionRequest(const GetAgentSpecVersionRequest &) = default ;
    GetAgentSpecVersionRequest(GetAgentSpecVersionRequest &&) = default ;
    GetAgentSpecVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpecVersionRequest() = default ;
    GetAgentSpecVersionRequest& operator=(const GetAgentSpecVersionRequest &) = default ;
    GetAgentSpecVersionRequest& operator=(GetAgentSpecVersionRequest &&) = default ;
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
