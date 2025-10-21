// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVARIABLEREQUEST_HPP_
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
  class UpdateVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateVariableRequest() = default ;
    UpdateVariableRequest(const UpdateVariableRequest &) = default ;
    UpdateVariableRequest(UpdateVariableRequest &&) = default ;
    UpdateVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVariableRequest() = default ;
    UpdateVariableRequest& operator=(const UpdateVariableRequest &) = default ;
    UpdateVariableRequest& operator=(UpdateVariableRequest &&) = default ;
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
    inline UpdateVariableRequest& setBody(const Variable & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateVariableRequest& setBody(Variable && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<Variable> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
