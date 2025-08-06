// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNADBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNADBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateDNADBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDNADBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDNADBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateDNADBRequest() = default ;
    UpdateDNADBRequest(const UpdateDNADBRequest &) = default ;
    UpdateDNADBRequest(UpdateDNADBRequest &&) = default ;
    UpdateDNADBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDNADBRequest() = default ;
    UpdateDNADBRequest& operator=(const UpdateDNADBRequest &) = default ;
    UpdateDNADBRequest& operator=(UpdateDNADBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBDescription_ != nullptr
        && this->DBId_ != nullptr && this->DBName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline UpdateDNADBRequest& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline UpdateDNADBRequest& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline UpdateDNADBRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateDNADBRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline UpdateDNADBRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateDNADBRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline UpdateDNADBRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<string> DBDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBId_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
