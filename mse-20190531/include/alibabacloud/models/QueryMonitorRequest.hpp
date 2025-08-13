// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONITORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONITORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryMonitorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonitorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonitorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    QueryMonitorRequest() = default ;
    QueryMonitorRequest(const QueryMonitorRequest &) = default ;
    QueryMonitorRequest(QueryMonitorRequest &&) = default ;
    QueryMonitorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonitorRequest() = default ;
    QueryMonitorRequest& operator=(const QueryMonitorRequest &) = default ;
    QueryMonitorRequest& operator=(QueryMonitorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->monitorType_ != nullptr && this->requestPars_ != nullptr && this->startTime_ != nullptr
        && this->step_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline QueryMonitorRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMonitorRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryMonitorRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline string monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
    inline QueryMonitorRequest& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline QueryMonitorRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryMonitorRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int64_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
    inline QueryMonitorRequest& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The timestamp when the monitoring ends.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metric type. The following metric types are supported:
    // 
    // [Basic system metrics]
    // 
    // *   cpuUsage
    // *   memoryUsage
    // *   diskUsage
    // *   gcCount
    // *   gcTime
    // 
    // [Nacos registry]
    // 
    // *   serviceCount
    // *   writeCostTime
    // *   readCostTime
    // *   TPS regCenterTps
    // *   QPS regCenterQps
    // 
    // [Nacos configuration center]
    // 
    // *   publish
    // *   getConfig
    // 
    // [zookeeper]
    // 
    // *   TPS zk_TpsCount
    // *   QPS zk_QpsCount
    // *   zookeeper_AvgRequestLatency
    // 
    // This parameter is required.
    std::shared_ptr<string> monitorType_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
    // The timestamp when the monitoring starts.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The interval between data points. Unit: seconds.
    std::shared_ptr<int64_t> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
