// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETOPENPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetOpenPortRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetOpenPortRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceNameFuzzy, serviceNameFuzzy_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SuggestLevel, suggestLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetOpenPortRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceNameFuzzy, serviceNameFuzzy_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SuggestLevel, suggestLevel_);
    };
    DescribeInternetOpenPortRequest() = default ;
    DescribeInternetOpenPortRequest(const DescribeInternetOpenPortRequest &) = default ;
    DescribeInternetOpenPortRequest(DescribeInternetOpenPortRequest &&) = default ;
    DescribeInternetOpenPortRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetOpenPortRequest() = default ;
    DescribeInternetOpenPortRequest& operator=(const DescribeInternetOpenPortRequest &) = default ;
    DescribeInternetOpenPortRequest& operator=(DescribeInternetOpenPortRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->port_ == nullptr && this->riskLevel_ == nullptr
        && this->serviceName_ == nullptr && this->serviceNameFuzzy_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr && this->suggestLevel_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInternetOpenPortRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInternetOpenPortRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetOpenPortRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInternetOpenPortRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInternetOpenPortRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeInternetOpenPortRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeInternetOpenPortRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceNameFuzzy Field Functions 
    bool hasServiceNameFuzzy() const { return this->serviceNameFuzzy_ != nullptr;};
    void deleteServiceNameFuzzy() { this->serviceNameFuzzy_ = nullptr;};
    inline string getServiceNameFuzzy() const { DARABONBA_PTR_GET_DEFAULT(serviceNameFuzzy_, "") };
    inline DescribeInternetOpenPortRequest& setServiceNameFuzzy(string serviceNameFuzzy) { DARABONBA_PTR_SET_VALUE(serviceNameFuzzy_, serviceNameFuzzy) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetOpenPortRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInternetOpenPortRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // suggestLevel Field Functions 
    bool hasSuggestLevel() const { return this->suggestLevel_ != nullptr;};
    void deleteSuggestLevel() { this->suggestLevel_ = nullptr;};
    inline string getSuggestLevel() const { DARABONBA_PTR_GET_DEFAULT(suggestLevel_, "") };
    inline DescribeInternetOpenPortRequest& setSuggestLevel(string suggestLevel) { DARABONBA_PTR_SET_VALUE(suggestLevel_, suggestLevel) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> port_ {};
    shared_ptr<string> riskLevel_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> serviceNameFuzzy_ {};
    shared_ptr<string> sourceIp_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> suggestLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
