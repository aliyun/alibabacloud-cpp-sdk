// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRESPONSEBODYCONTENTERATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETERRESPONSEBODYCONTENTERATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErResponseBodyContentErAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErResponseBodyContentErAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(Across, across_);
      DARABONBA_PTR_TO_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_TO_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTenantId, resourceTenantId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErResponseBodyContentErAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(Across, across_);
      DARABONBA_PTR_FROM_JSON(AutoReceiveAllRoute, autoReceiveAllRoute_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_FROM_JSON(ErAttachmentName, erAttachmentName_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTenantId, resourceTenantId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetErResponseBodyContentErAttachments() = default ;
    GetErResponseBodyContentErAttachments(const GetErResponseBodyContentErAttachments &) = default ;
    GetErResponseBodyContentErAttachments(GetErResponseBodyContentErAttachments &&) = default ;
    GetErResponseBodyContentErAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErResponseBodyContentErAttachments() = default ;
    GetErResponseBodyContentErAttachments& operator=(const GetErResponseBodyContentErAttachments &) = default ;
    GetErResponseBodyContentErAttachments& operator=(GetErResponseBodyContentErAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->across_ == nullptr
        && return this->autoReceiveAllRoute_ == nullptr && return this->createTime_ == nullptr && return this->erAttachmentId_ == nullptr && return this->erAttachmentName_ == nullptr && return this->erId_ == nullptr
        && return this->gmtModified_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->message_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceTenantId_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr; };
    // across Field Functions 
    bool hasAcross() const { return this->across_ != nullptr;};
    void deleteAcross() { this->across_ = nullptr;};
    inline bool across() const { DARABONBA_PTR_GET_DEFAULT(across_, false) };
    inline GetErResponseBodyContentErAttachments& setAcross(bool across) { DARABONBA_PTR_SET_VALUE(across_, across) };


    // autoReceiveAllRoute Field Functions 
    bool hasAutoReceiveAllRoute() const { return this->autoReceiveAllRoute_ != nullptr;};
    void deleteAutoReceiveAllRoute() { this->autoReceiveAllRoute_ = nullptr;};
    inline bool autoReceiveAllRoute() const { DARABONBA_PTR_GET_DEFAULT(autoReceiveAllRoute_, false) };
    inline GetErResponseBodyContentErAttachments& setAutoReceiveAllRoute(bool autoReceiveAllRoute) { DARABONBA_PTR_SET_VALUE(autoReceiveAllRoute_, autoReceiveAllRoute) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetErResponseBodyContentErAttachments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // erAttachmentId Field Functions 
    bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
    void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
    inline string erAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
    inline GetErResponseBodyContentErAttachments& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


    // erAttachmentName Field Functions 
    bool hasErAttachmentName() const { return this->erAttachmentName_ != nullptr;};
    void deleteErAttachmentName() { this->erAttachmentName_ = nullptr;};
    inline string erAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentName_, "") };
    inline GetErResponseBodyContentErAttachments& setErAttachmentName(string erAttachmentName) { DARABONBA_PTR_SET_VALUE(erAttachmentName_, erAttachmentName) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErResponseBodyContentErAttachments& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetErResponseBodyContentErAttachments& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetErResponseBodyContentErAttachments& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetErResponseBodyContentErAttachments& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetErResponseBodyContentErAttachments& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErResponseBodyContentErAttachments& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErResponseBodyContentErAttachments& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetErResponseBodyContentErAttachments& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTenantId Field Functions 
    bool hasResourceTenantId() const { return this->resourceTenantId_ != nullptr;};
    void deleteResourceTenantId() { this->resourceTenantId_ = nullptr;};
    inline string resourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(resourceTenantId_, "") };
    inline GetErResponseBodyContentErAttachments& setResourceTenantId(string resourceTenantId) { DARABONBA_PTR_SET_VALUE(resourceTenantId_, resourceTenantId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetErResponseBodyContentErAttachments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetErResponseBodyContentErAttachments& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // Cross-account
    std::shared_ptr<bool> across_ = nullptr;
    // Receive all routes automatically
    std::shared_ptr<bool> autoReceiveAllRoute_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The connection ID of the Lingjun HUB network instance.
    std::shared_ptr<string> erAttachmentId_ = nullptr;
    // Network Instance Name
    std::shared_ptr<string> erAttachmentName_ = nullptr;
    // Lingjun HUB Instance ID
    std::shared_ptr<string> erId_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the ECU.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Instance type: VPD and VCC
    // 
    // Valid value:
    // 
    // *   VCC: Lingjun Connection.
    // *   VPD: Lingjun network segment.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The synchronized region where the ECS instances are deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the tenant to which the resource belongs.
    std::shared_ptr<string> resourceTenantId_ = nullptr;
    // The status of the intervention entry. Valid value:
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
