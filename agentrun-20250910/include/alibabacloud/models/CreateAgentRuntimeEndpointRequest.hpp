// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAgentRuntimeEndpointInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateAgentRuntimeEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRuntimeEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRuntimeEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAgentRuntimeEndpointRequest() = default ;
    CreateAgentRuntimeEndpointRequest(const CreateAgentRuntimeEndpointRequest &) = default ;
    CreateAgentRuntimeEndpointRequest(CreateAgentRuntimeEndpointRequest &&) = default ;
    CreateAgentRuntimeEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRuntimeEndpointRequest() = default ;
    CreateAgentRuntimeEndpointRequest& operator=(const CreateAgentRuntimeEndpointRequest &) = default ;
    CreateAgentRuntimeEndpointRequest& operator=(CreateAgentRuntimeEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgentRuntimeEndpointInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgentRuntimeEndpointInput) };
    inline CreateAgentRuntimeEndpointInput getBody() { DARABONBA_PTR_GET(body_, CreateAgentRuntimeEndpointInput) };
    inline CreateAgentRuntimeEndpointRequest& setBody(const CreateAgentRuntimeEndpointInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgentRuntimeEndpointRequest& setBody(CreateAgentRuntimeEndpointInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含要创建的智能体运行时端点配置信息的请求体
    // 
    // This parameter is required.
    shared_ptr<CreateAgentRuntimeEndpointInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
