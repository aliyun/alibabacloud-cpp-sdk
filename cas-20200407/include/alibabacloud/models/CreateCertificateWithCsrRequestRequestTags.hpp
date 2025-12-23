// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_CREATECERTIFICATEWITHCSRREQUESTREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCertificateWithCsrRequestRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCertificateWithCsrRequestRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCertificateWithCsrRequestRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateCertificateWithCsrRequestRequestTags() = default ;
    CreateCertificateWithCsrRequestRequestTags(const CreateCertificateWithCsrRequestRequestTags &) = default ;
    CreateCertificateWithCsrRequestRequestTags(CreateCertificateWithCsrRequestRequestTags &&) = default ;
    CreateCertificateWithCsrRequestRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCertificateWithCsrRequestRequestTags() = default ;
    CreateCertificateWithCsrRequestRequestTags& operator=(const CreateCertificateWithCsrRequestRequestTags &) = default ;
    CreateCertificateWithCsrRequestRequestTags& operator=(CreateCertificateWithCsrRequestRequestTags &&) = default ;
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
    inline CreateCertificateWithCsrRequestRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateCertificateWithCsrRequestRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
