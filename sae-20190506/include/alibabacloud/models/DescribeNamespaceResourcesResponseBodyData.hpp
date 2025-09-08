// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(JumpServerAppId, jumpServerAppId_);
      DARABONBA_PTR_TO_JSON(JumpServerIp, jumpServerIp_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderId, lastChangeOrderId_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NotificationExpired, notificationExpired_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(BelongRegion, belongRegion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(JumpServerAppId, jumpServerAppId_);
      DARABONBA_PTR_FROM_JSON(JumpServerIp, jumpServerIp_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderId, lastChangeOrderId_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NotificationExpired, notificationExpired_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeNamespaceResourcesResponseBodyData() = default ;
    DescribeNamespaceResourcesResponseBodyData(const DescribeNamespaceResourcesResponseBodyData &) = default ;
    DescribeNamespaceResourcesResponseBodyData(DescribeNamespaceResourcesResponseBodyData &&) = default ;
    DescribeNamespaceResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceResourcesResponseBodyData() = default ;
    DescribeNamespaceResourcesResponseBodyData& operator=(const DescribeNamespaceResourcesResponseBodyData &) = default ;
    DescribeNamespaceResourcesResponseBodyData& operator=(DescribeNamespaceResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCount_ != nullptr
        && this->belongRegion_ != nullptr && this->description_ != nullptr && this->jumpServerAppId_ != nullptr && this->jumpServerIp_ != nullptr && this->lastChangeOrderId_ != nullptr
        && this->lastChangeOrderRunning_ != nullptr && this->lastChangeOrderStatus_ != nullptr && this->nameSpaceShortId_ != nullptr && this->namespaceId_ != nullptr && this->namespaceName_ != nullptr
        && this->notificationExpired_ != nullptr && this->securityGroupId_ != nullptr && this->tenantId_ != nullptr && this->userId_ != nullptr && this->vSwitchId_ != nullptr
        && this->vSwitchName_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr; };
    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int64_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0L) };
    inline DescribeNamespaceResourcesResponseBodyData& setAppCount(int64_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // belongRegion Field Functions 
    bool hasBelongRegion() const { return this->belongRegion_ != nullptr;};
    void deleteBelongRegion() { this->belongRegion_ = nullptr;};
    inline string belongRegion() const { DARABONBA_PTR_GET_DEFAULT(belongRegion_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setBelongRegion(string belongRegion) { DARABONBA_PTR_SET_VALUE(belongRegion_, belongRegion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jumpServerAppId Field Functions 
    bool hasJumpServerAppId() const { return this->jumpServerAppId_ != nullptr;};
    void deleteJumpServerAppId() { this->jumpServerAppId_ = nullptr;};
    inline string jumpServerAppId() const { DARABONBA_PTR_GET_DEFAULT(jumpServerAppId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setJumpServerAppId(string jumpServerAppId) { DARABONBA_PTR_SET_VALUE(jumpServerAppId_, jumpServerAppId) };


    // jumpServerIp Field Functions 
    bool hasJumpServerIp() const { return this->jumpServerIp_ != nullptr;};
    void deleteJumpServerIp() { this->jumpServerIp_ = nullptr;};
    inline string jumpServerIp() const { DARABONBA_PTR_GET_DEFAULT(jumpServerIp_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setJumpServerIp(string jumpServerIp) { DARABONBA_PTR_SET_VALUE(jumpServerIp_, jumpServerIp) };


    // lastChangeOrderId Field Functions 
    bool hasLastChangeOrderId() const { return this->lastChangeOrderId_ != nullptr;};
    void deleteLastChangeOrderId() { this->lastChangeOrderId_ = nullptr;};
    inline string lastChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setLastChangeOrderId(string lastChangeOrderId) { DARABONBA_PTR_SET_VALUE(lastChangeOrderId_, lastChangeOrderId) };


    // lastChangeOrderRunning Field Functions 
    bool hasLastChangeOrderRunning() const { return this->lastChangeOrderRunning_ != nullptr;};
    void deleteLastChangeOrderRunning() { this->lastChangeOrderRunning_ = nullptr;};
    inline bool lastChangeOrderRunning() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderRunning_, false) };
    inline DescribeNamespaceResourcesResponseBodyData& setLastChangeOrderRunning(bool lastChangeOrderRunning) { DARABONBA_PTR_SET_VALUE(lastChangeOrderRunning_, lastChangeOrderRunning) };


    // lastChangeOrderStatus Field Functions 
    bool hasLastChangeOrderStatus() const { return this->lastChangeOrderStatus_ != nullptr;};
    void deleteLastChangeOrderStatus() { this->lastChangeOrderStatus_ = nullptr;};
    inline string lastChangeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderStatus_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setLastChangeOrderStatus(string lastChangeOrderStatus) { DARABONBA_PTR_SET_VALUE(lastChangeOrderStatus_, lastChangeOrderStatus) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // notificationExpired Field Functions 
    bool hasNotificationExpired() const { return this->notificationExpired_ != nullptr;};
    void deleteNotificationExpired() { this->notificationExpired_ = nullptr;};
    inline bool notificationExpired() const { DARABONBA_PTR_GET_DEFAULT(notificationExpired_, false) };
    inline DescribeNamespaceResourcesResponseBodyData& setNotificationExpired(bool notificationExpired) { DARABONBA_PTR_SET_VALUE(notificationExpired_, notificationExpired) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeNamespaceResourcesResponseBodyData& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The number of applications.
    std::shared_ptr<int64_t> appCount_ = nullptr;
    // The region to which the namespace belongs.
    std::shared_ptr<string> belongRegion_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the jump server application.
    std::shared_ptr<string> jumpServerAppId_ = nullptr;
    // The IP address of the jump server.
    std::shared_ptr<string> jumpServerIp_ = nullptr;
    // The ID of the change order.
    std::shared_ptr<string> lastChangeOrderId_ = nullptr;
    // Indicates whether a change order is being executed in the namespace. Valid values:
    // 
    // *   **true**: indicates that a change order is being executed in the namespace.
    // *   **false**: indicates that no change orders are being executed in the namespace.
    std::shared_ptr<bool> lastChangeOrderRunning_ = nullptr;
    // The status of the latest change order. Valid values:
    // 
    // *   **READY**: The change order is ready.
    // *   **RUNNING**: The change order is being executed.
    // *   **SUCCESS**: The change order was executed.
    // *   **FAIL**: The change order could not be executed.
    // *   **ABORT**: The change order was terminated.
    // *   **WAIT_BATCH_CONFIRM**: The change order is pending execution. You must manually confirm the release batch.
    // *   **AUTO_BATCH_WAIT**: The change order is pending execution. SAE will automatically confirm the release batch.
    // *   **SYSTEM_FAIL**: A system exception occurred.
    // *   **WAIT_APPROVAL**: The change order is pending approval.
    // *   **APPROVED**: The change order is approved and is pending execution.
    std::shared_ptr<string> lastChangeOrderStatus_ = nullptr;
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // Indicates whether the notification of a change order is expired. Valid values:
    // 
    // *   **true**: indicates that the notification is expired.
    // *   **false**: indicates that the notification is not expired.
    std::shared_ptr<bool> notificationExpired_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The ID of the tenant in the SAE namespace.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vSwitchName_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
