// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateSqlPatternCompareReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSqlPatternCompareReportResponseBody() = default ;
    CreateSqlPatternCompareReportResponseBody(const CreateSqlPatternCompareReportResponseBody &) = default ;
    CreateSqlPatternCompareReportResponseBody(CreateSqlPatternCompareReportResponseBody &&) = default ;
    CreateSqlPatternCompareReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlPatternCompareReportResponseBody() = default ;
    CreateSqlPatternCompareReportResponseBody& operator=(const CreateSqlPatternCompareReportResponseBody &) = default ;
    CreateSqlPatternCompareReportResponseBody& operator=(CreateSqlPatternCompareReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportId_ == nullptr
        && this->requestId_ == nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline CreateSqlPatternCompareReportResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSqlPatternCompareReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the created report. This value only indicates that the request has been accepted.
    shared_ptr<int64_t> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
