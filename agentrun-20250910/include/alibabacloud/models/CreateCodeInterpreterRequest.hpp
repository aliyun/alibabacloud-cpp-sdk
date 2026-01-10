// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECODEINTERPRETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECODEINTERPRETERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCodeInterpreterInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateCodeInterpreterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCodeInterpreterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCodeInterpreterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateCodeInterpreterRequest() = default ;
    CreateCodeInterpreterRequest(const CreateCodeInterpreterRequest &) = default ;
    CreateCodeInterpreterRequest(CreateCodeInterpreterRequest &&) = default ;
    CreateCodeInterpreterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCodeInterpreterRequest() = default ;
    CreateCodeInterpreterRequest& operator=(const CreateCodeInterpreterRequest &) = default ;
    CreateCodeInterpreterRequest& operator=(CreateCodeInterpreterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateCodeInterpreterInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateCodeInterpreterInput) };
    inline CreateCodeInterpreterInput getBody() { DARABONBA_PTR_GET(body_, CreateCodeInterpreterInput) };
    inline CreateCodeInterpreterRequest& setBody(const CreateCodeInterpreterInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateCodeInterpreterRequest& setBody(CreateCodeInterpreterInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<CreateCodeInterpreterInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
