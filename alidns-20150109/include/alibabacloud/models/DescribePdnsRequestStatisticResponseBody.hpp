// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsRequestStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsRequestStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsRequestStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsRequestStatisticResponseBody() = default ;
    DescribePdnsRequestStatisticResponseBody(const DescribePdnsRequestStatisticResponseBody &) = default ;
    DescribePdnsRequestStatisticResponseBody(DescribePdnsRequestStatisticResponseBody &&) = default ;
    DescribePdnsRequestStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsRequestStatisticResponseBody() = default ;
    DescribePdnsRequestStatisticResponseBody& operator=(const DescribePdnsRequestStatisticResponseBody &) = default ;
    DescribePdnsRequestStatisticResponseBody& operator=(DescribePdnsRequestStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && this->httpCount_ == nullptr && this->httpsCount_ == nullptr && this->ipCount_ == nullptr && this->timestamp_ == nullptr && this->totalCount_ == nullptr
        && this->udpTotalCount_ == nullptr && this->v4Count_ == nullptr && this->v4HttpCount_ == nullptr && this->v4HttpsCount_ == nullptr && this->v6Count_ == nullptr
        && this->v6HttpCount_ == nullptr && this->v6HttpsCount_ == nullptr; };
      // dohTotalCount Field Functions 
      bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
      void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
      inline int64_t getDohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
      inline Data& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


      // httpCount Field Functions 
      bool hasHttpCount() const { return this->httpCount_ != nullptr;};
      void deleteHttpCount() { this->httpCount_ = nullptr;};
      inline int64_t getHttpCount() const { DARABONBA_PTR_GET_DEFAULT(httpCount_, 0L) };
      inline Data& setHttpCount(int64_t httpCount) { DARABONBA_PTR_SET_VALUE(httpCount_, httpCount) };


      // httpsCount Field Functions 
      bool hasHttpsCount() const { return this->httpsCount_ != nullptr;};
      void deleteHttpsCount() { this->httpsCount_ = nullptr;};
      inline int64_t getHttpsCount() const { DARABONBA_PTR_GET_DEFAULT(httpsCount_, 0L) };
      inline Data& setHttpsCount(int64_t httpsCount) { DARABONBA_PTR_SET_VALUE(httpsCount_, httpsCount) };


      // ipCount Field Functions 
      bool hasIpCount() const { return this->ipCount_ != nullptr;};
      void deleteIpCount() { this->ipCount_ = nullptr;};
      inline int64_t getIpCount() const { DARABONBA_PTR_GET_DEFAULT(ipCount_, 0L) };
      inline Data& setIpCount(int64_t ipCount) { DARABONBA_PTR_SET_VALUE(ipCount_, ipCount) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // udpTotalCount Field Functions 
      bool hasUdpTotalCount() const { return this->udpTotalCount_ != nullptr;};
      void deleteUdpTotalCount() { this->udpTotalCount_ = nullptr;};
      inline int64_t getUdpTotalCount() const { DARABONBA_PTR_GET_DEFAULT(udpTotalCount_, 0L) };
      inline Data& setUdpTotalCount(int64_t udpTotalCount) { DARABONBA_PTR_SET_VALUE(udpTotalCount_, udpTotalCount) };


      // v4Count Field Functions 
      bool hasV4Count() const { return this->v4Count_ != nullptr;};
      void deleteV4Count() { this->v4Count_ = nullptr;};
      inline int64_t getV4Count() const { DARABONBA_PTR_GET_DEFAULT(v4Count_, 0L) };
      inline Data& setV4Count(int64_t v4Count) { DARABONBA_PTR_SET_VALUE(v4Count_, v4Count) };


      // v4HttpCount Field Functions 
      bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
      void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
      inline int64_t getV4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
      inline Data& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


      // v4HttpsCount Field Functions 
      bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
      void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
      inline int64_t getV4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
      inline Data& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


      // v6Count Field Functions 
      bool hasV6Count() const { return this->v6Count_ != nullptr;};
      void deleteV6Count() { this->v6Count_ = nullptr;};
      inline int64_t getV6Count() const { DARABONBA_PTR_GET_DEFAULT(v6Count_, 0L) };
      inline Data& setV6Count(int64_t v6Count) { DARABONBA_PTR_SET_VALUE(v6Count_, v6Count) };


      // v6HttpCount Field Functions 
      bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
      void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
      inline int64_t getV6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
      inline Data& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


      // v6HttpsCount Field Functions 
      bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
      void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
      inline int64_t getV6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
      inline Data& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


    protected:
      // The total number of DoH requests, including HTTP and HTTPS requests.
      shared_ptr<int64_t> dohTotalCount_ {};
      // The number of HTTP requests.
      shared_ptr<int64_t> httpCount_ {};
      // The number of HTTPS requests. On the Traffic Analysis tab of the Public DNS console, the value of this parameter includes the number of DNS over HTTPs (DoH) requests. Therefore, the number of DoH requests is not separately displayed in the console.
      shared_ptr<int64_t> httpsCount_ {};
      // The number of source IP addresses.
      shared_ptr<int64_t> ipCount_ {};
      // The statistical timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      // The total number of requests.
      shared_ptr<int64_t> totalCount_ {};
      // The total number of UDP requests.
      shared_ptr<int64_t> udpTotalCount_ {};
      // The number of IPv4-based requests.
      shared_ptr<int64_t> v4Count_ {};
      // The number of IPv4-based HTTP requests.
      shared_ptr<int64_t> v4HttpCount_ {};
      // The number of IPv4-based HTTPS requests.
      shared_ptr<int64_t> v4HttpsCount_ {};
      // The number of IPv6-based requests.
      shared_ptr<int64_t> v6Count_ {};
      // The number of IPv6-based HTTP requests.
      shared_ptr<int64_t> v6HttpCount_ {};
      // The number of IPv6-based HTTPS requests.
      shared_ptr<int64_t> v6HttpsCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribePdnsRequestStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribePdnsRequestStatisticResponseBody::Data>) };
    inline vector<DescribePdnsRequestStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribePdnsRequestStatisticResponseBody::Data>) };
    inline DescribePdnsRequestStatisticResponseBody& setData(const vector<DescribePdnsRequestStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsRequestStatisticResponseBody& setData(vector<DescribePdnsRequestStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsRequestStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the DNS requests.
    shared_ptr<vector<DescribePdnsRequestStatisticResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
