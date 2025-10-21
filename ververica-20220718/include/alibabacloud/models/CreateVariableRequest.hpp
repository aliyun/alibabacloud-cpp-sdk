// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Variable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateVariableRequest() = default ;
    CreateVariableRequest(const CreateVariableRequest &) = default ;
    CreateVariableRequest(CreateVariableRequest &&) = default ;
    CreateVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVariableRequest() = default ;
    CreateVariableRequest& operator=(const CreateVariableRequest &) = default ;
    CreateVariableRequest& operator=(CreateVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Variable & body() const { DARABONBA_PTR_GET_CONST(body_, Variable) };
    inline Variable body() { DARABONBA_PTR_GET(body_, Variable) };
    inline CreateVariableRequest& setBody(const Variable & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateVariableRequest& setBody(Variable && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The parameter that is used to create the variable.
    // 
    // This parameter is required.
    std::shared_ptr<Variable> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
