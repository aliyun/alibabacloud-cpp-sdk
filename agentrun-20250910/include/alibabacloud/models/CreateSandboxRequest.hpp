// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESANDBOXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESANDBOXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSandboxInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateSandboxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSandboxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSandboxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateSandboxRequest() = default ;
    CreateSandboxRequest(const CreateSandboxRequest &) = default ;
    CreateSandboxRequest(CreateSandboxRequest &&) = default ;
    CreateSandboxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSandboxRequest() = default ;
    CreateSandboxRequest& operator=(const CreateSandboxRequest &) = default ;
    CreateSandboxRequest& operator=(CreateSandboxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateSandboxInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateSandboxInput) };
    inline CreateSandboxInput body() { DARABONBA_PTR_GET(body_, CreateSandboxInput) };
    inline CreateSandboxRequest& setBody(const CreateSandboxInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSandboxRequest& setBody(CreateSandboxInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 创建沙箱所需的配置信息，包括模板名称、沙箱名称等
    // 
    // This parameter is required.
    std::shared_ptr<CreateSandboxInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
