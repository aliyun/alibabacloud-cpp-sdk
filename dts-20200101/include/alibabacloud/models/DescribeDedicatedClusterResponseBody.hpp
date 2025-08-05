// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDedicatedClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_TO_JSON(DiskUtilization, diskUtilization_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(Du, du_);
      DARABONBA_PTR_TO_JSON(DuUtilization, duUtilization_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtFinished, gmtFinished_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(OversoldDu, oversoldDu_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_TO_JSON(TotalDiskGBSize, totalDiskGBSize_);
      DARABONBA_PTR_TO_JSON(TotalMemGBSize, totalMemGBSize_);
      DARABONBA_PTR_TO_JSON(UsedCpuCore, usedCpuCore_);
      DARABONBA_PTR_TO_JSON(UsedDiskGBSize, usedDiskGBSize_);
      DARABONBA_PTR_TO_JSON(UsedDu, usedDu_);
      DARABONBA_PTR_TO_JSON(UsedMemGBSize, usedMemGBSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_FROM_JSON(DiskUtilization, diskUtilization_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(Du, du_);
      DARABONBA_PTR_FROM_JSON(DuUtilization, duUtilization_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtFinished, gmtFinished_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(OversoldDu, oversoldDu_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_FROM_JSON(TotalDiskGBSize, totalDiskGBSize_);
      DARABONBA_PTR_FROM_JSON(TotalMemGBSize, totalMemGBSize_);
      DARABONBA_PTR_FROM_JSON(UsedCpuCore, usedCpuCore_);
      DARABONBA_PTR_FROM_JSON(UsedDiskGBSize, usedDiskGBSize_);
      DARABONBA_PTR_FROM_JSON(UsedDu, usedDu_);
      DARABONBA_PTR_FROM_JSON(UsedMemGBSize, usedMemGBSize_);
    };
    DescribeDedicatedClusterResponseBody() = default ;
    DescribeDedicatedClusterResponseBody(const DescribeDedicatedClusterResponseBody &) = default ;
    DescribeDedicatedClusterResponseBody(DescribeDedicatedClusterResponseBody &&) = default ;
    DescribeDedicatedClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedClusterResponseBody() = default ;
    DescribeDedicatedClusterResponseBody& operator=(const DescribeDedicatedClusterResponseBody &) = default ;
    DescribeDedicatedClusterResponseBody& operator=(DescribeDedicatedClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuUtilization_ != nullptr
        && this->dedicatedClusterId_ != nullptr && this->dedicatedClusterName_ != nullptr && this->diskUtilization_ != nullptr && this->dtsInstanceID_ != nullptr && this->du_ != nullptr
        && this->duUtilization_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->gmtCreated_ != nullptr && this->gmtFinished_ != nullptr
        && this->httpStatusCode_ != nullptr && this->memUtilization_ != nullptr && this->nodeCount_ != nullptr && this->oversoldDu_ != nullptr && this->regionId_ != nullptr
        && this->requestId_ != nullptr && this->state_ != nullptr && this->success_ != nullptr && this->totalCpuCore_ != nullptr && this->totalDiskGBSize_ != nullptr
        && this->totalMemGBSize_ != nullptr && this->usedCpuCore_ != nullptr && this->usedDiskGBSize_ != nullptr && this->usedDu_ != nullptr && this->usedMemGBSize_ != nullptr; };
    // cpuUtilization Field Functions 
    bool hasCpuUtilization() const { return this->cpuUtilization_ != nullptr;};
    void deleteCpuUtilization() { this->cpuUtilization_ = nullptr;};
    inline int64_t cpuUtilization() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilization_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setCpuUtilization(int64_t cpuUtilization) { DARABONBA_PTR_SET_VALUE(cpuUtilization_, cpuUtilization) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeDedicatedClusterResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // dedicatedClusterName Field Functions 
    bool hasDedicatedClusterName() const { return this->dedicatedClusterName_ != nullptr;};
    void deleteDedicatedClusterName() { this->dedicatedClusterName_ = nullptr;};
    inline string dedicatedClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterName_, "") };
    inline DescribeDedicatedClusterResponseBody& setDedicatedClusterName(string dedicatedClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedClusterName_, dedicatedClusterName) };


    // diskUtilization Field Functions 
    bool hasDiskUtilization() const { return this->diskUtilization_ != nullptr;};
    void deleteDiskUtilization() { this->diskUtilization_ = nullptr;};
    inline int64_t diskUtilization() const { DARABONBA_PTR_GET_DEFAULT(diskUtilization_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setDiskUtilization(int64_t diskUtilization) { DARABONBA_PTR_SET_VALUE(diskUtilization_, diskUtilization) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline DescribeDedicatedClusterResponseBody& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // du Field Functions 
    bool hasDu() const { return this->du_ != nullptr;};
    void deleteDu() { this->du_ = nullptr;};
    inline int64_t du() const { DARABONBA_PTR_GET_DEFAULT(du_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setDu(int64_t du) { DARABONBA_PTR_SET_VALUE(du_, du) };


    // duUtilization Field Functions 
    bool hasDuUtilization() const { return this->duUtilization_ != nullptr;};
    void deleteDuUtilization() { this->duUtilization_ = nullptr;};
    inline int64_t duUtilization() const { DARABONBA_PTR_GET_DEFAULT(duUtilization_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setDuUtilization(int64_t duUtilization) { DARABONBA_PTR_SET_VALUE(duUtilization_, duUtilization) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDedicatedClusterResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDedicatedClusterResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtFinished Field Functions 
    bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
    void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
    inline int64_t gmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeDedicatedClusterResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline int64_t memUtilization() const { DARABONBA_PTR_GET_DEFAULT(memUtilization_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setMemUtilization(int64_t memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // oversoldDu Field Functions 
    bool hasOversoldDu() const { return this->oversoldDu_ != nullptr;};
    void deleteOversoldDu() { this->oversoldDu_ = nullptr;};
    inline int64_t oversoldDu() const { DARABONBA_PTR_GET_DEFAULT(oversoldDu_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setOversoldDu(int64_t oversoldDu) { DARABONBA_PTR_SET_VALUE(oversoldDu_, oversoldDu) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedClusterResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDedicatedClusterResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDedicatedClusterResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCpuCore Field Functions 
    bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
    void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
    inline int64_t totalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setTotalCpuCore(int64_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


    // totalDiskGBSize Field Functions 
    bool hasTotalDiskGBSize() const { return this->totalDiskGBSize_ != nullptr;};
    void deleteTotalDiskGBSize() { this->totalDiskGBSize_ = nullptr;};
    inline int64_t totalDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskGBSize_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setTotalDiskGBSize(int64_t totalDiskGBSize) { DARABONBA_PTR_SET_VALUE(totalDiskGBSize_, totalDiskGBSize) };


    // totalMemGBSize Field Functions 
    bool hasTotalMemGBSize() const { return this->totalMemGBSize_ != nullptr;};
    void deleteTotalMemGBSize() { this->totalMemGBSize_ = nullptr;};
    inline int64_t totalMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalMemGBSize_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setTotalMemGBSize(int64_t totalMemGBSize) { DARABONBA_PTR_SET_VALUE(totalMemGBSize_, totalMemGBSize) };


    // usedCpuCore Field Functions 
    bool hasUsedCpuCore() const { return this->usedCpuCore_ != nullptr;};
    void deleteUsedCpuCore() { this->usedCpuCore_ = nullptr;};
    inline int64_t usedCpuCore() const { DARABONBA_PTR_GET_DEFAULT(usedCpuCore_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setUsedCpuCore(int64_t usedCpuCore) { DARABONBA_PTR_SET_VALUE(usedCpuCore_, usedCpuCore) };


    // usedDiskGBSize Field Functions 
    bool hasUsedDiskGBSize() const { return this->usedDiskGBSize_ != nullptr;};
    void deleteUsedDiskGBSize() { this->usedDiskGBSize_ = nullptr;};
    inline int64_t usedDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedDiskGBSize_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setUsedDiskGBSize(int64_t usedDiskGBSize) { DARABONBA_PTR_SET_VALUE(usedDiskGBSize_, usedDiskGBSize) };


    // usedDu Field Functions 
    bool hasUsedDu() const { return this->usedDu_ != nullptr;};
    void deleteUsedDu() { this->usedDu_ = nullptr;};
    inline int64_t usedDu() const { DARABONBA_PTR_GET_DEFAULT(usedDu_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setUsedDu(int64_t usedDu) { DARABONBA_PTR_SET_VALUE(usedDu_, usedDu) };


    // usedMemGBSize Field Functions 
    bool hasUsedMemGBSize() const { return this->usedMemGBSize_ != nullptr;};
    void deleteUsedMemGBSize() { this->usedMemGBSize_ = nullptr;};
    inline int64_t usedMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedMemGBSize_, 0L) };
    inline DescribeDedicatedClusterResponseBody& setUsedMemGBSize(int64_t usedMemGBSize) { DARABONBA_PTR_SET_VALUE(usedMemGBSize_, usedMemGBSize) };


  protected:
    // The CPU utilization. Unit: percentage.
    std::shared_ptr<int64_t> cpuUtilization_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> dedicatedClusterName_ = nullptr;
    // The disk usage.
    std::shared_ptr<int64_t> diskUtilization_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The number of DTS units (DUs).
    std::shared_ptr<int64_t> du_ = nullptr;
    // The DU usage. Unit: percentage.
    std::shared_ptr<int64_t> duUtilization_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<int64_t> gmtCreated_ = nullptr;
    // The time when the cluster stopped.
    std::shared_ptr<int64_t> gmtFinished_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The memory usage.
    std::shared_ptr<int64_t> memUtilization_ = nullptr;
    // The number of nodes in the cluster.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    // The number of DUs that exceeds the upper limit.
    std::shared_ptr<int64_t> oversoldDu_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **init**: The cluster is being initialized.
    // *   **schedule**: The cluster is pending scheduling.
    // *   **running**: The cluster is running.
    // *   **upgrade**: The cluster is being upgraded.
    // *   **downgrade**: The cluster is being downgraded.
    // *   **locked**: The cluster is locked.
    // *   **releasing**: The cluster is being released.
    // *   **released**: The cluster is released.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of CPU cores.
    std::shared_ptr<int64_t> totalCpuCore_ = nullptr;
    // The total disk size. Unit: GB.
    std::shared_ptr<int64_t> totalDiskGBSize_ = nullptr;
    // The total amount of memory. Unit: GB.
    std::shared_ptr<int64_t> totalMemGBSize_ = nullptr;
    // The number of used CPU cores.
    std::shared_ptr<int64_t> usedCpuCore_ = nullptr;
    // The used disk size. Unit: GB.
    std::shared_ptr<int64_t> usedDiskGBSize_ = nullptr;
    // The number of used DUs.
    std::shared_ptr<int64_t> usedDu_ = nullptr;
    // The amount of used memory. Unit: GB.
    std::shared_ptr<int64_t> usedMemGBSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
