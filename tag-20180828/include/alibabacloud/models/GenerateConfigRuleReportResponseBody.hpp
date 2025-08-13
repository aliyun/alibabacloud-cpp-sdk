// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECONFIGRULEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATECONFIGRULEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class GenerateConfigRuleReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateConfigRuleReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateConfigRuleReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateConfigRuleReportResponseBody() = default ;
    GenerateConfigRuleReportResponseBody(const GenerateConfigRuleReportResponseBody &) = default ;
    GenerateConfigRuleReportResponseBody(GenerateConfigRuleReportResponseBody &&) = default ;
    GenerateConfigRuleReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateConfigRuleReportResponseBody() = default ;
    GenerateConfigRuleReportResponseBody& operator=(const GenerateConfigRuleReportResponseBody &) = default ;
    GenerateConfigRuleReportResponseBody& operator=(GenerateConfigRuleReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr
        && this->requestId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GenerateConfigRuleReportResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateConfigRuleReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the resource non-compliance report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
