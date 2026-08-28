// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPATROLREPORTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPATROLREPORTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetPatrolReportDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPatrolReportDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, GetPatrolReportDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
    };
    GetPatrolReportDetailRequest() = default ;
    GetPatrolReportDetailRequest(const GetPatrolReportDetailRequest &) = default ;
    GetPatrolReportDetailRequest(GetPatrolReportDetailRequest &&) = default ;
    GetPatrolReportDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPatrolReportDetailRequest() = default ;
    GetPatrolReportDetailRequest& operator=(const GetPatrolReportDetailRequest &) = default ;
    GetPatrolReportDetailRequest& operator=(GetPatrolReportDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && this->reportId_ == nullptr && this->timezone_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetPatrolReportDetailRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetPatrolReportDetailRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline GetPatrolReportDetailRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The report date in ISO format such as 2026-08-13, or a special value such as today or yesterday. Specify either this parameter or reportId. This parameter is used to retrieve the latest report for the specified date.
    shared_ptr<string> date_ {};
    // The report ID. Specify either this parameter or date. The reportId parameter takes priority over the date parameter.
    shared_ptr<string> reportId_ {};
    // The time zone. Used together with the date parameter. Default value: UTC.
    shared_ptr<string> timezone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
