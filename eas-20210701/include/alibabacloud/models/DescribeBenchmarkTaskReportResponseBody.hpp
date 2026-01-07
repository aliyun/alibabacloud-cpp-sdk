// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBENCHMARKTASKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeBenchmarkTaskReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBenchmarkTaskReportResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBenchmarkTaskReportResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBenchmarkTaskReportResponseBody() = default ;
    DescribeBenchmarkTaskReportResponseBody(const DescribeBenchmarkTaskReportResponseBody &) = default ;
    DescribeBenchmarkTaskReportResponseBody(DescribeBenchmarkTaskReportResponseBody &&) = default ;
    DescribeBenchmarkTaskReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBenchmarkTaskReportResponseBody() = default ;
    DescribeBenchmarkTaskReportResponseBody& operator=(const DescribeBenchmarkTaskReportResponseBody &) = default ;
    DescribeBenchmarkTaskReportResponseBody& operator=(DescribeBenchmarkTaskReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->reportUrl_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline DescribeBenchmarkTaskReportResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline DescribeBenchmarkTaskReportResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string getReportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline DescribeBenchmarkTaskReportResponseBody& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBenchmarkTaskReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // If the value of ReportType is set to RAW, the details about the stress testing report are returned.
    Darabonba::Json data_ {};
    // If the value of ReportType is set to Report, the URL of the stress testing report is returned.
    shared_ptr<string> reportUrl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
