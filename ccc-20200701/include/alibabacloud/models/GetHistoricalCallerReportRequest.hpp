// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALCALLERREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALCALLERREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalCallerReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalCallerReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalCallerReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
    };
    GetHistoricalCallerReportRequest() = default ;
    GetHistoricalCallerReportRequest(const GetHistoricalCallerReportRequest &) = default ;
    GetHistoricalCallerReportRequest(GetHistoricalCallerReportRequest &&) = default ;
    GetHistoricalCallerReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalCallerReportRequest() = default ;
    GetHistoricalCallerReportRequest& operator=(const GetHistoricalCallerReportRequest &) = default ;
    GetHistoricalCallerReportRequest& operator=(GetHistoricalCallerReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callingNumber_ != nullptr
        && this->instanceId_ != nullptr && this->startTime_ != nullptr && this->stopTime_ != nullptr; };
    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline GetHistoricalCallerReportRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHistoricalCallerReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetHistoricalCallerReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline int64_t stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, 0L) };
    inline GetHistoricalCallerReportRequest& setStopTime(int64_t stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callingNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
