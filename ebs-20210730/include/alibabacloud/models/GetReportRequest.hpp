// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class GetReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GetReportRequest() = default ;
    GetReportRequest(const GetReportRequest &) = default ;
    GetReportRequest(GetReportRequest &&) = default ;
    GetReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportRequest() = default ;
    GetReportRequest& operator=(const GetReportRequest &) = default ;
    GetReportRequest& operator=(GetReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->regionId_ == nullptr && return this->reportId_ == nullptr && return this->reportType_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetReportRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetReportRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    // Optional, AppName only takes effect when ReportType=present.
    std::shared_ptr<string> appName_ = nullptr;
    // Region name.
    std::shared_ptr<string> regionId_ = nullptr;
    // When ReportType=history, ReportId is required to query historical reports based on ReportId.
    std::shared_ptr<string> reportId_ = nullptr;
    // Optional values: history/present.
    std::shared_ptr<string> reportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
