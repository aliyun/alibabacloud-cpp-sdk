// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODYPUBLICKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeysResponseBodyPublicKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeysResponseBodyPublicKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
    };
    ListAICPublicKeysResponseBodyPublicKeys() = default ;
    ListAICPublicKeysResponseBodyPublicKeys(const ListAICPublicKeysResponseBodyPublicKeys &) = default ;
    ListAICPublicKeysResponseBodyPublicKeys(ListAICPublicKeysResponseBodyPublicKeys &&) = default ;
    ListAICPublicKeysResponseBodyPublicKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeysResponseBodyPublicKeys() = default ;
    ListAICPublicKeysResponseBodyPublicKeys& operator=(const ListAICPublicKeysResponseBodyPublicKeys &) = default ;
    ListAICPublicKeysResponseBodyPublicKeys& operator=(ListAICPublicKeysResponseBodyPublicKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->creationTime_ == nullptr && return this->description_ == nullptr && return this->keyGroup_ == nullptr && return this->keyName_ == nullptr && return this->keyType_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string keyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline ListAICPublicKeysResponseBodyPublicKeys& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


  protected:
    // Public key content
    std::shared_ptr<string> content_ = nullptr;
    // The creation time of the voiceprint.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Public key description
    std::shared_ptr<string> description_ = nullptr;
    // Public key grouping
    std::shared_ptr<string> keyGroup_ = nullptr;
    // Public key name
    std::shared_ptr<string> keyName_ = nullptr;
    // Public key type
    std::shared_ptr<string> keyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
