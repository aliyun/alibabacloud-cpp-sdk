// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsThreatStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LatestThreatTime, latestThreatTime_);
      DARABONBA_PTR_TO_JSON(MaxThreatLevel, maxThreatLevel_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UdpTotalCount, udpTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LatestThreatTime, latestThreatTime_);
      DARABONBA_PTR_FROM_JSON(MaxThreatLevel, maxThreatLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UdpTotalCount, udpTotalCount_);
    };
    DescribePdnsThreatStatisticsResponseBodyData() = default ;
    DescribePdnsThreatStatisticsResponseBodyData(const DescribePdnsThreatStatisticsResponseBodyData &) = default ;
    DescribePdnsThreatStatisticsResponseBodyData(DescribePdnsThreatStatisticsResponseBodyData &&) = default ;
    DescribePdnsThreatStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatStatisticsResponseBodyData() = default ;
    DescribePdnsThreatStatisticsResponseBodyData& operator=(const DescribePdnsThreatStatisticsResponseBodyData &) = default ;
    DescribePdnsThreatStatisticsResponseBodyData& operator=(DescribePdnsThreatStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && return this->domainCount_ == nullptr && return this->domainName_ == nullptr && return this->latestThreatTime_ == nullptr && return this->maxThreatLevel_ == nullptr && return this->sourceIp_ == nullptr
        && return this->subDomain_ == nullptr && return this->threatLevel_ == nullptr && return this->threatType_ == nullptr && return this->totalCount_ == nullptr && return this->udpTotalCount_ == nullptr; };
    // dohTotalCount Field Functions 
    bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
    void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
    inline int64_t dohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBodyData& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBodyData& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // latestThreatTime Field Functions 
    bool hasLatestThreatTime() const { return this->latestThreatTime_ != nullptr;};
    void deleteLatestThreatTime() { this->latestThreatTime_ = nullptr;};
    inline int64_t latestThreatTime() const { DARABONBA_PTR_GET_DEFAULT(latestThreatTime_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBodyData& setLatestThreatTime(int64_t latestThreatTime) { DARABONBA_PTR_SET_VALUE(latestThreatTime_, latestThreatTime) };


    // maxThreatLevel Field Functions 
    bool hasMaxThreatLevel() const { return this->maxThreatLevel_ != nullptr;};
    void deleteMaxThreatLevel() { this->maxThreatLevel_ = nullptr;};
    inline string maxThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(maxThreatLevel_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setMaxThreatLevel(string maxThreatLevel) { DARABONBA_PTR_SET_VALUE(maxThreatLevel_, maxThreatLevel) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatType Field Functions 
    bool hasThreatType() const { return this->threatType_ != nullptr;};
    void deleteThreatType() { this->threatType_ = nullptr;};
    inline string threatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
    inline DescribePdnsThreatStatisticsResponseBodyData& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // udpTotalCount Field Functions 
    bool hasUdpTotalCount() const { return this->udpTotalCount_ != nullptr;};
    void deleteUdpTotalCount() { this->udpTotalCount_ = nullptr;};
    inline int64_t udpTotalCount() const { DARABONBA_PTR_GET_DEFAULT(udpTotalCount_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBodyData& setUdpTotalCount(int64_t udpTotalCount) { DARABONBA_PTR_SET_VALUE(udpTotalCount_, udpTotalCount) };


  protected:
    std::shared_ptr<int64_t> dohTotalCount_ = nullptr;
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> latestThreatTime_ = nullptr;
    std::shared_ptr<string> maxThreatLevel_ = nullptr;
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> subDomain_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
    std::shared_ptr<string> threatType_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> udpTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
