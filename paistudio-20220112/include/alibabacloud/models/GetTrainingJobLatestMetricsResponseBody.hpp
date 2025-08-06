// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBLATESTMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBLATESTMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTrainingJobLatestMetricsResponseBodyMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobLatestMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobLatestMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobLatestMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTrainingJobLatestMetricsResponseBody() = default ;
    GetTrainingJobLatestMetricsResponseBody(const GetTrainingJobLatestMetricsResponseBody &) = default ;
    GetTrainingJobLatestMetricsResponseBody(GetTrainingJobLatestMetricsResponseBody &&) = default ;
    GetTrainingJobLatestMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobLatestMetricsResponseBody() = default ;
    GetTrainingJobLatestMetricsResponseBody& operator=(const GetTrainingJobLatestMetricsResponseBody &) = default ;
    GetTrainingJobLatestMetricsResponseBody& operator=(GetTrainingJobLatestMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metrics_ != nullptr
        && this->requestId_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<GetTrainingJobLatestMetricsResponseBodyMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<GetTrainingJobLatestMetricsResponseBodyMetrics>) };
    inline vector<GetTrainingJobLatestMetricsResponseBodyMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<GetTrainingJobLatestMetricsResponseBodyMetrics>) };
    inline GetTrainingJobLatestMetricsResponseBody& setMetrics(const vector<GetTrainingJobLatestMetricsResponseBodyMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetTrainingJobLatestMetricsResponseBody& setMetrics(vector<GetTrainingJobLatestMetricsResponseBodyMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrainingJobLatestMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetTrainingJobLatestMetricsResponseBodyMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
