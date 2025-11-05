// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODYMETRICDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODYMETRICDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupMetricDataResponseBodyMetricDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupMetricDataResponseBodyMetricData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMetricDataResponseBodyMetricData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMetricDataResponseBodyMetricData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListResourceGroupMetricDataResponseBodyMetricData() = default ;
    ListResourceGroupMetricDataResponseBodyMetricData(const ListResourceGroupMetricDataResponseBodyMetricData &) = default ;
    ListResourceGroupMetricDataResponseBodyMetricData(ListResourceGroupMetricDataResponseBodyMetricData &&) = default ;
    ListResourceGroupMetricDataResponseBodyMetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMetricDataResponseBodyMetricData() = default ;
    ListResourceGroupMetricDataResponseBodyMetricData& operator=(const ListResourceGroupMetricDataResponseBodyMetricData &) = default ;
    ListResourceGroupMetricDataResponseBodyMetricData& operator=(ListResourceGroupMetricDataResponseBodyMetricData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->metricName_ == nullptr && return this->metrics_ == nullptr && return this->nextToken_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListResourceGroupMetricDataResponseBodyMetricData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ListResourceGroupMetricDataResponseBodyMetricData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics>) };
    inline vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics>) };
    inline ListResourceGroupMetricDataResponseBodyMetricData& setMetrics(const vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListResourceGroupMetricDataResponseBodyMetricData& setMetrics(vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceGroupMetricDataResponseBodyMetricData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceGroupMetricDataResponseBodyMetricDataMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
