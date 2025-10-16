// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRUNTIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAgentRuntimeInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateAgentRuntimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRuntimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAgentRuntimeRequest() = default ;
    UpdateAgentRuntimeRequest(const UpdateAgentRuntimeRequest &) = default ;
    UpdateAgentRuntimeRequest(UpdateAgentRuntimeRequest &&) = default ;
    UpdateAgentRuntimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRuntimeRequest() = default ;
    UpdateAgentRuntimeRequest& operator=(const UpdateAgentRuntimeRequest &) = default ;
    UpdateAgentRuntimeRequest& operator=(UpdateAgentRuntimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAgentRuntimeInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateAgentRuntimeInput) };
    inline UpdateAgentRuntimeInput body() { DARABONBA_PTR_GET(body_, UpdateAgentRuntimeInput) };
    inline UpdateAgentRuntimeRequest& setBody(const UpdateAgentRuntimeInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAgentRuntimeRequest& setBody(UpdateAgentRuntimeInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含要更新的智能体运行时配置信息的请求体
    // 
    // This parameter is required.
    std::shared_ptr<UpdateAgentRuntimeInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
