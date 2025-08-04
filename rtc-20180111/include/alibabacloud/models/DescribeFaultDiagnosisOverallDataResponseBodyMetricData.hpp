// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYMETRICDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISOVERALLDATARESPONSEBODYMETRICDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisOverallDataResponseBodyMetricData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisOverallDataResponseBodyMetricData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisOverallDataResponseBodyMetricData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData(const DescribeFaultDiagnosisOverallDataResponseBodyMetricData &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData(DescribeFaultDiagnosisOverallDataResponseBodyMetricData &&) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricData() = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData& operator=(const DescribeFaultDiagnosisOverallDataResponseBodyMetricData &) = default ;
    DescribeFaultDiagnosisOverallDataResponseBodyMetricData& operator=(DescribeFaultDiagnosisOverallDataResponseBodyMetricData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>) };
    inline vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricData& setNodes(const vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeFaultDiagnosisOverallDataResponseBodyMetricData& setNodes(vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
