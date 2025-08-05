// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPFILTERBYEDMIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPFILTERBYEDMIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DeleteIpfilterByEdmIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpfilterByEdmIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromType, fromType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpfilterByEdmIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromType, fromType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DeleteIpfilterByEdmIdRequest() = default ;
    DeleteIpfilterByEdmIdRequest(const DeleteIpfilterByEdmIdRequest &) = default ;
    DeleteIpfilterByEdmIdRequest(DeleteIpfilterByEdmIdRequest &&) = default ;
    DeleteIpfilterByEdmIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpfilterByEdmIdRequest() = default ;
    DeleteIpfilterByEdmIdRequest& operator=(const DeleteIpfilterByEdmIdRequest &) = default ;
    DeleteIpfilterByEdmIdRequest& operator=(DeleteIpfilterByEdmIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromType_ != nullptr
        && this->id_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // fromType Field Functions 
    bool hasFromType() const { return this->fromType_ != nullptr;};
    void deleteFromType() { this->fromType_ = nullptr;};
    inline int32_t fromType() const { DARABONBA_PTR_GET_DEFAULT(fromType_, 0) };
    inline DeleteIpfilterByEdmIdRequest& setFromType(int32_t fromType) { DARABONBA_PTR_SET_VALUE(fromType_, fromType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteIpfilterByEdmIdRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteIpfilterByEdmIdRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteIpfilterByEdmIdRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteIpfilterByEdmIdRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Deprecated, kept for historical compatibility.
    std::shared_ptr<int32_t> fromType_ = nullptr;
    // Record ID
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
