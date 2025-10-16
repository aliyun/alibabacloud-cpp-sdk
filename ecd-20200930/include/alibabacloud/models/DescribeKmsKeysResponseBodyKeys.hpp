// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeKmsKeysResponseBodyKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBodyKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeKmsKeysResponseBodyKeys() = default ;
    DescribeKmsKeysResponseBodyKeys(const DescribeKmsKeysResponseBodyKeys &) = default ;
    DescribeKmsKeysResponseBodyKeys(DescribeKmsKeysResponseBodyKeys &&) = default ;
    DescribeKmsKeysResponseBodyKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysResponseBodyKeys() = default ;
    DescribeKmsKeysResponseBodyKeys& operator=(const DescribeKmsKeysResponseBodyKeys &) = default ;
    DescribeKmsKeysResponseBodyKeys& operator=(DescribeKmsKeysResponseBodyKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->arn_ == nullptr && return this->keyId_ == nullptr && return this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeKmsKeysResponseBodyKeys& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeKmsKeysResponseBodyKeys& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeKmsKeysResponseBodyKeys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeKmsKeysResponseBodyKeys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alias of the key.
    std::shared_ptr<string> alias_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the key in KMS.
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the key.
    std::shared_ptr<string> keyId_ = nullptr;
    // The type of the key.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
