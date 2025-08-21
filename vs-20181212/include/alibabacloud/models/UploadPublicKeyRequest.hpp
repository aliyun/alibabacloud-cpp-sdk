// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADPUBLICKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADPUBLICKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class UploadPublicKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadPublicKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadPublicKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
    };
    UploadPublicKeyRequest() = default ;
    UploadPublicKeyRequest(const UploadPublicKeyRequest &) = default ;
    UploadPublicKeyRequest(UploadPublicKeyRequest &&) = default ;
    UploadPublicKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadPublicKeyRequest() = default ;
    UploadPublicKeyRequest& operator=(const UploadPublicKeyRequest &) = default ;
    UploadPublicKeyRequest& operator=(UploadPublicKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->description_ != nullptr && this->keyGroup_ != nullptr && this->keyName_ != nullptr && this->keyType_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UploadPublicKeyRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UploadPublicKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyGroup Field Functions 
    bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
    void deleteKeyGroup() { this->keyGroup_ = nullptr;};
    inline string keyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
    inline UploadPublicKeyRequest& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline UploadPublicKeyRequest& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline UploadPublicKeyRequest& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> keyGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyName_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
