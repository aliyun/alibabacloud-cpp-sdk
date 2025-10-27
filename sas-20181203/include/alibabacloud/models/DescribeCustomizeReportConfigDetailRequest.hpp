// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTCONFIGDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTCONFIGDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportConfigDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportConfigDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportConfigDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeCustomizeReportConfigDetailRequest() = default ;
    DescribeCustomizeReportConfigDetailRequest(const DescribeCustomizeReportConfigDetailRequest &) = default ;
    DescribeCustomizeReportConfigDetailRequest(DescribeCustomizeReportConfigDetailRequest &&) = default ;
    DescribeCustomizeReportConfigDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportConfigDetailRequest() = default ;
    DescribeCustomizeReportConfigDetailRequest& operator=(const DescribeCustomizeReportConfigDetailRequest &) = default ;
    DescribeCustomizeReportConfigDetailRequest& operator=(DescribeCustomizeReportConfigDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->reportId_ == nullptr && return this->sourceIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCustomizeReportConfigDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCustomizeReportConfigDetailRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCustomizeReportConfigDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the report.\\
    // You can call the [DescribeCustomizeReportList](https://help.aliyun.com/document_detail/271655.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
