// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELSQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CancelSqlPatternCompareReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CancelTime, cancelTime_);
      DARABONBA_PTR_TO_JSON(Canceled, canceled_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CancelTime, cancelTime_);
      DARABONBA_PTR_FROM_JSON(Canceled, canceled_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelSqlPatternCompareReportResponseBody() = default ;
    CancelSqlPatternCompareReportResponseBody(const CancelSqlPatternCompareReportResponseBody &) = default ;
    CancelSqlPatternCompareReportResponseBody(CancelSqlPatternCompareReportResponseBody &&) = default ;
    CancelSqlPatternCompareReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSqlPatternCompareReportResponseBody() = default ;
    CancelSqlPatternCompareReportResponseBody& operator=(const CancelSqlPatternCompareReportResponseBody &) = default ;
    CancelSqlPatternCompareReportResponseBody& operator=(CancelSqlPatternCompareReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cancelTime_ == nullptr
        && this->canceled_ == nullptr && this->reportId_ == nullptr && this->requestId_ == nullptr; };
    // cancelTime Field Functions 
    bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
    void deleteCancelTime() { this->cancelTime_ = nullptr;};
    inline string getCancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
    inline CancelSqlPatternCompareReportResponseBody& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


    // canceled Field Functions 
    bool hasCanceled() const { return this->canceled_ != nullptr;};
    void deleteCanceled() { this->canceled_ = nullptr;};
    inline bool getCanceled() const { DARABONBA_PTR_GET_DEFAULT(canceled_, false) };
    inline CancelSqlPatternCompareReportResponseBody& setCanceled(bool canceled) { DARABONBA_PTR_SET_VALUE(canceled_, canceled) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline CancelSqlPatternCompareReportResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelSqlPatternCompareReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the report was first canceled. The time is in UTC in the yyyy-MM-ddTHH:mmZ format.
    shared_ptr<string> cancelTime_ {};
    // Indicates whether the report is canceled. The value true is returned when the report is successfully canceled or canceled again.
    shared_ptr<bool> canceled_ {};
    // The SQL Pattern comparison report ID.
    shared_ptr<int64_t> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
