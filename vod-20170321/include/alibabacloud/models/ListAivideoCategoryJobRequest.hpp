// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCATEGORYJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCategoryJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCategoryJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCategoryJobIds, AIVideoCategoryJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCategoryJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCategoryJobIds, AIVideoCategoryJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListAIVideoCategoryJobRequest() = default ;
    ListAIVideoCategoryJobRequest(const ListAIVideoCategoryJobRequest &) = default ;
    ListAIVideoCategoryJobRequest(ListAIVideoCategoryJobRequest &&) = default ;
    ListAIVideoCategoryJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCategoryJobRequest() = default ;
    ListAIVideoCategoryJobRequest& operator=(const ListAIVideoCategoryJobRequest &) = default ;
    ListAIVideoCategoryJobRequest& operator=(ListAIVideoCategoryJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCategoryJobIds_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // AIVideoCategoryJobIds Field Functions 
    bool hasAIVideoCategoryJobIds() const { return this->AIVideoCategoryJobIds_ != nullptr;};
    void deleteAIVideoCategoryJobIds() { this->AIVideoCategoryJobIds_ = nullptr;};
    inline string AIVideoCategoryJobIds() const { DARABONBA_PTR_GET_DEFAULT(AIVideoCategoryJobIds_, "") };
    inline ListAIVideoCategoryJobRequest& setAIVideoCategoryJobIds(string AIVideoCategoryJobIds) { DARABONBA_PTR_SET_VALUE(AIVideoCategoryJobIds_, AIVideoCategoryJobIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListAIVideoCategoryJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListAIVideoCategoryJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListAIVideoCategoryJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline ListAIVideoCategoryJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIVideoCategoryJobIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
