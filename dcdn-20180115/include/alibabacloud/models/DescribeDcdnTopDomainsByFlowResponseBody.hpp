// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNTOPDOMAINSBYFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnTopDomainsByFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnTopDomainsByFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(DomainOnlineCount, domainOnlineCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopDomains, topDomains_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnTopDomainsByFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(DomainOnlineCount, domainOnlineCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopDomains, topDomains_);
    };
    DescribeDcdnTopDomainsByFlowResponseBody() = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(const DescribeDcdnTopDomainsByFlowResponseBody &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(DescribeDcdnTopDomainsByFlowResponseBody &&) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnTopDomainsByFlowResponseBody() = default ;
    DescribeDcdnTopDomainsByFlowResponseBody& operator=(const DescribeDcdnTopDomainsByFlowResponseBody &) = default ;
    DescribeDcdnTopDomainsByFlowResponseBody& operator=(DescribeDcdnTopDomainsByFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopDomains& obj) { 
        DARABONBA_PTR_TO_JSON(TopDomain, topDomain_);
      };
      friend void from_json(const Darabonba::Json& j, TopDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(TopDomain, topDomain_);
      };
      TopDomains() = default ;
      TopDomains(const TopDomains &) = default ;
      TopDomains(TopDomains &&) = default ;
      TopDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopDomains() = default ;
      TopDomains& operator=(const TopDomains &) = default ;
      TopDomains& operator=(TopDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TopDomain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopDomain& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_TO_JSON(MaxBpsTime, maxBpsTime_);
          DARABONBA_PTR_TO_JSON(Rank, rank_);
          DARABONBA_PTR_TO_JSON(TotalAccess, totalAccess_);
          DARABONBA_PTR_TO_JSON(TotalTraffic, totalTraffic_);
          DARABONBA_PTR_TO_JSON(TrafficPercent, trafficPercent_);
        };
        friend void from_json(const Darabonba::Json& j, TopDomain& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_FROM_JSON(MaxBpsTime, maxBpsTime_);
          DARABONBA_PTR_FROM_JSON(Rank, rank_);
          DARABONBA_PTR_FROM_JSON(TotalAccess, totalAccess_);
          DARABONBA_PTR_FROM_JSON(TotalTraffic, totalTraffic_);
          DARABONBA_PTR_FROM_JSON(TrafficPercent, trafficPercent_);
        };
        TopDomain() = default ;
        TopDomain(const TopDomain &) = default ;
        TopDomain(TopDomain &&) = default ;
        TopDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopDomain() = default ;
        TopDomain& operator=(const TopDomain &) = default ;
        TopDomain& operator=(TopDomain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->maxBps_ == nullptr && this->maxBpsTime_ == nullptr && this->rank_ == nullptr && this->totalAccess_ == nullptr && this->totalTraffic_ == nullptr
        && this->trafficPercent_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline TopDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // maxBps Field Functions 
        bool hasMaxBps() const { return this->maxBps_ != nullptr;};
        void deleteMaxBps() { this->maxBps_ = nullptr;};
        inline int64_t getMaxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, 0L) };
        inline TopDomain& setMaxBps(int64_t maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


        // maxBpsTime Field Functions 
        bool hasMaxBpsTime() const { return this->maxBpsTime_ != nullptr;};
        void deleteMaxBpsTime() { this->maxBpsTime_ = nullptr;};
        inline string getMaxBpsTime() const { DARABONBA_PTR_GET_DEFAULT(maxBpsTime_, "") };
        inline TopDomain& setMaxBpsTime(string maxBpsTime) { DARABONBA_PTR_SET_VALUE(maxBpsTime_, maxBpsTime) };


        // rank Field Functions 
        bool hasRank() const { return this->rank_ != nullptr;};
        void deleteRank() { this->rank_ = nullptr;};
        inline int64_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0L) };
        inline TopDomain& setRank(int64_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


        // totalAccess Field Functions 
        bool hasTotalAccess() const { return this->totalAccess_ != nullptr;};
        void deleteTotalAccess() { this->totalAccess_ = nullptr;};
        inline int64_t getTotalAccess() const { DARABONBA_PTR_GET_DEFAULT(totalAccess_, 0L) };
        inline TopDomain& setTotalAccess(int64_t totalAccess) { DARABONBA_PTR_SET_VALUE(totalAccess_, totalAccess) };


        // totalTraffic Field Functions 
        bool hasTotalTraffic() const { return this->totalTraffic_ != nullptr;};
        void deleteTotalTraffic() { this->totalTraffic_ = nullptr;};
        inline string getTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(totalTraffic_, "") };
        inline TopDomain& setTotalTraffic(string totalTraffic) { DARABONBA_PTR_SET_VALUE(totalTraffic_, totalTraffic) };


        // trafficPercent Field Functions 
        bool hasTrafficPercent() const { return this->trafficPercent_ != nullptr;};
        void deleteTrafficPercent() { this->trafficPercent_ = nullptr;};
        inline string getTrafficPercent() const { DARABONBA_PTR_GET_DEFAULT(trafficPercent_, "") };
        inline TopDomain& setTrafficPercent(string trafficPercent) { DARABONBA_PTR_SET_VALUE(trafficPercent_, trafficPercent) };


      protected:
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The peak bandwidth value.
        shared_ptr<int64_t> maxBps_ {};
        // The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> maxBpsTime_ {};
        // The ranking of the accelerated domain name.
        shared_ptr<int64_t> rank_ {};
        // The number of visits.
        shared_ptr<int64_t> totalAccess_ {};
        // The total amount of network traffic.
        shared_ptr<string> totalTraffic_ {};
        // The proportion of network traffic consumed to access the URL.
        shared_ptr<string> trafficPercent_ {};
      };

      virtual bool empty() const override { return this->topDomain_ == nullptr; };
      // topDomain Field Functions 
      bool hasTopDomain() const { return this->topDomain_ != nullptr;};
      void deleteTopDomain() { this->topDomain_ = nullptr;};
      inline const vector<TopDomains::TopDomain> & getTopDomain() const { DARABONBA_PTR_GET_CONST(topDomain_, vector<TopDomains::TopDomain>) };
      inline vector<TopDomains::TopDomain> getTopDomain() { DARABONBA_PTR_GET(topDomain_, vector<TopDomains::TopDomain>) };
      inline TopDomains& setTopDomain(const vector<TopDomains::TopDomain> & topDomain) { DARABONBA_PTR_SET_VALUE(topDomain_, topDomain) };
      inline TopDomains& setTopDomain(vector<TopDomains::TopDomain> && topDomain) { DARABONBA_PTR_SET_RVALUE(topDomain_, topDomain) };


    protected:
      shared_ptr<vector<TopDomains::TopDomain>> topDomain_ {};
    };

    virtual bool empty() const override { return this->domainCount_ == nullptr
        && this->domainOnlineCount_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->topDomains_ == nullptr; };
    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // domainOnlineCount Field Functions 
    bool hasDomainOnlineCount() const { return this->domainOnlineCount_ != nullptr;};
    void deleteDomainOnlineCount() { this->domainOnlineCount_ = nullptr;};
    inline int64_t getDomainOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(domainOnlineCount_, 0L) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setDomainOnlineCount(int64_t domainOnlineCount) { DARABONBA_PTR_SET_VALUE(domainOnlineCount_, domainOnlineCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topDomains Field Functions 
    bool hasTopDomains() const { return this->topDomains_ != nullptr;};
    void deleteTopDomains() { this->topDomains_ = nullptr;};
    inline const DescribeDcdnTopDomainsByFlowResponseBody::TopDomains & getTopDomains() const { DARABONBA_PTR_GET_CONST(topDomains_, DescribeDcdnTopDomainsByFlowResponseBody::TopDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBody::TopDomains getTopDomains() { DARABONBA_PTR_GET(topDomains_, DescribeDcdnTopDomainsByFlowResponseBody::TopDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setTopDomains(const DescribeDcdnTopDomainsByFlowResponseBody::TopDomains & topDomains) { DARABONBA_PTR_SET_VALUE(topDomains_, topDomains) };
    inline DescribeDcdnTopDomainsByFlowResponseBody& setTopDomains(DescribeDcdnTopDomainsByFlowResponseBody::TopDomains && topDomains) { DARABONBA_PTR_SET_RVALUE(topDomains_, topDomains) };


  protected:
    // The total number of accelerated domains under your account.
    shared_ptr<int64_t> domainCount_ {};
    // The total number of accelerated domains that are in the **Enabled** state under your account.
    shared_ptr<int64_t> domainOnlineCount_ {};
    // The end of the reporting period.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the reporting period.
    shared_ptr<string> startTime_ {};
    // The top N domain names ranked by network traffic.
    shared_ptr<DescribeDcdnTopDomainsByFlowResponseBody::TopDomains> topDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
