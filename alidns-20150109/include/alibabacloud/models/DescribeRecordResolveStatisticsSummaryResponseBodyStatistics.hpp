// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordResolveStatisticsSummaryResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
    };
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics(const DescribeRecordResolveStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics(DescribeRecordResolveStatisticsSummaryResponseBodyStatistics &&) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordResolveStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& operator=(const DescribeRecordResolveStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& operator=(DescribeRecordResolveStatisticsSummaryResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->domainName_ == nullptr && return this->domainType_ == nullptr && return this->subDomain_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeRecordResolveStatisticsSummaryResponseBodyStatistics& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


  protected:
    // The number of DNS requests.
    std::shared_ptr<string> count_ = nullptr;
    // The subdomain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The type of the domain name. The parameter value is not case-sensitive. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cache-accelerated domain name
    std::shared_ptr<string> domainType_ = nullptr;
    // The subdomain.
    std::shared_ptr<string> subDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
