// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCHATCOMPLETIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCHATCOMPLETIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterChatCompletionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterChatCompletionsRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterChatCompletionsRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    ModelRouterChatCompletionsRequest() = default ;
    ModelRouterChatCompletionsRequest(const ModelRouterChatCompletionsRequest &) = default ;
    ModelRouterChatCompletionsRequest(ModelRouterChatCompletionsRequest &&) = default ;
    ModelRouterChatCompletionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterChatCompletionsRequest() = default ;
    ModelRouterChatCompletionsRequest& operator=(const ModelRouterChatCompletionsRequest &) = default ;
    ModelRouterChatCompletionsRequest& operator=(ModelRouterChatCompletionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & getBody() const { DARABONBA_GET(body_) };
    Darabonba::Json & getBody() { DARABONBA_GET(body_) };
    inline ModelRouterChatCompletionsRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline ModelRouterChatCompletionsRequest& setBody(Darabonba::Json && body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    Darabonba::Json body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
