// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeKmsKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKmsKeysResponseBody() = default ;
    DescribeKmsKeysResponseBody(const DescribeKmsKeysResponseBody &) = default ;
    DescribeKmsKeysResponseBody(DescribeKmsKeysResponseBody &&) = default ;
    DescribeKmsKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysResponseBody() = default ;
    DescribeKmsKeysResponseBody& operator=(const DescribeKmsKeysResponseBody &) = default ;
    DescribeKmsKeysResponseBody& operator=(DescribeKmsKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KmsKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KmsKeys& obj) { 
        DARABONBA_PTR_TO_JSON(KeyAlias, keyAlias_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      };
      friend void from_json(const Darabonba::Json& j, KmsKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyAlias, keyAlias_);
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      };
      KmsKeys() = default ;
      KmsKeys(const KmsKeys &) = default ;
      KmsKeys(KmsKeys &&) = default ;
      KmsKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KmsKeys() = default ;
      KmsKeys& operator=(const KmsKeys &) = default ;
      KmsKeys& operator=(KmsKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyAlias_ == nullptr
        && this->keyId_ == nullptr; };
      // keyAlias Field Functions 
      bool hasKeyAlias() const { return this->keyAlias_ != nullptr;};
      void deleteKeyAlias() { this->keyAlias_ = nullptr;};
      inline string getKeyAlias() const { DARABONBA_PTR_GET_DEFAULT(keyAlias_, "") };
      inline KmsKeys& setKeyAlias(string keyAlias) { DARABONBA_PTR_SET_VALUE(keyAlias_, keyAlias) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline KmsKeys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    protected:
      // The alias of the key.
      shared_ptr<string> keyAlias_ {};
      // The key ID.
      shared_ptr<string> keyId_ {};
    };

    virtual bool empty() const override { return this->kmsKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // kmsKeys Field Functions 
    bool hasKmsKeys() const { return this->kmsKeys_ != nullptr;};
    void deleteKmsKeys() { this->kmsKeys_ = nullptr;};
    inline const vector<DescribeKmsKeysResponseBody::KmsKeys> & getKmsKeys() const { DARABONBA_PTR_GET_CONST(kmsKeys_, vector<DescribeKmsKeysResponseBody::KmsKeys>) };
    inline vector<DescribeKmsKeysResponseBody::KmsKeys> getKmsKeys() { DARABONBA_PTR_GET(kmsKeys_, vector<DescribeKmsKeysResponseBody::KmsKeys>) };
    inline DescribeKmsKeysResponseBody& setKmsKeys(const vector<DescribeKmsKeysResponseBody::KmsKeys> & kmsKeys) { DARABONBA_PTR_SET_VALUE(kmsKeys_, kmsKeys) };
    inline DescribeKmsKeysResponseBody& setKmsKeys(vector<DescribeKmsKeysResponseBody::KmsKeys> && kmsKeys) { DARABONBA_PTR_SET_RVALUE(kmsKeys_, kmsKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The KMS keys.
    shared_ptr<vector<DescribeKmsKeysResponseBody::KmsKeys>> kmsKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
