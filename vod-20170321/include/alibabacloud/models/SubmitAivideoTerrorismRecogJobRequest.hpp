// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIVIDEOTERRORISMRECOGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIVIDEOTERRORISMRECOGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIVideoTerrorismRecogJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIVideoTerrorismRecogJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIVideoTerrorismRecogConfig, AIVideoTerrorismRecogConfig_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIVideoTerrorismRecogJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIVideoTerrorismRecogConfig, AIVideoTerrorismRecogConfig_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAIVideoTerrorismRecogJobRequest() = default ;
    SubmitAIVideoTerrorismRecogJobRequest(const SubmitAIVideoTerrorismRecogJobRequest &) = default ;
    SubmitAIVideoTerrorismRecogJobRequest(SubmitAIVideoTerrorismRecogJobRequest &&) = default ;
    SubmitAIVideoTerrorismRecogJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIVideoTerrorismRecogJobRequest() = default ;
    SubmitAIVideoTerrorismRecogJobRequest& operator=(const SubmitAIVideoTerrorismRecogJobRequest &) = default ;
    SubmitAIVideoTerrorismRecogJobRequest& operator=(SubmitAIVideoTerrorismRecogJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIVideoTerrorismRecogConfig_ != nullptr
        && this->mediaId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->userData_ != nullptr; };
    // AIVideoTerrorismRecogConfig Field Functions 
    bool hasAIVideoTerrorismRecogConfig() const { return this->AIVideoTerrorismRecogConfig_ != nullptr;};
    void deleteAIVideoTerrorismRecogConfig() { this->AIVideoTerrorismRecogConfig_ = nullptr;};
    inline string AIVideoTerrorismRecogConfig() const { DARABONBA_PTR_GET_DEFAULT(AIVideoTerrorismRecogConfig_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setAIVideoTerrorismRecogConfig(string AIVideoTerrorismRecogConfig) { DARABONBA_PTR_SET_VALUE(AIVideoTerrorismRecogConfig_, AIVideoTerrorismRecogConfig) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIVideoTerrorismRecogJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<string> AIVideoTerrorismRecogConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
