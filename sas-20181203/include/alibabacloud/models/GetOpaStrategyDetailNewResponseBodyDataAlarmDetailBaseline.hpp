// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILBASELINE_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILBASELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline &&) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& operator=(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& operator=(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem>) };
    inline vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem> item() { DARABONBA_PTR_GET(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& setItem(const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& setItem(vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaseline& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The information about the baseline check item.
    std::shared_ptr<vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailBaselineItem>> item_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
