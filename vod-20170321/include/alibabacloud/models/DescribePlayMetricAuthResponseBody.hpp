// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICAUTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICAUTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayMetricAuthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayMetricAuthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricList, metricList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayMetricAuthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricList, metricList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlayMetricAuthResponseBody() = default ;
    DescribePlayMetricAuthResponseBody(const DescribePlayMetricAuthResponseBody &) = default ;
    DescribePlayMetricAuthResponseBody(DescribePlayMetricAuthResponseBody &&) = default ;
    DescribePlayMetricAuthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayMetricAuthResponseBody() = default ;
    DescribePlayMetricAuthResponseBody& operator=(const DescribePlayMetricAuthResponseBody &) = default ;
    DescribePlayMetricAuthResponseBody& operator=(DescribePlayMetricAuthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricList_ != nullptr
        && this->requestId_ != nullptr; };
    // metricList Field Functions 
    bool hasMetricList() const { return this->metricList_ != nullptr;};
    void deleteMetricList() { this->metricList_ = nullptr;};
    inline const vector<string> & metricList() const { DARABONBA_PTR_GET_CONST(metricList_, vector<string>) };
    inline vector<string> metricList() { DARABONBA_PTR_GET(metricList_, vector<string>) };
    inline DescribePlayMetricAuthResponseBody& setMetricList(const vector<string> & metricList) { DARABONBA_PTR_SET_VALUE(metricList_, metricList) };
    inline DescribePlayMetricAuthResponseBody& setMetricList(vector<string> && metricList) { DARABONBA_PTR_SET_RVALUE(metricList_, metricList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayMetricAuthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<string>> metricList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
