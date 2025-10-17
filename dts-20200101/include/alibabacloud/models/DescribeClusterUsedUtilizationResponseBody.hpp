// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSEDUTILIZATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSEDUTILIZATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeClusterUsedUtilizationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterUsedUtilizationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CpuTotal, cpuTotal_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DiskTotal, diskTotal_);
      DARABONBA_PTR_TO_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_TO_JSON(DuTotal, duTotal_);
      DARABONBA_PTR_TO_JSON(DuUsed, duUsed_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MemoryTotal, memoryTotal_);
      DARABONBA_PTR_TO_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_TO_JSON(MemoryUsedPercentage, memoryUsedPercentage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskRunning, taskRunning_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterUsedUtilizationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CpuTotal, cpuTotal_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DiskTotal, diskTotal_);
      DARABONBA_PTR_FROM_JSON(DiskUsed, diskUsed_);
      DARABONBA_PTR_FROM_JSON(DuTotal, duTotal_);
      DARABONBA_PTR_FROM_JSON(DuUsed, duUsed_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MemoryTotal, memoryTotal_);
      DARABONBA_PTR_FROM_JSON(MemoryUsed, memoryUsed_);
      DARABONBA_PTR_FROM_JSON(MemoryUsedPercentage, memoryUsedPercentage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskRunning, taskRunning_);
    };
    DescribeClusterUsedUtilizationResponseBody() = default ;
    DescribeClusterUsedUtilizationResponseBody(const DescribeClusterUsedUtilizationResponseBody &) = default ;
    DescribeClusterUsedUtilizationResponseBody(DescribeClusterUsedUtilizationResponseBody &&) = default ;
    DescribeClusterUsedUtilizationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterUsedUtilizationResponseBody() = default ;
    DescribeClusterUsedUtilizationResponseBody& operator=(const DescribeClusterUsedUtilizationResponseBody &) = default ;
    DescribeClusterUsedUtilizationResponseBody& operator=(DescribeClusterUsedUtilizationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->cpuTotal_ == nullptr && return this->dedicatedClusterId_ == nullptr && return this->diskTotal_ == nullptr && return this->diskUsed_ == nullptr && return this->duTotal_ == nullptr
        && return this->duUsed_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->memoryTotal_ == nullptr && return this->memoryUsed_ == nullptr && return this->memoryUsedPercentage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->taskRunning_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cpuTotal Field Functions 
    bool hasCpuTotal() const { return this->cpuTotal_ != nullptr;};
    void deleteCpuTotal() { this->cpuTotal_ = nullptr;};
    inline float cpuTotal() const { DARABONBA_PTR_GET_DEFAULT(cpuTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setCpuTotal(float cpuTotal) { DARABONBA_PTR_SET_VALUE(cpuTotal_, cpuTotal) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // diskTotal Field Functions 
    bool hasDiskTotal() const { return this->diskTotal_ != nullptr;};
    void deleteDiskTotal() { this->diskTotal_ = nullptr;};
    inline float diskTotal() const { DARABONBA_PTR_GET_DEFAULT(diskTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDiskTotal(float diskTotal) { DARABONBA_PTR_SET_VALUE(diskTotal_, diskTotal) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline float diskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDiskUsed(float diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // duTotal Field Functions 
    bool hasDuTotal() const { return this->duTotal_ != nullptr;};
    void deleteDuTotal() { this->duTotal_ = nullptr;};
    inline int32_t duTotal() const { DARABONBA_PTR_GET_DEFAULT(duTotal_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDuTotal(int32_t duTotal) { DARABONBA_PTR_SET_VALUE(duTotal_, duTotal) };


    // duUsed Field Functions 
    bool hasDuUsed() const { return this->duUsed_ != nullptr;};
    void deleteDuUsed() { this->duUsed_ = nullptr;};
    inline int32_t duUsed() const { DARABONBA_PTR_GET_DEFAULT(duUsed_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDuUsed(int32_t duUsed) { DARABONBA_PTR_SET_VALUE(duUsed_, duUsed) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // memoryTotal Field Functions 
    bool hasMemoryTotal() const { return this->memoryTotal_ != nullptr;};
    void deleteMemoryTotal() { this->memoryTotal_ = nullptr;};
    inline float memoryTotal() const { DARABONBA_PTR_GET_DEFAULT(memoryTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryTotal(float memoryTotal) { DARABONBA_PTR_SET_VALUE(memoryTotal_, memoryTotal) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline float memoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryUsed(float memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // memoryUsedPercentage Field Functions 
    bool hasMemoryUsedPercentage() const { return this->memoryUsedPercentage_ != nullptr;};
    void deleteMemoryUsedPercentage() { this->memoryUsedPercentage_ = nullptr;};
    inline float memoryUsedPercentage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsedPercentage_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryUsedPercentage(float memoryUsedPercentage) { DARABONBA_PTR_SET_VALUE(memoryUsedPercentage_, memoryUsedPercentage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeClusterUsedUtilizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskRunning Field Functions 
    bool hasTaskRunning() const { return this->taskRunning_ != nullptr;};
    void deleteTaskRunning() { this->taskRunning_ = nullptr;};
    inline int32_t taskRunning() const { DARABONBA_PTR_GET_DEFAULT(taskRunning_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setTaskRunning(int32_t taskRunning) { DARABONBA_PTR_SET_VALUE(taskRunning_, taskRunning) };


  protected:
    // The error code returned by the backend service. The number is incremented.
    std::shared_ptr<string> code_ = nullptr;
    // The CPU utilization of the cluster. Unit: percentage.
    std::shared_ptr<float> cpuTotal_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The total disk size of the cluster. Unit: GB.
    std::shared_ptr<float> diskTotal_ = nullptr;
    // The disk usage of the cluster. Unit: GB.
    std::shared_ptr<float> diskUsed_ = nullptr;
    // The total number of DTS units (DUs).
    std::shared_ptr<int32_t> duTotal_ = nullptr;
    // The usage of DUs.
    std::shared_ptr<int32_t> duUsed_ = nullptr;
    // The dynamic part in the error message. This parameter is used to replace %s in the ErrMessage parameter.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The total amount of memory. A value of 0 is temporarily returned.
    std::shared_ptr<float> memoryTotal_ = nullptr;
    // The memory usage. A value of 0 is temporarily returned.
    std::shared_ptr<float> memoryUsed_ = nullptr;
    // The memory usage.
    std::shared_ptr<float> memoryUsedPercentage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The number of tasks that are in progress.
    std::shared_ptr<int32_t> taskRunning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
