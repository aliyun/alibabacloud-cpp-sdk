// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEREGISTRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEREGISTRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class FaceRegistrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceRegistrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(PersonLibrary, personLibrary_);
      DARABONBA_PTR_TO_JSON(PersonName, personName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceRegistrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(PersonLibrary, personLibrary_);
      DARABONBA_PTR_FROM_JSON(PersonName, personName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    FaceRegistrationRequest() = default ;
    FaceRegistrationRequest(const FaceRegistrationRequest &) = default ;
    FaceRegistrationRequest(FaceRegistrationRequest &&) = default ;
    FaceRegistrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceRegistrationRequest() = default ;
    FaceRegistrationRequest& operator=(const FaceRegistrationRequest &) = default ;
    FaceRegistrationRequest& operator=(FaceRegistrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->imageIds_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->personId_ != nullptr && this->personLibrary_ != nullptr
        && this->personName_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline FaceRegistrationRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string imageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline FaceRegistrationRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline FaceRegistrationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline FaceRegistrationRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string personId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline FaceRegistrationRequest& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // personLibrary Field Functions 
    bool hasPersonLibrary() const { return this->personLibrary_ != nullptr;};
    void deletePersonLibrary() { this->personLibrary_ = nullptr;};
    inline string personLibrary() const { DARABONBA_PTR_GET_DEFAULT(personLibrary_, "") };
    inline FaceRegistrationRequest& setPersonLibrary(string personLibrary) { DARABONBA_PTR_SET_VALUE(personLibrary_, personLibrary) };


    // personName Field Functions 
    bool hasPersonName() const { return this->personName_ != nullptr;};
    void deletePersonName() { this->personName_ = nullptr;};
    inline string personName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
    inline FaceRegistrationRequest& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline FaceRegistrationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline FaceRegistrationRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> imageIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> personId_ = nullptr;
    std::shared_ptr<string> personLibrary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> personName_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
