// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODYKEYVERSION_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODYKEYVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateKeyVersionResponseBodyKeyVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyVersionResponseBodyKeyVersion& obj) { 
      DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyVersionId, keyVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyVersionResponseBodyKeyVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyVersionId, keyVersionId_);
    };
    CreateKeyVersionResponseBodyKeyVersion() = default ;
    CreateKeyVersionResponseBodyKeyVersion(const CreateKeyVersionResponseBodyKeyVersion &) = default ;
    CreateKeyVersionResponseBodyKeyVersion(CreateKeyVersionResponseBodyKeyVersion &&) = default ;
    CreateKeyVersionResponseBodyKeyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyVersionResponseBodyKeyVersion() = default ;
    CreateKeyVersionResponseBodyKeyVersion& operator=(const CreateKeyVersionResponseBodyKeyVersion &) = default ;
    CreateKeyVersionResponseBodyKeyVersion& operator=(CreateKeyVersionResponseBodyKeyVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationDate_ == nullptr
        && return this->keyId_ == nullptr && return this->keyVersionId_ == nullptr; };
    // creationDate Field Functions 
    bool hasCreationDate() const { return this->creationDate_ != nullptr;};
    void deleteCreationDate() { this->creationDate_ = nullptr;};
    inline string creationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
    inline CreateKeyVersionResponseBodyKeyVersion& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline CreateKeyVersionResponseBodyKeyVersion& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyVersionId Field Functions 
    bool hasKeyVersionId() const { return this->keyVersionId_ != nullptr;};
    void deleteKeyVersionId() { this->keyVersionId_ = nullptr;};
    inline string keyVersionId() const { DARABONBA_PTR_GET_DEFAULT(keyVersionId_, "") };
    inline CreateKeyVersionResponseBodyKeyVersion& setKeyVersionId(string keyVersionId) { DARABONBA_PTR_SET_VALUE(keyVersionId_, keyVersionId) };


  protected:
    // The date and time when the version was created. The time is displayed in UTC.
    std::shared_ptr<string> creationDate_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    std::shared_ptr<string> keyId_ = nullptr;
    // The ID of the version.
    std::shared_ptr<string> keyVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
