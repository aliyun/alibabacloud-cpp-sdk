// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHACCOUNTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHACCOUNTSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeDohAccountStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohAccountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohAccountStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    DescribeDohAccountStatisticsResponseBody() = default ;
    DescribeDohAccountStatisticsResponseBody(const DescribeDohAccountStatisticsResponseBody &) = default ;
    DescribeDohAccountStatisticsResponseBody(DescribeDohAccountStatisticsResponseBody &&) = default ;
    DescribeDohAccountStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohAccountStatisticsResponseBody() = default ;
    DescribeDohAccountStatisticsResponseBody& operator=(const DescribeDohAccountStatisticsResponseBody &) = default ;
    DescribeDohAccountStatisticsResponseBody& operator=(DescribeDohAccountStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(V4HttpCount, v4HttpCount_);
        DARABONBA_PTR_TO_JSON(V4HttpsCount, v4HttpsCount_);
        DARABONBA_PTR_TO_JSON(V6HttpCount, v6HttpCount_);
        DARABONBA_PTR_TO_JSON(V6HttpsCount, v6HttpsCount_);
      };
      friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(V4HttpCount, v4HttpCount_);
        DARABONBA_PTR_FROM_JSON(V4HttpsCount, v4HttpsCount_);
        DARABONBA_PTR_FROM_JSON(V6HttpCount, v6HttpCount_);
        DARABONBA_PTR_FROM_JSON(V6HttpsCount, v6HttpsCount_);
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
      virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->totalCount_ == nullptr && this->v4HttpCount_ == nullptr && this->v4HttpsCount_ == nullptr && this->v6HttpCount_ == nullptr && this->v6HttpsCount_ == nullptr; };
      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Statistics& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Statistics& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // v4HttpCount Field Functions 
      bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
      void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
      inline int64_t getV4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
      inline Statistics& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


      // v4HttpsCount Field Functions 
      bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
      void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
      inline int64_t getV4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
      inline Statistics& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


      // v6HttpCount Field Functions 
      bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
      void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
      inline int64_t getV6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
      inline Statistics& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


      // v6HttpsCount Field Functions 
      bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
      void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
      inline int64_t getV6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
      inline Statistics& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


    protected:
      // The timestamp.
      shared_ptr<int64_t> timestamp_ {};
      // The total number of requests.
      shared_ptr<int64_t> totalCount_ {};
      // The number of IPv4-based HTTP requests.
      shared_ptr<int64_t> v4HttpCount_ {};
      // The number of IPv4-based HTTPS requests.
      shared_ptr<int64_t> v4HttpsCount_ {};
      // The number of IPv6-based HTTP requests.
      shared_ptr<int64_t> v6HttpCount_ {};
      // The number of IPv6-based HTTPS requests.
      shared_ptr<int64_t> v6HttpsCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDohAccountStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeDohAccountStatisticsResponseBody::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeDohAccountStatisticsResponseBody::Statistics>) };
    inline vector<DescribeDohAccountStatisticsResponseBody::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeDohAccountStatisticsResponseBody::Statistics>) };
    inline DescribeDohAccountStatisticsResponseBody& setStatistics(const vector<DescribeDohAccountStatisticsResponseBody::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDohAccountStatisticsResponseBody& setStatistics(vector<DescribeDohAccountStatisticsResponseBody::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The statistics list.
    shared_ptr<vector<DescribeDohAccountStatisticsResponseBody::Statistics>> statistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
