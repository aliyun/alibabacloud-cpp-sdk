// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeDomainStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    DescribeDomainStatisticsResponseBody() = default ;
    DescribeDomainStatisticsResponseBody(const DescribeDomainStatisticsResponseBody &) = default ;
    DescribeDomainStatisticsResponseBody(DescribeDomainStatisticsResponseBody &&) = default ;
    DescribeDomainStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainStatisticsResponseBody() = default ;
    DescribeDomainStatisticsResponseBody& operator=(const DescribeDomainStatisticsResponseBody &) = default ;
    DescribeDomainStatisticsResponseBody& operator=(DescribeDomainStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      };
      Statistics() = default ;
      Statistics(const Statistics &) = default ;
      Statistics(Statistics &&) = default ;
      Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistics() = default ;
      Statistics& operator=(const Statistics &) = default ;
      Statistics& operator=(Statistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        Statistic() = default ;
        Statistic(const Statistic &) = default ;
        Statistic(Statistic &&) = default ;
        Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistic() = default ;
        Statistic& operator=(const Statistic &) = default ;
        Statistic& operator=(Statistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->domainName_ == nullptr && this->timestamp_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline Statistic& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Statistic& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Statistic& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        // The number of DNS requests.
        shared_ptr<int64_t> count_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The statistical timestamp. Unit: milliseconds. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> timestamp_ {};
      };

      virtual bool empty() const override { return this->statistic_ == nullptr; };
      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline const vector<Statistics::Statistic> & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<Statistics::Statistic>) };
      inline vector<Statistics::Statistic> getStatistic() { DARABONBA_PTR_GET(statistic_, vector<Statistics::Statistic>) };
      inline Statistics& setStatistic(const vector<Statistics::Statistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
      inline Statistics& setStatistic(vector<Statistics::Statistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    protected:
      shared_ptr<vector<Statistics::Statistic>> statistic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const DescribeDomainStatisticsResponseBody::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, DescribeDomainStatisticsResponseBody::Statistics) };
    inline DescribeDomainStatisticsResponseBody::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, DescribeDomainStatisticsResponseBody::Statistics) };
    inline DescribeDomainStatisticsResponseBody& setStatistics(const DescribeDomainStatisticsResponseBody::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDomainStatisticsResponseBody& setStatistics(DescribeDomainStatisticsResponseBody::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The statistics on the Domain Name System (DNS) requests.
    shared_ptr<DescribeDomainStatisticsResponseBody::Statistics> statistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
