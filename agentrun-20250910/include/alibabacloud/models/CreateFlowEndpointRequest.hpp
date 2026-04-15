// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFlowEndpointInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateFlowEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateFlowEndpointRequest() = default ;
    CreateFlowEndpointRequest(const CreateFlowEndpointRequest &) = default ;
    CreateFlowEndpointRequest(CreateFlowEndpointRequest &&) = default ;
    CreateFlowEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowEndpointRequest() = default ;
    CreateFlowEndpointRequest& operator=(const CreateFlowEndpointRequest &) = default ;
    CreateFlowEndpointRequest& operator=(CreateFlowEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateFlowEndpointInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateFlowEndpointInput) };
    inline CreateFlowEndpointInput getBody() { DARABONBA_PTR_GET(body_, CreateFlowEndpointInput) };
    inline CreateFlowEndpointRequest& setBody(const CreateFlowEndpointInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateFlowEndpointRequest& setBody(CreateFlowEndpointInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 创建工作流端点所需的完整配置信息
    // 
    // This parameter is required.
    shared_ptr<CreateFlowEndpointInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
