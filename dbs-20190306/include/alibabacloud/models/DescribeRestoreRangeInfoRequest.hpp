// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreRangeInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreRangeInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecentlyRestore, recentlyRestore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreRangeInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecentlyRestore, recentlyRestore_);
    };
    DescribeRestoreRangeInfoRequest() = default ;
    DescribeRestoreRangeInfoRequest(const DescribeRestoreRangeInfoRequest &) = default ;
    DescribeRestoreRangeInfoRequest(DescribeRestoreRangeInfoRequest &&) = default ;
    DescribeRestoreRangeInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreRangeInfoRequest() = default ;
    DescribeRestoreRangeInfoRequest& operator=(const DescribeRestoreRangeInfoRequest &) = default ;
    DescribeRestoreRangeInfoRequest& operator=(DescribeRestoreRangeInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && return this->beginTimestampForRestore_ == nullptr && return this->clientToken_ == nullptr && return this->endTimestampForRestore_ == nullptr && return this->ownerId_ == nullptr && return this->recentlyRestore_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeRestoreRangeInfoRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // beginTimestampForRestore Field Functions 
    bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
    void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
    inline int64_t beginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoRequest& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeRestoreRangeInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endTimestampForRestore Field Functions 
    bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
    void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
    inline int64_t endTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoRequest& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeRestoreRangeInfoRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recentlyRestore Field Functions 
    bool hasRecentlyRestore() const { return this->recentlyRestore_ != nullptr;};
    void deleteRecentlyRestore() { this->recentlyRestore_ = nullptr;};
    inline bool recentlyRestore() const { DARABONBA_PTR_GET_DEFAULT(recentlyRestore_, false) };
    inline DescribeRestoreRangeInfoRequest& setRecentlyRestore(bool recentlyRestore) { DARABONBA_PTR_SET_VALUE(recentlyRestore_, recentlyRestore) };


  protected:
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The earliest point in time to which you can restore data. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the value of the parameter for each backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> beginTimestampForRestore_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The latest point in time to which you can restore data. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the value of the parameter for each backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTimestampForRestore_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // Specifies whether to query the most recent point in time to which you can restore data.
    std::shared_ptr<bool> recentlyRestore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
