// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDNAFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDNAFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteDNAFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDNAFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBId, DBId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDNAFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBId, DBId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeys, primaryKeys_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteDNAFilesRequest() = default ;
    DeleteDNAFilesRequest(const DeleteDNAFilesRequest &) = default ;
    DeleteDNAFilesRequest(DeleteDNAFilesRequest &&) = default ;
    DeleteDNAFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDNAFilesRequest() = default ;
    DeleteDNAFilesRequest& operator=(const DeleteDNAFilesRequest &) = default ;
    DeleteDNAFilesRequest& operator=(DeleteDNAFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBId_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->primaryKeys_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // DBId Field Functions 
    bool hasDBId() const { return this->DBId_ != nullptr;};
    void deleteDBId() { this->DBId_ = nullptr;};
    inline string DBId() const { DARABONBA_PTR_GET_DEFAULT(DBId_, "") };
    inline DeleteDNAFilesRequest& setDBId(string DBId) { DARABONBA_PTR_SET_VALUE(DBId_, DBId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteDNAFilesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteDNAFilesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // primaryKeys Field Functions 
    bool hasPrimaryKeys() const { return this->primaryKeys_ != nullptr;};
    void deletePrimaryKeys() { this->primaryKeys_ = nullptr;};
    inline string primaryKeys() const { DARABONBA_PTR_GET_DEFAULT(primaryKeys_, "") };
    inline DeleteDNAFilesRequest& setPrimaryKeys(string primaryKeys) { DARABONBA_PTR_SET_VALUE(primaryKeys_, primaryKeys) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteDNAFilesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteDNAFilesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the media fingerprint library from which you want to delete files.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The primary key values of the files that you want to delete. Separate multiple values with commas (,). You can delete up to 50 files at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> primaryKeys_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
