// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEREPORTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomizeReportListResponseBodyReportList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizeReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportList, reportList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportList, reportList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCustomizeReportListResponseBody() = default ;
    DescribeCustomizeReportListResponseBody(const DescribeCustomizeReportListResponseBody &) = default ;
    DescribeCustomizeReportListResponseBody(DescribeCustomizeReportListResponseBody &&) = default ;
    DescribeCustomizeReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeReportListResponseBody() = default ;
    DescribeCustomizeReportListResponseBody& operator=(const DescribeCustomizeReportListResponseBody &) = default ;
    DescribeCustomizeReportListResponseBody& operator=(DescribeCustomizeReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportList_ != nullptr
        && this->requestId_ != nullptr; };
    // reportList Field Functions 
    bool hasReportList() const { return this->reportList_ != nullptr;};
    void deleteReportList() { this->reportList_ = nullptr;};
    inline const vector<DescribeCustomizeReportListResponseBodyReportList> & reportList() const { DARABONBA_PTR_GET_CONST(reportList_, vector<DescribeCustomizeReportListResponseBodyReportList>) };
    inline vector<DescribeCustomizeReportListResponseBodyReportList> reportList() { DARABONBA_PTR_GET(reportList_, vector<DescribeCustomizeReportListResponseBodyReportList>) };
    inline DescribeCustomizeReportListResponseBody& setReportList(const vector<DescribeCustomizeReportListResponseBodyReportList> & reportList) { DARABONBA_PTR_SET_VALUE(reportList_, reportList) };
    inline DescribeCustomizeReportListResponseBody& setReportList(vector<DescribeCustomizeReportListResponseBodyReportList> && reportList) { DARABONBA_PTR_SET_RVALUE(reportList_, reportList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizeReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The reports.
    std::shared_ptr<vector<DescribeCustomizeReportListResponseBodyReportList>> reportList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
