// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTORAGEMETRICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTORAGEMETRICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryStorageMetricResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryStorageMetricResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStorageMetricResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStorageMetricResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    QueryStorageMetricResponseBodyData() = default ;
    QueryStorageMetricResponseBodyData(const QueryStorageMetricResponseBodyData &) = default ;
    QueryStorageMetricResponseBodyData(QueryStorageMetricResponseBodyData &&) = default ;
    QueryStorageMetricResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStorageMetricResponseBodyData() = default ;
    QueryStorageMetricResponseBodyData& operator=(const QueryStorageMetricResponseBodyData &) = default ;
    QueryStorageMetricResponseBodyData& operator=(QueryStorageMetricResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->metrics_ == nullptr && return this->name_ == nullptr && return this->period_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline QueryStorageMetricResponseBodyData& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::QueryStorageMetricResponseBodyDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::QueryStorageMetricResponseBodyDataMetrics>) };
    inline vector<Models::QueryStorageMetricResponseBodyDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::QueryStorageMetricResponseBodyDataMetrics>) };
    inline QueryStorageMetricResponseBodyData& setMetrics(const vector<Models::QueryStorageMetricResponseBodyDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline QueryStorageMetricResponseBodyData& setMetrics(vector<Models::QueryStorageMetricResponseBodyDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryStorageMetricResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline QueryStorageMetricResponseBodyData& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<Models::QueryStorageMetricResponseBodyDataMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
