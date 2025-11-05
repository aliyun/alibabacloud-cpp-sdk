// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVALREQUESTDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVALREQUESTDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule() = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(const DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &&) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule() = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& operator=(const DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& operator=(DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->request_ == nullptr && return this->timeStamp_ == nullptr && return this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline int64_t request() const { DARABONBA_PTR_GET_DEFAULT(request_, 0L) };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setRequest(int64_t request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The number of requests.
    std::shared_ptr<int64_t> request_ = nullptr;
    // The timestamp of the returned number of requests.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The type.
    // 
    // >  The value is Simple for Alibaba Cloud CDN.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
