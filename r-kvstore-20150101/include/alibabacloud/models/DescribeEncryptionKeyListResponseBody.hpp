// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENCRYPTIONKEYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeEncryptionKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyIds, keyIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEncryptionKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyIds, keyIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEncryptionKeyListResponseBody() = default ;
    DescribeEncryptionKeyListResponseBody(const DescribeEncryptionKeyListResponseBody &) = default ;
    DescribeEncryptionKeyListResponseBody(DescribeEncryptionKeyListResponseBody &&) = default ;
    DescribeEncryptionKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEncryptionKeyListResponseBody() = default ;
    DescribeEncryptionKeyListResponseBody& operator=(const DescribeEncryptionKeyListResponseBody &) = default ;
    DescribeEncryptionKeyListResponseBody& operator=(DescribeEncryptionKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyIds& obj) { 
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      };
      friend void from_json(const Darabonba::Json& j, KeyIds& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      };
      KeyIds() = default ;
      KeyIds(const KeyIds &) = default ;
      KeyIds(KeyIds &&) = default ;
      KeyIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyIds() = default ;
      KeyIds& operator=(const KeyIds &) = default ;
      KeyIds& operator=(KeyIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyId_ == nullptr; };
      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline const vector<string> & getKeyId() const { DARABONBA_PTR_GET_CONST(keyId_, vector<string>) };
      inline vector<string> getKeyId() { DARABONBA_PTR_GET(keyId_, vector<string>) };
      inline KeyIds& setKeyId(const vector<string> & keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };
      inline KeyIds& setKeyId(vector<string> && keyId) { DARABONBA_PTR_SET_RVALUE(keyId_, keyId) };


    protected:
      shared_ptr<vector<string>> keyId_ {};
    };

    virtual bool empty() const override { return this->keyIds_ == nullptr
        && this->requestId_ == nullptr; };
    // keyIds Field Functions 
    bool hasKeyIds() const { return this->keyIds_ != nullptr;};
    void deleteKeyIds() { this->keyIds_ = nullptr;};
    inline const DescribeEncryptionKeyListResponseBody::KeyIds & getKeyIds() const { DARABONBA_PTR_GET_CONST(keyIds_, DescribeEncryptionKeyListResponseBody::KeyIds) };
    inline DescribeEncryptionKeyListResponseBody::KeyIds getKeyIds() { DARABONBA_PTR_GET(keyIds_, DescribeEncryptionKeyListResponseBody::KeyIds) };
    inline DescribeEncryptionKeyListResponseBody& setKeyIds(const DescribeEncryptionKeyListResponseBody::KeyIds & keyIds) { DARABONBA_PTR_SET_VALUE(keyIds_, keyIds) };
    inline DescribeEncryptionKeyListResponseBody& setKeyIds(DescribeEncryptionKeyListResponseBody::KeyIds && keyIds) { DARABONBA_PTR_SET_RVALUE(keyIds_, keyIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEncryptionKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The custom keys that are available in the region.
    shared_ptr<DescribeEncryptionKeyListResponseBody::KeyIds> keyIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
