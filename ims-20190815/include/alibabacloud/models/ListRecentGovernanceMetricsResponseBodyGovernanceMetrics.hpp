// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODYGOVERNANCEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODYGOVERNANCEMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListRecentGovernanceMetricsResponseBodyGovernanceMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceMetric, governanceMetric_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceMetric, governanceMetric_);
    };
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics() = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics(const ListRecentGovernanceMetricsResponseBodyGovernanceMetrics &) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics(ListRecentGovernanceMetricsResponseBodyGovernanceMetrics &&) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentGovernanceMetricsResponseBodyGovernanceMetrics() = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& operator=(const ListRecentGovernanceMetricsResponseBodyGovernanceMetrics &) = default ;
    ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& operator=(ListRecentGovernanceMetricsResponseBodyGovernanceMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->governanceMetric_ != nullptr; };
    // governanceMetric Field Functions 
    bool hasGovernanceMetric() const { return this->governanceMetric_ != nullptr;};
    void deleteGovernanceMetric() { this->governanceMetric_ = nullptr;};
    inline const vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric> & governanceMetric() const { DARABONBA_PTR_GET_CONST(governanceMetric_, vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric>) };
    inline vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric> governanceMetric() { DARABONBA_PTR_GET(governanceMetric_, vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric>) };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& setGovernanceMetric(const vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric> & governanceMetric) { DARABONBA_PTR_SET_VALUE(governanceMetric_, governanceMetric) };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetrics& setGovernanceMetric(vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric> && governanceMetric) { DARABONBA_PTR_SET_RVALUE(governanceMetric_, governanceMetric) };


  protected:
    std::shared_ptr<vector<Models::ListRecentGovernanceMetricsResponseBodyGovernanceMetricsGovernanceMetric>> governanceMetric_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
