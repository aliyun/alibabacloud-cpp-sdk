// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXECUTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBEXECUTORSRESPONSEBODYEXECUTORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobExecutorsResponseBodyExecutorsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobExecutorsResponseBodyExecutors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobExecutorsResponseBodyExecutors& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_TO_JSON(BlockDuration, blockDuration_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecutorId, executorId_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(ExternalIpAddress, externalIpAddress_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Preemptible, preemptible_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobExecutorsResponseBodyExecutors& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_FROM_JSON(BlockDuration, blockDuration_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecutorId, executorId_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(ExternalIpAddress, externalIpAddress_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Preemptible, preemptible_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListJobExecutorsResponseBodyExecutors() = default ;
    ListJobExecutorsResponseBodyExecutors(const ListJobExecutorsResponseBodyExecutors &) = default ;
    ListJobExecutorsResponseBodyExecutors(ListJobExecutorsResponseBodyExecutors &&) = default ;
    ListJobExecutorsResponseBodyExecutors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobExecutorsResponseBodyExecutors() = default ;
    ListJobExecutorsResponseBodyExecutors& operator=(const ListJobExecutorsResponseBodyExecutors &) = default ;
    ListJobExecutorsResponseBodyExecutors& operator=(ListJobExecutorsResponseBodyExecutors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && return this->arrayIndex_ == nullptr && return this->blockDuration_ == nullptr && return this->createTime_ == nullptr && return this->endTime_ == nullptr && return this->executorId_ == nullptr
        && return this->expirationTime_ == nullptr && return this->externalIpAddress_ == nullptr && return this->hostName_ == nullptr && return this->ipAddress_ == nullptr && return this->preemptible_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr && return this->tags_ == nullptr; };
    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string allocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline int32_t arrayIndex() const { DARABONBA_PTR_GET_DEFAULT(arrayIndex_, 0) };
    inline ListJobExecutorsResponseBodyExecutors& setArrayIndex(int32_t arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };


    // blockDuration Field Functions 
    bool hasBlockDuration() const { return this->blockDuration_ != nullptr;};
    void deleteBlockDuration() { this->blockDuration_ = nullptr;};
    inline int32_t blockDuration() const { DARABONBA_PTR_GET_DEFAULT(blockDuration_, 0) };
    inline ListJobExecutorsResponseBodyExecutors& setBlockDuration(int32_t blockDuration) { DARABONBA_PTR_SET_VALUE(blockDuration_, blockDuration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executorId Field Functions 
    bool hasExecutorId() const { return this->executorId_ != nullptr;};
    void deleteExecutorId() { this->executorId_ = nullptr;};
    inline string executorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // externalIpAddress Field Functions 
    bool hasExternalIpAddress() const { return this->externalIpAddress_ != nullptr;};
    void deleteExternalIpAddress() { this->externalIpAddress_ = nullptr;};
    inline const vector<string> & externalIpAddress() const { DARABONBA_PTR_GET_CONST(externalIpAddress_, vector<string>) };
    inline vector<string> externalIpAddress() { DARABONBA_PTR_GET(externalIpAddress_, vector<string>) };
    inline ListJobExecutorsResponseBodyExecutors& setExternalIpAddress(const vector<string> & externalIpAddress) { DARABONBA_PTR_SET_VALUE(externalIpAddress_, externalIpAddress) };
    inline ListJobExecutorsResponseBodyExecutors& setExternalIpAddress(vector<string> && externalIpAddress) { DARABONBA_PTR_SET_RVALUE(externalIpAddress_, externalIpAddress) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline const vector<string> & hostName() const { DARABONBA_PTR_GET_CONST(hostName_, vector<string>) };
    inline vector<string> hostName() { DARABONBA_PTR_GET(hostName_, vector<string>) };
    inline ListJobExecutorsResponseBodyExecutors& setHostName(const vector<string> & hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };
    inline ListJobExecutorsResponseBodyExecutors& setHostName(vector<string> && hostName) { DARABONBA_PTR_SET_RVALUE(hostName_, hostName) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline const vector<string> & ipAddress() const { DARABONBA_PTR_GET_CONST(ipAddress_, vector<string>) };
    inline vector<string> ipAddress() { DARABONBA_PTR_GET(ipAddress_, vector<string>) };
    inline ListJobExecutorsResponseBodyExecutors& setIpAddress(const vector<string> & ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };
    inline ListJobExecutorsResponseBodyExecutors& setIpAddress(vector<string> && ipAddress) { DARABONBA_PTR_SET_RVALUE(ipAddress_, ipAddress) };


    // preemptible Field Functions 
    bool hasPreemptible() const { return this->preemptible_ != nullptr;};
    void deletePreemptible() { this->preemptible_ = nullptr;};
    inline bool preemptible() const { DARABONBA_PTR_GET_DEFAULT(preemptible_, false) };
    inline ListJobExecutorsResponseBodyExecutors& setPreemptible(bool preemptible) { DARABONBA_PTR_SET_VALUE(preemptible_, preemptible) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListJobExecutorsResponseBodyExecutors& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListJobExecutorsResponseBodyExecutorsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListJobExecutorsResponseBodyExecutorsTags>) };
    inline vector<Models::ListJobExecutorsResponseBodyExecutorsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListJobExecutorsResponseBodyExecutorsTags>) };
    inline ListJobExecutorsResponseBodyExecutors& setTags(const vector<Models::ListJobExecutorsResponseBodyExecutorsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListJobExecutorsResponseBodyExecutors& setTags(vector<Models::ListJobExecutorsResponseBodyExecutorsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> allocationSpec_ = nullptr;
    // The executor index number.
    std::shared_ptr<int32_t> arrayIndex_ = nullptr;
    std::shared_ptr<int32_t> blockDuration_ = nullptr;
    // The time when the storage resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The executor ID. The format is JobId-TaskName-ArrayIndex.
    std::shared_ptr<string> executorId_ = nullptr;
    std::shared_ptr<string> expirationTime_ = nullptr;
    // The list of public IP addresses of the nodes.
    std::shared_ptr<vector<string>> externalIpAddress_ = nullptr;
    // An array of node hostnames.
    std::shared_ptr<vector<string>> hostName_ = nullptr;
    // The list of node IP addresses.
    std::shared_ptr<vector<string>> ipAddress_ = nullptr;
    std::shared_ptr<bool> preemptible_ = nullptr;
    // The create time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the executor. Valid values:
    // 
    // *   Pending
    // *   Initing
    // *   Succeed
    // *   Failed
    // *   Running
    // *   Unknown
    // *   Exception
    // *   Retrying
    // *   Expired
    // *   Deleted
    std::shared_ptr<string> status_ = nullptr;
    // The description of the status reason.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The list of executor tags.
    std::shared_ptr<vector<Models::ListJobExecutorsResponseBodyExecutorsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
