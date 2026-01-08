// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMAUDIENCEUSERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMAUDIENCEUSERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class AddCustomAudienceUserShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomAudienceUserShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_TO_JSON(BatchLastFlag, batchLastFlag_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_TO_JSON(EstimatedNumTotal, estimatedNumTotal_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageId, pageId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Users, usersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomAudienceUserShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdAccountId, adAccountId_);
      DARABONBA_PTR_FROM_JSON(BatchLastFlag, batchLastFlag_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(CustomAudienceId, customAudienceId_);
      DARABONBA_PTR_FROM_JSON(EstimatedNumTotal, estimatedNumTotal_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageId, pageId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Users, usersShrink_);
    };
    AddCustomAudienceUserShrinkRequest() = default ;
    AddCustomAudienceUserShrinkRequest(const AddCustomAudienceUserShrinkRequest &) = default ;
    AddCustomAudienceUserShrinkRequest(AddCustomAudienceUserShrinkRequest &&) = default ;
    AddCustomAudienceUserShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomAudienceUserShrinkRequest() = default ;
    AddCustomAudienceUserShrinkRequest& operator=(const AddCustomAudienceUserShrinkRequest &) = default ;
    AddCustomAudienceUserShrinkRequest& operator=(AddCustomAudienceUserShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adAccountId_ == nullptr
        && this->batchLastFlag_ == nullptr && this->custSpaceId_ == nullptr && this->customAudienceId_ == nullptr && this->estimatedNumTotal_ == nullptr && this->ownerId_ == nullptr
        && this->pageId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->usersShrink_ == nullptr; };
    // adAccountId Field Functions 
    bool hasAdAccountId() const { return this->adAccountId_ != nullptr;};
    void deleteAdAccountId() { this->adAccountId_ = nullptr;};
    inline string getAdAccountId() const { DARABONBA_PTR_GET_DEFAULT(adAccountId_, "") };
    inline AddCustomAudienceUserShrinkRequest& setAdAccountId(string adAccountId) { DARABONBA_PTR_SET_VALUE(adAccountId_, adAccountId) };


    // batchLastFlag Field Functions 
    bool hasBatchLastFlag() const { return this->batchLastFlag_ != nullptr;};
    void deleteBatchLastFlag() { this->batchLastFlag_ = nullptr;};
    inline bool getBatchLastFlag() const { DARABONBA_PTR_GET_DEFAULT(batchLastFlag_, false) };
    inline AddCustomAudienceUserShrinkRequest& setBatchLastFlag(bool batchLastFlag) { DARABONBA_PTR_SET_VALUE(batchLastFlag_, batchLastFlag) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline AddCustomAudienceUserShrinkRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // customAudienceId Field Functions 
    bool hasCustomAudienceId() const { return this->customAudienceId_ != nullptr;};
    void deleteCustomAudienceId() { this->customAudienceId_ = nullptr;};
    inline string getCustomAudienceId() const { DARABONBA_PTR_GET_DEFAULT(customAudienceId_, "") };
    inline AddCustomAudienceUserShrinkRequest& setCustomAudienceId(string customAudienceId) { DARABONBA_PTR_SET_VALUE(customAudienceId_, customAudienceId) };


    // estimatedNumTotal Field Functions 
    bool hasEstimatedNumTotal() const { return this->estimatedNumTotal_ != nullptr;};
    void deleteEstimatedNumTotal() { this->estimatedNumTotal_ = nullptr;};
    inline int64_t getEstimatedNumTotal() const { DARABONBA_PTR_GET_DEFAULT(estimatedNumTotal_, 0L) };
    inline AddCustomAudienceUserShrinkRequest& setEstimatedNumTotal(int64_t estimatedNumTotal) { DARABONBA_PTR_SET_VALUE(estimatedNumTotal_, estimatedNumTotal) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddCustomAudienceUserShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageId Field Functions 
    bool hasPageId() const { return this->pageId_ != nullptr;};
    void deletePageId() { this->pageId_ = nullptr;};
    inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
    inline AddCustomAudienceUserShrinkRequest& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddCustomAudienceUserShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddCustomAudienceUserShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // usersShrink Field Functions 
    bool hasUsersShrink() const { return this->usersShrink_ != nullptr;};
    void deleteUsersShrink() { this->usersShrink_ = nullptr;};
    inline string getUsersShrink() const { DARABONBA_PTR_GET_DEFAULT(usersShrink_, "") };
    inline AddCustomAudienceUserShrinkRequest& setUsersShrink(string usersShrink) { DARABONBA_PTR_SET_VALUE(usersShrink_, usersShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> adAccountId_ {};
    shared_ptr<bool> batchLastFlag_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    // This parameter is required.
    shared_ptr<string> customAudienceId_ {};
    shared_ptr<int64_t> estimatedNumTotal_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> pageId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> usersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
