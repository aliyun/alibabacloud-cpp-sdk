// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDLEINSTANCECULLERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDLEINSTANCECULLERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetIdleInstanceCullerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdleInstanceCullerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdleInstanceCullerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIdleInstanceCullerResponseBody() = default ;
    GetIdleInstanceCullerResponseBody(const GetIdleInstanceCullerResponseBody &) = default ;
    GetIdleInstanceCullerResponseBody(GetIdleInstanceCullerResponseBody &&) = default ;
    GetIdleInstanceCullerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdleInstanceCullerResponseBody() = default ;
    GetIdleInstanceCullerResponseBody& operator=(const GetIdleInstanceCullerResponseBody &) = default ;
    GetIdleInstanceCullerResponseBody& operator=(GetIdleInstanceCullerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->cpuPercentThreshold_ == nullptr && return this->gpuPercentThreshold_ == nullptr && return this->idleTimeInMinutes_ == nullptr && return this->instanceId_ == nullptr && return this->maxIdleTimeInMinutes_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetIdleInstanceCullerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cpuPercentThreshold Field Functions 
    bool hasCpuPercentThreshold() const { return this->cpuPercentThreshold_ != nullptr;};
    void deleteCpuPercentThreshold() { this->cpuPercentThreshold_ = nullptr;};
    inline int32_t cpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuPercentThreshold_, 0) };
    inline GetIdleInstanceCullerResponseBody& setCpuPercentThreshold(int32_t cpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(cpuPercentThreshold_, cpuPercentThreshold) };


    // gpuPercentThreshold Field Functions 
    bool hasGpuPercentThreshold() const { return this->gpuPercentThreshold_ != nullptr;};
    void deleteGpuPercentThreshold() { this->gpuPercentThreshold_ = nullptr;};
    inline int32_t gpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(gpuPercentThreshold_, 0) };
    inline GetIdleInstanceCullerResponseBody& setGpuPercentThreshold(int32_t gpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(gpuPercentThreshold_, gpuPercentThreshold) };


    // idleTimeInMinutes Field Functions 
    bool hasIdleTimeInMinutes() const { return this->idleTimeInMinutes_ != nullptr;};
    void deleteIdleTimeInMinutes() { this->idleTimeInMinutes_ = nullptr;};
    inline int32_t idleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeInMinutes_, 0) };
    inline GetIdleInstanceCullerResponseBody& setIdleTimeInMinutes(int32_t idleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeInMinutes_, idleTimeInMinutes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIdleInstanceCullerResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxIdleTimeInMinutes Field Functions 
    bool hasMaxIdleTimeInMinutes() const { return this->maxIdleTimeInMinutes_ != nullptr;};
    void deleteMaxIdleTimeInMinutes() { this->maxIdleTimeInMinutes_ = nullptr;};
    inline int32_t maxIdleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTimeInMinutes_, 0) };
    inline GetIdleInstanceCullerResponseBody& setMaxIdleTimeInMinutes(int32_t maxIdleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxIdleTimeInMinutes_, maxIdleTimeInMinutes) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIdleInstanceCullerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdleInstanceCullerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIdleInstanceCullerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. Valid values:
    // 
    // *   InternalError: an internal error. All errors, except for parameter validation errors, are classified as internal errors.
    // *   ValidationError: a parameter validation error.
    std::shared_ptr<string> code_ = nullptr;
    // The CPU utilization threshold. Unit: percentage. Valid values: 1 to 100. If the CPU utilization of the instance is lower than this threshold, the instance is considered idle.
    std::shared_ptr<int32_t> cpuPercentThreshold_ = nullptr;
    // The GPU utilization threshold. Unit: percentage. Valid values: 1 to 100. This parameter takes effect only if the instance is of the GPU instance type. If both CPU and GPU utilization is lower than the thresholds, the instance is considered idle.
    std::shared_ptr<int32_t> gpuPercentThreshold_ = nullptr;
    // The time duration for which the instance is idle. Unit: minutes.
    std::shared_ptr<int32_t> idleTimeInMinutes_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum time duration for which the instance is idle. Unit: minutes. If the time duration for which the instance is idle exceeds this value, the system automatically stops the instance.
    std::shared_ptr<int32_t> maxIdleTimeInMinutes_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
