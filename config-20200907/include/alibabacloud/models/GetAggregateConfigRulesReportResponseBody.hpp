// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULESREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateConfigRulesReportResponseBodyConfigRulesReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRulesReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateConfigRulesReportResponseBody() = default ;
    GetAggregateConfigRulesReportResponseBody(const GetAggregateConfigRulesReportResponseBody &) = default ;
    GetAggregateConfigRulesReportResponseBody(GetAggregateConfigRulesReportResponseBody &&) = default ;
    GetAggregateConfigRulesReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRulesReportResponseBody() = default ;
    GetAggregateConfigRulesReportResponseBody& operator=(const GetAggregateConfigRulesReportResponseBody &) = default ;
    GetAggregateConfigRulesReportResponseBody& operator=(GetAggregateConfigRulesReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRulesReport_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRulesReport Field Functions 
    bool hasConfigRulesReport() const { return this->configRulesReport_ != nullptr;};
    void deleteConfigRulesReport() { this->configRulesReport_ = nullptr;};
    inline const GetAggregateConfigRulesReportResponseBodyConfigRulesReport & configRulesReport() const { DARABONBA_PTR_GET_CONST(configRulesReport_, GetAggregateConfigRulesReportResponseBodyConfigRulesReport) };
    inline GetAggregateConfigRulesReportResponseBodyConfigRulesReport configRulesReport() { DARABONBA_PTR_GET(configRulesReport_, GetAggregateConfigRulesReportResponseBodyConfigRulesReport) };
    inline GetAggregateConfigRulesReportResponseBody& setConfigRulesReport(const GetAggregateConfigRulesReportResponseBodyConfigRulesReport & configRulesReport) { DARABONBA_PTR_SET_VALUE(configRulesReport_, configRulesReport) };
    inline GetAggregateConfigRulesReportResponseBody& setConfigRulesReport(GetAggregateConfigRulesReportResponseBodyConfigRulesReport && configRulesReport) { DARABONBA_PTR_SET_RVALUE(configRulesReport_, configRulesReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateConfigRulesReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance evaluation report.
    std::shared_ptr<GetAggregateConfigRulesReportResponseBodyConfigRulesReport> configRulesReport_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
