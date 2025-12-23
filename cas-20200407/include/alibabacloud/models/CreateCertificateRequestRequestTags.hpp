// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEREQUESTREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEREQUESTREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCertificateRequestRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateRequestRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateRequestRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCertificateRequestRequestTags() = default ;
    CreateCertificateRequestRequestTags(const CreateCertificateRequestRequestTags &) = default ;
    CreateCertificateRequestRequestTags(CreateCertificateRequestRequestTags &&) = default ;
    CreateCertificateRequestRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateRequestRequestTags() = default ;
    CreateCertificateRequestRequestTags& operator=(const CreateCertificateRequestRequestTags &) = default ;
    CreateCertificateRequestRequestTags& operator=(CreateCertificateRequestRequestTags &&) = default ;
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
    inline CreateCertificateRequestRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCertificateRequestRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key of the resource. You can specify up to 20 tag keys. You cannot specify empty strings as tag keys.
    // 
    // The key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
    // 
    // >  You must specify at least one of **Tag.N** (**Tag.N.Key** and **Tag.N.Value**).
    std::shared_ptr<string> key_ = nullptr;
    // The tag value. You can specify up to 20 tag values. The tag value can be an empty string.
    // 
    // The tag value cannot exceed 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The key must start with a letter but cannot start with `aliyun` or `acs:`. The key cannot contain `http://` or `https://`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
