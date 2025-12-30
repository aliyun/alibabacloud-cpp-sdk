// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeKmsKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizeStatus, authorizeStatus_);
      DARABONBA_PTR_TO_JSON(Keys, keys_);
      DARABONBA_PTR_TO_JSON(KmsServiceStatus, kmsServiceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizeStatus, authorizeStatus_);
      DARABONBA_PTR_FROM_JSON(Keys, keys_);
      DARABONBA_PTR_FROM_JSON(KmsServiceStatus, kmsServiceStatus_);
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
    class Keys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Keys& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Keys& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Keys() = default ;
      Keys(const Keys &) = default ;
      Keys(Keys &&) = default ;
      Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Keys() = default ;
      Keys& operator=(const Keys &) = default ;
      Keys& operator=(Keys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->arn_ == nullptr && this->keyId_ == nullptr && this->type_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Keys& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Keys& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline Keys& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Keys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The alias of the key.
      shared_ptr<string> alias_ {};
      // The Alibaba Cloud Resource Name (ARN) of the key in KMS.
      shared_ptr<string> arn_ {};
      // The ID of the key.
      shared_ptr<string> keyId_ {};
      // The type of the key.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->authorizeStatus_ == nullptr
        && this->keys_ == nullptr && this->kmsServiceStatus_ == nullptr && this->requestId_ == nullptr; };
    // authorizeStatus Field Functions 
    bool hasAuthorizeStatus() const { return this->authorizeStatus_ != nullptr;};
    void deleteAuthorizeStatus() { this->authorizeStatus_ = nullptr;};
    inline string getAuthorizeStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizeStatus_, "") };
    inline DescribeKmsKeysResponseBody& setAuthorizeStatus(string authorizeStatus) { DARABONBA_PTR_SET_VALUE(authorizeStatus_, authorizeStatus) };


    // keys Field Functions 
    bool hasKeys() const { return this->keys_ != nullptr;};
    void deleteKeys() { this->keys_ = nullptr;};
    inline const vector<DescribeKmsKeysResponseBody::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<DescribeKmsKeysResponseBody::Keys>) };
    inline vector<DescribeKmsKeysResponseBody::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<DescribeKmsKeysResponseBody::Keys>) };
    inline DescribeKmsKeysResponseBody& setKeys(const vector<DescribeKmsKeysResponseBody::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
    inline DescribeKmsKeysResponseBody& setKeys(vector<DescribeKmsKeysResponseBody::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


    // kmsServiceStatus Field Functions 
    bool hasKmsServiceStatus() const { return this->kmsServiceStatus_ != nullptr;};
    void deleteKmsServiceStatus() { this->kmsServiceStatus_ = nullptr;};
    inline string getKmsServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(kmsServiceStatus_, "") };
    inline DescribeKmsKeysResponseBody& setKmsServiceStatus(string kmsServiceStatus) { DARABONBA_PTR_SET_VALUE(kmsServiceStatus_, kmsServiceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorization status.
    // 
    // Valid value:
    // 
    // *   not_authorized
    // *   authorized
    shared_ptr<string> authorizeStatus_ {};
    // Customer master key (CMK)
    shared_ptr<vector<DescribeKmsKeysResponseBody::Keys>> keys_ {};
    // Indicates whether KMS is activated.
    // 
    // Valid value:
    // 
    // *   disabled
    // *   enabled
    shared_ptr<string> kmsServiceStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
