// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMIZEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMIZEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SendCustomizeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomizeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomizeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    SendCustomizeReportRequest() = default ;
    SendCustomizeReportRequest(const SendCustomizeReportRequest &) = default ;
    SendCustomizeReportRequest(SendCustomizeReportRequest &&) = default ;
    SendCustomizeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomizeReportRequest() = default ;
    SendCustomizeReportRequest& operator=(const SendCustomizeReportRequest &) = default ;
    SendCustomizeReportRequest& operator=(SendCustomizeReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline SendCustomizeReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the security report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
