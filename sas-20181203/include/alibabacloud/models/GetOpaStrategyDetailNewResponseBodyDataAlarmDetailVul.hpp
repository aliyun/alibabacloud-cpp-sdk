// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILVUL_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATAALARMDETAILVUL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem.hpp>
#include <alibabacloud/models/GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul &&) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul() = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& operator=(const GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& operator=(GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->riskClass_ == nullptr && return this->riskLevel_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem>) };
    inline vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem> item() { DARABONBA_PTR_GET(item_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setItem(const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setItem(vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskClass Field Functions 
    bool hasRiskClass() const { return this->riskClass_ != nullptr;};
    void deleteRiskClass() { this->riskClass_ = nullptr;};
    inline const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass> & riskClass() const { DARABONBA_PTR_GET_CONST(riskClass_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass>) };
    inline vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass> riskClass() { DARABONBA_PTR_GET(riskClass_, vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setRiskClass(const vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass> & riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setRiskClass(vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass> && riskClass) { DARABONBA_PTR_SET_RVALUE(riskClass_, riskClass) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVul& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The information about the vulnerability.
    std::shared_ptr<vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulItem>> item_ = nullptr;
    // Risk type of vulnerability.
    std::shared_ptr<vector<Models::GetOpaStrategyDetailNewResponseBodyDataAlarmDetailVulRiskClass>> riskClass_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
