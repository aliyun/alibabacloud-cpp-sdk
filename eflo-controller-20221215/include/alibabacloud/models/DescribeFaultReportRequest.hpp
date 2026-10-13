// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeFaultReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeFaultReportRequest() = default ;
    DescribeFaultReportRequest(const DescribeFaultReportRequest &) = default ;
    DescribeFaultReportRequest(DescribeFaultReportRequest &&) = default ;
    DescribeFaultReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultReportRequest() = default ;
    DescribeFaultReportRequest& operator=(const DescribeFaultReportRequest &) = default ;
    DescribeFaultReportRequest& operator=(DescribeFaultReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeFaultReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The report ID.
    // 
    // This parameter is required.
    shared_ptr<string> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
