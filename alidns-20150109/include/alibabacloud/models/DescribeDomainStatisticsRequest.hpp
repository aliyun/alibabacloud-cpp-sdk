// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeDomainStatisticsRequest() = default ;
    DescribeDomainStatisticsRequest(const DescribeDomainStatisticsRequest &) = default ;
    DescribeDomainStatisticsRequest(DescribeDomainStatisticsRequest &&) = default ;
    DescribeDomainStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsRequest() = default ;
    DescribeDomainStatisticsRequest& operator=(const DescribeDomainStatisticsRequest &) = default ;
    DescribeDomainStatisticsRequest& operator=(DescribeDomainStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainType_ == nullptr && this->endDate_ == nullptr && this->lang_ == nullptr && this->startDate_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainStatisticsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDomainStatisticsRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDomainStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDomainStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cached public domain name
    shared_ptr<string> domainType_ {};
    // The end date of the query. Specify the end date in the **YYYY-MM-DD** format.
    // 
    // The default value is the day when you query the data.
    shared_ptr<string> endDate_ {};
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The start date of the query. Specify the start date in the **YYYY-MM-DD** format.
    // 
    // You can only query the DNS records within the last 90 days.``
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
