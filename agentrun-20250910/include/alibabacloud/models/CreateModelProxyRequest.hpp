// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateModelProxyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateModelProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateModelProxyRequest() = default ;
    CreateModelProxyRequest(const CreateModelProxyRequest &) = default ;
    CreateModelProxyRequest(CreateModelProxyRequest &&) = default ;
    CreateModelProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelProxyRequest() = default ;
    CreateModelProxyRequest& operator=(const CreateModelProxyRequest &) = default ;
    CreateModelProxyRequest& operator=(CreateModelProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateModelProxyInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateModelProxyInput) };
    inline CreateModelProxyInput body() { DARABONBA_PTR_GET(body_, CreateModelProxyInput) };
    inline CreateModelProxyRequest& setBody(const CreateModelProxyInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateModelProxyRequest& setBody(CreateModelProxyInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<CreateModelProxyInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
