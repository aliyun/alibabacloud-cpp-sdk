// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERSMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERSMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DashScopeTransformParametersMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashScopeTransformParametersMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DashScopeTransformParametersMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DashScopeTransformParametersMessages() = default ;
    DashScopeTransformParametersMessages(const DashScopeTransformParametersMessages &) = default ;
    DashScopeTransformParametersMessages(DashScopeTransformParametersMessages &&) = default ;
    DashScopeTransformParametersMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashScopeTransformParametersMessages() = default ;
    DashScopeTransformParametersMessages& operator=(const DashScopeTransformParametersMessages &) = default ;
    DashScopeTransformParametersMessages& operator=(DashScopeTransformParametersMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->form_ == nullptr
        && return this->role_ == nullptr && return this->template_ == nullptr && return this->value_ == nullptr; };
    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string form() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline DashScopeTransformParametersMessages& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DashScopeTransformParametersMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DashScopeTransformParametersMessages& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DashScopeTransformParametersMessages& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> form_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> template_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
