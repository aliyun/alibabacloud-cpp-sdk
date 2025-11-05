// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINSTOPDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPDOMAINSBYFLOWRESPONSEBODYTOPDOMAINSTOPDOMAIN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_TO_JSON(Rank, rank_);
      DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_TO_JSON(TrafficPercent, trafficPercent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
      DARABONBA_PTR_FROM_JSON(Rank, rank_);
      DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
      DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
      DARABONBA_PTR_FROM_JSON(TrafficPercent, trafficPercent_);
    };
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain(const DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain &) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain(DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain &&) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain() = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& operator=(const DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain &) = default ;
    DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& operator=(DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->maxBps_ == nullptr && return this->maxBpsTime_ == nullptr && return this->rank_ == nullptr && return this->totalAccess_ == nullptr && return this->totalTraffic_ == nullptr
        && return this->trafficPercent_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // maxBps Field Functions 
    bool hasMaxBps() const { return this->maxBps_ != nullptr;};
    void deleteMaxBps() { this->maxBps_ = nullptr;};
    inline float maxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, 0.0) };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setMaxBps(float maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


    // maxBpsTime Field Functions 
    bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
    void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
    inline string maxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


    // rank Field Functions 
    bool hasRank() const { return this->rank_ != nullptr;};
    void deleteRank() { this->rank_ = nullptr;};
    inline int64_t rank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0L) };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setRank(int64_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


    // totalAccess Field Functions 
    bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
    void deleteTotalAccess() { this->totalAccess_ = nullptr;};
    inline int64_t totalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, 0L) };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTotalAccess(int64_t totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


    // totalTraffic Field Functions 
    bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
    void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
    inline string totalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


    // trafficPercent Field Functions 
    bool hasTrafficPercent() const { return this->trafficPercent_ != nullptr;};
    void deleteTrafficPercent() { this->trafficPercent_ = nullptr;};
    inline string trafficPercent() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent_, "") };
    inline DescribeTopDomainsByFlowResponseBodyTopDomainsTopDomain& setTrafficPercent(string trafficPercent) { DARABONBA_PTR_SET_VALUE(trafficPercent_, trafficPercent) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The peak bandwidth value.
    std::shared_ptr<float> maxBps_ = nullptr;
    // The time when the bandwidth reached the peak value.
    std::shared_ptr<string> maxBpsTime_ = nullptr;
    // The ranking of the accelerated domain name.
    std::shared_ptr<int64_t> rank_ = nullptr;
    // The number of visits to the domain name.
    std::shared_ptr<int64_t> totalAccess_ = nullptr;
    // The total volume of traffic.
    std::shared_ptr<string> totalTraffic_ = nullptr;
    // The proportion of network traffic consumed to access the domain name.
    std::shared_ptr<string> trafficPercent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
