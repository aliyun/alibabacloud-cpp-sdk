// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceMetricsResponseBodyPodMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class GetInstanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceMetricsResponseBody() = default ;
    GetInstanceMetricsResponseBody(const GetInstanceMetricsResponseBody &) = default ;
    GetInstanceMetricsResponseBody(GetInstanceMetricsResponseBody &&) = default ;
    GetInstanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMetricsResponseBody() = default ;
    GetInstanceMetricsResponseBody& operator=(const GetInstanceMetricsResponseBody &) = default ;
    GetInstanceMetricsResponseBody& operator=(GetInstanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->podMetrics_ == nullptr && return this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceMetricsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // podMetrics Field Functions 
    bool hasPodMetrics() const { return this->podMetrics_ != nullptr;};
    void deletePodMetrics() { this->podMetrics_ = nullptr;};
    inline const vector<GetInstanceMetricsResponseBodyPodMetrics> & podMetrics() const { DARABONBA_PTR_GET_CONST(podMetrics_, vector<GetInstanceMetricsResponseBodyPodMetrics>) };
    inline vector<GetInstanceMetricsResponseBodyPodMetrics> podMetrics() { DARABONBA_PTR_GET(podMetrics_, vector<GetInstanceMetricsResponseBodyPodMetrics>) };
    inline GetInstanceMetricsResponseBody& setPodMetrics(const vector<GetInstanceMetricsResponseBodyPodMetrics> & podMetrics) { DARABONBA_PTR_SET_VALUE(podMetrics_, podMetrics) };
    inline GetInstanceMetricsResponseBody& setPodMetrics(vector<GetInstanceMetricsResponseBodyPodMetrics> && podMetrics) { DARABONBA_PTR_SET_RVALUE(podMetrics_, podMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<GetInstanceMetricsResponseBodyPodMetrics>> podMetrics_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
