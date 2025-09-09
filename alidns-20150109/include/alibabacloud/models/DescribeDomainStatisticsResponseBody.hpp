// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainStatisticsResponseBodyStatistics.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statistics_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const DescribeDomainStatisticsResponseBodyStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, DescribeDomainStatisticsResponseBodyStatistics) };
    inline DescribeDomainStatisticsResponseBodyStatistics statistics() { DARABONBA_PTR_GET(statistics_, DescribeDomainStatisticsResponseBodyStatistics) };
    inline DescribeDomainStatisticsResponseBody& setStatistics(const DescribeDomainStatisticsResponseBodyStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDomainStatisticsResponseBody& setStatistics(DescribeDomainStatisticsResponseBodyStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics on the Domain Name System (DNS) requests.
    std::shared_ptr<DescribeDomainStatisticsResponseBodyStatistics> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
