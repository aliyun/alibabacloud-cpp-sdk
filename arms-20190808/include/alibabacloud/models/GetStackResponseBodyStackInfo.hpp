// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYSTACKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYSTACKINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStackResponseBodyStackInfoExtInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetStackResponseBodyStackInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyStackInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Exception, exception_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(RpcId, rpcId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyStackInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Exception, exception_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(RpcId, rpcId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetStackResponseBodyStackInfo() = default ;
    GetStackResponseBodyStackInfo(const GetStackResponseBodyStackInfo &) = default ;
    GetStackResponseBodyStackInfo(GetStackResponseBodyStackInfo &&) = default ;
    GetStackResponseBodyStackInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyStackInfo() = default ;
    GetStackResponseBodyStackInfo& operator=(const GetStackResponseBodyStackInfo &) = default ;
    GetStackResponseBodyStackInfo& operator=(GetStackResponseBodyStackInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->api_ != nullptr
        && this->callCount_ != nullptr && this->duration_ != nullptr && this->exception_ != nullptr && this->extInfo_ != nullptr && this->line_ != nullptr
        && this->rpcId_ != nullptr && this->serviceName_ != nullptr && this->startTime_ != nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GetStackResponseBodyStackInfo& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline string callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, "") };
    inline GetStackResponseBodyStackInfo& setCallCount(string callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetStackResponseBodyStackInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline GetStackResponseBodyStackInfo& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const Models::GetStackResponseBodyStackInfoExtInfo & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, Models::GetStackResponseBodyStackInfoExtInfo) };
    inline Models::GetStackResponseBodyStackInfoExtInfo extInfo() { DARABONBA_PTR_GET(extInfo_, Models::GetStackResponseBodyStackInfoExtInfo) };
    inline GetStackResponseBodyStackInfo& setExtInfo(const Models::GetStackResponseBodyStackInfoExtInfo & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline GetStackResponseBodyStackInfo& setExtInfo(Models::GetStackResponseBodyStackInfoExtInfo && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline GetStackResponseBodyStackInfo& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // rpcId Field Functions 
    bool hasRpcId() const { return this->rpcId_ != nullptr;};
    void deleteRpcId() { this->rpcId_ = nullptr;};
    inline string rpcId() const { DARABONBA_PTR_GET_DEFAULT(rpcId_, "") };
    inline GetStackResponseBodyStackInfo& setRpcId(string rpcId) { DARABONBA_PTR_SET_VALUE(rpcId_, rpcId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetStackResponseBodyStackInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetStackResponseBodyStackInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the operation.
    std::shared_ptr<string> api_ = nullptr;
    // The number of times the method is called.
    std::shared_ptr<string> callCount_ = nullptr;
    // The duration. Unit: milliseconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The error message.
    std::shared_ptr<string> exception_ = nullptr;
    // The information about the array object.
    std::shared_ptr<Models::GetStackResponseBodyStackInfoExtInfo> extInfo_ = nullptr;
    // The number of rows in the method stack information.
    std::shared_ptr<string> line_ = nullptr;
    // The ID of the RPC mode.
    std::shared_ptr<string> rpcId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The start time of the call method.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
