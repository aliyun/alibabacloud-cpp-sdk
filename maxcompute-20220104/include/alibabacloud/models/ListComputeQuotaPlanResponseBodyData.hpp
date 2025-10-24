// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEQUOTAPLANRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComputeQuotaPlanResponseBodyDataPlanList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeQuotaPlanResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeQuotaPlanResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(planList, planList_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeQuotaPlanResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(planList, planList_);
    };
    ListComputeQuotaPlanResponseBodyData() = default ;
    ListComputeQuotaPlanResponseBodyData(const ListComputeQuotaPlanResponseBodyData &) = default ;
    ListComputeQuotaPlanResponseBodyData(ListComputeQuotaPlanResponseBodyData &&) = default ;
    ListComputeQuotaPlanResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeQuotaPlanResponseBodyData() = default ;
    ListComputeQuotaPlanResponseBodyData& operator=(const ListComputeQuotaPlanResponseBodyData &) = default ;
    ListComputeQuotaPlanResponseBodyData& operator=(ListComputeQuotaPlanResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->planList_ == nullptr; };
    // planList Field Functions 
    bool hasPlanList() const { return this->planList_ != nullptr;};
    void deletePlanList() { this->planList_ = nullptr;};
    inline const vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList> & planList() const { DARABONBA_PTR_GET_CONST(planList_, vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList>) };
    inline vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList> planList() { DARABONBA_PTR_GET(planList_, vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList>) };
    inline ListComputeQuotaPlanResponseBodyData& setPlanList(const vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList> & planList) { DARABONBA_PTR_SET_VALUE(planList_, planList) };
    inline ListComputeQuotaPlanResponseBodyData& setPlanList(vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList> && planList) { DARABONBA_PTR_SET_RVALUE(planList_, planList) };


  protected:
    // The list of quota plan.
    std::shared_ptr<vector<Models::ListComputeQuotaPlanResponseBodyDataPlanList>> planList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
