// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Pinned, pinned_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Pinned, pinned_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeCustomizeReportListRequest() = default ;
    DescribeCustomizeReportListRequest(const DescribeCustomizeReportListRequest &) = default ;
    DescribeCustomizeReportListRequest(DescribeCustomizeReportListRequest &&) = default ;
    DescribeCustomizeReportListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportListRequest() = default ;
    DescribeCustomizeReportListRequest& operator=(const DescribeCustomizeReportListRequest &) = default ;
    DescribeCustomizeReportListRequest& operator=(DescribeCustomizeReportListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->pinned_ != nullptr && this->reportStatus_ != nullptr && this->reportType_ != nullptr && this->reportVersion_ != nullptr && this->title_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCustomizeReportListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pinned Field Functions 
    bool hasPinned() const { return this->pinned_ != nullptr;};
    void deletePinned() { this->pinned_ = nullptr;};
    inline bool pinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
    inline DescribeCustomizeReportListRequest& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int32_t reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0) };
    inline DescribeCustomizeReportListRequest& setReportStatus(int32_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline int32_t reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, 0) };
    inline DescribeCustomizeReportListRequest& setReportType(int32_t reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportVersion Field Functions 
    bool hasReportVersion() const { return this->reportVersion_ != nullptr;};
    void deleteReportVersion() { this->reportVersion_ = nullptr;};
    inline string reportVersion() const { DARABONBA_PTR_GET_DEFAULT(reportVersion_, "") };
    inline DescribeCustomizeReportListRequest& setReportVersion(string reportVersion) { DARABONBA_PTR_SET_VALUE(reportVersion_, reportVersion) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustomizeReportListRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether to pin the report. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> pinned_ = nullptr;
    // The state of the report. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> reportStatus_ = nullptr;
    // The type of the report. Valid values:
    // 
    // *   **0**: daily report
    // *   **1**: weekly report
    // *   **2**: monthly report
    // *   **3**: report whose statistics are collected in a custom time range
    std::shared_ptr<int32_t> reportType_ = nullptr;
    // The report version. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    std::shared_ptr<string> reportVersion_ = nullptr;
    // The name of the report.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
