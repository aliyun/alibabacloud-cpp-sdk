// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohSubDomainStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
    };
    DescribeDohSubDomainStatisticsRequest() = default ;
    DescribeDohSubDomainStatisticsRequest(const DescribeDohSubDomainStatisticsRequest &) = default ;
    DescribeDohSubDomainStatisticsRequest(DescribeDohSubDomainStatisticsRequest &&) = default ;
    DescribeDohSubDomainStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsRequest() = default ;
    DescribeDohSubDomainStatisticsRequest& operator=(const DescribeDohSubDomainStatisticsRequest &) = default ;
    DescribeDohSubDomainStatisticsRequest& operator=(DescribeDohSubDomainStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->lang_ == nullptr && this->startDate_ == nullptr && this->subDomain_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDohSubDomainStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDohSubDomainStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDohSubDomainStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDohSubDomainStatisticsRequest& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The end of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // The default value is the day when you perform the operation.
    shared_ptr<string> endDate_ {};
    // The language type.
    shared_ptr<string> lang_ {};
    // The beginning of the time range to query. Specify the time in the YYYY-MM-DD format.
    // 
    // You can query only the DNS records of the latest 90 days. `The value of StartDate must be greater than or equal to the difference between the current date and 90`.
    shared_ptr<string> startDate_ {};
    // The subdomain whose statistics you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> subDomain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
