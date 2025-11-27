// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListPublicKeysResponseBodyPublicKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
    };
    ListPublicKeysResponseBodyPublicKeys() = default ;
    ListPublicKeysResponseBodyPublicKeys(const ListPublicKeysResponseBodyPublicKeys &) = default ;
    ListPublicKeysResponseBodyPublicKeys(ListPublicKeysResponseBodyPublicKeys &&) = default ;
    ListPublicKeysResponseBodyPublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicKeysResponseBodyPublicKeys() = default ;
    ListPublicKeysResponseBodyPublicKeys& operator=(const ListPublicKeysResponseBodyPublicKeys &) = default ;
    ListPublicKeysResponseBodyPublicKeys& operator=(ListPublicKeysResponseBodyPublicKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->description_ == nullptr && return this->keyGroup_ == nullptr && return this->keyName_ == nullptr && return this->keyType_ == nullptr && return this->uploadTime_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string keyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline string uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
    inline ListPublicKeysResponseBodyPublicKeys& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> keyGroup_ = nullptr;
    std::shared_ptr<string> keyName_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
    std::shared_ptr<string> uploadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
