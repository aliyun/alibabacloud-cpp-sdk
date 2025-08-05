// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOtsTableSnapshotsRequestOtsInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeOtsTableSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOtsTableSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OtsInstances, otsInstances_);
      DARABONBA_PTR_TO_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOtsTableSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OtsInstances, otsInstances_);
      DARABONBA_PTR_FROM_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeOtsTableSnapshotsRequest() = default ;
    DescribeOtsTableSnapshotsRequest(const DescribeOtsTableSnapshotsRequest &) = default ;
    DescribeOtsTableSnapshotsRequest(DescribeOtsTableSnapshotsRequest &&) = default ;
    DescribeOtsTableSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOtsTableSnapshotsRequest() = default ;
    DescribeOtsTableSnapshotsRequest& operator=(const DescribeOtsTableSnapshotsRequest &) = default ;
    DescribeOtsTableSnapshotsRequest& operator=(DescribeOtsTableSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crossAccountRoleName_ != nullptr
        && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->endTime_ != nullptr && this->limit_ != nullptr && this->nextToken_ != nullptr
        && this->otsInstances_ != nullptr && this->snapshotIds_ != nullptr && this->startTime_ != nullptr; };
    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeOtsTableSnapshotsRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeOtsTableSnapshotsRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeOtsTableSnapshotsRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeOtsTableSnapshotsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DescribeOtsTableSnapshotsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOtsTableSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // otsInstances Field Functions 
    bool hasOtsInstances() const { return this->otsInstances_ != nullptr;};
    void deleteOtsInstances() { this->otsInstances_ = nullptr;};
    inline const vector<DescribeOtsTableSnapshotsRequestOtsInstances> & otsInstances() const { DARABONBA_PTR_GET_CONST(otsInstances_, vector<DescribeOtsTableSnapshotsRequestOtsInstances>) };
    inline vector<DescribeOtsTableSnapshotsRequestOtsInstances> otsInstances() { DARABONBA_PTR_GET(otsInstances_, vector<DescribeOtsTableSnapshotsRequestOtsInstances>) };
    inline DescribeOtsTableSnapshotsRequest& setOtsInstances(const vector<DescribeOtsTableSnapshotsRequestOtsInstances> & otsInstances) { DARABONBA_PTR_SET_VALUE(otsInstances_, otsInstances) };
    inline DescribeOtsTableSnapshotsRequest& setOtsInstances(vector<DescribeOtsTableSnapshotsRequestOtsInstances> && otsInstances) { DARABONBA_PTR_SET_RVALUE(otsInstances_, otsInstances) };


    // snapshotIds Field Functions 
    bool hasSnapshotIds() const { return this->snapshotIds_ != nullptr;};
    void deleteSnapshotIds() { this->snapshotIds_ = nullptr;};
    inline const vector<string> & snapshotIds() const { DARABONBA_PTR_GET_CONST(snapshotIds_, vector<string>) };
    inline vector<string> snapshotIds() { DARABONBA_PTR_GET(snapshotIds_, vector<string>) };
    inline DescribeOtsTableSnapshotsRequest& setSnapshotIds(const vector<string> & snapshotIds) { DARABONBA_PTR_SET_VALUE(snapshotIds_, snapshotIds) };
    inline DescribeOtsTableSnapshotsRequest& setSnapshotIds(vector<string> && snapshotIds) { DARABONBA_PTR_SET_RVALUE(snapshotIds_, snapshotIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeOtsTableSnapshotsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The UID of the source account used for cross-account backup.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The end time of the backup. The value must be a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The maximum number of rows that you want the current query to return.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The token that is required to obtain the next page of backup snapshots.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The Tablestore instances that are backed up.
    std::shared_ptr<vector<DescribeOtsTableSnapshotsRequestOtsInstances>> otsInstances_ = nullptr;
    // The snapshot IDs.
    std::shared_ptr<vector<string>> snapshotIds_ = nullptr;
    // The start time of the backup. The value must be a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
