// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODYSTATEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGPROJECTINSTANCESTATEMETRICSRESPONSEBODYSTATEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics() = default ;
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics(const GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics &) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics(GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics &&) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics() = default ;
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& operator=(const GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics &) = default ;
    GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& operator=(GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->state_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetRenderingProjectInstanceStateMetricsResponseBodyStateMetrics& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> count_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
