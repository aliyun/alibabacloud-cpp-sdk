// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsRequestStatisticResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsRequestStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UdpTotalCount, udpTotalCount_);
      DARABONBA_PTR_TO_JSON(V4Count, v4Count_);
      DARABONBA_PTR_TO_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_TO_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_TO_JSON(V6Count, v6Count_);
      DARABONBA_PTR_TO_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_TO_JSON(V6HttpsCount, v6HttpsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsRequestStatisticResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DohTotalCount, dohTotalCount_);
      DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
      DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
      DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UdpTotalCount, udpTotalCount_);
      DARABONBA_PTR_FROM_JSON(V4Count, v4Count_);
      DARABONBA_PTR_FROM_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_FROM_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_FROM_JSON(V6Count, v6Count_);
      DARABONBA_PTR_FROM_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_FROM_JSON(V6HttpsCount, v6HttpsCount_);
    };
    DescribePdnsRequestStatisticResponseBodyData() = default ;
    DescribePdnsRequestStatisticResponseBodyData(const DescribePdnsRequestStatisticResponseBodyData &) = default ;
    DescribePdnsRequestStatisticResponseBodyData(DescribePdnsRequestStatisticResponseBodyData &&) = default ;
    DescribePdnsRequestStatisticResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsRequestStatisticResponseBodyData() = default ;
    DescribePdnsRequestStatisticResponseBodyData& operator=(const DescribePdnsRequestStatisticResponseBodyData &) = default ;
    DescribePdnsRequestStatisticResponseBodyData& operator=(DescribePdnsRequestStatisticResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && return this->httpCount_ == nullptr && return this->httpsCount_ == nullptr && return this->ipCount_ == nullptr && return this->timestamp_ == nullptr && return this->totalCount_ == nullptr
        && return this->udpTotalCount_ == nullptr && return this->v4Count_ == nullptr && return this->v4HttpCount_ == nullptr && return this->v4HttpsCount_ == nullptr && return this->v6Count_ == nullptr
        && return this->v6HttpCount_ == nullptr && return this->v6HttpsCount_ == nullptr; };
    // dohTotalCount Field Functions 
    bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
    void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
    inline int64_t dohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


    // httpCount Field Functions 
    bool hasHttpCount() const { return this->httpCount_ != nullptr;};
    void deleteHttpCount() { this->httpCount_ = nullptr;};
    inline int64_t httpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


    // httpsCount Field Functions 
    bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
    void deleteHttpsCount() { this->httpsCount_ = nullptr;};
    inline int64_t httpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


    // ipCount Field Functions 
    bool hasIpCount() const { return this->ipCount_ != nullptr;};
    void deleteIpCount() { this->ipCount_ = nullptr;};
    inline int64_t ipCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setIpCount(int64_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // udpTotalCount Field Functions 
    bool hasUdpTotalCount() const { return this->udpTotalCount_ != nullptr;};
    void deleteUdpTotalCount() { this->udpTotalCount_ = nullptr;};
    inline int64_t udpTotalCount() const { DARABONBA_PTR_GET_DEFAULT(udpTotalCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setUdpTotalCount(int64_t udpTotalCount) { DARABONBA_PTR_SET_VALUE(udpTotalCount_, udpTotalCount) };


    // v4Count Field Functions 
    bool hasV4Count() const { return this->v4Count_ != nullptr;};
    void deleteV4Count() { this->v4Count_ = nullptr;};
    inline int64_t v4Count() const { DARABONBA_PTR_GET_DEFAULT(v4Count_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV4Count(int64_t v4Count) { DARABONBA_PTR_SET_VALUE(v4Count_, v4Count) };


    // v4HttpCount Field Functions 
    bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
    void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
    inline int64_t v4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


    // v4HttpsCount Field Functions 
    bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
    void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
    inline int64_t v4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


    // v6Count Field Functions 
    bool hasV6Count() const { return this->v6Count_ != nullptr;};
    void deleteV6Count() { this->v6Count_ = nullptr;};
    inline int64_t v6Count() const { DARABONBA_PTR_GET_DEFAULT(v6Count_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV6Count(int64_t v6Count) { DARABONBA_PTR_SET_VALUE(v6Count_, v6Count) };


    // v6HttpCount Field Functions 
    bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
    void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
    inline int64_t v6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


    // v6HttpsCount Field Functions 
    bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
    void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
    inline int64_t v6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
    inline DescribePdnsRequestStatisticResponseBodyData& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


  protected:
    // The total number of DoH requests, including HTTP and HTTPS requests.
    std::shared_ptr<int64_t> dohTotalCount_ = nullptr;
    // The number of HTTP requests.
    std::shared_ptr<int64_t> httpCount_ = nullptr;
    // The number of HTTPS requests. On the Traffic Analysis tab of the Public DNS console, the value of this parameter includes the number of DNS over HTTPs (DoH) requests. Therefore, the number of DoH requests is not separately displayed in the console.
    std::shared_ptr<int64_t> httpsCount_ = nullptr;
    // The number of source IP addresses.
    std::shared_ptr<int64_t> ipCount_ = nullptr;
    // The statistical timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The total number of UDP requests.
    std::shared_ptr<int64_t> udpTotalCount_ = nullptr;
    // The number of IPv4-based requests.
    std::shared_ptr<int64_t> v4Count_ = nullptr;
    // The number of IPv4-based HTTP requests.
    std::shared_ptr<int64_t> v4HttpCount_ = nullptr;
    // The number of IPv4-based HTTPS requests.
    std::shared_ptr<int64_t> v4HttpsCount_ = nullptr;
    // The number of IPv6-based requests.
    std::shared_ptr<int64_t> v6Count_ = nullptr;
    // The number of IPv6-based HTTP requests.
    std::shared_ptr<int64_t> v6HttpCount_ = nullptr;
    // The number of IPv6-based HTTPS requests.
    std::shared_ptr<int64_t> v6HttpsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
