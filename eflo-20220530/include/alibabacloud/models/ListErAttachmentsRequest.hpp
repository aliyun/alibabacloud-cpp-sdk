// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTERATTACHMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTERATTACHMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListErAttachmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListErAttachmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_TO_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListErAttachmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_FROM_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListErAttachmentsRequest() = default ;
    ListErAttachmentsRequest(const ListErAttachmentsRequest &) = default ;
    ListErAttachmentsRequest(ListErAttachmentsRequest &&) = default ;
    ListErAttachmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListErAttachmentsRequest() = default ;
    ListErAttachmentsRequest& operator=(const ListErAttachmentsRequest &) = default ;
    ListErAttachmentsRequest& operator=(ListErAttachmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReceiveAllRoute_ == nullptr
        && this->enablePage_ == nullptr && this->erAttachmentId_ == nullptr && this->erAttachmentName_ == nullptr && this->erId_ == nullptr && this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceTenantId_ == nullptr && this->status_ == nullptr; };
    // autoReceiveAllRoute Field Functions 
    bool hasAutoReceiveAllRoute() const { return this->autoReceiveAllRoute_ != nullptr;};
    void deleteAutoReceiveAllRoute() { this->autoReceiveAllRoute_ = nullptr;};
    inline bool getAutoReceiveAllRoute() const { DARABONBA_PTR_GET_DEFAULT(autoReceiveAllRoute_, false) };
    inline ListErAttachmentsRequest& setAutoReceiveAllRoute(bool autoReceiveAllRoute) { DARABONBA_PTR_SET_VALUE(autoReceiveAllRoute_, autoReceiveAllRoute) };


    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListErAttachmentsRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // erAttachmentId Field Functions 
    bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
    void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
    inline string getErAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
    inline ListErAttachmentsRequest& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


    // erAttachmentName Field Functions 
    bool hasErAttachmentName() const { return this->erAttachmentName_ != nullptr;};
    void deleteErAttachmentName() { this->erAttachmentName_ = nullptr;};
    inline string getErAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentName_, "") };
    inline ListErAttachmentsRequest& setErAttachmentName(string erAttachmentName) { DARABONBA_PTR_SET_VALUE(erAttachmentName_, erAttachmentName) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline ListErAttachmentsRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListErAttachmentsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListErAttachmentsRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListErAttachmentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListErAttachmentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListErAttachmentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListErAttachmentsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string getResourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline ListErAttachmentsRequest& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListErAttachmentsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Whether to automatically receive all routes from all instances under this Lingjun HUB. Valid values:
    // 
    // *   **true**: received automatically.
    // *   **false**: Not received.
    shared_ptr<bool> autoReceiveAllRoute_ {};
    // Specifies whether to enable paged query. Valid values:
    // 
    // *   **true**: enables paged query.
    // *   **false**: Paged query is not enabled.
    shared_ptr<bool> enablePage_ {};
    // The ID of the network instance connection
    shared_ptr<string> erAttachmentId_ {};
    // The name of the network instance connection.
    shared_ptr<string> erAttachmentName_ {};
    // The ID of the Lingjun HUB instance.
    // 
    // This parameter is required.
    shared_ptr<string> erId_ {};
    // The ID of the network instance. Valid values: **VPD** and **VCC**.
    // 
    // For more information, see [What is Lingjun?](https://help.aliyun.com/document_detail/444430.html)
    // 
    // You can query **Lingjun CIDR blocks** and **Lingjun connections** by [ListVpds](https://help.aliyun.com/document_detail/2331077.html) and [ListVccs](https://help.aliyun.com/document_detail/2399526.html?) respectively.
    shared_ptr<string> instanceId_ {};
    // The mitigation plan of the instance. Valid values:
    // 
    // *   **VPD**: indicates the Lingjun CIDR block.
    // *   **VCC**: indicates a Lingjun connection.
    shared_ptr<string> instanceType_ {};
    // The page number to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group instance ID
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the tenant to which the instance belongs.
    shared_ptr<string> resourceTenantId_ {};
    // The status of the CLB instance. Valid values:
    // 
    // *   **Available**: Normal.
    // *   **Not Available**: Not available.
    // *   **Executing**: The task is being executed.
    // *   **Deleting**: The account is being deleted
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
