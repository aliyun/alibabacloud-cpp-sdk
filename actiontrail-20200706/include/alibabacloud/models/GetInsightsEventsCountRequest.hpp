// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSIGHTSEVENTSCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSIGHTSEVENTSCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetInsightsEventsCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInsightsEventsCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetInsightsEventsCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetInsightsEventsCountRequest() = default ;
    GetInsightsEventsCountRequest(const GetInsightsEventsCountRequest &) = default ;
    GetInsightsEventsCountRequest(GetInsightsEventsCountRequest &&) = default ;
    GetInsightsEventsCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInsightsEventsCountRequest() = default ;
    GetInsightsEventsCountRequest& operator=(const GetInsightsEventsCountRequest &) = default ;
    GetInsightsEventsCountRequest& operator=(GetInsightsEventsCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetInsightsEventsCountRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetInsightsEventsCountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetInsightsEventsCountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> date_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
