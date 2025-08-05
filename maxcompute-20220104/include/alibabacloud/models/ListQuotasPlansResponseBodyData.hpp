// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotasPlansResponseBodyDataPlanList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasPlansResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasPlansResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(planList, planList_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasPlansResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(planList, planList_);
    };
    ListQuotasPlansResponseBodyData() = default ;
    ListQuotasPlansResponseBodyData(const ListQuotasPlansResponseBodyData &) = default ;
    ListQuotasPlansResponseBodyData(ListQuotasPlansResponseBodyData &&) = default ;
    ListQuotasPlansResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasPlansResponseBodyData() = default ;
    ListQuotasPlansResponseBodyData& operator=(const ListQuotasPlansResponseBodyData &) = default ;
    ListQuotasPlansResponseBodyData& operator=(ListQuotasPlansResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->planList_ != nullptr; };
    // planList Field Functions 
    bool hasPlanList() const { return this->planList_ != nullptr;};
    void deletePlanList() { this->planList_ = nullptr;};
    inline const vector<Models::ListQuotasPlansResponseBodyDataPlanList> & planList() const { DARABONBA_PTR_GET_CONST(planList_, vector<Models::ListQuotasPlansResponseBodyDataPlanList>) };
    inline vector<Models::ListQuotasPlansResponseBodyDataPlanList> planList() { DARABONBA_PTR_GET(planList_, vector<Models::ListQuotasPlansResponseBodyDataPlanList>) };
    inline ListQuotasPlansResponseBodyData& setPlanList(const vector<Models::ListQuotasPlansResponseBodyDataPlanList> & planList) { DARABONBA_PTR_SET_VALUE(planList_, planList) };
    inline ListQuotasPlansResponseBodyData& setPlanList(vector<Models::ListQuotasPlansResponseBodyDataPlanList> && planList) { DARABONBA_PTR_SET_RVALUE(planList_, planList) };


  protected:
    // The list of quota plans.
    std::shared_ptr<vector<Models::ListQuotasPlansResponseBodyDataPlanList>> planList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
