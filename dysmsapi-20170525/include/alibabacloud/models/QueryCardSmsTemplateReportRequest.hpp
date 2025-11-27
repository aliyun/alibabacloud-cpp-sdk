// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCARDSMSTEMPLATEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryCardSmsTemplateReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCardSmsTemplateReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TemplateCodes, templateCodes_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCardSmsTemplateReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TemplateCodes, templateCodes_);
    };
    QueryCardSmsTemplateReportRequest() = default ;
    QueryCardSmsTemplateReportRequest(const QueryCardSmsTemplateReportRequest &) = default ;
    QueryCardSmsTemplateReportRequest(QueryCardSmsTemplateReportRequest &&) = default ;
    QueryCardSmsTemplateReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCardSmsTemplateReportRequest() = default ;
    QueryCardSmsTemplateReportRequest& operator=(const QueryCardSmsTemplateReportRequest &) = default ;
    QueryCardSmsTemplateReportRequest& operator=(QueryCardSmsTemplateReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->startDate_ == nullptr && return this->templateCodes_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryCardSmsTemplateReportRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryCardSmsTemplateReportRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // templateCodes Field Functions 
    bool hasTemplateCodes() const { return this->templateCodes_ != nullptr;};
    void deleteTemplateCodes() { this->templateCodes_ = nullptr;};
    inline const vector<string> & templateCodes() const { DARABONBA_PTR_GET_CONST(templateCodes_, vector<string>) };
    inline vector<string> templateCodes() { DARABONBA_PTR_GET(templateCodes_, vector<string>) };
    inline QueryCardSmsTemplateReportRequest& setTemplateCodes(const vector<string> & templateCodes) { DARABONBA_PTR_SET_VALUE(templateCodes_, templateCodes) };
    inline QueryCardSmsTemplateReportRequest& setTemplateCodes(vector<string> && templateCodes) { DARABONBA_PTR_SET_RVALUE(templateCodes_, templateCodes) };


  protected:
    // The end of the time range to query. Specify the time in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> endDate_ = nullptr;
    // The beginning of the time range to query. Specify the time in the yyyy-MM-dd HH:mm:ss format.
    std::shared_ptr<string> startDate_ = nullptr;
    // The array of message templates.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> templateCodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
