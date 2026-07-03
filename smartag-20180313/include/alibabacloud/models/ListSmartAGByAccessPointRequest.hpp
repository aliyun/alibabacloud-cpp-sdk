// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTAGBYACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTAGBYACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListSmartAGByAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartAGByAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmartAGStatus, smartAGStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartAGByAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmartAGStatus, smartAGStatus_);
    };
    ListSmartAGByAccessPointRequest() = default ;
    ListSmartAGByAccessPointRequest(const ListSmartAGByAccessPointRequest &) = default ;
    ListSmartAGByAccessPointRequest(ListSmartAGByAccessPointRequest &&) = default ;
    ListSmartAGByAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartAGByAccessPointRequest() = default ;
    ListSmartAGByAccessPointRequest& operator=(const ListSmartAGByAccessPointRequest &) = default ;
    ListSmartAGByAccessPointRequest& operator=(ListSmartAGByAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->smartAGStatus_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline int32_t getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, 0) };
    inline ListSmartAGByAccessPointRequest& setAccessPointId(int32_t accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListSmartAGByAccessPointRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListSmartAGByAccessPointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSmartAGByAccessPointRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSmartAGByAccessPointRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSmartAGByAccessPointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListSmartAGByAccessPointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListSmartAGByAccessPointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smartAGStatus Field Functions 
    bool hasSmartAGStatus() const { return this->smartAGStatus_ != nullptr;};
    void deleteSmartAGStatus() { this->smartAGStatus_ = nullptr;};
    inline string getSmartAGStatus() const { DARABONBA_PTR_GET_DEFAULT(smartAGStatus_, "") };
    inline ListSmartAGByAccessPointRequest& setSmartAGStatus(string smartAGStatus) { DARABONBA_PTR_SET_VALUE(smartAGStatus_, smartAGStatus) };


  protected:
    // The ID of the access point.
    // 
    // This parameter is required.
    shared_ptr<int32_t> accessPointId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. Pages start from page 1. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: **10**. Maximum value: **50** .
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // A region contains one or more access points. You can call the [ListAccessPoints](https://help.aliyun.com/document_detail/183876.html) operation to query access points in a specific region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The status of the SAG instance. Valid values:
    // 
    // - **Active**: The SAG device is connected to Alibaba Cloud.
    // 
    // - **offline**: The SAG device is disconnected from Alibaba Cloud.
    shared_ptr<string> smartAGStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
