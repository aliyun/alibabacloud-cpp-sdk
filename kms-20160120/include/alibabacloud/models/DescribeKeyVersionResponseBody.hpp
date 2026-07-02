// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKeyVersionResponseBody() = default ;
    DescribeKeyVersionResponseBody(const DescribeKeyVersionResponseBody &) = default ;
    DescribeKeyVersionResponseBody(DescribeKeyVersionResponseBody &&) = default ;
    DescribeKeyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyVersionResponseBody() = default ;
    DescribeKeyVersionResponseBody& operator=(const DescribeKeyVersionResponseBody &) = default ;
    DescribeKeyVersionResponseBody& operator=(DescribeKeyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyVersion& obj) { 
        DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
      };
      friend void from_json(const Darabonba::Json& j, KeyVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
      };
      KeyVersion() = default ;
      KeyVersion(const KeyVersion &) = default ;
      KeyVersion(KeyVersion &&) = default ;
      KeyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyVersion() = default ;
      KeyVersion& operator=(const KeyVersion &) = default ;
      KeyVersion& operator=(KeyVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationDate_ == nullptr
        && this->keyId_ == nullptr && this->keyVersionId_ == nullptr; };
      // creationDate Field Functions 
      bool hasCreationDate() const { return this->creationDate_ != nullptr;};
      void deleteCreationDate() { this->creationDate_ = nullptr;};
      inline string getCreationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
      inline KeyVersion& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline KeyVersion& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // keyVersionId Field Functions 
      bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
      void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
      inline string getKeyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
      inline KeyVersion& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


    protected:
      // The date and time when the CMK version was created. The time is displayed in UTC.
      shared_ptr<string> creationDate_ {};
      // The globally unique ID of the CMK.
      // 
      // > If you set the KeyId parameter in the request to an alias of the CMK, the ID of the CMK to which the alias is bound is returned.
      shared_ptr<string> keyId_ {};
      // The globally unique ID of the CMK version.
      shared_ptr<string> keyVersionId_ {};
    };

    virtual bool empty() const override { return this->keyVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline const DescribeKeyVersionResponseBody::KeyVersion & getKeyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, DescribeKeyVersionResponseBody::KeyVersion) };
    inline DescribeKeyVersionResponseBody::KeyVersion getKeyVersion() { DARABONBA_PTR_GET(keyVersion_, DescribeKeyVersionResponseBody::KeyVersion) };
    inline DescribeKeyVersionResponseBody& setKeyVersion(const DescribeKeyVersionResponseBody::KeyVersion & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
    inline DescribeKeyVersionResponseBody& setKeyVersion(DescribeKeyVersionResponseBody::KeyVersion && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the CMK version.
    shared_ptr<DescribeKeyVersionResponseBody::KeyVersion> keyVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
