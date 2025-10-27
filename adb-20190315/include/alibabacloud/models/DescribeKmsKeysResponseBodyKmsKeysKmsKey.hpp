// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKMSKEYSKMSKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKMSKEYSKMSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeKmsKeysResponseBodyKmsKeysKmsKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBodyKmsKeysKmsKey& obj) { 
      DARABONBA_PTR_TO_JSON(KeyAlias, keyAlias_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBodyKmsKeysKmsKey& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyAlias, keyAlias_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    DescribeKmsKeysResponseBodyKmsKeysKmsKey() = default ;
    DescribeKmsKeysResponseBodyKmsKeysKmsKey(const DescribeKmsKeysResponseBodyKmsKeysKmsKey &) = default ;
    DescribeKmsKeysResponseBodyKmsKeysKmsKey(DescribeKmsKeysResponseBodyKmsKeysKmsKey &&) = default ;
    DescribeKmsKeysResponseBodyKmsKeysKmsKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysResponseBodyKmsKeysKmsKey() = default ;
    DescribeKmsKeysResponseBodyKmsKeysKmsKey& operator=(const DescribeKmsKeysResponseBodyKmsKeysKmsKey &) = default ;
    DescribeKmsKeysResponseBodyKmsKeysKmsKey& operator=(DescribeKmsKeysResponseBodyKmsKeysKmsKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyAlias_ == nullptr
        && return this->keyId_ == nullptr; };
    // keyAlias Field Functions 
    bool hasKeyAlias() const { return this->keyAlias_ != nullptr;};
    void deleteKeyAlias() { this->keyAlias_ = nullptr;};
    inline string keyAlias() const { DARABONBA_PTR_GET_DEFAULT(keyAlias_, "") };
    inline DescribeKmsKeysResponseBodyKmsKeysKmsKey& setKeyAlias(string keyAlias) { DARABONBA_PTR_SET_VALUE(keyAlias_, keyAlias) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeKmsKeysResponseBodyKmsKeysKmsKey& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The alias of the key.
    std::shared_ptr<string> keyAlias_ = nullptr;
    // The ID of the key.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
