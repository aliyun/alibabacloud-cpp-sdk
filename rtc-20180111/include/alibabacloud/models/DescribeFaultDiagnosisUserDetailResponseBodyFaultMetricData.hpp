// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFAULTMETRICDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISUSERDETAILRESPONSEBODYFAULTMETRICDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData(const DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData(DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData &&) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& operator=(const DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData &) = default ;
    DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& operator=(DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>) };
    inline vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& setNodes(const vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData& setNodes(vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    std::shared_ptr<vector<Models::DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
