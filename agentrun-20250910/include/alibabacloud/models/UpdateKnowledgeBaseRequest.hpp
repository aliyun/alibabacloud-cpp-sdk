// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateKnowledgeBaseInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateKnowledgeBaseRequest() = default ;
    UpdateKnowledgeBaseRequest(const UpdateKnowledgeBaseRequest &) = default ;
    UpdateKnowledgeBaseRequest(UpdateKnowledgeBaseRequest &&) = default ;
    UpdateKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseRequest() = default ;
    UpdateKnowledgeBaseRequest& operator=(const UpdateKnowledgeBaseRequest &) = default ;
    UpdateKnowledgeBaseRequest& operator=(UpdateKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateKnowledgeBaseInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateKnowledgeBaseInput) };
    inline UpdateKnowledgeBaseInput getBody() { DARABONBA_PTR_GET(body_, UpdateKnowledgeBaseInput) };
    inline UpdateKnowledgeBaseRequest& setBody(const UpdateKnowledgeBaseInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateKnowledgeBaseRequest& setBody(UpdateKnowledgeBaseInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateKnowledgeBaseInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
