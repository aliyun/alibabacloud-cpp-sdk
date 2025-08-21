// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CapacityPlanRequestDataInfo.hpp>
#include <alibabacloud/models/CapacityPlanRequestMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(complexQueryAvailable, complexQueryAvailable_);
      DARABONBA_PTR_TO_JSON(dataInfo, dataInfo_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(usageScenario, usageScenario_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(complexQueryAvailable, complexQueryAvailable_);
      DARABONBA_PTR_FROM_JSON(dataInfo, dataInfo_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(usageScenario, usageScenario_);
    };
    CapacityPlanRequest() = default ;
    CapacityPlanRequest(const CapacityPlanRequest &) = default ;
    CapacityPlanRequest(CapacityPlanRequest &&) = default ;
    CapacityPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanRequest() = default ;
    CapacityPlanRequest& operator=(const CapacityPlanRequest &) = default ;
    CapacityPlanRequest& operator=(CapacityPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complexQueryAvailable_ != nullptr
        && this->dataInfo_ != nullptr && this->metric_ != nullptr && this->usageScenario_ != nullptr; };
    // complexQueryAvailable Field Functions 
    bool hasComplexQueryAvailable() const { return this->complexQueryAvailable_ != nullptr;};
    void deleteComplexQueryAvailable() { this->complexQueryAvailable_ = nullptr;};
    inline bool complexQueryAvailable() const { DARABONBA_PTR_GET_DEFAULT(complexQueryAvailable_, false) };
    inline CapacityPlanRequest& setComplexQueryAvailable(bool complexQueryAvailable) { DARABONBA_PTR_SET_VALUE(complexQueryAvailable_, complexQueryAvailable) };


    // dataInfo Field Functions 
    bool hasDataInfo() const { return this->dataInfo_ != nullptr;};
    void deleteDataInfo() { this->dataInfo_ = nullptr;};
    inline const vector<CapacityPlanRequestDataInfo> & dataInfo() const { DARABONBA_PTR_GET_CONST(dataInfo_, vector<CapacityPlanRequestDataInfo>) };
    inline vector<CapacityPlanRequestDataInfo> dataInfo() { DARABONBA_PTR_GET(dataInfo_, vector<CapacityPlanRequestDataInfo>) };
    inline CapacityPlanRequest& setDataInfo(const vector<CapacityPlanRequestDataInfo> & dataInfo) { DARABONBA_PTR_SET_VALUE(dataInfo_, dataInfo) };
    inline CapacityPlanRequest& setDataInfo(vector<CapacityPlanRequestDataInfo> && dataInfo) { DARABONBA_PTR_SET_RVALUE(dataInfo_, dataInfo) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline const vector<CapacityPlanRequestMetric> & metric() const { DARABONBA_PTR_GET_CONST(metric_, vector<CapacityPlanRequestMetric>) };
    inline vector<CapacityPlanRequestMetric> metric() { DARABONBA_PTR_GET(metric_, vector<CapacityPlanRequestMetric>) };
    inline CapacityPlanRequest& setMetric(const vector<CapacityPlanRequestMetric> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
    inline CapacityPlanRequest& setMetric(vector<CapacityPlanRequestMetric> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


    // usageScenario Field Functions 
    bool hasUsageScenario() const { return this->usageScenario_ != nullptr;};
    void deleteUsageScenario() { this->usageScenario_ = nullptr;};
    inline string usageScenario() const { DARABONBA_PTR_GET_DEFAULT(usageScenario_, "") };
    inline CapacityPlanRequest& setUsageScenario(string usageScenario) { DARABONBA_PTR_SET_VALUE(usageScenario_, usageScenario) };


  protected:
    // Indicates whether there is a need for complex aggregation queries. Options:
    // 
    // - true: Yes
    // - false (default): No
    std::shared_ptr<bool> complexQueryAvailable_ = nullptr;
    // Disk usage status.
    std::shared_ptr<vector<CapacityPlanRequestDataInfo>> dataInfo_ = nullptr;
    // Metrics information including disk usage, search and write operations, aggregation requests, etc.
    std::shared_ptr<vector<CapacityPlanRequestMetric>> metric_ = nullptr;
    // Usage scenarios, options:
    // 
    // - general: General scenario
    // - analysisVisualization: Data analysis scenario
    // - dbAcceleration: Database acceleration scenario
    // - search: Search scenario
    // - log: Log scenario
    std::shared_ptr<string> usageScenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
