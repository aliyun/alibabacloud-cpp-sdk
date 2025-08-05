// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKDASHVECTORPARAMETERSDASHVECTORSCHEMAPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters() = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(const UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& operator=(UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->form_ != nullptr
        && this->template_ != nullptr && this->value_ != nullptr; };
    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string form() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateEventStreamingRequestSinkSinkDashVectorParametersDashVectorSchemaParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that you want to use to transform events. Valid values:
    // 
    // *   JSONPATH
    // *   CONSTANT
    // *   TEMPLATE
    std::shared_ptr<string> form_ = nullptr;
    // The schema template. This parameter is required only if you set Form to TEMPLATE. After the event content is transformed, the data must be an array in the JSON format. Each schema corresponds to a JSON object. The properties include only the name, type, and value fields. The value of the type field can be only of the INT, FLOAT, STRING, or BOOL type.
    std::shared_ptr<string> template_ = nullptr;
    // *   If you set Form to CONSTANT, specify a constant.
    // *   If you set Form to JSONPATH, specify a JSONPath rule.
    // *   If you set Form to TEMPLATE, specify variables for the template.
    // 
    // >  The value of this parameter cannot exceed 10,240 characters in length.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
