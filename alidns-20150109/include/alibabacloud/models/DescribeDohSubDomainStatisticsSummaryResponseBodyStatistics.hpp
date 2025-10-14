// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_TO_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_TO_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_TO_JSON(V6HttpsCount, v6HttpsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_FROM_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_FROM_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_FROM_JSON(V6HttpsCount, v6HttpsCount_);
    };
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics(const DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics(DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics &&) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& operator=(const DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& operator=(DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpCount_ == nullptr
        && return this->httpsCount_ == nullptr && return this->ipCount_ == nullptr && return this->subDomain_ == nullptr && return this->totalCount_ == nullptr && return this->v4HttpCount_ == nullptr
        && return this->v4HttpsCount_ == nullptr && return this->v6HttpCount_ == nullptr && return this->v6HttpsCount_ == nullptr; };
    // httpCount Field Functions 
    bool hasHttpCount() const { return this->httpCount_ != nullptr;};
    void deleteHttpCount() { this->httpCount_ = nullptr;};
    inline int64_t httpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


    // httpsCount Field Functions 
    bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
    void deleteHttpsCount() { this->httpsCount_ = nullptr;};
    inline int64_t httpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int64_t ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setIpCount(int64_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // v4HttpCount Field Functions 
    bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
    void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
    inline int64_t v4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


    // v4HttpsCount Field Functions 
    bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
    void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
    inline int64_t v4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


    // v6HttpCount Field Functions 
    bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
    void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
    inline int64_t v6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


    // v6HttpsCount Field Functions 
    bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
    void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
    inline int64_t v6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


  protected:
    // The number of HTTP requests.
    std::shared_ptr<int64_t> httpCount_ = nullptr;
    // The number of HTTPS requests.
    std::shared_ptr<int64_t> httpsCount_ = nullptr;
    // The number of IP addresses.
    std::shared_ptr<int64_t> ipCount_ = nullptr;
    // The subdomain.
    std::shared_ptr<string> subDomain_ = nullptr;
    // Total number of requests.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The number of IPv4-based HTTP requests.
    std::shared_ptr<int64_t> v4HttpCount_ = nullptr;
    // The number of IPv4-based HTTPS requests.
    std::shared_ptr<int64_t> v4HttpsCount_ = nullptr;
    // The number of IPv6-based HTTP requests.
    std::shared_ptr<int64_t> v6HttpCount_ = nullptr;
    // The number of IPv6-based HTTPS requests.
    std::shared_ptr<int64_t> v6HttpsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
