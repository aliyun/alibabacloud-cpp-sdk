// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListInsightsEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInsightsEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InsightsTypes, insightsTypes_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListInsightsEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InsightsTypes, insightsTypes_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListInsightsEventsRequest() = default ;
    ListInsightsEventsRequest(const ListInsightsEventsRequest &) = default ;
    ListInsightsEventsRequest(ListInsightsEventsRequest &&) = default ;
    ListInsightsEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInsightsEventsRequest() = default ;
    ListInsightsEventsRequest& operator=(const ListInsightsEventsRequest &) = default ;
    ListInsightsEventsRequest& operator=(ListInsightsEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->insightsTypes_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListInsightsEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // insightsTypes Field Functions 
    bool hasInsightsTypes() const { return this->insightsTypes_ != nullptr;};
    void deleteInsightsTypes() { this->insightsTypes_ = nullptr;};
    inline string insightsTypes() const { DARABONBA_PTR_GET_DEFAULT(insightsTypes_, "") };
    inline ListInsightsEventsRequest& setInsightsTypes(string insightsTypes) { DARABONBA_PTR_SET_VALUE(insightsTypes_, insightsTypes) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline ListInsightsEventsRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInsightsEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListInsightsEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The types of the events that you want to query. Separate multiple event types with commas (,). If you do not specify this parameter, all events are queried.
    // 
    // *   errorIncrease: API error-rate spike events. Examples: HTTP API error-rate spike events and Dubbo API error-rate spike events.
    // *   topErrorIncrease: the top five API error-rate spike events with the highest traffic.
    // *   topRtIncrease: API response-time spike events. Examples: HTTP API response-time spike events and Dubbo API response-time spike events.
    // *   rtIncrease: the top five API response-time spike events with the highest traffic.
    std::shared_ptr<string> insightsTypes_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start of the time range to query. The value is a timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
