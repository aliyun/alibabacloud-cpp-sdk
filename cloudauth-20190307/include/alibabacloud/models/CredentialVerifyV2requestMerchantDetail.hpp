// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2REQUESTMERCHANTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2REQUESTMERCHANTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyV2RequestMerchantDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyV2RequestMerchantDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyV2RequestMerchantDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CredentialVerifyV2RequestMerchantDetail() = default ;
    CredentialVerifyV2RequestMerchantDetail(const CredentialVerifyV2RequestMerchantDetail &) = default ;
    CredentialVerifyV2RequestMerchantDetail(CredentialVerifyV2RequestMerchantDetail &&) = default ;
    CredentialVerifyV2RequestMerchantDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyV2RequestMerchantDetail() = default ;
    CredentialVerifyV2RequestMerchantDetail& operator=(const CredentialVerifyV2RequestMerchantDetail &) = default ;
    CredentialVerifyV2RequestMerchantDetail& operator=(CredentialVerifyV2RequestMerchantDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CredentialVerifyV2RequestMerchantDetail& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CredentialVerifyV2RequestMerchantDetail& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Keyword key.
    std::shared_ptr<string> key_ = nullptr;
    // Keyword value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
