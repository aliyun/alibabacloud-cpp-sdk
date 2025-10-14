// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVESTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVESTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainResolveStatisticsSummaryResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
    };
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics(const DescribeDomainResolveStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics(DescribeDomainResolveStatisticsSummaryResponseBodyStatistics &&) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResolveStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& operator=(const DescribeDomainResolveStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& operator=(DescribeDomainResolveStatisticsSummaryResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->domainName_ == nullptr && return this->domainType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeDomainResolveStatisticsSummaryResponseBodyStatistics& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<string> count_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the domain name. Valid values:
    // 
    // *   PUBLIC: hosted public domain name
    // *   CACHE: cache-accelerated domain name
    std::shared_ptr<string> domainType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
