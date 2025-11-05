// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODYDRILLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODYDRILLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeReplicaGroupDrillsResponseBodyDrills : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicaGroupDrillsResponseBodyDrills& obj) { 
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PairsInfo, pairsInfo_);
      DARABONBA_PTR_TO_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_TO_JSON(StartAt, startAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicaGroupDrillsResponseBodyDrills& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PairsInfo, pairsInfo_);
      DARABONBA_PTR_FROM_JSON(RecoverPoint, recoverPoint_);
      DARABONBA_PTR_FROM_JSON(StartAt, startAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
    };
    DescribeReplicaGroupDrillsResponseBodyDrills() = default ;
    DescribeReplicaGroupDrillsResponseBodyDrills(const DescribeReplicaGroupDrillsResponseBodyDrills &) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrills(DescribeReplicaGroupDrillsResponseBodyDrills &&) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrills(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicaGroupDrillsResponseBodyDrills() = default ;
    DescribeReplicaGroupDrillsResponseBodyDrills& operator=(const DescribeReplicaGroupDrillsResponseBodyDrills &) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrills& operator=(DescribeReplicaGroupDrillsResponseBodyDrills &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillId_ == nullptr
        && return this->groupId_ == nullptr && return this->pairsInfo_ == nullptr && return this->recoverPoint_ == nullptr && return this->startAt_ == nullptr && return this->status_ == nullptr
        && return this->statusMessage_ == nullptr; };
    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string drillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // pairsInfo Field Functions 
    bool hasPairsInfo() const { return this->pairsInfo_ != nullptr;};
    void deletePairsInfo() { this->pairsInfo_ = nullptr;};
    inline const vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo> & pairsInfo() const { DARABONBA_PTR_GET_CONST(pairsInfo_, vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo>) };
    inline vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo> pairsInfo() { DARABONBA_PTR_GET(pairsInfo_, vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo>) };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setPairsInfo(const vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo> & pairsInfo) { DARABONBA_PTR_SET_VALUE(pairsInfo_, pairsInfo) };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setPairsInfo(vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo> && pairsInfo) { DARABONBA_PTR_SET_RVALUE(pairsInfo_, pairsInfo) };


    // recoverPoint Field Functions 
    bool hasRecoverPoint() const { return this->recoverPoint_ != nullptr;};
    void deleteRecoverPoint() { this->recoverPoint_ = nullptr;};
    inline int64_t recoverPoint() const { DARABONBA_PTR_GET_DEFAULT(recoverPoint_, 0L) };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setRecoverPoint(int64_t recoverPoint) { DARABONBA_PTR_SET_VALUE(recoverPoint_, recoverPoint) };


    // startAt Field Functions 
    bool hasStartAt() const { return this->startAt_ != nullptr;};
    void deleteStartAt() { this->startAt_ = nullptr;};
    inline int64_t startAt() const { DARABONBA_PTR_GET_DEFAULT(startAt_, 0L) };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setStartAt(int64_t startAt) { DARABONBA_PTR_SET_VALUE(startAt_, startAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string statusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrills& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


  protected:
    // The ID of the drill.
    std::shared_ptr<string> drillId_ = nullptr;
    // The ID of the replication pair-consistent group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The information of replication pairs.
    std::shared_ptr<vector<Models::DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo>> pairsInfo_ = nullptr;
    // The recovery point of the drill. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> recoverPoint_ = nullptr;
    // The beginning time of the drill. The value of this parameter is a timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startAt_ = nullptr;
    // The status of the drill. Valid values:
    // 
    // *   execute_failed
    // *   executed
    // *   executing
    // *   clear_failed
    // *   clearing
    std::shared_ptr<string> status_ = nullptr;
    // The error message that appears if the drill fails to be executed.
    std::shared_ptr<string> statusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
