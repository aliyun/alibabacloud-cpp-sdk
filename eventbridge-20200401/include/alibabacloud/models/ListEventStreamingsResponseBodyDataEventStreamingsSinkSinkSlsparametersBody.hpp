// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKSLSPARAMETERSBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKSLSPARAMETERSBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& obj) { 
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody &&) = default ;
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
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkSLSParametersBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that is used to transform events.
    std::shared_ptr<string> form_ = nullptr;
    // The template based on which events are transformed.
    std::shared_ptr<string> template_ = nullptr;
    // The value before transformation.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
