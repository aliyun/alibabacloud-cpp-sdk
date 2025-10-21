// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROPERTY_HPP_
#define ALIBABACLOUD_MODELS_PROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Property : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Property& obj) { 
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(definesFormat, definesFormat_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
    };
    friend void from_json(const Darabonba::Json& j, Property& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(definesFormat, definesFormat_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
    };
    Property() = default ;
    Property(const Property &) = default ;
    Property(Property &&) = default ;
    Property(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Property() = default ;
    Property& operator=(const Property &) = default ;
    Property& operator=(Property &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->definesFormat_ == nullptr && return this->description_ == nullptr && return this->key_ == nullptr && return this->required_ == nullptr && return this->sensitive_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline Property& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // definesFormat Field Functions 
    bool hasDefinesFormat() const { return this->definesFormat_ != nullptr;};
    void deleteDefinesFormat() { this->definesFormat_ = nullptr;};
    inline bool definesFormat() const { DARABONBA_PTR_GET_DEFAULT(definesFormat_, false) };
    inline Property& setDefinesFormat(bool definesFormat) { DARABONBA_PTR_SET_VALUE(definesFormat_, definesFormat) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Property& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline Property& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline Property& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool sensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline Property& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<bool> definesFormat_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<bool> sensitive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
