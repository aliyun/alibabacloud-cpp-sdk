// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMBOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMBOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIMBotInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateIMBotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIMBotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIMBotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateIMBotRequest() = default ;
    CreateIMBotRequest(const CreateIMBotRequest &) = default ;
    CreateIMBotRequest(CreateIMBotRequest &&) = default ;
    CreateIMBotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIMBotRequest() = default ;
    CreateIMBotRequest& operator=(const CreateIMBotRequest &) = default ;
    CreateIMBotRequest& operator=(CreateIMBotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateIMBotInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateIMBotInput) };
    inline CreateIMBotInput getBody() { DARABONBA_PTR_GET(body_, CreateIMBotInput) };
    inline CreateIMBotRequest& setBody(const CreateIMBotInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateIMBotRequest& setBody(CreateIMBotInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<CreateIMBotInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
