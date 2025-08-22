// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVALREQUESTDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVALREQUESTDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& operator=(const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& operator=(DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->request_ != nullptr && this->timeStamp_ != nullptr && this->type_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline int64_t request() const { DARABONBA_PTR_GET_DEFAULT(request_, 0L) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setRequest(int64_t request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of requests.
    std::shared_ptr<int64_t> request_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The type of the requests. Valid values: StaticHttps, DynamicHttps, DynamicHttp, StaticQuic, and DynamicQuic.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
