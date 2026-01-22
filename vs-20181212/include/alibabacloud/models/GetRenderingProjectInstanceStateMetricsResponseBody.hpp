// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class StateMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StateMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, StateMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      StateMetrics() = default ;
      StateMetrics(const StateMetrics &) = default ;
      StateMetrics(StateMetrics &&) = default ;
      StateMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StateMetrics() = default ;
      StateMetrics& operator=(const StateMetrics &) = default ;
      StateMetrics& operator=(StateMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->state_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline StateMetrics& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline StateMetrics& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> count_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stateMetrics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateMetrics Field Functions 
    bool hasStateMetrics() const { return this->stateMetrics_ != nullptr;};
    void deleteStateMetrics() { this->stateMetrics_ = nullptr;};
    inline const vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics> & getStateMetrics() const { DARABONBA_PTR_GET_CONST(stateMetrics_, vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics>) };
    inline vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics> getStateMetrics() { DARABONBA_PTR_GET(stateMetrics_, vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics>) };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setStateMetrics(const vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics> & stateMetrics) { DARABONBA_PTR_SET_VALUE(stateMetrics_, stateMetrics) };
    inline GetRenderingProjectInstanceStateMetricsResponseBody& setStateMetrics(vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics> && stateMetrics) { DARABONBA_PTR_SET_RVALUE(stateMetrics_, stateMetrics) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetRenderingProjectInstanceStateMetricsResponseBody::StateMetrics>> stateMetrics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
