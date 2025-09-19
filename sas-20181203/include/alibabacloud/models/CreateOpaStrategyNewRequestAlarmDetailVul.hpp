// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUESTALARMDETAILVUL_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWREQUESTALARMDETAILVUL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailVulItem.hpp>
#include <alibabacloud/models/CreateOpaStrategyNewRequestAlarmDetailVulRiskClass.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateOpaStrategyNewRequestAlarmDetailVul : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaStrategyNewRequestAlarmDetailVul& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaStrategyNewRequestAlarmDetailVul& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(RiskClass, riskClass_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    CreateOpaStrategyNewRequestAlarmDetailVul() = default ;
    CreateOpaStrategyNewRequestAlarmDetailVul(const CreateOpaStrategyNewRequestAlarmDetailVul &) = default ;
    CreateOpaStrategyNewRequestAlarmDetailVul(CreateOpaStrategyNewRequestAlarmDetailVul &&) = default ;
    CreateOpaStrategyNewRequestAlarmDetailVul(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaStrategyNewRequestAlarmDetailVul() = default ;
    CreateOpaStrategyNewRequestAlarmDetailVul& operator=(const CreateOpaStrategyNewRequestAlarmDetailVul &) = default ;
    CreateOpaStrategyNewRequestAlarmDetailVul& operator=(CreateOpaStrategyNewRequestAlarmDetailVul &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->riskClass_ != nullptr && this->riskLevel_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem>) };
    inline vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem> item() { DARABONBA_PTR_GET(item_, vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem>) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setItem(const vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setItem(vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // riskClass Field Functions 
    bool hasRiskClass() const { return this->riskClass_ != nullptr;};
    void deleteRiskClass() { this->riskClass_ = nullptr;};
    inline const vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass> & riskClass() const { DARABONBA_PTR_GET_CONST(riskClass_, vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass>) };
    inline vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass> riskClass() { DARABONBA_PTR_GET(riskClass_, vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass>) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setRiskClass(const vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass> & riskClass) { DARABONBA_PTR_SET_VALUE(riskClass_, riskClass) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setRiskClass(vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass> && riskClass) { DARABONBA_PTR_SET_RVALUE(riskClass_, riskClass) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline CreateOpaStrategyNewRequestAlarmDetailVul& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    // The vulnerabilities.
    std::shared_ptr<vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulItem>> item_ = nullptr;
    // Risk type of vulnerability.
    std::shared_ptr<vector<Models::CreateOpaStrategyNewRequestAlarmDetailVulRiskClass>> riskClass_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
