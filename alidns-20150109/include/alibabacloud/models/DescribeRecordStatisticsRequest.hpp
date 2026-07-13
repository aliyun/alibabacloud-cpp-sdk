// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeRecordStatisticsRequest() = default ;
    DescribeRecordStatisticsRequest(const DescribeRecordStatisticsRequest &) = default ;
    DescribeRecordStatisticsRequest(DescribeRecordStatisticsRequest &&) = default ;
    DescribeRecordStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsRequest() = default ;
    DescribeRecordStatisticsRequest& operator=(const DescribeRecordStatisticsRequest &) = default ;
    DescribeRecordStatisticsRequest& operator=(DescribeRecordStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainType_ == nullptr && this->endDate_ == nullptr && this->lang_ == nullptr && this->rr_ == nullptr && this->startDate_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeRecordStatisticsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeRecordStatisticsRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeRecordStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecordStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline DescribeRecordStatisticsRequest& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeRecordStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The primary domain name.
    // <props="china">For more information, see [DescribeDomains](https://help.aliyun.com/document_detail/29751.html).
    // <props="intl">For more information, see [DescribeDomains](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describedomains).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. This parameter is not case-sensitive. Valid values:
    // 
    // - PUBLIC (default): authoritative domain name
    // 
    // - CACHE: authoritative proxy domain name
    shared_ptr<string> domainType_ {};
    // The end date of the query. The format is **YYYY-MM-DD**.
    // 
    // The default value is the current date.
    shared_ptr<string> endDate_ {};
    // The language of the return value. Valid values:
    // 
    // - zh (default): Chinese
    // 
    // - en: English
    shared_ptr<string> lang_ {};
    // The host record. For example, to resolve www\\.example.com, set this parameter to www.
    // 
    // This parameter is required.
    shared_ptr<string> rr_ {};
    // The start date of the query. The format is **YYYY-MM-DD**.
    // 
    // The start date must be within the last 90 days.
    // 
    // If the time range of the query is 7 days or less, data is returned by the hour.
    // 
    // If the time range of the query is more than 7 days, data is returned by the day.
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
