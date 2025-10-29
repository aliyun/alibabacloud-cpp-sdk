// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiParameter& obj) { 
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(exampleValue, exampleValue_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(exampleValue, exampleValue_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    HttpApiParameter() = default ;
    HttpApiParameter(const HttpApiParameter &) = default ;
    HttpApiParameter(HttpApiParameter &&) = default ;
    HttpApiParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiParameter() = default ;
    HttpApiParameter& operator=(const HttpApiParameter &) = default ;
    HttpApiParameter& operator=(HttpApiParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->description_ == nullptr && return this->exampleValue_ == nullptr && return this->name_ == nullptr && return this->required_ == nullptr && return this->type_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline HttpApiParameter& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exampleValue Field Functions 
    bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
    void deleteExampleValue() { this->exampleValue_ = nullptr;};
    inline string exampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
    inline HttpApiParameter& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiParameter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline HttpApiParameter& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiParameter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> exampleValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
