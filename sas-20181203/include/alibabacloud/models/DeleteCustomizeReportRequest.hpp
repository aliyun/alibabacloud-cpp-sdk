// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMIZEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMIZEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCustomizeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomizeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomizeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DeleteCustomizeReportRequest() = default ;
    DeleteCustomizeReportRequest(const DeleteCustomizeReportRequest &) = default ;
    DeleteCustomizeReportRequest(DeleteCustomizeReportRequest &&) = default ;
    DeleteCustomizeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomizeReportRequest() = default ;
    DeleteCustomizeReportRequest& operator=(const DeleteCustomizeReportRequest &) = default ;
    DeleteCustomizeReportRequest& operator=(DeleteCustomizeReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DeleteCustomizeReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the report.
    // 
    // >  You can call the [DescribeCustomizeReportList](~~DescribeCustomizeReportList~~) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
