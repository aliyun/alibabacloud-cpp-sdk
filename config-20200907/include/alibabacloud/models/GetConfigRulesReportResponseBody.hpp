// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULESREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULESREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConfigRulesReportResponseBodyConfigRulesReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRulesReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRulesReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRulesReport, configRulesReport_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRulesReportResponseBody() = default ;
    GetConfigRulesReportResponseBody(const GetConfigRulesReportResponseBody &) = default ;
    GetConfigRulesReportResponseBody(GetConfigRulesReportResponseBody &&) = default ;
    GetConfigRulesReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRulesReportResponseBody() = default ;
    GetConfigRulesReportResponseBody& operator=(const GetConfigRulesReportResponseBody &) = default ;
    GetConfigRulesReportResponseBody& operator=(GetConfigRulesReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRulesReport_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRulesReport Field Functions 
    bool hasConfigRulesReport() const { return this->configRulesReport_ != nullptr;};
    void deleteConfigRulesReport() { this->configRulesReport_ = nullptr;};
    inline const GetConfigRulesReportResponseBodyConfigRulesReport & configRulesReport() const { DARABONBA_PTR_GET_CONST(configRulesReport_, GetConfigRulesReportResponseBodyConfigRulesReport) };
    inline GetConfigRulesReportResponseBodyConfigRulesReport configRulesReport() { DARABONBA_PTR_GET(configRulesReport_, GetConfigRulesReportResponseBodyConfigRulesReport) };
    inline GetConfigRulesReportResponseBody& setConfigRulesReport(const GetConfigRulesReportResponseBodyConfigRulesReport & configRulesReport) { DARABONBA_PTR_SET_VALUE(configRulesReport_, configRulesReport) };
    inline GetConfigRulesReportResponseBody& setConfigRulesReport(GetConfigRulesReportResponseBodyConfigRulesReport && configRulesReport) { DARABONBA_PTR_SET_RVALUE(configRulesReport_, configRulesReport) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRulesReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation report.
    std::shared_ptr<GetConfigRulesReportResponseBodyConfigRulesReport> configRulesReport_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
