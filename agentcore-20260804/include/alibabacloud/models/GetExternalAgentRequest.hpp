// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetExternalAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalAgentRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, GetExternalAgentRequest& obj) { 
      (void)j; (void)obj; 
    };
    GetExternalAgentRequest() = default ;
    GetExternalAgentRequest(const GetExternalAgentRequest &) = default ;
    GetExternalAgentRequest(GetExternalAgentRequest &&) = default ;
    GetExternalAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalAgentRequest() = default ;
    GetExternalAgentRequest& operator=(const GetExternalAgentRequest &) = default ;
    GetExternalAgentRequest& operator=(GetExternalAgentRequest &&) = default ;
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
