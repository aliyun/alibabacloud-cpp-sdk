// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAMAINTENANCEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAMAINTENANCEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyDataMaintenancePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataMaintenancePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataMaintenancePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    GetGatewayResponseBodyDataMaintenancePeriod() = default ;
    GetGatewayResponseBodyDataMaintenancePeriod(const GetGatewayResponseBodyDataMaintenancePeriod &) = default ;
    GetGatewayResponseBodyDataMaintenancePeriod(GetGatewayResponseBodyDataMaintenancePeriod &&) = default ;
    GetGatewayResponseBodyDataMaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataMaintenancePeriod() = default ;
    GetGatewayResponseBodyDataMaintenancePeriod& operator=(const GetGatewayResponseBodyDataMaintenancePeriod &) = default ;
    GetGatewayResponseBodyDataMaintenancePeriod& operator=(GetGatewayResponseBodyDataMaintenancePeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetGatewayResponseBodyDataMaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetGatewayResponseBodyDataMaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
