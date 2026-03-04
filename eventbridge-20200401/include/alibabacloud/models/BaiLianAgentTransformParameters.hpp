// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BAILIANAGENTTRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_BAILIANAGENTTRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class BaiLianAgentTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BaiLianAgentTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_TO_JSON(TokenPerMinute, tokenPerMinute_);
    };
    friend void from_json(const Darabonba::Json& j, BaiLianAgentTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(RequestPerMinute, requestPerMinute_);
      DARABONBA_PTR_FROM_JSON(TokenPerMinute, tokenPerMinute_);
    };
    BaiLianAgentTransformParameters() = default ;
    BaiLianAgentTransformParameters(const BaiLianAgentTransformParameters &) = default ;
    BaiLianAgentTransformParameters(BaiLianAgentTransformParameters &&) = default ;
    BaiLianAgentTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BaiLianAgentTransformParameters() = default ;
    BaiLianAgentTransformParameters& operator=(const BaiLianAgentTransformParameters &) = default ;
    BaiLianAgentTransformParameters& operator=(BaiLianAgentTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Prompt : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Prompt& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Prompt& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Prompt() = default ;
      Prompt(const Prompt &) = default ;
      Prompt(Prompt &&) = default ;
      Prompt(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Prompt() = default ;
      Prompt& operator=(const Prompt &) = default ;
      Prompt& operator=(Prompt &&) = default ;
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
      inline Prompt& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Prompt& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Prompt& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->applicationId_ == nullptr && this->prompt_ == nullptr && this->requestPerMinute_ == nullptr && this->tokenPerMinute_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline BaiLianAgentTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BaiLianAgentTransformParameters& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline const BaiLianAgentTransformParameters::Prompt & getPrompt() const { DARABONBA_PTR_GET_CONST(prompt_, BaiLianAgentTransformParameters::Prompt) };
    inline BaiLianAgentTransformParameters::Prompt getPrompt() { DARABONBA_PTR_GET(prompt_, BaiLianAgentTransformParameters::Prompt) };
    inline BaiLianAgentTransformParameters& setPrompt(const BaiLianAgentTransformParameters::Prompt & prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };
    inline BaiLianAgentTransformParameters& setPrompt(BaiLianAgentTransformParameters::Prompt && prompt) { DARABONBA_PTR_SET_RVALUE(prompt_, prompt) };


    // requestPerMinute Field Functions 
    bool hasRequestPerMinute() const { return this->requestPerMinute_ != nullptr;};
    void deleteRequestPerMinute() { this->requestPerMinute_ = nullptr;};
    inline int64_t getRequestPerMinute() const { DARABONBA_PTR_GET_DEFAULT(requestPerMinute_, 0L) };
    inline BaiLianAgentTransformParameters& setRequestPerMinute(int64_t requestPerMinute) { DARABONBA_PTR_SET_VALUE(requestPerMinute_, requestPerMinute) };


    // tokenPerMinute Field Functions 
    bool hasTokenPerMinute() const { return this->tokenPerMinute_ != nullptr;};
    void deleteTokenPerMinute() { this->tokenPerMinute_ = nullptr;};
    inline int64_t getTokenPerMinute() const { DARABONBA_PTR_GET_DEFAULT(tokenPerMinute_, 0L) };
    inline BaiLianAgentTransformParameters& setTokenPerMinute(int64_t tokenPerMinute) { DARABONBA_PTR_SET_VALUE(tokenPerMinute_, tokenPerMinute) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<BaiLianAgentTransformParameters::Prompt> prompt_ {};
    shared_ptr<int64_t> requestPerMinute_ {};
    shared_ptr<int64_t> tokenPerMinute_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
