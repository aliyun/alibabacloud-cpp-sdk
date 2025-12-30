// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICSRESPONSEBODY_HPP_
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
  class DescribePdnsThreatStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePdnsThreatStatisticsResponseBody() = default ;
    DescribePdnsThreatStatisticsResponseBody(const DescribePdnsThreatStatisticsResponseBody &) = default ;
    DescribePdnsThreatStatisticsResponseBody(DescribePdnsThreatStatisticsResponseBody &&) = default ;
    DescribePdnsThreatStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatStatisticsResponseBody() = default ;
    DescribePdnsThreatStatisticsResponseBody& operator=(const DescribePdnsThreatStatisticsResponseBody &) = default ;
    DescribePdnsThreatStatisticsResponseBody& operator=(DescribePdnsThreatStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        && this->domainCount_ == nullptr && this->domainName_ == nullptr && this->latestThreatTime_ == nullptr && this->maxThreatLevel_ == nullptr && this->sourceIp_ == nullptr
        && this->subDomain_ == nullptr && this->threatLevel_ == nullptr && this->threatType_ == nullptr && this->totalCount_ == nullptr && this->udpTotalCount_ == nullptr; };
      // dohTotalCount Field Functions 
      bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
      void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
      inline int64_t getDohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
      inline Data& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


      // domainCount Field Functions 
      bool hasDomainCount() const { return this->domainCount_ != nullptr;};
      void deleteDomainCount() { this->domainCount_ = nullptr;};
      inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
      inline Data& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // latestThreatTime Field Functions 
      bool hasLatestThreatTime() const { return this->latestThreatTime_ != nullptr;};
      void deleteLatestThreatTime() { this->latestThreatTime_ = nullptr;};
      inline int64_t getLatestThreatTime() const { DARABONBA_PTR_GET_DEFAULT(latestThreatTime_, 0L) };
      inline Data& setLatestThreatTime(int64_t latestThreatTime) { DARABONBA_PTR_SET_VALUE(latestThreatTime_, latestThreatTime) };


      // maxThreatLevel Field Functions 
      bool hasMaxThreatLevel() const { return this->maxThreatLevel_ != nullptr;};
      void deleteMaxThreatLevel() { this->maxThreatLevel_ = nullptr;};
      inline string getMaxThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(maxThreatLevel_, "") };
      inline Data& setMaxThreatLevel(string maxThreatLevel) { DARABONBA_PTR_SET_VALUE(maxThreatLevel_, maxThreatLevel) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline Data& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline Data& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Data& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatType Field Functions 
      bool hasThreatType() const { return this->threatType_ != nullptr;};
      void deleteThreatType() { this->threatType_ = nullptr;};
      inline string getThreatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
      inline Data& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


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


    protected:
      shared_ptr<int64_t> dohTotalCount_ {};
      shared_ptr<int64_t> domainCount_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<int64_t> latestThreatTime_ {};
      shared_ptr<string> maxThreatLevel_ {};
      shared_ptr<string> sourceIp_ {};
      shared_ptr<string> subDomain_ {};
      shared_ptr<string> threatLevel_ {};
      shared_ptr<string> threatType_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> udpTotalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribePdnsThreatStatisticsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribePdnsThreatStatisticsResponseBody::Data>) };
    inline vector<DescribePdnsThreatStatisticsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribePdnsThreatStatisticsResponseBody::Data>) };
    inline DescribePdnsThreatStatisticsResponseBody& setData(const vector<DescribePdnsThreatStatisticsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsThreatStatisticsResponseBody& setData(vector<DescribePdnsThreatStatisticsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsThreatStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsThreatStatisticsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePdnsThreatStatisticsResponseBody::Data>> data_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
