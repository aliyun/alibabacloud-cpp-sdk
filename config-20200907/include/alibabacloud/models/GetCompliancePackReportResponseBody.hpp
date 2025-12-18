// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCompliancePackReportResponseBodyCompliancePackReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetCompliancePackReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackReport, compliancePackReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackReport, compliancePackReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCompliancePackReportResponseBody() = default ;
    GetCompliancePackReportResponseBody(const GetCompliancePackReportResponseBody &) = default ;
    GetCompliancePackReportResponseBody(GetCompliancePackReportResponseBody &&) = default ;
    GetCompliancePackReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCompliancePackReportResponseBody() = default ;
    GetCompliancePackReportResponseBody& operator=(const GetCompliancePackReportResponseBody &) = default ;
    GetCompliancePackReportResponseBody& operator=(GetCompliancePackReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackReport_ == nullptr
        && return this->requestId_ == nullptr; };
    // compliancePackReport Field Functions 
    bool hasCompliancePackReport() const { return this->compliancePackReport_ != nullptr;};
    void deleteCompliancePackReport() { this->compliancePackReport_ = nullptr;};
    inline const GetCompliancePackReportResponseBodyCompliancePackReport & compliancePackReport() const { DARABONBA_PTR_GET_CONST(compliancePackReport_, GetCompliancePackReportResponseBodyCompliancePackReport) };
    inline GetCompliancePackReportResponseBodyCompliancePackReport compliancePackReport() { DARABONBA_PTR_GET(compliancePackReport_, GetCompliancePackReportResponseBodyCompliancePackReport) };
    inline GetCompliancePackReportResponseBody& setCompliancePackReport(const GetCompliancePackReportResponseBodyCompliancePackReport & compliancePackReport) { DARABONBA_PTR_SET_VALUE(compliancePackReport_, compliancePackReport) };
    inline GetCompliancePackReportResponseBody& setCompliancePackReport(GetCompliancePackReportResponseBodyCompliancePackReport && compliancePackReport) { DARABONBA_PTR_SET_RVALUE(compliancePackReport_, compliancePackReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCompliancePackReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation report.
    std::shared_ptr<GetCompliancePackReportResponseBodyCompliancePackReport> compliancePackReport_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
