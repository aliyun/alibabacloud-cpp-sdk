// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCUSTOMFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCUSTOMFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class RegisterCustomFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCustomFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(PersonName, personName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCustomFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(PersonName, personName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    RegisterCustomFaceRequest() = default ;
    RegisterCustomFaceRequest(const RegisterCustomFaceRequest &) = default ;
    RegisterCustomFaceRequest(RegisterCustomFaceRequest &&) = default ;
    RegisterCustomFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCustomFaceRequest() = default ;
    RegisterCustomFaceRequest& operator=(const RegisterCustomFaceRequest &) = default ;
    RegisterCustomFaceRequest& operator=(RegisterCustomFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->imageUrl_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->personId_ == nullptr && this->personName_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline RegisterCustomFaceRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline RegisterCustomFaceRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RegisterCustomFaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RegisterCustomFaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string getPersonId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline RegisterCustomFaceRequest& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // personName Field Functions 
    bool hasPersonName() const { return this->personName_ != nullptr;};
    void deletePersonName() { this->personName_ = nullptr;};
    inline string getPersonName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
    inline RegisterCustomFaceRequest& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RegisterCustomFaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RegisterCustomFaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the figure library in which you want to register a custom face. The ID is used to uniquely identify a figure library. You can specify the ID of a custom figure library. Make sure that the ID is unique and keep the ID for future API operation calls. If you set this parameter to the ID of a system figure library, the custom face is registered in the system figure library. The ID can be up to 120 characters in length and is not case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The URL of the facial image that you want to register for the specified figure. The image must contain only one face.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the figure for which you want to register a custom face. The ID is used to uniquely identify a figure. You can specify a figure ID. Make sure that the ID is unique and keep the ID for future API operation calls. The ID can be up to 120 characters in length and is not case-sensitive. The value returned is of the String type.
    // 
    // This parameter is required.
    shared_ptr<string> personId_ {};
    shared_ptr<string> personName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
