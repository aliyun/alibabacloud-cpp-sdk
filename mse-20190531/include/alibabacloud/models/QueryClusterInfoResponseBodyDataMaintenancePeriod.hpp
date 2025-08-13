// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODYDATAMAINTENANCEPERIOD_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLUSTERINFORESPONSEBODYDATAMAINTENANCEPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryClusterInfoResponseBodyDataMaintenancePeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryClusterInfoResponseBodyDataMaintenancePeriod& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryClusterInfoResponseBodyDataMaintenancePeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryClusterInfoResponseBodyDataMaintenancePeriod() = default ;
    QueryClusterInfoResponseBodyDataMaintenancePeriod(const QueryClusterInfoResponseBodyDataMaintenancePeriod &) = default ;
    QueryClusterInfoResponseBodyDataMaintenancePeriod(QueryClusterInfoResponseBodyDataMaintenancePeriod &&) = default ;
    QueryClusterInfoResponseBodyDataMaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryClusterInfoResponseBodyDataMaintenancePeriod() = default ;
    QueryClusterInfoResponseBodyDataMaintenancePeriod& operator=(const QueryClusterInfoResponseBodyDataMaintenancePeriod &) = default ;
    QueryClusterInfoResponseBodyDataMaintenancePeriod& operator=(QueryClusterInfoResponseBodyDataMaintenancePeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryClusterInfoResponseBodyDataMaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryClusterInfoResponseBodyDataMaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The start time of the O\\&M time window.
    std::shared_ptr<string> endTime_ = nullptr;
    // The end time of the O\\&M time window.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
