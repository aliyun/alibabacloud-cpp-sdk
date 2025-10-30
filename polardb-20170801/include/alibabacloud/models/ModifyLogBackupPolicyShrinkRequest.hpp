// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGBACKUPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyLogBackupPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLogBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedLogPolicies, advancedLogPoliciesShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_TO_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLogBackupPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedLogPolicies, advancedLogPoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRegion, logBackupAnotherRegionRegion_);
      DARABONBA_PTR_FROM_JSON(LogBackupAnotherRegionRetentionPeriod, logBackupAnotherRegionRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyLogBackupPolicyShrinkRequest() = default ;
    ModifyLogBackupPolicyShrinkRequest(const ModifyLogBackupPolicyShrinkRequest &) = default ;
    ModifyLogBackupPolicyShrinkRequest(ModifyLogBackupPolicyShrinkRequest &&) = default ;
    ModifyLogBackupPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLogBackupPolicyShrinkRequest() = default ;
    ModifyLogBackupPolicyShrinkRequest& operator=(const ModifyLogBackupPolicyShrinkRequest &) = default ;
    ModifyLogBackupPolicyShrinkRequest& operator=(ModifyLogBackupPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedLogPoliciesShrink_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->logBackupAnotherRegionRegion_ == nullptr && return this->logBackupAnotherRegionRetentionPeriod_ == nullptr && return this->logBackupRetentionPeriod_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // advancedLogPoliciesShrink Field Functions 
    bool hasAdvancedLogPoliciesShrink() const { return this->advancedLogPoliciesShrink_ != nullptr;};
    void deleteAdvancedLogPoliciesShrink() { this->advancedLogPoliciesShrink_ = nullptr;};
    inline string advancedLogPoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(advancedLogPoliciesShrink_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setAdvancedLogPoliciesShrink(string advancedLogPoliciesShrink) { DARABONBA_PTR_SET_VALUE(advancedLogPoliciesShrink_, advancedLogPoliciesShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // logBackupAnotherRegionRegion Field Functions 
    bool hasLogBackupAnotherRegionRegion() const { return this->logBackupAnotherRegionRegion_ != nullptr;};
    void deleteLogBackupAnotherRegionRegion() { this->logBackupAnotherRegionRegion_ = nullptr;};
    inline string logBackupAnotherRegionRegion() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRegion_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setLogBackupAnotherRegionRegion(string logBackupAnotherRegionRegion) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRegion_, logBackupAnotherRegionRegion) };


    // logBackupAnotherRegionRetentionPeriod Field Functions 
    bool hasLogBackupAnotherRegionRetentionPeriod() const { return this->logBackupAnotherRegionRetentionPeriod_ != nullptr;};
    void deleteLogBackupAnotherRegionRetentionPeriod() { this->logBackupAnotherRegionRetentionPeriod_ = nullptr;};
    inline string logBackupAnotherRegionRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupAnotherRegionRetentionPeriod_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setLogBackupAnotherRegionRetentionPeriod(string logBackupAnotherRegionRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupAnotherRegionRetentionPeriod_, logBackupAnotherRegionRetentionPeriod) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline string logBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setLogBackupRetentionPeriod(string logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLogBackupPolicyShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyLogBackupPolicyShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyLogBackupPolicyShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<string> advancedLogPoliciesShrink_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the information of all clusters that are deployed in a specific region, such as the cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region in which you want to store cross-region log backups. For information about regions that support the cross-region backup feature, see [Overview](https://help.aliyun.com/document_detail/72672.html).
    std::shared_ptr<string> logBackupAnotherRegionRegion_ = nullptr;
    // The retention period of cross-region log backups. Valid values:
    // 
    // *   **0**: The cross-region backup feature is disabled.
    // *   **30 to 7300**: Cross-region log backups are retained for 30 to 7,300 days.
    // *   **-1**: The log backups are permanently retained.
    // 
    // >  When you create a cluster, the default value of this parameter is **0**.
    std::shared_ptr<string> logBackupAnotherRegionRetentionPeriod_ = nullptr;
    // The retention period of the log backups. Valid values:
    // 
    // *   3 to 7300: The log backups are retained for 3 to 7,300 days.
    // *   \\-1: The log backups are permanently retained.
    std::shared_ptr<string> logBackupRetentionPeriod_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
