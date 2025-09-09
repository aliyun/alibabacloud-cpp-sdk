// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSRESPONSEBODYSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohSubDomainStatisticsResponseBodyStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_TO_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_TO_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_TO_JSON(V6HttpsCount, v6HttpsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsResponseBodyStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(V4HttpCount, v4HttpCount_);
      DARABONBA_PTR_FROM_JSON(V4HttpsCount, v4HttpsCount_);
      DARABONBA_PTR_FROM_JSON(V6HttpCount, v6HttpCount_);
      DARABONBA_PTR_FROM_JSON(V6HttpsCount, v6HttpsCount_);
    };
    DescribeDohSubDomainStatisticsResponseBodyStatistics() = default ;
    DescribeDohSubDomainStatisticsResponseBodyStatistics(const DescribeDohSubDomainStatisticsResponseBodyStatistics &) = default ;
    DescribeDohSubDomainStatisticsResponseBodyStatistics(DescribeDohSubDomainStatisticsResponseBodyStatistics &&) = default ;
    DescribeDohSubDomainStatisticsResponseBodyStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsResponseBodyStatistics() = default ;
    DescribeDohSubDomainStatisticsResponseBodyStatistics& operator=(const DescribeDohSubDomainStatisticsResponseBodyStatistics &) = default ;
    DescribeDohSubDomainStatisticsResponseBodyStatistics& operator=(DescribeDohSubDomainStatisticsResponseBodyStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->timestamp_ != nullptr
        && this->totalCount_ != nullptr && this->v4HttpCount_ != nullptr && this->v4HttpsCount_ != nullptr && this->v6HttpCount_ != nullptr && this->v6HttpsCount_ != nullptr; };
    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // v4HttpCount Field Functions 
    bool hasV4HttpCount() const { return this->v4HttpCount_ != nullptr;};
    void deleteV4HttpCount() { this->v4HttpCount_ = nullptr;};
    inline int64_t v4HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpCount_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setV4HttpCount(int64_t v4HttpCount) { DARABONBA_PTR_SET_VALUE(v4HttpCount_, v4HttpCount) };


    // v4HttpsCount Field Functions 
    bool hasV4HttpsCount() const { return this->v4HttpsCount_ != nullptr;};
    void deleteV4HttpsCount() { this->v4HttpsCount_ = nullptr;};
    inline int64_t v4HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v4HttpsCount_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setV4HttpsCount(int64_t v4HttpsCount) { DARABONBA_PTR_SET_VALUE(v4HttpsCount_, v4HttpsCount) };


    // v6HttpCount Field Functions 
    bool hasV6HttpCount() const { return this->v6HttpCount_ != nullptr;};
    void deleteV6HttpCount() { this->v6HttpCount_ = nullptr;};
    inline int64_t v6HttpCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpCount_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setV6HttpCount(int64_t v6HttpCount) { DARABONBA_PTR_SET_VALUE(v6HttpCount_, v6HttpCount) };


    // v6HttpsCount Field Functions 
    bool hasV6HttpsCount() const { return this->v6HttpsCount_ != nullptr;};
    void deleteV6HttpsCount() { this->v6HttpsCount_ = nullptr;};
    inline int64_t v6HttpsCount() const { DARABONBA_PTR_GET_DEFAULT(v6HttpsCount_, 0L) };
    inline DescribeDohSubDomainStatisticsResponseBodyStatistics& setV6HttpsCount(int64_t v6HttpsCount) { DARABONBA_PTR_SET_VALUE(v6HttpsCount_, v6HttpsCount) };


  protected:
    // The timestamp.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The total number of requests.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The number of IPv4-based HTTP requests.
    std::shared_ptr<int64_t> v4HttpCount_ = nullptr;
    // The number of IPv4-based HTTPS requests.
    std::shared_ptr<int64_t> v4HttpsCount_ = nullptr;
    // The number of IPv6-based HTTP requests.
    std::shared_ptr<int64_t> v6HttpCount_ = nullptr;
    // The number of IPv6-based HTTPS requests.
    std::shared_ptr<int64_t> v6HttpsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
