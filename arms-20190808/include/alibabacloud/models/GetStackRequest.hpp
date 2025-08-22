// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RpcID, rpcID_);
      DARABONBA_PTR_TO_JSON(SpanID, spanID_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TraceID, traceID_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RpcID, rpcID_);
      DARABONBA_PTR_FROM_JSON(SpanID, spanID_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
    };
    GetStackRequest() = default ;
    GetStackRequest(const GetStackRequest &) = default ;
    GetStackRequest(GetStackRequest &&) = default ;
    GetStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackRequest() = default ;
    GetStackRequest& operator=(const GetStackRequest &) = default ;
    GetStackRequest& operator=(GetStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->pid_ != nullptr && this->regionId_ != nullptr && this->rpcID_ != nullptr && this->spanID_ != nullptr && this->startTime_ != nullptr
        && this->traceID_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetStackRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetStackRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rpcID Field Functions 
    bool hasRpcID() const { return this->rpcID_ != nullptr;};
    void deleteRpcID() { this->rpcID_ = nullptr;};
    inline string rpcID() const { DARABONBA_PTR_GET_DEFAULT(rpcID_, "") };
    inline GetStackRequest& setRpcID(string rpcID) { DARABONBA_PTR_SET_VALUE(rpcID_, rpcID) };


    // spanID Field Functions 
    bool hasSpanID() const { return this->spanID_ != nullptr;};
    void deleteSpanID() { this->spanID_ = nullptr;};
    inline string spanID() const { DARABONBA_PTR_GET_DEFAULT(spanID_, "") };
    inline GetStackRequest& setSpanID(string spanID) { DARABONBA_PTR_SET_VALUE(spanID_, spanID) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetStackRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline GetStackRequest& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


  protected:
    // The exit timestamp of the method call. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The process identifier (PID) of the application. For more information about how to obtain the PID, see [Obtain the PID of an application](https://www.alibabacloud.com/help/zh/doc-detail/186100.htm?spm=a2cdw.13409063.0.0.7a72281f0bkTfx#title-imy-7gj-qhr).
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the remote procedure call (RPC) mode. You can obtain the ID by calling the **GetTrace** operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> rpcID_ = nullptr;
    // The span ID of the trace. It is displayed on the Trace Explorer page in the ARMS console.
    std::shared_ptr<string> spanID_ = nullptr;
    // The entry timestamp of the method call. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The trace ID. It is displayed on the **Trace Explorer** page in the Application Real-Time Monitoring Service (ARMS) console.
    // 
    // This parameter is required.
    std::shared_ptr<string> traceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
