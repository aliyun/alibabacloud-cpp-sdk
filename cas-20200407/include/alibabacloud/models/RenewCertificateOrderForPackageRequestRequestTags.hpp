// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWCERTIFICATEORDERFORPACKAGEREQUESTREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_RENEWCERTIFICATEORDERFORPACKAGEREQUESTREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class RenewCertificateOrderForPackageRequestRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewCertificateOrderForPackageRequestRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RenewCertificateOrderForPackageRequestRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    RenewCertificateOrderForPackageRequestRequestTags() = default ;
    RenewCertificateOrderForPackageRequestRequestTags(const RenewCertificateOrderForPackageRequestRequestTags &) = default ;
    RenewCertificateOrderForPackageRequestRequestTags(RenewCertificateOrderForPackageRequestRequestTags &&) = default ;
    RenewCertificateOrderForPackageRequestRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewCertificateOrderForPackageRequestRequestTags() = default ;
    RenewCertificateOrderForPackageRequestRequestTags& operator=(const RenewCertificateOrderForPackageRequestRequestTags &) = default ;
    RenewCertificateOrderForPackageRequestRequestTags& operator=(RenewCertificateOrderForPackageRequestRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RenewCertificateOrderForPackageRequestRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RenewCertificateOrderForPackageRequestRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
    // 
    // A tag key can be up to 128 characters in length. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the resource tag. A maximum of 20 tag values can be entered. If this value needs to be passed in, an empty string can be entered.
    // 
    // A maximum of 128 characters are supported, it cannot start with \\"aliyun\\" or \\"acs:\\", and it cannot contain \\"http://\\" or \\"https://\\".
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
