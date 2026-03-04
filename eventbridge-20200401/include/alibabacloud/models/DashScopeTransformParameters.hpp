// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DASHSCOPETRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DashScopeTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DashScopeTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_TO_JSON(StructuredOutputJsonSchema, structuredOutputJsonSchema_);
      DARABONBA_PTR_TO_JSON(TokenPerMinute, tokenPerMinute_);
    };
    friend void from_json(const Darabonba::Json& j, DashScopeTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_FROM_JSON(StructuredOutputJsonSchema, structuredOutputJsonSchema_);
      DARABONBA_PTR_FROM_JSON(TokenPerMinute, tokenPerMinute_);
    };
    DashScopeTransformParameters() = default ;
    DashScopeTransformParameters(const DashScopeTransformParameters &) = default ;
    DashScopeTransformParameters(DashScopeTransformParameters &&) = default ;
    DashScopeTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DashScopeTransformParameters() = default ;
    DashScopeTransformParameters& operator=(const DashScopeTransformParameters &) = default ;
    DashScopeTransformParameters& operator=(DashScopeTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->form_ == nullptr
        && this->role_ == nullptr && this->template_ == nullptr && this->value_ == nullptr; };
      // form Field Functions 
      bool hasForm() const { return this->form_ != nullptr;};
      void deleteForm() { this->form_ = nullptr;};
      inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
      inline Messages& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Messages& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Messages& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->messages_ == nullptr && this->model_ == nullptr && this->requestPerMinute_ == nullptr && this->structuredOutputJsonSchema_ == nullptr && this->tokenPerMinute_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DashScopeTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<DashScopeTransformParameters::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<DashScopeTransformParameters::Messages>) };
    inline vector<DashScopeTransformParameters::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<DashScopeTransformParameters::Messages>) };
    inline DashScopeTransformParameters& setMessages(const vector<DashScopeTransformParameters::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline DashScopeTransformParameters& setMessages(vector<DashScopeTransformParameters::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline DashScopeTransformParameters& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // requestPerMinute Field Functions 
    bool hasRequestPerMinute() const { return this->requestPerMinute_ != nullptr;};
    void deleteRequestPerMinute() { this->requestPerMinute_ = nullptr;};
    inline int64_t getRequestPerMinute() const { DARABONBA_PTR_GET_DEFAULT(requestPerMinute_, 0L) };
    inline DashScopeTransformParameters& setRequestPerMinute(int64_t requestPerMinute) { DARABONBA_PTR_SET_VALUE(requestPerMinute_, requestPerMinute) };


    // structuredOutputJsonSchema Field Functions 
    bool hasStructuredOutputJsonSchema() const { return this->structuredOutputJsonSchema_ != nullptr;};
    void deleteStructuredOutputJsonSchema() { this->structuredOutputJsonSchema_ = nullptr;};
    inline string getStructuredOutputJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(structuredOutputJsonSchema_, "") };
    inline DashScopeTransformParameters& setStructuredOutputJsonSchema(string structuredOutputJsonSchema) { DARABONBA_PTR_SET_VALUE(structuredOutputJsonSchema_, structuredOutputJsonSchema) };


    // tokenPerMinute Field Functions 
    bool hasTokenPerMinute() const { return this->tokenPerMinute_ != nullptr;};
    void deleteTokenPerMinute() { this->tokenPerMinute_ = nullptr;};
    inline int64_t getTokenPerMinute() const { DARABONBA_PTR_GET_DEFAULT(tokenPerMinute_, 0L) };
    inline DashScopeTransformParameters& setTokenPerMinute(int64_t tokenPerMinute) { DARABONBA_PTR_SET_VALUE(tokenPerMinute_, tokenPerMinute) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<vector<DashScopeTransformParameters::Messages>> messages_ {};
    shared_ptr<string> model_ {};
    shared_ptr<int64_t> requestPerMinute_ {};
    shared_ptr<string> structuredOutputJsonSchema_ {};
    shared_ptr<int64_t> tokenPerMinute_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
