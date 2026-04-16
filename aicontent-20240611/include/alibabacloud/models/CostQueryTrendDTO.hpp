// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTQUERYTRENDDTO_HPP_
#define ALIBABACLOUD_MODELS_COSTQUERYTRENDDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricDefRespDTO.hpp>
#include <alibabacloud/models/TrendPointDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CostQueryTrendDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostQueryTrendDTO& obj) { 
      DARABONBA_PTR_TO_JSON(defaultMetric, defaultMetric_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(points, points_);
    };
    friend void from_json(const Darabonba::Json& j, CostQueryTrendDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultMetric, defaultMetric_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(points, points_);
    };
    CostQueryTrendDTO() = default ;
    CostQueryTrendDTO(const CostQueryTrendDTO &) = default ;
    CostQueryTrendDTO(CostQueryTrendDTO &&) = default ;
    CostQueryTrendDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostQueryTrendDTO() = default ;
    CostQueryTrendDTO& operator=(const CostQueryTrendDTO &) = default ;
    CostQueryTrendDTO& operator=(CostQueryTrendDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultMetric_ == nullptr
        && this->granularity_ == nullptr && this->metrics_ == nullptr && this->points_ == nullptr; };
    // defaultMetric Field Functions 
    bool hasDefaultMetric() const { return this->defaultMetric_ != nullptr;};
    void deleteDefaultMetric() { this->defaultMetric_ = nullptr;};
    inline string getDefaultMetric() const { DARABONBA_PTR_GET_DEFAULT(defaultMetric_, "") };
    inline CostQueryTrendDTO& setDefaultMetric(string defaultMetric) { DARABONBA_PTR_SET_VALUE(defaultMetric_, defaultMetric) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline CostQueryTrendDTO& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<MetricDefRespDTO> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<MetricDefRespDTO>) };
    inline vector<MetricDefRespDTO> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<MetricDefRespDTO>) };
    inline CostQueryTrendDTO& setMetrics(const vector<MetricDefRespDTO> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline CostQueryTrendDTO& setMetrics(vector<MetricDefRespDTO> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<TrendPointDTO> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<TrendPointDTO>) };
    inline vector<TrendPointDTO> getPoints() { DARABONBA_PTR_GET(points_, vector<TrendPointDTO>) };
    inline CostQueryTrendDTO& setPoints(const vector<TrendPointDTO> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline CostQueryTrendDTO& setPoints(vector<TrendPointDTO> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


  protected:
    shared_ptr<string> defaultMetric_ {};
    shared_ptr<string> granularity_ {};
    shared_ptr<vector<MetricDefRespDTO>> metrics_ {};
    shared_ptr<vector<TrendPointDTO>> points_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
