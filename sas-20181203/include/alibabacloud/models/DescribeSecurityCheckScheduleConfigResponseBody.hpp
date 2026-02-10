// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityCheckScheduleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityCheckScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCheckJobConfig, riskCheckJobConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityCheckScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCheckJobConfig, riskCheckJobConfig_);
    };
    DescribeSecurityCheckScheduleConfigResponseBody() = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(const DescribeSecurityCheckScheduleConfigResponseBody &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(DescribeSecurityCheckScheduleConfigResponseBody &&) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityCheckScheduleConfigResponseBody() = default ;
    DescribeSecurityCheckScheduleConfigResponseBody& operator=(const DescribeSecurityCheckScheduleConfigResponseBody &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody& operator=(DescribeSecurityCheckScheduleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskCheckJobConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskCheckJobConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, RiskCheckJobConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      RiskCheckJobConfig() = default ;
      RiskCheckJobConfig(const RiskCheckJobConfig &) = default ;
      RiskCheckJobConfig(RiskCheckJobConfig &&) = default ;
      RiskCheckJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskCheckJobConfig() = default ;
      RiskCheckJobConfig& operator=(const RiskCheckJobConfig &) = default ;
      RiskCheckJobConfig& operator=(RiskCheckJobConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // daysOfWeek Field Functions 
      bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
      void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
      inline string getDaysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
      inline RiskCheckJobConfig& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
      inline RiskCheckJobConfig& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
      inline RiskCheckJobConfig& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The day of the week when the check tasks are performed. Multiple days can be specified. Multiple days are separated by commas (,).
      // 
      // *   **1**: Monday
      // *   **2**: Tuesday
      // *   **3**: Wednesday
      // *   **4**: Thursday
      // *   **5**: Friday
      // *   **6**: Saturday
      // *   **7**: Sunday
      shared_ptr<string> daysOfWeek_ {};
      // The time range during which check tasks end. Valid values:
      // 
      // *   **6**: 00:00 to 06:00
      // *   **12**: 06:00 to 12:00
      // *   **18**: 12:00 to 18:00
      // *   **24**: 18:00 to 24:00
      shared_ptr<int32_t> endTime_ {};
      // The time range during which check tasks start. Valid values:
      // 
      // *   **0**: 00:00 to 06:00
      // *   **6**: 06:00 to 12:00
      // *   **12**: 12:00 to 18:00
      // *   **18**: 18:00 to 24:00
      shared_ptr<int32_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskCheckJobConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCheckJobConfig Field Functions 
    bool hasRiskCheckJobConfig() const { return this->riskCheckJobConfig_ != nullptr;};
    void deleteRiskCheckJobConfig() { this->riskCheckJobConfig_ = nullptr;};
    inline const DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig & getRiskCheckJobConfig() const { DARABONBA_PTR_GET_CONST(riskCheckJobConfig_, DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig getRiskCheckJobConfig() { DARABONBA_PTR_GET(riskCheckJobConfig_, DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRiskCheckJobConfig(const DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig & riskCheckJobConfig) { DARABONBA_PTR_SET_VALUE(riskCheckJobConfig_, riskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRiskCheckJobConfig(DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig && riskCheckJobConfig) { DARABONBA_PTR_SET_RVALUE(riskCheckJobConfig_, riskCheckJobConfig) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The configurations of custom check tasks.
    shared_ptr<DescribeSecurityCheckScheduleConfigResponseBody::RiskCheckJobConfig> riskCheckJobConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
