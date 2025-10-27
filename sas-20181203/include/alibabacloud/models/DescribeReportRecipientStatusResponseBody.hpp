// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReportRecipientStatusResponseBodyReportRecipientList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeReportRecipientStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReportRecipientStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportRecipientList, reportRecipientList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReportRecipientStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportRecipientList, reportRecipientList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeReportRecipientStatusResponseBody() = default ;
    DescribeReportRecipientStatusResponseBody(const DescribeReportRecipientStatusResponseBody &) = default ;
    DescribeReportRecipientStatusResponseBody(DescribeReportRecipientStatusResponseBody &&) = default ;
    DescribeReportRecipientStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReportRecipientStatusResponseBody() = default ;
    DescribeReportRecipientStatusResponseBody& operator=(const DescribeReportRecipientStatusResponseBody &) = default ;
    DescribeReportRecipientStatusResponseBody& operator=(DescribeReportRecipientStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportRecipientList_ == nullptr
        && return this->requestId_ == nullptr; };
    // reportRecipientList Field Functions 
    bool hasReportRecipientList() const { return this->reportRecipientList_ != nullptr;};
    void deleteReportRecipientList() { this->reportRecipientList_ = nullptr;};
    inline const vector<DescribeReportRecipientStatusResponseBodyReportRecipientList> & reportRecipientList() const { DARABONBA_PTR_GET_CONST(reportRecipientList_, vector<DescribeReportRecipientStatusResponseBodyReportRecipientList>) };
    inline vector<DescribeReportRecipientStatusResponseBodyReportRecipientList> reportRecipientList() { DARABONBA_PTR_GET(reportRecipientList_, vector<DescribeReportRecipientStatusResponseBodyReportRecipientList>) };
    inline DescribeReportRecipientStatusResponseBody& setReportRecipientList(const vector<DescribeReportRecipientStatusResponseBodyReportRecipientList> & reportRecipientList) { DARABONBA_PTR_SET_VALUE(reportRecipientList_, reportRecipientList) };
    inline DescribeReportRecipientStatusResponseBody& setReportRecipientList(vector<DescribeReportRecipientStatusResponseBodyReportRecipientList> && reportRecipientList) { DARABONBA_PTR_SET_RVALUE(reportRecipientList_, reportRecipientList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReportRecipientStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The report recipients.
    std::shared_ptr<vector<DescribeReportRecipientStatusResponseBodyReportRecipientList>> reportRecipientList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
