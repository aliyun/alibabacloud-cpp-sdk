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
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Pinned, pinned_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(ReportVersion, reportVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
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
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->pinned_ == nullptr && this->reportStatus_ == nullptr && this->reportType_ == nullptr && this->reportVersion_ == nullptr && this->resourceDirectoryAccountId_ == nullptr
        && this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCustomizeReportListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pinned Field Functions 
    bool hasPinned() const { return this->pinned_ != nullptr;};
    void deletePinned() { this->pinned_ = nullptr;};
    inline bool getPinned() const { DARABONBA_PTR_GET_DEFAULT(pinned_, false) };
    inline DescribeCustomizeReportListRequest& setPinned(bool pinned) { DARABONBA_PTR_SET_VALUE(pinned_, pinned) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int32_t getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0) };
    inline DescribeCustomizeReportListRequest& setReportStatus(int32_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline int32_t getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, 0) };
    inline DescribeCustomizeReportListRequest& setReportType(int32_t reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // reportVersion Field Functions 
    bool hasReportVersion() const { return this->reportVersion_ != nullptr;};
    void deleteReportVersion() { this->reportVersion_ = nullptr;};
    inline string getReportVersion() const { DARABONBA_PTR_GET_DEFAULT(reportVersion_, "") };
    inline DescribeCustomizeReportListRequest& setReportVersion(string reportVersion) { DARABONBA_PTR_SET_VALUE(reportVersion_, reportVersion) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeCustomizeReportListRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeCustomizeReportListRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Specifies whether the report is pinned to the top. Valid values:
    // - **false**: No.
    // - **true**: Yes.
    shared_ptr<bool> pinned_ {};
    // The report status. Valid values:
    //  - **0**: Disabled.
    //  - **1**: Enabled.
    shared_ptr<int32_t> reportStatus_ {};
    // The report type. Valid values:
    // 
    // - **0**: Daily report.
    // - **1**: Weekly report.
    // - **2**: Monthly report.
    // - **3**: Custom period.
    shared_ptr<int32_t> reportType_ {};
    // The security report version. Valid values:
    // - **1.0.0**
    // - **2.0.0**
    shared_ptr<string> reportVersion_ {};
    // The Alibaba Cloud account ID of the member accounts in the resource directory folder.
    // >You can invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The report name.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
