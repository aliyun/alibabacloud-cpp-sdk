// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKeys, kmsKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    DescribeUserEncryptionKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEncryptionKeyListResponseBody() = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(const DescribeUserEncryptionKeyListResponseBody &) = default ;
    DescribeUserEncryptionKeyListResponseBody& operator=(DescribeUserEncryptionKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KmsKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KmsKeys& obj) { 
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      };
      friend void from_json(const Darabonba::Json& j, KmsKeys& obj) { 
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
      virtual bool empty() const override { return this->keyId_ == nullptr; };
      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline KmsKeys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    protected:
      shared_ptr<string> keyId_ {};
    };

    virtual bool empty() const override { return this->kmsKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // kmsKeys Field Functions 
    bool hasKmsKeys() const { return this->kmsKeys_ != nullptr;};
    void deleteKmsKeys() { this->kmsKeys_ = nullptr;};
    inline const vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys> & getKmsKeys() const { DARABONBA_PTR_GET_CONST(kmsKeys_, vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys>) };
    inline vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys> getKmsKeys() { DARABONBA_PTR_GET(kmsKeys_, vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys>) };
    inline DescribeUserEncryptionKeyListResponseBody& setKmsKeys(const vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys> & kmsKeys) { DARABONBA_PTR_SET_VALUE(kmsKeys_, kmsKeys) };
    inline DescribeUserEncryptionKeyListResponseBody& setKmsKeys(vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys> && kmsKeys) { DARABONBA_PTR_SET_RVALUE(kmsKeys_, kmsKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEncryptionKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeUserEncryptionKeyListResponseBody::KmsKeys>> kmsKeys_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
