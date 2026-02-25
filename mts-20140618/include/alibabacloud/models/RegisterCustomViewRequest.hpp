// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCUSTOMVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCUSTOMVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class RegisterCustomViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCustomViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_TO_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LabelPrompt, labelPrompt_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCustomViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_FROM_JSON(CustomGroupId, customGroupId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LabelPrompt, labelPrompt_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RegisterCustomViewRequest() = default ;
    RegisterCustomViewRequest(const RegisterCustomViewRequest &) = default ;
    RegisterCustomViewRequest(RegisterCustomViewRequest &&) = default ;
    RegisterCustomViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCustomViewRequest() = default ;
    RegisterCustomViewRequest& operator=(const RegisterCustomViewRequest &) = default ;
    RegisterCustomViewRequest& operator=(RegisterCustomViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->customEntityId_ == nullptr && this->customGroupId_ == nullptr && this->imageUrl_ == nullptr && this->labelPrompt_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline RegisterCustomViewRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // customEntityId Field Functions 
    bool hasCustomEntityId() const { return this->customEntityId_ != nullptr;};
    void deleteCustomEntityId() { this->customEntityId_ = nullptr;};
    inline string getCustomEntityId() const { DARABONBA_PTR_GET_DEFAULT(customEntityId_, "") };
    inline RegisterCustomViewRequest& setCustomEntityId(string customEntityId) { DARABONBA_PTR_SET_VALUE(customEntityId_, customEntityId) };


    // customGroupId Field Functions 
    bool hasCustomGroupId() const { return this->customGroupId_ != nullptr;};
    void deleteCustomGroupId() { this->customGroupId_ = nullptr;};
    inline string getCustomGroupId() const { DARABONBA_PTR_GET_DEFAULT(customGroupId_, "") };
    inline RegisterCustomViewRequest& setCustomGroupId(string customGroupId) { DARABONBA_PTR_SET_VALUE(customGroupId_, customGroupId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline RegisterCustomViewRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labelPrompt Field Functions 
    bool hasLabelPrompt() const { return this->labelPrompt_ != nullptr;};
    void deleteLabelPrompt() { this->labelPrompt_ = nullptr;};
    inline string getLabelPrompt() const { DARABONBA_PTR_GET_DEFAULT(labelPrompt_, "") };
    inline RegisterCustomViewRequest& setLabelPrompt(string labelPrompt) { DARABONBA_PTR_SET_VALUE(labelPrompt_, labelPrompt) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RegisterCustomViewRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RegisterCustomViewRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RegisterCustomViewRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RegisterCustomViewRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // This parameter is required.
    shared_ptr<string> customEntityId_ {};
    // This parameter is required.
    shared_ptr<string> customGroupId_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> labelPrompt_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
