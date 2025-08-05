// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETSPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETSPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateRuleRequestEventTargetsParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestEventTargetsParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(ResourceKey, resourceKey_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestEventTargetsParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(ResourceKey, resourceKey_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateRuleRequestEventTargetsParamList() = default ;
    CreateRuleRequestEventTargetsParamList(const CreateRuleRequestEventTargetsParamList &) = default ;
    CreateRuleRequestEventTargetsParamList(CreateRuleRequestEventTargetsParamList &&) = default ;
    CreateRuleRequestEventTargetsParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestEventTargetsParamList() = default ;
    CreateRuleRequestEventTargetsParamList& operator=(const CreateRuleRequestEventTargetsParamList &) = default ;
    CreateRuleRequestEventTargetsParamList& operator=(CreateRuleRequestEventTargetsParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->form_ != nullptr
        && this->resourceKey_ != nullptr && this->template_ != nullptr && this->value_ != nullptr; };
    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string form() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline CreateRuleRequestEventTargetsParamList& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // resourceKey Field Functions 
    bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
    void deleteResourceKey() { this->resourceKey_ = nullptr;};
    inline string resourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
    inline CreateRuleRequestEventTargetsParamList& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreateRuleRequestEventTargetsParamList& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateRuleRequestEventTargetsParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The format of input parameters for the event target. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    std::shared_ptr<string> form_ = nullptr;
    // The resource key of the event target. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    std::shared_ptr<string> resourceKey_ = nullptr;
    // The structure of the template for the event target.
    std::shared_ptr<string> template_ = nullptr;
    // The value of the event target parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
