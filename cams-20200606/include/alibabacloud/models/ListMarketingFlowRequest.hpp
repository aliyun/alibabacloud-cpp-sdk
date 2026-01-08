// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMARKETINGFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMARKETINGFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListMarketingFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMarketingFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
      DARABONBA_PTR_TO_JSON(ActivityStatus, activityStatus_);
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_ANY_TO_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_TO_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMarketingFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityCode, activityCode_);
      DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
      DARABONBA_PTR_FROM_JSON(ActivityStatus, activityStatus_);
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_ANY_FROM_JSON(BizExtend, bizExtend_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelatedFlowCode, relatedFlowCode_);
      DARABONBA_PTR_FROM_JSON(RelatedGroupId, relatedGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListMarketingFlowRequest() = default ;
    ListMarketingFlowRequest(const ListMarketingFlowRequest &) = default ;
    ListMarketingFlowRequest(ListMarketingFlowRequest &&) = default ;
    ListMarketingFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMarketingFlowRequest() = default ;
    ListMarketingFlowRequest& operator=(const ListMarketingFlowRequest &) = default ;
    ListMarketingFlowRequest& operator=(ListMarketingFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activityCode_ == nullptr
        && this->activityName_ == nullptr && this->activityStatus_ == nullptr && this->bizCode_ == nullptr && this->bizExtend_ == nullptr && this->ownerId_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->relatedFlowCode_ == nullptr && this->relatedGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // activityCode Field Functions 
    bool hasActivityCode() const { return this->activityCode_ != nullptr;};
    void deleteActivityCode() { this->activityCode_ = nullptr;};
    inline string getActivityCode() const { DARABONBA_PTR_GET_DEFAULT(activityCode_, "") };
    inline ListMarketingFlowRequest& setActivityCode(string activityCode) { DARABONBA_PTR_SET_VALUE(activityCode_, activityCode) };


    // activityName Field Functions 
    bool hasActivityName() const { return this->activityName_ != nullptr;};
    void deleteActivityName() { this->activityName_ = nullptr;};
    inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
    inline ListMarketingFlowRequest& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


    // activityStatus Field Functions 
    bool hasActivityStatus() const { return this->activityStatus_ != nullptr;};
    void deleteActivityStatus() { this->activityStatus_ = nullptr;};
    inline string getActivityStatus() const { DARABONBA_PTR_GET_DEFAULT(activityStatus_, "") };
    inline ListMarketingFlowRequest& setActivityStatus(string activityStatus) { DARABONBA_PTR_SET_VALUE(activityStatus_, activityStatus) };


    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline ListMarketingFlowRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtend Field Functions 
    bool hasBizExtend() const { return this->bizExtend_ != nullptr;};
    void deleteBizExtend() { this->bizExtend_ = nullptr;};
    inline     const Darabonba::Json & getBizExtend() const { DARABONBA_GET(bizExtend_) };
    Darabonba::Json & getBizExtend() { DARABONBA_GET(bizExtend_) };
    inline ListMarketingFlowRequest& setBizExtend(const Darabonba::Json & bizExtend) { DARABONBA_SET_VALUE(bizExtend_, bizExtend) };
    inline ListMarketingFlowRequest& setBizExtend(Darabonba::Json && bizExtend) { DARABONBA_SET_RVALUE(bizExtend_, bizExtend) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListMarketingFlowRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline ListMarketingFlowRequest& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListMarketingFlowRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relatedFlowCode Field Functions 
    bool hasRelatedFlowCode() const { return this->relatedFlowCode_ != nullptr;};
    void deleteRelatedFlowCode() { this->relatedFlowCode_ = nullptr;};
    inline string getRelatedFlowCode() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowCode_, "") };
    inline ListMarketingFlowRequest& setRelatedFlowCode(string relatedFlowCode) { DARABONBA_PTR_SET_VALUE(relatedFlowCode_, relatedFlowCode) };


    // relatedGroupId Field Functions 
    bool hasRelatedGroupId() const { return this->relatedGroupId_ != nullptr;};
    void deleteRelatedGroupId() { this->relatedGroupId_ = nullptr;};
    inline int64_t getRelatedGroupId() const { DARABONBA_PTR_GET_DEFAULT(relatedGroupId_, 0L) };
    inline ListMarketingFlowRequest& setRelatedGroupId(int64_t relatedGroupId) { DARABONBA_PTR_SET_VALUE(relatedGroupId_, relatedGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListMarketingFlowRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListMarketingFlowRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> activityCode_ {};
    shared_ptr<string> activityName_ {};
    shared_ptr<string> activityStatus_ {};
    shared_ptr<string> bizCode_ {};
    Darabonba::Json bizExtend_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> pageIndex_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> relatedFlowCode_ {};
    shared_ptr<int64_t> relatedGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
