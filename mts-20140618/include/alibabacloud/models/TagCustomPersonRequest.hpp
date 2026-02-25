// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCUSTOMPERSONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAGCUSTOMPERSONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class TagCustomPersonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCustomPersonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryDescription, categoryDescription_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersonDescription, personDescription_);
      DARABONBA_PTR_TO_JSON(PersonId, personId_);
      DARABONBA_PTR_TO_JSON(PersonName, personName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, TagCustomPersonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryDescription, categoryDescription_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersonDescription, personDescription_);
      DARABONBA_PTR_FROM_JSON(PersonId, personId_);
      DARABONBA_PTR_FROM_JSON(PersonName, personName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    TagCustomPersonRequest() = default ;
    TagCustomPersonRequest(const TagCustomPersonRequest &) = default ;
    TagCustomPersonRequest(TagCustomPersonRequest &&) = default ;
    TagCustomPersonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCustomPersonRequest() = default ;
    TagCustomPersonRequest& operator=(const TagCustomPersonRequest &) = default ;
    TagCustomPersonRequest& operator=(TagCustomPersonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryDescription_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->personDescription_ == nullptr
        && this->personId_ == nullptr && this->personName_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // categoryDescription Field Functions 
    bool hasCategoryDescription() const { return this->categoryDescription_ != nullptr;};
    void deleteCategoryDescription() { this->categoryDescription_ = nullptr;};
    inline string getCategoryDescription() const { DARABONBA_PTR_GET_DEFAULT(categoryDescription_, "") };
    inline TagCustomPersonRequest& setCategoryDescription(string categoryDescription) { DARABONBA_PTR_SET_VALUE(categoryDescription_, categoryDescription) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline TagCustomPersonRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline TagCustomPersonRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline TagCustomPersonRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline TagCustomPersonRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // personDescription Field Functions 
    bool hasPersonDescription() const { return this->personDescription_ != nullptr;};
    void deletePersonDescription() { this->personDescription_ = nullptr;};
    inline string getPersonDescription() const { DARABONBA_PTR_GET_DEFAULT(personDescription_, "") };
    inline TagCustomPersonRequest& setPersonDescription(string personDescription) { DARABONBA_PTR_SET_VALUE(personDescription_, personDescription) };


    // personId Field Functions 
    bool hasPersonId() const { return this->personId_ != nullptr;};
    void deletePersonId() { this->personId_ = nullptr;};
    inline string getPersonId() const { DARABONBA_PTR_GET_DEFAULT(personId_, "") };
    inline TagCustomPersonRequest& setPersonId(string personId) { DARABONBA_PTR_SET_VALUE(personId_, personId) };


    // personName Field Functions 
    bool hasPersonName() const { return this->personName_ != nullptr;};
    void deletePersonName() { this->personName_ = nullptr;};
    inline string getPersonName() const { DARABONBA_PTR_GET_DEFAULT(personName_, "") };
    inline TagCustomPersonRequest& setPersonName(string personName) { DARABONBA_PTR_SET_VALUE(personName_, personName) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline TagCustomPersonRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline TagCustomPersonRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> categoryDescription_ {};
    shared_ptr<string> categoryId_ {};
    shared_ptr<string> categoryName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> personDescription_ {};
    shared_ptr<string> personId_ {};
    shared_ptr<string> personName_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
