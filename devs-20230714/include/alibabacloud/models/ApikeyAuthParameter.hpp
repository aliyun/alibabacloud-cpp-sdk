// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYAUTHPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_APIKEYAUTHPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class APIKeyAuthParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const APIKeyAuthParameter& obj) { 
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(in, in_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, APIKeyAuthParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(in, in_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    APIKeyAuthParameter() = default ;
    APIKeyAuthParameter(const APIKeyAuthParameter &) = default ;
    APIKeyAuthParameter(APIKeyAuthParameter &&) = default ;
    APIKeyAuthParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~APIKeyAuthParameter() = default ;
    APIKeyAuthParameter& operator=(const APIKeyAuthParameter &) = default ;
    APIKeyAuthParameter& operator=(APIKeyAuthParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encrypted_ != nullptr
        && this->in_ != nullptr && this->key_ != nullptr && this->value_ != nullptr; };
    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline APIKeyAuthParameter& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline string in() const { DARABONBA_PTR_GET_DEFAULT(in_, "") };
    inline APIKeyAuthParameter& setIn(string in) { DARABONBA_PTR_SET_VALUE(in_, in) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline APIKeyAuthParameter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline APIKeyAuthParameter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<string> in_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
