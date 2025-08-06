// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOnlineEvalTaskRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class CreateOnlineEvalTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOnlineEvalTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOnlineEvalTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateOnlineEvalTaskRequest() = default ;
    CreateOnlineEvalTaskRequest(const CreateOnlineEvalTaskRequest &) = default ;
    CreateOnlineEvalTaskRequest(CreateOnlineEvalTaskRequest &&) = default ;
    CreateOnlineEvalTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOnlineEvalTaskRequest() = default ;
    CreateOnlineEvalTaskRequest& operator=(const CreateOnlineEvalTaskRequest &) = default ;
    CreateOnlineEvalTaskRequest& operator=(CreateOnlineEvalTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateOnlineEvalTaskRequestBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateOnlineEvalTaskRequestBody) };
    inline CreateOnlineEvalTaskRequestBody body() { DARABONBA_PTR_GET(body_, CreateOnlineEvalTaskRequestBody) };
    inline CreateOnlineEvalTaskRequest& setBody(const CreateOnlineEvalTaskRequestBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateOnlineEvalTaskRequest& setBody(CreateOnlineEvalTaskRequestBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request data.
    std::shared_ptr<CreateOnlineEvalTaskRequestBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
