// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECUSTOMIZEREPORTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVECUSTOMIZEREPORTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveCustomizeReportConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCustomizeReportConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCustomizeReportConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SaveCustomizeReportConfigResponseBody() = default ;
    SaveCustomizeReportConfigResponseBody(const SaveCustomizeReportConfigResponseBody &) = default ;
    SaveCustomizeReportConfigResponseBody(SaveCustomizeReportConfigResponseBody &&) = default ;
    SaveCustomizeReportConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCustomizeReportConfigResponseBody() = default ;
    SaveCustomizeReportConfigResponseBody& operator=(const SaveCustomizeReportConfigResponseBody &) = default ;
    SaveCustomizeReportConfigResponseBody& operator=(SaveCustomizeReportConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr
        && this->requestId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline SaveCustomizeReportConfigResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveCustomizeReportConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the report.
    std::shared_ptr<int64_t> reportId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
