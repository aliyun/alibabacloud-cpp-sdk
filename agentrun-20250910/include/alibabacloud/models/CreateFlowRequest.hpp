// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFlowInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateFlowRequest() = default ;
    CreateFlowRequest(const CreateFlowRequest &) = default ;
    CreateFlowRequest(CreateFlowRequest &&) = default ;
    CreateFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowRequest() = default ;
    CreateFlowRequest& operator=(const CreateFlowRequest &) = default ;
    CreateFlowRequest& operator=(CreateFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateFlowInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateFlowInput) };
    inline CreateFlowInput getBody() { DARABONBA_PTR_GET(body_, CreateFlowInput) };
    inline CreateFlowRequest& setBody(const CreateFlowInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateFlowRequest& setBody(CreateFlowInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 创建工作流所需的完整配置信息，包括工作流名称、定义、执行模式等
    // 
    // This parameter is required.
    shared_ptr<CreateFlowInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
