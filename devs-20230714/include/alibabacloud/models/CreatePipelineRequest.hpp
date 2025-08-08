// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class CreatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreatePipelineRequest() = default ;
    CreatePipelineRequest(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest(CreatePipelineRequest &&) = default ;
    CreatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRequest() = default ;
    CreatePipelineRequest& operator=(const CreatePipelineRequest &) = default ;
    CreatePipelineRequest& operator=(CreatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Pipeline & body() const { DARABONBA_PTR_GET_CONST(body_, Pipeline) };
    inline Pipeline body() { DARABONBA_PTR_GET(body_, Pipeline) };
    inline CreatePipelineRequest& setBody(const Pipeline & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePipelineRequest& setBody(Pipeline && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Pipeline> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
