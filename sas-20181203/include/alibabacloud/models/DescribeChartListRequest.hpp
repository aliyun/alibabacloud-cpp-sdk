// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProjectCode, projectCode_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProjectCode, projectCode_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeChartListRequest() = default ;
    DescribeChartListRequest(const DescribeChartListRequest &) = default ;
    DescribeChartListRequest(DescribeChartListRequest &&) = default ;
    DescribeChartListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartListRequest() = default ;
    DescribeChartListRequest& operator=(const DescribeChartListRequest &) = default ;
    DescribeChartListRequest& operator=(DescribeChartListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->projectCode_ == nullptr && return this->reportId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeChartListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // projectCode Field Functions 
    bool hasProjectCode() const { return this->projectCode_ != nullptr;};
    void deleteProjectCode() { this->projectCode_ = nullptr;};
    inline string projectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
    inline DescribeChartListRequest& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeChartListRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The code of the report. Valid value:
    // 
    // *   **customize_report**
    // 
    // This parameter is required.
    std::shared_ptr<string> projectCode_ = nullptr;
    // The ID of the report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    std::shared_ptr<string> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
