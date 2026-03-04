// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EMBEDDINGTRANSFORMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_EMBEDDINGTRANSFORMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EmbeddingTransformParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EmbeddingTransformParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(EmbeddingData, embeddingData_);
      DARABONBA_PTR_TO_JSON(EmbeddingModel, embeddingModel_);
    };
    friend void from_json(const Darabonba::Json& j, EmbeddingTransformParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(EmbeddingData, embeddingData_);
      DARABONBA_PTR_FROM_JSON(EmbeddingModel, embeddingModel_);
    };
    EmbeddingTransformParameters() = default ;
    EmbeddingTransformParameters(const EmbeddingTransformParameters &) = default ;
    EmbeddingTransformParameters(EmbeddingTransformParameters &&) = default ;
    EmbeddingTransformParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EmbeddingTransformParameters() = default ;
    EmbeddingTransformParameters& operator=(const EmbeddingTransformParameters &) = default ;
    EmbeddingTransformParameters& operator=(EmbeddingTransformParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EmbeddingData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingData& obj) { 
        DARABONBA_PTR_TO_JSON(Form, form_);
        DARABONBA_PTR_TO_JSON(Template, template_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingData& obj) { 
        DARABONBA_PTR_FROM_JSON(Form, form_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      EmbeddingData() = default ;
      EmbeddingData(const EmbeddingData &) = default ;
      EmbeddingData(EmbeddingData &&) = default ;
      EmbeddingData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingData() = default ;
      EmbeddingData& operator=(const EmbeddingData &) = default ;
      EmbeddingData& operator=(EmbeddingData &&) = default ;
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
      inline EmbeddingData& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline EmbeddingData& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline EmbeddingData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> form_ {};
      shared_ptr<string> template_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->embeddingData_ == nullptr && this->embeddingModel_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline EmbeddingTransformParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // embeddingData Field Functions 
    bool hasEmbeddingData() const { return this->embeddingData_ != nullptr;};
    void deleteEmbeddingData() { this->embeddingData_ = nullptr;};
    inline const EmbeddingTransformParameters::EmbeddingData & getEmbeddingData() const { DARABONBA_PTR_GET_CONST(embeddingData_, EmbeddingTransformParameters::EmbeddingData) };
    inline EmbeddingTransformParameters::EmbeddingData getEmbeddingData() { DARABONBA_PTR_GET(embeddingData_, EmbeddingTransformParameters::EmbeddingData) };
    inline EmbeddingTransformParameters& setEmbeddingData(const EmbeddingTransformParameters::EmbeddingData & embeddingData) { DARABONBA_PTR_SET_VALUE(embeddingData_, embeddingData) };
    inline EmbeddingTransformParameters& setEmbeddingData(EmbeddingTransformParameters::EmbeddingData && embeddingData) { DARABONBA_PTR_SET_RVALUE(embeddingData_, embeddingData) };


    // embeddingModel Field Functions 
    bool hasEmbeddingModel() const { return this->embeddingModel_ != nullptr;};
    void deleteEmbeddingModel() { this->embeddingModel_ = nullptr;};
    inline string getEmbeddingModel() const { DARABONBA_PTR_GET_DEFAULT(embeddingModel_, "") };
    inline EmbeddingTransformParameters& setEmbeddingModel(string embeddingModel) { DARABONBA_PTR_SET_VALUE(embeddingModel_, embeddingModel) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<EmbeddingTransformParameters::EmbeddingData> embeddingData_ {};
    shared_ptr<string> embeddingModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
