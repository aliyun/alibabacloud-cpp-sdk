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
        && this->cpuTotal_ == nullptr && this->dedicatedClusterId_ == nullptr && this->diskTotal_ == nullptr && this->diskUsed_ == nullptr && this->duTotal_ == nullptr
        && this->duUsed_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->memoryTotal_ == nullptr && this->memoryUsed_ == nullptr && this->memoryUsedPercentage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->taskRunning_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cpuTotal Field Functions 
    bool hasCpuTotal() const { return this->cpuTotal_ != nullptr;};
    void deleteCpuTotal() { this->cpuTotal_ = nullptr;};
    inline float getCpuTotal() const { DARABONBA_PTR_GET_DEFAULT(cpuTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setCpuTotal(float cpuTotal) { DARABONBA_PTR_SET_VALUE(cpuTotal_, cpuTotal) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string getDedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // diskTotal Field Functions 
    bool hasDiskTotal() const { return this->diskTotal_ != nullptr;};
    void deleteDiskTotal() { this->diskTotal_ = nullptr;};
    inline float getDiskTotal() const { DARABONBA_PTR_GET_DEFAULT(diskTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDiskTotal(float diskTotal) { DARABONBA_PTR_SET_VALUE(diskTotal_, diskTotal) };


    // diskUsed Field Functions 
    bool hasDiskUsed() const { return this->diskUsed_ != nullptr;};
    void deleteDiskUsed() { this->diskUsed_ = nullptr;};
    inline float getDiskUsed() const { DARABONBA_PTR_GET_DEFAULT(diskUsed_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDiskUsed(float diskUsed) { DARABONBA_PTR_SET_VALUE(diskUsed_, diskUsed) };


    // duTotal Field Functions 
    bool hasDuTotal() const { return this->duTotal_ != nullptr;};
    void deleteDuTotal() { this->duTotal_ = nullptr;};
    inline int32_t getDuTotal() const { DARABONBA_PTR_GET_DEFAULT(duTotal_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDuTotal(int32_t duTotal) { DARABONBA_PTR_SET_VALUE(duTotal_, duTotal) };


    // duUsed Field Functions 
    bool hasDuUsed() const { return this->duUsed_ != nullptr;};
    void deleteDuUsed() { this->duUsed_ = nullptr;};
    inline int32_t getDuUsed() const { DARABONBA_PTR_GET_DEFAULT(duUsed_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setDuUsed(int32_t duUsed) { DARABONBA_PTR_SET_VALUE(duUsed_, duUsed) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // memoryTotal Field Functions 
    bool hasMemoryTotal() const { return this->memoryTotal_ != nullptr;};
    void deleteMemoryTotal() { this->memoryTotal_ = nullptr;};
    inline float getMemoryTotal() const { DARABONBA_PTR_GET_DEFAULT(memoryTotal_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryTotal(float memoryTotal) { DARABONBA_PTR_SET_VALUE(memoryTotal_, memoryTotal) };


    // memoryUsed Field Functions 
    bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
    void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
    inline float getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryUsed(float memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


    // memoryUsedPercentage Field Functions 
    bool hasMemoryUsedPercentage() const { return this->memoryUsedPercentage_ != nullptr;};
    void deleteMemoryUsedPercentage() { this->memoryUsedPercentage_ = nullptr;};
    inline float getMemoryUsedPercentage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsedPercentage_, 0.0) };
    inline DescribeClusterUsedUtilizationResponseBody& setMemoryUsedPercentage(float memoryUsedPercentage) { DARABONBA_PTR_SET_VALUE(memoryUsedPercentage_, memoryUsedPercentage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterUsedUtilizationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeClusterUsedUtilizationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskRunning Field Functions 
    bool hasTaskRunning() const { return this->taskRunning_ != nullptr;};
    void deleteTaskRunning() { this->taskRunning_ = nullptr;};
    inline int32_t getTaskRunning() const { DARABONBA_PTR_GET_DEFAULT(taskRunning_, 0) };
    inline DescribeClusterUsedUtilizationResponseBody& setTaskRunning(int32_t taskRunning) { DARABONBA_PTR_SET_VALUE(taskRunning_, taskRunning) };


  protected:
    // The error code returned by the backend service. The number is incremented.
    shared_ptr<string> code_ {};
    // The CPU utilization of the cluster. Unit: percentage.
    shared_ptr<float> cpuTotal_ {};
    // The ID of the cluster.
    shared_ptr<string> dedicatedClusterId_ {};
    // The total disk size of the cluster. Unit: GB.
    shared_ptr<float> diskTotal_ {};
    // The disk usage of the cluster. Unit: GB.
    shared_ptr<float> diskUsed_ {};
    // The total number of DTS units (DUs).
    shared_ptr<int32_t> duTotal_ {};
    // The usage of DUs.
    shared_ptr<int32_t> duUsed_ {};
    // The dynamic part in the error message. This parameter is used to replace %s in the ErrMessage parameter.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The total amount of memory. A value of 0 is temporarily returned.
    shared_ptr<float> memoryTotal_ {};
    // The memory usage. A value of 0 is temporarily returned.
    shared_ptr<float> memoryUsed_ {};
    // The memory usage.
    shared_ptr<float> memoryUsedPercentage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The number of tasks that are in progress.
    shared_ptr<int32_t> taskRunning_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
