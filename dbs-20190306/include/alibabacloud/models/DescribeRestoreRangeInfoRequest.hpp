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
        && this->beginTimestampForRestore_ == nullptr && this->clientToken_ == nullptr && this->endTimestampForRestore_ == nullptr && this->ownerId_ == nullptr && this->recentlyRestore_ == nullptr; };
    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeRestoreRangeInfoRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // beginTimestampForRestore Field Functions 
    bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
    void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
    inline int64_t getBeginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoRequest& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeRestoreRangeInfoRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // endTimestampForRestore Field Functions 
    bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
    void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
    inline int64_t getEndTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoRequest& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeRestoreRangeInfoRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recentlyRestore Field Functions 
    bool hasRecentlyRestore() const { return this->recentlyRestore_ != nullptr;};
    void deleteRecentlyRestore() { this->recentlyRestore_ = nullptr;};
    inline bool getRecentlyRestore() const { DARABONBA_PTR_GET_DEFAULT(recentlyRestore_, false) };
    inline DescribeRestoreRangeInfoRequest& setRecentlyRestore(bool recentlyRestore) { DARABONBA_PTR_SET_VALUE(recentlyRestore_, recentlyRestore) };


  protected:
    // The ID of the backup plan. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The start timestamp of the restorable time range. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTimestampForRestore_ {};
    // A client token that ensures the idempotence of requests and prevents duplicate submissions.
    shared_ptr<string> clientToken_ {};
    // The end timestamp of the restorable time range. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTimestampForRestore_ {};
    shared_ptr<string> ownerId_ {};
    // Whether to enable recent restore.
    shared_ptr<bool> recentlyRestore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
