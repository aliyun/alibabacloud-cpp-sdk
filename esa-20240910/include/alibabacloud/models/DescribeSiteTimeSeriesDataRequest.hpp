// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTimeSeriesDataRequestFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteTimeSeriesDataRequest() = default ;
    DescribeSiteTimeSeriesDataRequest(const DescribeSiteTimeSeriesDataRequest &) = default ;
    DescribeSiteTimeSeriesDataRequest(DescribeSiteTimeSeriesDataRequest &&) = default ;
    DescribeSiteTimeSeriesDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataRequest() = default ;
    DescribeSiteTimeSeriesDataRequest& operator=(const DescribeSiteTimeSeriesDataRequest &) = default ;
    DescribeSiteTimeSeriesDataRequest& operator=(DescribeSiteTimeSeriesDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->fields_ == nullptr && return this->interval_ == nullptr && return this->siteId_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTimeSeriesDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<DescribeSiteTimeSeriesDataRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<DescribeSiteTimeSeriesDataRequestFields>) };
    inline vector<DescribeSiteTimeSeriesDataRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<DescribeSiteTimeSeriesDataRequestFields>) };
    inline DescribeSiteTimeSeriesDataRequest& setFields(const vector<DescribeSiteTimeSeriesDataRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeSiteTimeSeriesDataRequest& setFields(vector<DescribeSiteTimeSeriesDataRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeSiteTimeSeriesDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeSiteTimeSeriesDataRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTimeSeriesDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time for obtaining data.
    // 
    // The date format follows ISO8601 notation and uses UTC+0 time, in the format yyyy-MM-ddTHH:mm:ssZ.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // Query metrics.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DescribeSiteTimeSeriesDataRequestFields>> fields_ = nullptr;
    // The time granularity for querying data, in seconds.
    // 
    // Depending on the maximum time span of a single query, this parameter supports values of 60 (1 minute), 300 (5 minutes), 3600 (1 hour), and 86400 (1 day). For details, see the **Supported Query Time Granularities**.
    std::shared_ptr<string> interval_ = nullptr;
    // Site ID. Obtain the site ID by calling the [ListSites](~~ListSites~~) interface.
    // 
    // If this parameter is empty, user-level data will be queried.
    std::shared_ptr<string> siteId_ = nullptr;
    // The start time for obtaining data.
    // 
    // The date format follows ISO8601 notation and uses UTC+0 time, in the format yyyy-MM-ddTHH:mm:ssZ.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
