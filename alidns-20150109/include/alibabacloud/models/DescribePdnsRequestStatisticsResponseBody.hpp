// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSREQUESTSTATISTICSRESPONSEBODY_HPP_
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
  class DescribePdnsRequestStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsRequestStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsRequestStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePdnsRequestStatisticsResponseBody() = default ;
    DescribePdnsRequestStatisticsResponseBody(const DescribePdnsRequestStatisticsResponseBody &) = default ;
    DescribePdnsRequestStatisticsResponseBody(DescribePdnsRequestStatisticsResponseBody &&) = default ;
    DescribePdnsRequestStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsRequestStatisticsResponseBody() = default ;
    DescribePdnsRequestStatisticsResponseBody& operator=(const DescribePdnsRequestStatisticsResponseBody &) = default ;
    DescribePdnsRequestStatisticsResponseBody& operator=(DescribePdnsRequestStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DohTotalCount, dohTotalCount_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_TO_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_TO_JSON(IpCount, ipCount_);
        DARABONBA_PTR_TO_JSON(MaxThreatLevel, maxThreatLevel_);
        DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_TO_JSON(ThreatCount, threatCount_);
        DARABONBA_PTR_TO_JSON(ThreatInfo, threatInfo_);
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
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(HttpCount, httpCount_);
        DARABONBA_PTR_FROM_JSON(HttpsCount, httpsCount_);
        DARABONBA_PTR_FROM_JSON(IpCount, ipCount_);
        DARABONBA_PTR_FROM_JSON(MaxThreatLevel, maxThreatLevel_);
        DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_FROM_JSON(ThreatCount, threatCount_);
        DARABONBA_PTR_FROM_JSON(ThreatInfo, threatInfo_);
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
      class ThreatInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ThreatInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
          DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
        };
        friend void from_json(const Darabonba::Json& j, ThreatInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
          DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
        };
        ThreatInfo() = default ;
        ThreatInfo(const ThreatInfo &) = default ;
        ThreatInfo(ThreatInfo &&) = default ;
        ThreatInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ThreatInfo() = default ;
        ThreatInfo& operator=(const ThreatInfo &) = default ;
        ThreatInfo& operator=(ThreatInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->threatLevel_ == nullptr
        && this->threatType_ == nullptr; };
        // threatLevel Field Functions 
        bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
        void deleteThreatLevel() { this->threatLevel_ = nullptr;};
        inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
        inline ThreatInfo& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


        // threatType Field Functions 
        bool hasThreatType() const { return this->threatType_ != nullptr;};
        void deleteThreatType() { this->threatType_ = nullptr;};
        inline string getThreatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
        inline ThreatInfo& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


      protected:
        // The current version does not support this parameter.
        shared_ptr<string> threatLevel_ {};
        // The current version does not support this parameter.
        shared_ptr<string> threatType_ {};
      };

      virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && this->domainName_ == nullptr && this->httpCount_ == nullptr && this->httpsCount_ == nullptr && this->ipCount_ == nullptr && this->maxThreatLevel_ == nullptr
        && this->subDomain_ == nullptr && this->threatCount_ == nullptr && this->threatInfo_ == nullptr && this->totalCount_ == nullptr && this->udpTotalCount_ == nullptr
        && this->v4Count_ == nullptr && this->v4HttpCount_ == nullptr && this->v4HttpsCount_ == nullptr && this->v6Count_ == nullptr && this->v6HttpCount_ == nullptr
        && this->v6HttpsCount_ == nullptr; };
      // dohTotalCount Field Functions 
      bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
      void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
      inline int64_t getDohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
      inline Data& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


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


      // maxThreatLevel Field Functions 
      bool hasMaxThreatLevel() const { return this->maxThreatLevel_ != nullptr;};
      void deleteMaxThreatLevel() { this->maxThreatLevel_ = nullptr;};
      inline string getMaxThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(maxThreatLevel_, "") };
      inline Data& setMaxThreatLevel(string maxThreatLevel) { DARABONBA_PTR_SET_VALUE(maxThreatLevel_, maxThreatLevel) };


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline Data& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      // threatCount Field Functions 
      bool hasThreatCount() const { return this->threatCount_ != nullptr;};
      void deleteThreatCount() { this->threatCount_ = nullptr;};
      inline int64_t getThreatCount() const { DARABONBA_PTR_GET_DEFAULT(threatCount_, 0L) };
      inline Data& setThreatCount(int64_t threatCount) { DARABONBA_PTR_SET_VALUE(threatCount_, threatCount) };


      // threatInfo Field Functions 
      bool hasThreatInfo() const { return this->threatInfo_ != nullptr;};
      void deleteThreatInfo() { this->threatInfo_ = nullptr;};
      inline const vector<Data::ThreatInfo> & getThreatInfo() const { DARABONBA_PTR_GET_CONST(threatInfo_, vector<Data::ThreatInfo>) };
      inline vector<Data::ThreatInfo> getThreatInfo() { DARABONBA_PTR_GET(threatInfo_, vector<Data::ThreatInfo>) };
      inline Data& setThreatInfo(const vector<Data::ThreatInfo> & threatInfo) { DARABONBA_PTR_SET_VALUE(threatInfo_, threatInfo) };
      inline Data& setThreatInfo(vector<Data::ThreatInfo> && threatInfo) { DARABONBA_PTR_SET_RVALUE(threatInfo_, threatInfo) };


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
      // The total number of DoH requests, including the HTTP and HTTPS requests.
      shared_ptr<int64_t> dohTotalCount_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The number of HTTP requests.
      shared_ptr<int64_t> httpCount_ {};
      // The number of HTTPS requests. On the Traffic Analysis tab of the public DNS console, the value of this parameter includes the number of DNS over HTTPs (DoH) requests. Therefore, the number of DoH requests is not separately displayed in the console.
      shared_ptr<int64_t> httpsCount_ {};
      // The number of source IP addresses.
      shared_ptr<int64_t> ipCount_ {};
      // The current version does not support this parameter.
      shared_ptr<string> maxThreatLevel_ {};
      // The subdomain name.
      shared_ptr<string> subDomain_ {};
      // The current version does not support this parameter.
      shared_ptr<int64_t> threatCount_ {};
      // The current version does not support this parameter.
      shared_ptr<vector<Data::ThreatInfo>> threatInfo_ {};
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
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribePdnsRequestStatisticsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribePdnsRequestStatisticsResponseBody::Data>) };
    inline vector<DescribePdnsRequestStatisticsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribePdnsRequestStatisticsResponseBody::Data>) };
    inline DescribePdnsRequestStatisticsResponseBody& setData(const vector<DescribePdnsRequestStatisticsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsRequestStatisticsResponseBody& setData(vector<DescribePdnsRequestStatisticsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsRequestStatisticsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsRequestStatisticsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsRequestStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsRequestStatisticsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The statistics on the DNS requests.
    shared_ptr<vector<DescribePdnsRequestStatisticsResponseBody::Data>> data_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **20**. Valid values: **1 to 100**.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
