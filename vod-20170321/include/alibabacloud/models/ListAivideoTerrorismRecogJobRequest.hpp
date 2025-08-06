// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIVIDEOTERRORISMRECOGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIVideoTerrorismRecogJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIVideoTerrorismRecogJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTerrorismRecogJobIds, AIVideoTerrorismRecogJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIVideoTerrorismRecogJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTerrorismRecogJobIds, AIVideoTerrorismRecogJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListAIVideoTerrorismRecogJobRequest() = default ;
    ListAIVideoTerrorismRecogJobRequest(const ListAIVideoTerrorismRecogJobRequest &) = default ;
    ListAIVideoTerrorismRecogJobRequest(ListAIVideoTerrorismRecogJobRequest &&) = default ;
    ListAIVideoTerrorismRecogJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIVideoTerrorismRecogJobRequest() = default ;
    ListAIVideoTerrorismRecogJobRequest& operator=(const ListAIVideoTerrorismRecogJobRequest &) = default ;
    ListAIVideoTerrorismRecogJobRequest& operator=(ListAIVideoTerrorismRecogJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTerrorismRecogJobIds_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // AIVideoTerrorismRecogJobIds Field Functions 
    bool hasAIVideoTerrorismRecogJobIds() const { return this->AIVideoTerrorismRecogJobIds_ != nullptr;};
    void deleteAIVideoTerrorismRecogJobIds() { this->AIVideoTerrorismRecogJobIds_ = nullptr;};
    inline string AIVideoTerrorismRecogJobIds() const { DARABONBA_PTR_GET_DEFAULT(AIVideoTerrorismRecogJobIds_, "") };
    inline ListAIVideoTerrorismRecogJobRequest& setAIVideoTerrorismRecogJobIds(string AIVideoTerrorismRecogJobIds) { DARABONBA_PTR_SET_VALUE(AIVideoTerrorismRecogJobIds_, AIVideoTerrorismRecogJobIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListAIVideoTerrorismRecogJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListAIVideoTerrorismRecogJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListAIVideoTerrorismRecogJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline ListAIVideoTerrorismRecogJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIVideoTerrorismRecogJobIds_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
