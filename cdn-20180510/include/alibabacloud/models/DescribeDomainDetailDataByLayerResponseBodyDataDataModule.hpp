// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODYDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODYDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainDetailDataByLayerResponseBodyDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailDataByLayerResponseBodyDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Ipv6Acc, ipv6Acc_);
      DARABONBA_PTR_TO_JSON(Ipv6Bps, ipv6Bps_);
      DARABONBA_PTR_TO_JSON(Ipv6Qps, ipv6Qps_);
      DARABONBA_PTR_TO_JSON(Ipv6Traf, ipv6Traf_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Traf, traf_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailDataByLayerResponseBodyDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Ipv6Acc, ipv6Acc_);
      DARABONBA_PTR_FROM_JSON(Ipv6Bps, ipv6Bps_);
      DARABONBA_PTR_FROM_JSON(Ipv6Qps, ipv6Qps_);
      DARABONBA_PTR_FROM_JSON(Ipv6Traf, ipv6Traf_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Traf, traf_);
    };
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule() = default ;
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule(const DescribeDomainDetailDataByLayerResponseBodyDataDataModule &) = default ;
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule(DescribeDomainDetailDataByLayerResponseBodyDataDataModule &&) = default ;
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailDataByLayerResponseBodyDataDataModule() = default ;
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule& operator=(const DescribeDomainDetailDataByLayerResponseBodyDataDataModule &) = default ;
    DescribeDomainDetailDataByLayerResponseBodyDataDataModule& operator=(DescribeDomainDetailDataByLayerResponseBodyDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acc_ == nullptr
        && return this->bps_ == nullptr && return this->domainName_ == nullptr && return this->httpCode_ == nullptr && return this->ipv6Acc_ == nullptr && return this->ipv6Bps_ == nullptr
        && return this->ipv6Qps_ == nullptr && return this->ipv6Traf_ == nullptr && return this->qps_ == nullptr && return this->timeStamp_ == nullptr && return this->traf_ == nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int64_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline float bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // ipv6Acc Field Functions 
    bool hasIpv6Acc() const { return this->ipv6Acc_ != nullptr;};
    void deleteIpv6Acc() { this->ipv6Acc_ = nullptr;};
    inline int64_t ipv6Acc() const { DARABONBA_PTR_GET_DEFAULT(ipv6Acc_, 0L) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setIpv6Acc(int64_t ipv6Acc) { DARABONBA_PTR_SET_VALUE(ipv6Acc_, ipv6Acc) };


    // ipv6Bps Field Functions 
    bool hasIpv6Bps() const { return this->ipv6Bps_ != nullptr;};
    void deleteIpv6Bps() { this->ipv6Bps_ = nullptr;};
    inline float ipv6Bps() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bps_, 0.0) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setIpv6Bps(float ipv6Bps) { DARABONBA_PTR_SET_VALUE(ipv6Bps_, ipv6Bps) };


    // ipv6Qps Field Functions 
    bool hasIpv6Qps() const { return this->ipv6Qps_ != nullptr;};
    void deleteIpv6Qps() { this->ipv6Qps_ = nullptr;};
    inline float ipv6Qps() const { DARABONBA_PTR_GET_DEFAULT(ipv6Qps_, 0.0) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setIpv6Qps(float ipv6Qps) { DARABONBA_PTR_SET_VALUE(ipv6Qps_, ipv6Qps) };


    // ipv6Traf Field Functions 
    bool hasIpv6Traf() const { return this->ipv6Traf_ != nullptr;};
    void deleteIpv6Traf() { this->ipv6Traf_ = nullptr;};
    inline int64_t ipv6Traf() const { DARABONBA_PTR_GET_DEFAULT(ipv6Traf_, 0L) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setIpv6Traf(int64_t ipv6Traf) { DARABONBA_PTR_SET_VALUE(ipv6Traf_, ipv6Traf) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline float qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // traf Field Functions 
    bool hasTraf() const { return this->traf_ != nullptr;};
    void deleteTraf() { this->traf_ = nullptr;};
    inline int64_t traf() const { DARABONBA_PTR_GET_DEFAULT(traf_, 0L) };
    inline DescribeDomainDetailDataByLayerResponseBodyDataDataModule& setTraf(int64_t traf) { DARABONBA_PTR_SET_VALUE(traf_, traf) };


  protected:
    // The timestamp of the data returned.
    std::shared_ptr<int64_t> acc_ = nullptr;
    // The bandwidth of IPv6 requests. Unit: bit/s.
    std::shared_ptr<float> bps_ = nullptr;
    // The number of requests.
    std::shared_ptr<string> domainName_ = nullptr;
    // - You can call this operation up to 20 times per second per account.
    // - If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
    // 
    // **Time granularity**
    // 
    // The following table describes the time granularity, the time period within which historical data is available, and the data delay, which vary with the maximum time range per query. 
    // 
    // | Time granularity | Maximum time range per query | Historical data available | Data delay |
    // | ---------------- | ---------------------------- | ------------------------- | ---------- |
    // | 5 minutes | 3 days | 93 days | 15 minutes |
    // | 1 hour | 31 days | 186 days | 4 hours |
    // | 1 days | 366 days | 366 days | 04:00 on the next day |
    std::shared_ptr<string> httpCode_ = nullptr;
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<int64_t> ipv6Acc_ = nullptr;
    // The number of IPv6 requests.
    std::shared_ptr<float> ipv6Bps_ = nullptr;
    // The amount of network traffic generated by IPv6 requests. Unit: bytes.
    std::shared_ptr<float> ipv6Qps_ = nullptr;
    // The proportions of HTTP status codes.
    std::shared_ptr<int64_t> ipv6Traf_ = nullptr;
    // The number of requests.
    std::shared_ptr<float> qps_ = nullptr;
    // The domain name.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The bandwidth of IPv6 requests. Unit: bit/s.
    std::shared_ptr<int64_t> traf_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
