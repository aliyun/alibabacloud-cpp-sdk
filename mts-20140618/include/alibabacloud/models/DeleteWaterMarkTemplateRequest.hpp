// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWATERMARKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWATERMARKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class DeleteWaterMarkTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWaterMarkTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWaterMarkTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
    };
    DeleteWaterMarkTemplateRequest() = default ;
    DeleteWaterMarkTemplateRequest(const DeleteWaterMarkTemplateRequest &) = default ;
    DeleteWaterMarkTemplateRequest(DeleteWaterMarkTemplateRequest &&) = default ;
    DeleteWaterMarkTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWaterMarkTemplateRequest() = default ;
    DeleteWaterMarkTemplateRequest& operator=(const DeleteWaterMarkTemplateRequest &) = default ;
    DeleteWaterMarkTemplateRequest& operator=(DeleteWaterMarkTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->waterMarkTemplateId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteWaterMarkTemplateRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteWaterMarkTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteWaterMarkTemplateRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteWaterMarkTemplateRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // waterMarkTemplateId Field Functions 
    bool hasWaterMarkTemplateId() const { return this->waterMarkTemplateId_ != nullptr;};
    void deleteWaterMarkTemplateId() { this->waterMarkTemplateId_ = nullptr;};
    inline string getWaterMarkTemplateId() const { DARABONBA_PTR_GET_DEFAULT(waterMarkTemplateId_, "") };
    inline DeleteWaterMarkTemplateRequest& setWaterMarkTemplateId(string waterMarkTemplateId) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateId_, waterMarkTemplateId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the watermark template that you want to delete. To obtain the template ID, you can log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Global Settings** > **Watermark Templates** in the left-side navigation pane.
    // 
    // This parameter is required.
    shared_ptr<string> waterMarkTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
