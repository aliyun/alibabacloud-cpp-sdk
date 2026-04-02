// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateToolInputV2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateToolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateToolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateToolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateToolRequest() = default ;
    CreateToolRequest(const CreateToolRequest &) = default ;
    CreateToolRequest(CreateToolRequest &&) = default ;
    CreateToolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateToolRequest() = default ;
    CreateToolRequest& operator=(const CreateToolRequest &) = default ;
    CreateToolRequest& operator=(CreateToolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateToolInputV2 & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateToolInputV2) };
    inline CreateToolInputV2 getBody() { DARABONBA_PTR_GET(body_, CreateToolInputV2) };
    inline CreateToolRequest& setBody(const CreateToolInputV2 & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateToolRequest& setBody(CreateToolInputV2 && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 创建工具的请求参数，包含工具的所有配置信息
    shared_ptr<CreateToolInputV2> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
