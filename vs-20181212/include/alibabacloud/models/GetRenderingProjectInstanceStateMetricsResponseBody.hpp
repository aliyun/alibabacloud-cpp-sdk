// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingProjectInstanceStateMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingProjectInstanceStateMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateMetrics, stateMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingProjectInstanceStateMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateMetrics, stateMetrics_);
    };
    GetRenderingProjectInstanceStateMetricsResponseBody() = default ;
    GetRenderingProjectInstanceStateMetricsResponseBody(const GetRenderingProjectInstanceStateMetricsResponseBody &) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBody(GetRenderingProjectInstanceStateMetricsResponseBody &&) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingProjectInstanceStateMetricsResponseBody() = default ;
    GetRenderingProjectInstanceStateMetricsResponseBody& operator=(const GetRenderingProjectInstanceStateMetricsResponseBody &) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBody& operator=(GetRenderingProjectInstanceStateMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->stateMetrics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateMetrics Field Functions 
    bool hasStateMetrics() const { return this->stateMetrics_ != nullptr;};
    void deleteStateMetrics() { this->stateMetrics_ = nullptr;};
    inline const vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics> & stateMetrics() const { DARABONBA_PTR_GET_CONST(stateMetrics_, vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics>) };
    inline vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics> stateMetrics() { DARABONBA_PTR_GET(stateMetrics_, vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics>) };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setStateMetrics(const vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics> & stateMetrics) { DARABONBA_PTR_SET_VALUE(stateMetrics_, stateMetrics) };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setStateMetrics(vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics> && stateMetrics) { DARABONBA_PTR_SET_RVALUE(stateMetrics_, stateMetrics) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics>> stateMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
