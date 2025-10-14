// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecordStatisticsResponseBodyStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
    };
    DescribeRecordStatisticsResponseBody() = default ;
    DescribeRecordStatisticsResponseBody(const DescribeRecordStatisticsResponseBody &) = default ;
    DescribeRecordStatisticsResponseBody(DescribeRecordStatisticsResponseBody &&) = default ;
    DescribeRecordStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsResponseBody() = default ;
    DescribeRecordStatisticsResponseBody& operator=(const DescribeRecordStatisticsResponseBody &) = default ;
    DescribeRecordStatisticsResponseBody& operator=(DescribeRecordStatisticsResponseBody &&) = default ;
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
    inline DescribeRecordStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const DescribeRecordStatisticsResponseBodyStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, DescribeRecordStatisticsResponseBodyStatistics) };
    inline DescribeRecordStatisticsResponseBodyStatistics statistics() { DARABONBA_PTR_GET(statistics_, DescribeRecordStatisticsResponseBodyStatistics) };
    inline DescribeRecordStatisticsResponseBody& setStatistics(const DescribeRecordStatisticsResponseBodyStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeRecordStatisticsResponseBody& setStatistics(DescribeRecordStatisticsResponseBodyStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics on the DNS requests.
    std::shared_ptr<DescribeRecordStatisticsResponseBodyStatistics> statistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
