// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVUL_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVUL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailVulItem.hpp>
#include <alibabacloud/models/UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewRequestAlarmDetailVul : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewRequestAlarmDetailVul& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewRequestAlarmDetailVul& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    UpdateOpaStrategyNewRequestAlarmDetailVul() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVul(const UpdateOpaStrategyNewRequestAlarmDetailVul &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVul(UpdateOpaStrategyNewRequestAlarmDetailVul &&) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVul(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewRequestAlarmDetailVul() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVul& operator=(const UpdateOpaStrategyNewRequestAlarmDetailVul &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVul& operator=(UpdateOpaStrategyNewRequestAlarmDetailVul &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->item_ == nullptr
        && return this->riskClass_ == nullptr && return this->riskLevel_ == nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem>) };
    inline vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem> item() { DARABONBA_PTR_GET(item_, vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem>) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setItem(const vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setItem(vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskClass Field Functions 
    bool hasRiskClass() const { return this->riskClass_ != nullptr;};
    void deleteRiskClass() { this->riskClass_ = nullptr;};
    inline const vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass> & riskClass() const { DARABONBA_PTR_GET_CONST(riskClass_, vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass>) };
    inline vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass> riskClass() { DARABONBA_PTR_GET(riskClass_, vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass>) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setRiskClass(const vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass> & riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setRiskClass(vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass> && riskClass) { DARABONBA_PTR_SET_RVALUE(riskClass_, riskClass) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline UpdateOpaStrategyNewRequestAlarmDetailVul& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The vulnerabilities.
    std::shared_ptr<vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulItem>> item_ = nullptr;
    // Risk type of vulnerability.
    std::shared_ptr<vector<Models::UpdateOpaStrategyNewRequestAlarmDetailVulRiskClass>> riskClass_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
