// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDohSubDomainStatisticsResponseBodyStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohSubDomainStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    DescribeDohSubDomainStatisticsResponseBody() = default ;
    DescribeDohSubDomainStatisticsResponseBody(const DescribeDohSubDomainStatisticsResponseBody &) = default ;
    DescribeDohSubDomainStatisticsResponseBody(DescribeDohSubDomainStatisticsResponseBody &&) = default ;
    DescribeDohSubDomainStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsResponseBody() = default ;
    DescribeDohSubDomainStatisticsResponseBody& operator=(const DescribeDohSubDomainStatisticsResponseBody &) = default ;
    DescribeDohSubDomainStatisticsResponseBody& operator=(DescribeDohSubDomainStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->statistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDohSubDomainStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeDohSubDomainStatisticsResponseBodyStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeDohSubDomainStatisticsResponseBodyStatistics>) };
    inline vector<DescribeDohSubDomainStatisticsResponseBodyStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeDohSubDomainStatisticsResponseBodyStatistics>) };
    inline DescribeDohSubDomainStatisticsResponseBody& setStatistics(const vector<DescribeDohSubDomainStatisticsResponseBodyStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDohSubDomainStatisticsResponseBody& setStatistics(vector<DescribeDohSubDomainStatisticsResponseBodyStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics list.
    std::shared_ptr<vector<DescribeDohSubDomainStatisticsResponseBodyStatistics>> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
