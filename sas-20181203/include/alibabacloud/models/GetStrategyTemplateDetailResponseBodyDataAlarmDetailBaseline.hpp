// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILBASELINE_HPP_
#define ALIBABACLOUD_MODELS_GETSTRATEGYTEMPLATEDETAILRESPONSEBODYDATAALARMDETAILBASELINE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline(GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline &&) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline() = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& operator=(const GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline &) = default ;
    GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& operator=(GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->riskLevel_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem>) };
    inline vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem> item() { DARABONBA_PTR_GET(item_, vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem>) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& setItem(const vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& setItem(vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaseline& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The baseline items.
    std::shared_ptr<vector<Models::GetStrategyTemplateDetailResponseBodyDataAlarmDetailBaselineItem>> item_ = nullptr;
    // The severities of the baselines. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
