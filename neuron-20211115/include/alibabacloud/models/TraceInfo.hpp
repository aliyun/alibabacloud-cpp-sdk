// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRACEINFO_HPP_
#define ALIBABACLOUD_MODELS_TRACEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class TraceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TraceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(operationName, operationName_);
      DARABONBA_PTR_TO_JSON(serviceIp, serviceIp_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TraceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(operationName, operationName_);
      DARABONBA_PTR_FROM_JSON(serviceIp, serviceIp_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TraceInfo() = default ;
    TraceInfo(const TraceInfo &) = default ;
    TraceInfo(TraceInfo &&) = default ;
    TraceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TraceInfo() = default ;
    TraceInfo& operator=(const TraceInfo &) = default ;
    TraceInfo& operator=(TraceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->operationName_ == nullptr && this->serviceIp_ == nullptr && this->serviceName_ == nullptr && this->timestamp_ == nullptr && this->traceId_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline TraceInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline TraceInfo& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // serviceIp Field Functions 
    bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
    void deleteServiceIp() { this->serviceIp_ = nullptr;};
    inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
    inline TraceInfo& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline TraceInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TraceInfo& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TraceInfo& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<int64_t> duration_ {};
    shared_ptr<string> operationName_ {};
    shared_ptr<string> serviceIp_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<int64_t> timestamp_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
