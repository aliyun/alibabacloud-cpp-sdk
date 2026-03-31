// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAGGREGATECONFIGRULESREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAGGREGATECONFIGRULESREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateAggregateConfigRulesReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAggregateConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAggregateConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAggregateConfigRulesReportResponseBody() = default ;
    GenerateAggregateConfigRulesReportResponseBody(const GenerateAggregateConfigRulesReportResponseBody &) = default ;
    GenerateAggregateConfigRulesReportResponseBody(GenerateAggregateConfigRulesReportResponseBody &&) = default ;
    GenerateAggregateConfigRulesReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAggregateConfigRulesReportResponseBody() = default ;
    GenerateAggregateConfigRulesReportResponseBody& operator=(const GenerateAggregateConfigRulesReportResponseBody &) = default ;
    GenerateAggregateConfigRulesReportResponseBody& operator=(GenerateAggregateConfigRulesReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->reportId_ == nullptr && this->requestId_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GenerateAggregateConfigRulesReportResponseBody& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GenerateAggregateConfigRulesReportResponseBody& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAggregateConfigRulesReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the account group.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the compliance evaluation report.
    shared_ptr<string> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
