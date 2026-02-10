// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPORTRECIPIENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ReportRecipientList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportRecipientList& obj) { 
        DARABONBA_PTR_TO_JSON(IsVerify, isVerify_);
        DARABONBA_PTR_TO_JSON(Recipient, recipient_);
      };
      friend void from_json(const Darabonba::Json& j, ReportRecipientList& obj) { 
        DARABONBA_PTR_FROM_JSON(IsVerify, isVerify_);
        DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
      };
      ReportRecipientList() = default ;
      ReportRecipientList(const ReportRecipientList &) = default ;
      ReportRecipientList(ReportRecipientList &&) = default ;
      ReportRecipientList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportRecipientList() = default ;
      ReportRecipientList& operator=(const ReportRecipientList &) = default ;
      ReportRecipientList& operator=(ReportRecipientList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isVerify_ == nullptr
        && this->recipient_ == nullptr; };
      // isVerify Field Functions 
      bool hasIsVerify() const { return this->isVerify_ != nullptr;};
      void deleteIsVerify() { this->isVerify_ = nullptr;};
      inline int32_t getIsVerify() const { DARABONBA_PTR_GET_DEFAULT(isVerify_, 0) };
      inline ReportRecipientList& setIsVerify(int32_t isVerify) { DARABONBA_PTR_SET_VALUE(isVerify_, isVerify) };


      // recipient Field Functions 
      bool hasRecipient() const { return this->recipient_ != nullptr;};
      void deleteRecipient() { this->recipient_ = nullptr;};
      inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
      inline ReportRecipientList& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


    protected:
      // Indicates whether the email address is verified. Valid values:
      // 
      // *   0: no
      // *   1: yes
      // 
      // >  If no email is specified when you create a report, the value of this parameter is empty.
      shared_ptr<int32_t> isVerify_ {};
      // The email address of the report recipient.
      // 
      // >  If no email is specified when you create a report, the value of this parameter is empty.
      shared_ptr<string> recipient_ {};
    };

    virtual bool empty() const override { return this->reportRecipientList_ == nullptr
        && this->requestId_ == nullptr; };
    // reportRecipientList Field Functions 
    bool hasReportRecipientList() const { return this->reportRecipientList_ != nullptr;};
    void deleteReportRecipientList() { this->reportRecipientList_ = nullptr;};
    inline const vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList> & getReportRecipientList() const { DARABONBA_PTR_GET_CONST(reportRecipientList_, vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList>) };
    inline vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList> getReportRecipientList() { DARABONBA_PTR_GET(reportRecipientList_, vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList>) };
    inline DescribeReportRecipientStatusResponseBody& setReportRecipientList(const vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList> & reportRecipientList) { DARABONBA_PTR_SET_VALUE(reportRecipientList_, reportRecipientList) };
    inline DescribeReportRecipientStatusResponseBody& setReportRecipientList(vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList> && reportRecipientList) { DARABONBA_PTR_SET_RVALUE(reportRecipientList_, reportRecipientList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReportRecipientStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The report recipients.
    shared_ptr<vector<DescribeReportRecipientStatusResponseBody::ReportRecipientList>> reportRecipientList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
