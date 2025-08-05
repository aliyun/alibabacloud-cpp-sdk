// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFCPARAMETERSCONCURRENCY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSSINKSINKFCPARAMETERSCONCURRENCY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& obj) { 
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& obj) { 
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& operator=(ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency &&) = default ;
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
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsSinkSinkFcParametersConcurrency& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that is used to transform events. Default value: CONSTANT.
    std::shared_ptr<string> form_ = nullptr;
    // None.
    std::shared_ptr<string> template_ = nullptr;
    // The delivery concurrency. Minimum value: 1.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
