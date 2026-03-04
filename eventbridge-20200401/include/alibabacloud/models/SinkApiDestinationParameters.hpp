// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKAPIDESTINATIONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKAPIDESTINATIONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkApiDestinationParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkApiDestinationParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryStringParameters, queryStringParameters_);
    };
    friend void from_json(const Darabonba::Json& j, SinkApiDestinationParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyParameters, bodyParameters_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryStringParameters, queryStringParameters_);
    };
    SinkApiDestinationParameters() = default ;
    SinkApiDestinationParameters(const SinkApiDestinationParameters &) = default ;
    SinkApiDestinationParameters(SinkApiDestinationParameters &&) = default ;
    SinkApiDestinationParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkApiDestinationParameters() = default ;
    SinkApiDestinationParameters& operator=(const SinkApiDestinationParameters &) = default ;
    SinkApiDestinationParameters& operator=(SinkApiDestinationParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryStringParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryStringParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, QueryStringParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      QueryStringParameters() = default ;
      QueryStringParameters(const QueryStringParameters &) = default ;
      QueryStringParameters(QueryStringParameters &&) = default ;
      QueryStringParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryStringParameters() = default ;
      QueryStringParameters& operator=(const QueryStringParameters &) = default ;
      QueryStringParameters& operator=(QueryStringParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline QueryStringParameters& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline QueryStringParameters& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline QueryStringParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class HeaderParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeaderParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, HeaderParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      HeaderParameters() = default ;
      HeaderParameters(const HeaderParameters &) = default ;
      HeaderParameters(HeaderParameters &&) = default ;
      HeaderParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HeaderParameters() = default ;
      HeaderParameters& operator=(const HeaderParameters &) = default ;
      HeaderParameters& operator=(HeaderParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline HeaderParameters& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline HeaderParameters& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline HeaderParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    class BodyParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BodyParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, BodyParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      BodyParameters() = default ;
      BodyParameters(const BodyParameters &) = default ;
      BodyParameters(BodyParameters &&) = default ;
      BodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BodyParameters() = default ;
      BodyParameters& operator=(const BodyParameters &) = default ;
      BodyParameters& operator=(BodyParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline BodyParameters& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline BodyParameters& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline BodyParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bodyParameters_ == nullptr
        && this->headerParameters_ == nullptr && this->name_ == nullptr && this->queryStringParameters_ == nullptr; };
    // bodyParameters Field Functions 
    bool hasBodyParameters() const { return this->bodyParameters_ != nullptr;};
    void deleteBodyParameters() { this->bodyParameters_ = nullptr;};
    inline const SinkApiDestinationParameters::BodyParameters & getBodyParameters() const { DARABONBA_PTR_GET_CONST(bodyParameters_, SinkApiDestinationParameters::BodyParameters) };
    inline SinkApiDestinationParameters::BodyParameters getBodyParameters() { DARABONBA_PTR_GET(bodyParameters_, SinkApiDestinationParameters::BodyParameters) };
    inline SinkApiDestinationParameters& setBodyParameters(const SinkApiDestinationParameters::BodyParameters & bodyParameters) { DARABONBA_PTR_SET_VALUE(bodyParameters_, bodyParameters) };
    inline SinkApiDestinationParameters& setBodyParameters(SinkApiDestinationParameters::BodyParameters && bodyParameters) { DARABONBA_PTR_SET_RVALUE(bodyParameters_, bodyParameters) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const SinkApiDestinationParameters::HeaderParameters & getHeaderParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, SinkApiDestinationParameters::HeaderParameters) };
    inline SinkApiDestinationParameters::HeaderParameters getHeaderParameters() { DARABONBA_PTR_GET(headerParameters_, SinkApiDestinationParameters::HeaderParameters) };
    inline SinkApiDestinationParameters& setHeaderParameters(const SinkApiDestinationParameters::HeaderParameters & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline SinkApiDestinationParameters& setHeaderParameters(SinkApiDestinationParameters::HeaderParameters && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SinkApiDestinationParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryStringParameters Field Functions 
    bool hasQueryStringParameters() const { return this->queryStringParameters_ != nullptr;};
    void deleteQueryStringParameters() { this->queryStringParameters_ = nullptr;};
    inline const SinkApiDestinationParameters::QueryStringParameters & getQueryStringParameters() const { DARABONBA_PTR_GET_CONST(queryStringParameters_, SinkApiDestinationParameters::QueryStringParameters) };
    inline SinkApiDestinationParameters::QueryStringParameters getQueryStringParameters() { DARABONBA_PTR_GET(queryStringParameters_, SinkApiDestinationParameters::QueryStringParameters) };
    inline SinkApiDestinationParameters& setQueryStringParameters(const SinkApiDestinationParameters::QueryStringParameters & queryStringParameters) { DARABONBA_PTR_SET_VALUE(queryStringParameters_, queryStringParameters) };
    inline SinkApiDestinationParameters& setQueryStringParameters(SinkApiDestinationParameters::QueryStringParameters && queryStringParameters) { DARABONBA_PTR_SET_RVALUE(queryStringParameters_, queryStringParameters) };


  protected:
    shared_ptr<SinkApiDestinationParameters::BodyParameters> bodyParameters_ {};
    shared_ptr<SinkApiDestinationParameters::HeaderParameters> headerParameters_ {};
    shared_ptr<string> name_ {};
    shared_ptr<SinkApiDestinationParameters::QueryStringParameters> queryStringParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
