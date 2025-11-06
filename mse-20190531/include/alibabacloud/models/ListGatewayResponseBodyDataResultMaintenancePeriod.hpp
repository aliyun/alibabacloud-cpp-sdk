// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTMAINTENANCEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYRESPONSEBODYDATARESULTMAINTENANCEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayResponseBodyDataResultMaintenancePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayResponseBodyDataResultMaintenancePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayResponseBodyDataResultMaintenancePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    ListGatewayResponseBodyDataResultMaintenancePeriod() = default ;
    ListGatewayResponseBodyDataResultMaintenancePeriod(const ListGatewayResponseBodyDataResultMaintenancePeriod &) = default ;
    ListGatewayResponseBodyDataResultMaintenancePeriod(ListGatewayResponseBodyDataResultMaintenancePeriod &&) = default ;
    ListGatewayResponseBodyDataResultMaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayResponseBodyDataResultMaintenancePeriod() = default ;
    ListGatewayResponseBodyDataResultMaintenancePeriod& operator=(const ListGatewayResponseBodyDataResultMaintenancePeriod &) = default ;
    ListGatewayResponseBodyDataResultMaintenancePeriod& operator=(ListGatewayResponseBodyDataResultMaintenancePeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr && return this->timeZone_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListGatewayResponseBodyDataResultMaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListGatewayResponseBodyDataResultMaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListGatewayResponseBodyDataResultMaintenancePeriod& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
