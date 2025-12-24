// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProcessStatisticsResponseBodyMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessStatisticsResponseBody() = default ;
    DescribeProcessStatisticsResponseBody(const DescribeProcessStatisticsResponseBody &) = default ;
    DescribeProcessStatisticsResponseBody(DescribeProcessStatisticsResponseBody &&) = default ;
    DescribeProcessStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessStatisticsResponseBody() = default ;
    DescribeProcessStatisticsResponseBody& operator=(const DescribeProcessStatisticsResponseBody &) = default ;
    DescribeProcessStatisticsResponseBody& operator=(DescribeProcessStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const DescribeProcessStatisticsResponseBodyMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, DescribeProcessStatisticsResponseBodyMetrics) };
    inline DescribeProcessStatisticsResponseBodyMetrics metrics() { DARABONBA_PTR_GET(metrics_, DescribeProcessStatisticsResponseBodyMetrics) };
    inline DescribeProcessStatisticsResponseBody& setMetrics(const DescribeProcessStatisticsResponseBodyMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeProcessStatisticsResponseBody& setMetrics(DescribeProcessStatisticsResponseBodyMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeProcessStatisticsResponseBodyMetrics> metrics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
