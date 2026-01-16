// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeUserStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserStatus, userStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserStatus, userStatus_);
    };
    DescribeUserStatusResponseBody() = default ;
    DescribeUserStatusResponseBody(const DescribeUserStatusResponseBody &) = default ;
    DescribeUserStatusResponseBody(DescribeUserStatusResponseBody &&) = default ;
    DescribeUserStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserStatusResponseBody() = default ;
    DescribeUserStatusResponseBody& operator=(const DescribeUserStatusResponseBody &) = default ;
    DescribeUserStatusResponseBody& operator=(DescribeUserStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserStatus& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AssetRoleAuthed, assetRoleAuthed_);
        DARABONBA_PTR_TO_JSON(AuditClosable, auditClosable_);
        DARABONBA_PTR_TO_JSON(AuditReleasable, auditReleasable_);
        DARABONBA_PTR_TO_JSON(Authed, authed_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(DataManagerRole, dataManagerRole_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_TO_JSON(InstanceTotalCount, instanceTotalCount_);
        DARABONBA_PTR_TO_JSON(LabStatus, labStatus_);
        DARABONBA_PTR_TO_JSON(OssTotalSize, ossTotalSize_);
        DARABONBA_PTR_TO_JSON(ProtectionDays, protectionDays_);
        DARABONBA_PTR_TO_JSON(Purchased, purchased_);
        DARABONBA_PTR_TO_JSON(ReleaseDays, releaseDays_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(RemainDays, remainDays_);
        DARABONBA_PTR_TO_JSON(Trail, trail_);
        DARABONBA_PTR_TO_JSON(UseAgentAudit, useAgentAudit_);
        DARABONBA_PTR_TO_JSON(UseInstanceNum, useInstanceNum_);
        DARABONBA_PTR_TO_JSON(UseOssSize, useOssSize_);
      };
      friend void from_json(const Darabonba::Json& j, UserStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AssetRoleAuthed, assetRoleAuthed_);
        DARABONBA_PTR_FROM_JSON(AuditClosable, auditClosable_);
        DARABONBA_PTR_FROM_JSON(AuditReleasable, auditReleasable_);
        DARABONBA_PTR_FROM_JSON(Authed, authed_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(DataManagerRole, dataManagerRole_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
        DARABONBA_PTR_FROM_JSON(InstanceTotalCount, instanceTotalCount_);
        DARABONBA_PTR_FROM_JSON(LabStatus, labStatus_);
        DARABONBA_PTR_FROM_JSON(OssTotalSize, ossTotalSize_);
        DARABONBA_PTR_FROM_JSON(ProtectionDays, protectionDays_);
        DARABONBA_PTR_FROM_JSON(Purchased, purchased_);
        DARABONBA_PTR_FROM_JSON(ReleaseDays, releaseDays_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(RemainDays, remainDays_);
        DARABONBA_PTR_FROM_JSON(Trail, trail_);
        DARABONBA_PTR_FROM_JSON(UseAgentAudit, useAgentAudit_);
        DARABONBA_PTR_FROM_JSON(UseInstanceNum, useInstanceNum_);
        DARABONBA_PTR_FROM_JSON(UseOssSize, useOssSize_);
      };
      UserStatus() = default ;
      UserStatus(const UserStatus &) = default ;
      UserStatus(UserStatus &&) = default ;
      UserStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserStatus() = default ;
      UserStatus& operator=(const UserStatus &) = default ;
      UserStatus& operator=(UserStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->assetRoleAuthed_ == nullptr && this->auditClosable_ == nullptr && this->auditReleasable_ == nullptr && this->authed_ == nullptr && this->chargeType_ == nullptr
        && this->dataManagerRole_ == nullptr && this->instanceId_ == nullptr && this->instanceNum_ == nullptr && this->instanceTotalCount_ == nullptr && this->labStatus_ == nullptr
        && this->ossTotalSize_ == nullptr && this->protectionDays_ == nullptr && this->purchased_ == nullptr && this->releaseDays_ == nullptr && this->releaseTime_ == nullptr
        && this->remainDays_ == nullptr && this->trail_ == nullptr && this->useAgentAudit_ == nullptr && this->useInstanceNum_ == nullptr && this->useOssSize_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline UserStatus& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // assetRoleAuthed Field Functions 
      bool hasAssetRoleAuthed() const { return this->assetRoleAuthed_ != nullptr;};
      void deleteAssetRoleAuthed() { this->assetRoleAuthed_ = nullptr;};
      inline bool getAssetRoleAuthed() const { DARABONBA_PTR_GET_DEFAULT(assetRoleAuthed_, false) };
      inline UserStatus& setAssetRoleAuthed(bool assetRoleAuthed) { DARABONBA_PTR_SET_VALUE(assetRoleAuthed_, assetRoleAuthed) };


      // auditClosable Field Functions 
      bool hasAuditClosable() const { return this->auditClosable_ != nullptr;};
      void deleteAuditClosable() { this->auditClosable_ = nullptr;};
      inline bool getAuditClosable() const { DARABONBA_PTR_GET_DEFAULT(auditClosable_, false) };
      inline UserStatus& setAuditClosable(bool auditClosable) { DARABONBA_PTR_SET_VALUE(auditClosable_, auditClosable) };


      // auditReleasable Field Functions 
      bool hasAuditReleasable() const { return this->auditReleasable_ != nullptr;};
      void deleteAuditReleasable() { this->auditReleasable_ = nullptr;};
      inline bool getAuditReleasable() const { DARABONBA_PTR_GET_DEFAULT(auditReleasable_, false) };
      inline UserStatus& setAuditReleasable(bool auditReleasable) { DARABONBA_PTR_SET_VALUE(auditReleasable_, auditReleasable) };


      // authed Field Functions 
      bool hasAuthed() const { return this->authed_ != nullptr;};
      void deleteAuthed() { this->authed_ = nullptr;};
      inline bool getAuthed() const { DARABONBA_PTR_GET_DEFAULT(authed_, false) };
      inline UserStatus& setAuthed(bool authed) { DARABONBA_PTR_SET_VALUE(authed_, authed) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline UserStatus& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // dataManagerRole Field Functions 
      bool hasDataManagerRole() const { return this->dataManagerRole_ != nullptr;};
      void deleteDataManagerRole() { this->dataManagerRole_ = nullptr;};
      inline int32_t getDataManagerRole() const { DARABONBA_PTR_GET_DEFAULT(dataManagerRole_, 0) };
      inline UserStatus& setDataManagerRole(int32_t dataManagerRole) { DARABONBA_PTR_SET_VALUE(dataManagerRole_, dataManagerRole) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UserStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceNum Field Functions 
      bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
      void deleteInstanceNum() { this->instanceNum_ = nullptr;};
      inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
      inline UserStatus& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


      // instanceTotalCount Field Functions 
      bool hasInstanceTotalCount() const { return this->instanceTotalCount_ != nullptr;};
      void deleteInstanceTotalCount() { this->instanceTotalCount_ = nullptr;};
      inline int64_t getInstanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(instanceTotalCount_, 0L) };
      inline UserStatus& setInstanceTotalCount(int64_t instanceTotalCount) { DARABONBA_PTR_SET_VALUE(instanceTotalCount_, instanceTotalCount) };


      // labStatus Field Functions 
      bool hasLabStatus() const { return this->labStatus_ != nullptr;};
      void deleteLabStatus() { this->labStatus_ = nullptr;};
      inline int32_t getLabStatus() const { DARABONBA_PTR_GET_DEFAULT(labStatus_, 0) };
      inline UserStatus& setLabStatus(int32_t labStatus) { DARABONBA_PTR_SET_VALUE(labStatus_, labStatus) };


      // ossTotalSize Field Functions 
      bool hasOssTotalSize() const { return this->ossTotalSize_ != nullptr;};
      void deleteOssTotalSize() { this->ossTotalSize_ = nullptr;};
      inline int64_t getOssTotalSize() const { DARABONBA_PTR_GET_DEFAULT(ossTotalSize_, 0L) };
      inline UserStatus& setOssTotalSize(int64_t ossTotalSize) { DARABONBA_PTR_SET_VALUE(ossTotalSize_, ossTotalSize) };


      // protectionDays Field Functions 
      bool hasProtectionDays() const { return this->protectionDays_ != nullptr;};
      void deleteProtectionDays() { this->protectionDays_ = nullptr;};
      inline int32_t getProtectionDays() const { DARABONBA_PTR_GET_DEFAULT(protectionDays_, 0) };
      inline UserStatus& setProtectionDays(int32_t protectionDays) { DARABONBA_PTR_SET_VALUE(protectionDays_, protectionDays) };


      // purchased Field Functions 
      bool hasPurchased() const { return this->purchased_ != nullptr;};
      void deletePurchased() { this->purchased_ = nullptr;};
      inline bool getPurchased() const { DARABONBA_PTR_GET_DEFAULT(purchased_, false) };
      inline UserStatus& setPurchased(bool purchased) { DARABONBA_PTR_SET_VALUE(purchased_, purchased) };


      // releaseDays Field Functions 
      bool hasReleaseDays() const { return this->releaseDays_ != nullptr;};
      void deleteReleaseDays() { this->releaseDays_ = nullptr;};
      inline int32_t getReleaseDays() const { DARABONBA_PTR_GET_DEFAULT(releaseDays_, 0) };
      inline UserStatus& setReleaseDays(int32_t releaseDays) { DARABONBA_PTR_SET_VALUE(releaseDays_, releaseDays) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline int64_t getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, 0L) };
      inline UserStatus& setReleaseTime(int64_t releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // remainDays Field Functions 
      bool hasRemainDays() const { return this->remainDays_ != nullptr;};
      void deleteRemainDays() { this->remainDays_ = nullptr;};
      inline int32_t getRemainDays() const { DARABONBA_PTR_GET_DEFAULT(remainDays_, 0) };
      inline UserStatus& setRemainDays(int32_t remainDays) { DARABONBA_PTR_SET_VALUE(remainDays_, remainDays) };


      // trail Field Functions 
      bool hasTrail() const { return this->trail_ != nullptr;};
      void deleteTrail() { this->trail_ = nullptr;};
      inline bool getTrail() const { DARABONBA_PTR_GET_DEFAULT(trail_, false) };
      inline UserStatus& setTrail(bool trail) { DARABONBA_PTR_SET_VALUE(trail_, trail) };


      // useAgentAudit Field Functions 
      bool hasUseAgentAudit() const { return this->useAgentAudit_ != nullptr;};
      void deleteUseAgentAudit() { this->useAgentAudit_ = nullptr;};
      inline bool getUseAgentAudit() const { DARABONBA_PTR_GET_DEFAULT(useAgentAudit_, false) };
      inline UserStatus& setUseAgentAudit(bool useAgentAudit) { DARABONBA_PTR_SET_VALUE(useAgentAudit_, useAgentAudit) };


      // useInstanceNum Field Functions 
      bool hasUseInstanceNum() const { return this->useInstanceNum_ != nullptr;};
      void deleteUseInstanceNum() { this->useInstanceNum_ = nullptr;};
      inline int32_t getUseInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(useInstanceNum_, 0) };
      inline UserStatus& setUseInstanceNum(int32_t useInstanceNum) { DARABONBA_PTR_SET_VALUE(useInstanceNum_, useInstanceNum) };


      // useOssSize Field Functions 
      bool hasUseOssSize() const { return this->useOssSize_ != nullptr;};
      void deleteUseOssSize() { this->useOssSize_ = nullptr;};
      inline int64_t getUseOssSize() const { DARABONBA_PTR_GET_DEFAULT(useOssSize_, 0L) };
      inline UserStatus& setUseOssSize(int64_t useOssSize) { DARABONBA_PTR_SET_VALUE(useOssSize_, useOssSize) };


    protected:
      // The AccessKey ID of the current account.
      shared_ptr<string> accessKeyId_ {};
      shared_ptr<bool> assetRoleAuthed_ {};
      // Indicates whether the SQL Explorer feature can be disabled. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> auditClosable_ {};
      // Indicates whether the audit resources can be released.
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> auditReleasable_ {};
      // Indicates whether DSC has permission to access user resources within the current account. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> authed_ {};
      // The billing method of DCS that is purchased by using the current account. Valid values:
      // 
      // *   **PREPAY**: subscription
      // *   **POSTPAY**: pay-as-you-go
      shared_ptr<string> chargeType_ {};
      // The permissions that the current account has. Valid values:
      // 
      // *   **0**: The current account has the administrative permissions or read-only permissions on Data Security Center.
      // *   **1**: The current account has the permissions to manage data domains.
      shared_ptr<int32_t> dataManagerRole_ {};
      // The ID of the data security center instance purchased by the main account.
      shared_ptr<string> instanceId_ {};
      // The number of instances within the current account.
      shared_ptr<int32_t> instanceNum_ {};
      // The total number of instances.
      shared_ptr<int64_t> instanceTotalCount_ {};
      // Indicates whether the data security lab feature is enabled. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> labStatus_ {};
      // OSS total storage capacity. Unit: Bytes.
      shared_ptr<int64_t> ossTotalSize_ {};
      // Accumulate the number of days to protect user assets.
      shared_ptr<int32_t> protectionDays_ {};
      // Indicates whether DSC is purchased. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> purchased_ {};
      // The grace period between when DSC is expired and when DSC is released. Unit: days.
      shared_ptr<int32_t> releaseDays_ {};
      // The time when the audit resources are released. Unit: milliseconds.
      shared_ptr<int64_t> releaseTime_ {};
      // The remaining period for which the data assets within the current account can be protected by DSC.
      shared_ptr<int32_t> remainDays_ {};
      // Indicates whether the current account uses a free trial of DSC. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> trail_ {};
      // Indicates whether the agent audit feature is used. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<bool> useAgentAudit_ {};
      // The number of instances that are used.
      shared_ptr<int32_t> useInstanceNum_ {};
      // The occupied space of the Object Storage Service (OSS) bucket. Unit: bytes.
      shared_ptr<int64_t> useOssSize_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userStatus Field Functions 
    bool hasUserStatus() const { return this->userStatus_ != nullptr;};
    void deleteUserStatus() { this->userStatus_ = nullptr;};
    inline const DescribeUserStatusResponseBody::UserStatus & getUserStatus() const { DARABONBA_PTR_GET_CONST(userStatus_, DescribeUserStatusResponseBody::UserStatus) };
    inline DescribeUserStatusResponseBody::UserStatus getUserStatus() { DARABONBA_PTR_GET(userStatus_, DescribeUserStatusResponseBody::UserStatus) };
    inline DescribeUserStatusResponseBody& setUserStatus(const DescribeUserStatusResponseBody::UserStatus & userStatus) { DARABONBA_PTR_SET_VALUE(userStatus_, userStatus) };
    inline DescribeUserStatusResponseBody& setUserStatus(DescribeUserStatusResponseBody::UserStatus && userStatus) { DARABONBA_PTR_SET_RVALUE(userStatus_, userStatus) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the current account.
    shared_ptr<DescribeUserStatusResponseBody::UserStatus> userStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
