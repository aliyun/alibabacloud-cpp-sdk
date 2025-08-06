// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBINSTANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobInstanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMetrics, instanceMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMetrics, instanceMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTrainingJobInstanceMetricsResponseBody() = default ;
    ListTrainingJobInstanceMetricsResponseBody(const ListTrainingJobInstanceMetricsResponseBody &) = default ;
    ListTrainingJobInstanceMetricsResponseBody(ListTrainingJobInstanceMetricsResponseBody &&) = default ;
    ListTrainingJobInstanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobInstanceMetricsResponseBody() = default ;
    ListTrainingJobInstanceMetricsResponseBody& operator=(const ListTrainingJobInstanceMetricsResponseBody &) = default ;
    ListTrainingJobInstanceMetricsResponseBody& operator=(ListTrainingJobInstanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceMetrics_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceMetrics Field Functions 
    bool hasInstanceMetrics() const { return this->instanceMetrics_ != nullptr;};
    void deleteInstanceMetrics() { this->instanceMetrics_ = nullptr;};
    inline const vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics> & instanceMetrics() const { DARABONBA_PTR_GET_CONST(instanceMetrics_, vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics>) };
    inline vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics> instanceMetrics() { DARABONBA_PTR_GET(instanceMetrics_, vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics>) };
    inline ListTrainingJobInstanceMetricsResponseBody& setInstanceMetrics(const vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics> & instanceMetrics) { DARABONBA_PTR_SET_VALUE(instanceMetrics_, instanceMetrics) };
    inline ListTrainingJobInstanceMetricsResponseBody& setInstanceMetrics(vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics> && instanceMetrics) { DARABONBA_PTR_SET_RVALUE(instanceMetrics_, instanceMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobInstanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListTrainingJobInstanceMetricsResponseBodyInstanceMetrics>> instanceMetrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
