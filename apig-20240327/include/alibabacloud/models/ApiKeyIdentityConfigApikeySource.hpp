// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIGAPIKEYSOURCE_HPP_
#define ALIBABACLOUD_MODELS_APIKEYIDENTITYCONFIGAPIKEYSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiKeyIdentityConfigApikeySource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyIdentityConfigApikeySource& obj) { 
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyIdentityConfigApikeySource& obj) { 
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ApiKeyIdentityConfigApikeySource() = default ;
    ApiKeyIdentityConfigApikeySource(const ApiKeyIdentityConfigApikeySource &) = default ;
    ApiKeyIdentityConfigApikeySource(ApiKeyIdentityConfigApikeySource &&) = default ;
    ApiKeyIdentityConfigApikeySource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyIdentityConfigApikeySource() = default ;
    ApiKeyIdentityConfigApikeySource& operator=(const ApiKeyIdentityConfigApikeySource &) = default ;
    ApiKeyIdentityConfigApikeySource& operator=(ApiKeyIdentityConfigApikeySource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr
        && return this->value_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ApiKeyIdentityConfigApikeySource& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ApiKeyIdentityConfigApikeySource& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
