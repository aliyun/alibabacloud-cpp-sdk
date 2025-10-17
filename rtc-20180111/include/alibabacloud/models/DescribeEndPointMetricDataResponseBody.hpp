// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndPointMetricDataResponseBodyPubMetrics.hpp>
#include <alibabacloud/models/DescribeEndPointMetricDataResponseBodySubMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PubMetrics, pubMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubMetrics, subMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PubMetrics, pubMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubMetrics, subMetrics_);
    };
    DescribeEndPointMetricDataResponseBody() = default ;
    DescribeEndPointMetricDataResponseBody(const DescribeEndPointMetricDataResponseBody &) = default ;
    DescribeEndPointMetricDataResponseBody(DescribeEndPointMetricDataResponseBody &&) = default ;
    DescribeEndPointMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointMetricDataResponseBody() = default ;
    DescribeEndPointMetricDataResponseBody& operator=(const DescribeEndPointMetricDataResponseBody &) = default ;
    DescribeEndPointMetricDataResponseBody& operator=(DescribeEndPointMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pubMetrics_ == nullptr
        && return this->requestId_ == nullptr && return this->subMetrics_ == nullptr; };
    // pubMetrics Field Functions 
    bool hasPubMetrics() const { return this->pubMetrics_ != nullptr;};
    void deletePubMetrics() { this->pubMetrics_ = nullptr;};
    inline const vector<DescribeEndPointMetricDataResponseBodyPubMetrics> & pubMetrics() const { DARABONBA_PTR_GET_CONST(pubMetrics_, vector<DescribeEndPointMetricDataResponseBodyPubMetrics>) };
    inline vector<DescribeEndPointMetricDataResponseBodyPubMetrics> pubMetrics() { DARABONBA_PTR_GET(pubMetrics_, vector<DescribeEndPointMetricDataResponseBodyPubMetrics>) };
    inline DescribeEndPointMetricDataResponseBody& setPubMetrics(const vector<DescribeEndPointMetricDataResponseBodyPubMetrics> & pubMetrics) { DARABONBA_PTR_SET_VALUE(pubMetrics_, pubMetrics) };
    inline DescribeEndPointMetricDataResponseBody& setPubMetrics(vector<DescribeEndPointMetricDataResponseBodyPubMetrics> && pubMetrics) { DARABONBA_PTR_SET_RVALUE(pubMetrics_, pubMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEndPointMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subMetrics Field Functions 
    bool hasSubMetrics() const { return this->subMetrics_ != nullptr;};
    void deleteSubMetrics() { this->subMetrics_ = nullptr;};
    inline const vector<DescribeEndPointMetricDataResponseBodySubMetrics> & subMetrics() const { DARABONBA_PTR_GET_CONST(subMetrics_, vector<DescribeEndPointMetricDataResponseBodySubMetrics>) };
    inline vector<DescribeEndPointMetricDataResponseBodySubMetrics> subMetrics() { DARABONBA_PTR_GET(subMetrics_, vector<DescribeEndPointMetricDataResponseBodySubMetrics>) };
    inline DescribeEndPointMetricDataResponseBody& setSubMetrics(const vector<DescribeEndPointMetricDataResponseBodySubMetrics> & subMetrics) { DARABONBA_PTR_SET_VALUE(subMetrics_, subMetrics) };
    inline DescribeEndPointMetricDataResponseBody& setSubMetrics(vector<DescribeEndPointMetricDataResponseBodySubMetrics> && subMetrics) { DARABONBA_PTR_SET_RVALUE(subMetrics_, subMetrics) };


  protected:
    std::shared_ptr<vector<DescribeEndPointMetricDataResponseBodyPubMetrics>> pubMetrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeEndPointMetricDataResponseBodySubMetrics>> subMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
