// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateKeyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyVersionResponseBody() = default ;
    CreateKeyVersionResponseBody(const CreateKeyVersionResponseBody &) = default ;
    CreateKeyVersionResponseBody(CreateKeyVersionResponseBody &&) = default ;
    CreateKeyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyVersionResponseBody() = default ;
    CreateKeyVersionResponseBody& operator=(const CreateKeyVersionResponseBody &) = default ;
    CreateKeyVersionResponseBody& operator=(CreateKeyVersionResponseBody &&) = default ;
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
      // The date and time when the version was created. The time is displayed in UTC.
      shared_ptr<string> creationDate_ {};
      // The ID of the CMK. The ID must be globally unique.
      shared_ptr<string> keyId_ {};
      // The ID of the version.
      shared_ptr<string> keyVersionId_ {};
    };

    virtual bool empty() const override { return this->keyVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline const CreateKeyVersionResponseBody::KeyVersion & getKeyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, CreateKeyVersionResponseBody::KeyVersion) };
    inline CreateKeyVersionResponseBody::KeyVersion getKeyVersion() { DARABONBA_PTR_GET(keyVersion_, CreateKeyVersionResponseBody::KeyVersion) };
    inline CreateKeyVersionResponseBody& setKeyVersion(const CreateKeyVersionResponseBody::KeyVersion & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
    inline CreateKeyVersionResponseBody& setKeyVersion(CreateKeyVersionResponseBody::KeyVersion && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the version.
    shared_ptr<CreateKeyVersionResponseBody::KeyVersion> keyVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
