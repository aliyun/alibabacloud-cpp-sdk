// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest(CreateKnowledgeBaseRequest &&) = default ;
    CreateKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseRequest() = default ;
    CreateKnowledgeBaseRequest& operator=(const CreateKnowledgeBaseRequest &) = default ;
    CreateKnowledgeBaseRequest& operator=(CreateKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateKnowledgeBaseInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateKnowledgeBaseInput) };
    inline CreateKnowledgeBaseInput getBody() { DARABONBA_PTR_GET(body_, CreateKnowledgeBaseInput) };
    inline CreateKnowledgeBaseRequest& setBody(const CreateKnowledgeBaseInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateKnowledgeBaseRequest& setBody(CreateKnowledgeBaseInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateKnowledgeBaseInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
