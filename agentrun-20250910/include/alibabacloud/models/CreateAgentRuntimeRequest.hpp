// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAgentRuntimeInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateAgentRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAgentRuntimeRequest() = default ;
    CreateAgentRuntimeRequest(const CreateAgentRuntimeRequest &) = default ;
    CreateAgentRuntimeRequest(CreateAgentRuntimeRequest &&) = default ;
    CreateAgentRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRuntimeRequest() = default ;
    CreateAgentRuntimeRequest& operator=(const CreateAgentRuntimeRequest &) = default ;
    CreateAgentRuntimeRequest& operator=(CreateAgentRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgentRuntimeInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgentRuntimeInput) };
    inline CreateAgentRuntimeInput getBody() { DARABONBA_PTR_GET(body_, CreateAgentRuntimeInput) };
    inline CreateAgentRuntimeRequest& setBody(const CreateAgentRuntimeInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgentRuntimeRequest& setBody(CreateAgentRuntimeInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 创建智能体运行时所需的完整配置信息，包括运行时名称、资源规格、网络配置、协议配置等
    // 
    // This parameter is required.
    shared_ptr<CreateAgentRuntimeInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
