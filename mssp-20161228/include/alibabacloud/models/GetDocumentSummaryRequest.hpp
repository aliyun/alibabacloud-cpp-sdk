// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetDocumentSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GetDocumentSummaryRequest() = default ;
    GetDocumentSummaryRequest(const GetDocumentSummaryRequest &) = default ;
    GetDocumentSummaryRequest(GetDocumentSummaryRequest &&) = default ;
    GetDocumentSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentSummaryRequest() = default ;
    GetDocumentSummaryRequest& operator=(const GetDocumentSummaryRequest &) = default ;
    GetDocumentSummaryRequest& operator=(GetDocumentSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportType_ == nullptr; };
    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetDocumentSummaryRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    // Type of service report.
    std::shared_ptr<string> reportType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
