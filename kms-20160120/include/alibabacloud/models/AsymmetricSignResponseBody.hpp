// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYMMETRICSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASYMMETRICSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class AsymmetricSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsymmetricSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AsymmetricSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AsymmetricSignResponseBody() = default ;
    AsymmetricSignResponseBody(const AsymmetricSignResponseBody &) = default ;
    AsymmetricSignResponseBody(AsymmetricSignResponseBody &&) = default ;
    AsymmetricSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsymmetricSignResponseBody() = default ;
    AsymmetricSignResponseBody& operator=(const AsymmetricSignResponseBody &) = default ;
    AsymmetricSignResponseBody& operator=(AsymmetricSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && return this->keyVersionId_ == nullptr && return this->requestId_ == nullptr && return this->value_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline AsymmetricSignResponseBody& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline AsymmetricSignResponseBody& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AsymmetricSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AsymmetricSignResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The version ID of the CMK. The ID must be globally unique.
    std::shared_ptr<string> keyId_ = nullptr;
    // The digest that is generated for the original message by using a hash algorithm. The hash algorithm is specified by the Algorithm parameter.
    // 
    // > * The value is encoded in Base64.
    // > * For more information about how to calculate message digests, see the **Preprocess signature: compute a message digest** section of the [Generate and verify a signature by using an asymmetric CMK](https://help.aliyun.com/document_detail/148146.html) topic.
    std::shared_ptr<string> keyVersionId_ = nullptr;
    // The calculated signature.
    // 
    // >  The value is encoded in Base64.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    // 
    // >  If you set the KeyId parameter in the request to an alias, the ID of the CMK to which the alias is bound is returned.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
