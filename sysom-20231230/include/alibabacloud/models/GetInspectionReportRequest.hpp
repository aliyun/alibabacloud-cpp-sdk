// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSPECTIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSPECTIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetInspectionReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInspectionReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInspectionReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
    };
    GetInspectionReportRequest() = default ;
    GetInspectionReportRequest(const GetInspectionReportRequest &) = default ;
    GetInspectionReportRequest(GetInspectionReportRequest &&) = default ;
    GetInspectionReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInspectionReportRequest() = default ;
    GetInspectionReportRequest& operator=(const GetInspectionReportRequest &) = default ;
    GetInspectionReportRequest& operator=(GetInspectionReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetInspectionReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The inspection report ID.
    shared_ptr<string> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
