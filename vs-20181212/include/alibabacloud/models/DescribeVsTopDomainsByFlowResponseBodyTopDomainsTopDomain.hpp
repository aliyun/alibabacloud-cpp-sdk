// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINSTOPDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSTOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINSTOPDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_TO_JSON(Rank, rank_);
      DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficPercent, trafficPercent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_FROM_JSON(Rank, rank_);
      DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficPercent, trafficPercent_);
    };
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain(const DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain &) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain(DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain &&) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& operator=(const DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain &) = default ;
    DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& operator=(DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->maxBps_ != nullptr && this->maxBpsTime_ != nullptr && this->rank_ != nullptr && this->totalAccess_ != nullptr && this->totalTraffic_ != nullptr
        && this->trafficPercent_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // maxBps Field Functions 
    bool hasMaxBps() const { return this->maxBps_ != nullptr;};
    void deleteMaxBps() { this->maxBps_ = nullptr;};
    inline int64_t maxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, 0L) };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setMaxBps(int64_t maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


    // maxBpsTime Field Functions 
    bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
    void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
    inline string maxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


    // rank Field Functions 
    bool hasRank() const { return this->rank_ != nullptr;};
    void deleteRank() { this->rank_ = nullptr;};
    inline int64_t rank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0L) };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setRank(int64_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


    // totalAccess Field Functions 
    bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
    void deleteTotalAccess() { this->totalAccess_ = nullptr;};
    inline int64_t totalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, 0L) };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTotalAccess(int64_t totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    // trafficPercent Field Functions 
    bool hasTrafficPercent() const { return this->trafficPercent_ != nullptr;};
    void deleteTrafficPercent() { this->trafficPercent_ = nullptr;};
    inline string trafficPercent() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent_, "") };
    inline DescribeVsTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTrafficPercent(string trafficPercent) { DARABONBA_PTR_SET_VALUE(trafficPercent_, trafficPercent) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> maxBps_ = nullptr;
    std::shared_ptr<string> maxBpsTime_ = nullptr;
    std::shared_ptr<int64_t> rank_ = nullptr;
    std::shared_ptr<int64_t> totalAccess_ = nullptr;
    std::shared_ptr<string> totalTraffic_ = nullptr;
    std::shared_ptr<string> trafficPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
