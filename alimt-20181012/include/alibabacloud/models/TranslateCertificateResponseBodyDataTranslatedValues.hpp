// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATECERTIFICATERESPONSEBODYDATATRANSLATEDVALUES_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATECERTIFICATERESPONSEBODYDATATRANSLATEDVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateCertificateResponseBodyDataTranslatedValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateCertificateResponseBodyDataTranslatedValues& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(KeyTranslation, keyTranslation_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueTranslation, valueTranslation_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateCertificateResponseBodyDataTranslatedValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(KeyTranslation, keyTranslation_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueTranslation, valueTranslation_);
    };
    TranslateCertificateResponseBodyDataTranslatedValues() = default ;
    TranslateCertificateResponseBodyDataTranslatedValues(const TranslateCertificateResponseBodyDataTranslatedValues &) = default ;
    TranslateCertificateResponseBodyDataTranslatedValues(TranslateCertificateResponseBodyDataTranslatedValues &&) = default ;
    TranslateCertificateResponseBodyDataTranslatedValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateCertificateResponseBodyDataTranslatedValues() = default ;
    TranslateCertificateResponseBodyDataTranslatedValues& operator=(const TranslateCertificateResponseBodyDataTranslatedValues &) = default ;
    TranslateCertificateResponseBodyDataTranslatedValues& operator=(TranslateCertificateResponseBodyDataTranslatedValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->keyTranslation_ == nullptr && return this->value_ == nullptr && return this->valueTranslation_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline TranslateCertificateResponseBodyDataTranslatedValues& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyTranslation Field Functions 
    bool hasKeyTranslation() const { return this->keyTranslation_ != nullptr;};
    void deleteKeyTranslation() { this->keyTranslation_ = nullptr;};
    inline string keyTranslation() const { DARABONBA_PTR_GET_DEFAULT(keyTranslation_, "") };
    inline TranslateCertificateResponseBodyDataTranslatedValues& setKeyTranslation(string keyTranslation) { DARABONBA_PTR_SET_VALUE(keyTranslation_, keyTranslation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TranslateCertificateResponseBodyDataTranslatedValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueTranslation Field Functions 
    bool hasValueTranslation() const { return this->valueTranslation_ != nullptr;};
    void deleteValueTranslation() { this->valueTranslation_ = nullptr;};
    inline string valueTranslation() const { DARABONBA_PTR_GET_DEFAULT(valueTranslation_, "") };
    inline TranslateCertificateResponseBodyDataTranslatedValues& setValueTranslation(string valueTranslation) { DARABONBA_PTR_SET_VALUE(valueTranslation_, valueTranslation) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> keyTranslation_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueTranslation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
