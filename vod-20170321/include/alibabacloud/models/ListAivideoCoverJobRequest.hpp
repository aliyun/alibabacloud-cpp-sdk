// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOCOVERJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoCoverJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoCoverJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoCoverJobIds, AIVideoCoverJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoCoverJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoCoverJobIds, AIVideoCoverJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListAIVideoCoverJobRequest() = default ;
    ListAIVideoCoverJobRequest(const ListAIVideoCoverJobRequest &) = default ;
    ListAIVideoCoverJobRequest(ListAIVideoCoverJobRequest &&) = default ;
    ListAIVideoCoverJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoCoverJobRequest() = default ;
    ListAIVideoCoverJobRequest& operator=(const ListAIVideoCoverJobRequest &) = default ;
    ListAIVideoCoverJobRequest& operator=(ListAIVideoCoverJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoCoverJobIds_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // AIVideoCoverJobIds Field Functions 
    bool hasAIVideoCoverJobIds() const { return this->AIVideoCoverJobIds_ != nullptr;};
    void deleteAIVideoCoverJobIds() { this->AIVideoCoverJobIds_ = nullptr;};
    inline string AIVideoCoverJobIds() const { DARABONBA_PTR_GET_DEFAULT(AIVideoCoverJobIds_, "") };
    inline ListAIVideoCoverJobRequest& setAIVideoCoverJobIds(string AIVideoCoverJobIds) { DARABONBA_PTR_SET_VALUE(AIVideoCoverJobIds_, AIVideoCoverJobIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListAIVideoCoverJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListAIVideoCoverJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListAIVideoCoverJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline ListAIVideoCoverJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIVideoCoverJobIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
