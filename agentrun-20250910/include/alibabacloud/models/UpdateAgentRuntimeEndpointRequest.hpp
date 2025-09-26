// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAgentRuntimeEndpointInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateAgentRuntimeEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRuntimeEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRuntimeEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAgentRuntimeEndpointRequest() = default ;
    UpdateAgentRuntimeEndpointRequest(const UpdateAgentRuntimeEndpointRequest &) = default ;
    UpdateAgentRuntimeEndpointRequest(UpdateAgentRuntimeEndpointRequest &&) = default ;
    UpdateAgentRuntimeEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRuntimeEndpointRequest() = default ;
    UpdateAgentRuntimeEndpointRequest& operator=(const UpdateAgentRuntimeEndpointRequest &) = default ;
    UpdateAgentRuntimeEndpointRequest& operator=(UpdateAgentRuntimeEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAgentRuntimeEndpointInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateAgentRuntimeEndpointInput) };
    inline UpdateAgentRuntimeEndpointInput body() { DARABONBA_PTR_GET(body_, UpdateAgentRuntimeEndpointInput) };
    inline UpdateAgentRuntimeEndpointRequest& setBody(const UpdateAgentRuntimeEndpointInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAgentRuntimeEndpointRequest& setBody(UpdateAgentRuntimeEndpointInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含要更新的智能体运行时端点配置信息的请求体
    // 
    // This parameter is required.
    std::shared_ptr<UpdateAgentRuntimeEndpointInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
