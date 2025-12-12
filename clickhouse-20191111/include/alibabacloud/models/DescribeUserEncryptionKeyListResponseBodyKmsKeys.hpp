// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODYKMSKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODYKMSKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeUserEncryptionKeyListResponseBodyKmsKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBodyKmsKeys& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBodyKmsKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    DescribeUserEncryptionKeyListResponseBodyKmsKeys() = default ;
    DescribeUserEncryptionKeyListResponseBodyKmsKeys(const DescribeUserEncryptionKeyListResponseBodyKmsKeys &) = default ;
    DescribeUserEncryptionKeyListResponseBodyKmsKeys(DescribeUserEncryptionKeyListResponseBodyKmsKeys &&) = default ;
    DescribeUserEncryptionKeyListResponseBodyKmsKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBodyKmsKeys() = default ;
    DescribeUserEncryptionKeyListResponseBodyKmsKeys& operator=(const DescribeUserEncryptionKeyListResponseBodyKmsKeys &) = default ;
    DescribeUserEncryptionKeyListResponseBodyKmsKeys& operator=(DescribeUserEncryptionKeyListResponseBodyKmsKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeUserEncryptionKeyListResponseBodyKmsKeys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
