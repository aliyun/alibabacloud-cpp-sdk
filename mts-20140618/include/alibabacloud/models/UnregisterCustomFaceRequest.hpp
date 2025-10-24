// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNREGISTERCUSTOMFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNREGISTERCUSTOMFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UnregisterCustomFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnregisterCustomFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UnregisterCustomFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UnregisterCustomFaceRequest() = default ;
    UnregisterCustomFaceRequest(const UnregisterCustomFaceRequest &) = default ;
    UnregisterCustomFaceRequest(UnregisterCustomFaceRequest &&) = default ;
    UnregisterCustomFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnregisterCustomFaceRequest() = default ;
    UnregisterCustomFaceRequest& operator=(const UnregisterCustomFaceRequest &) = default ;
    UnregisterCustomFaceRequest& operator=(UnregisterCustomFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->faceId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->personId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline UnregisterCustomFaceRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline UnregisterCustomFaceRequest& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UnregisterCustomFaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UnregisterCustomFaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string personId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline UnregisterCustomFaceRequest& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UnregisterCustomFaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UnregisterCustomFaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the figure library. The ID is used to uniquely identify a figure library. You can specify the ID of a custom figure library. Make sure that the ID is unique. If you set this parameter to the ID of a system figure library, the system figure library is used. The ID can be up to 120 characters in length and is not case-sensitive. You can call the [ListCustomPersons](https://help.aliyun.com/document_detail/187787.html) operation to query the figure library ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The ID of the face. The ID is used to uniquely identify a face. Make sure that the ID is unique. The ID can be up to 120 characters in length and is not case-sensitive. You can call the [ListCustomPersons](https://help.aliyun.com/document_detail/187787.html) operation to query the face ID. If you set this parameter to ALL, all the faces associated with the specified figure are deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> faceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the figure. The ID is used to uniquely identify a custom figure. Make sure that the ID is unique. The ID can be up to 120 characters in length and is not case-sensitive. You can call the [ListCustomPersons](https://help.aliyun.com/document_detail/187787.html) operation to query the figure ID. If you set this parameter to ALL, all the faces in the specified figure library are deleted, and the custom figure library is deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> personId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
