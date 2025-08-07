// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHIT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHIT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionHitInfo, conditionHitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionHitInfo, conditionHitInfo_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionHitInfo_ != nullptr; };
    // conditionHitInfo Field Functions 
    bool hasConditionHitInfo() const { return this->conditionHitInfo_ != nullptr;};
    void deleteConditionHitInfo() { this->conditionHitInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> & conditionHitInfo() const { DARABONBA_PTR_GET_CONST(conditionHitInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>) };
    inline vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> conditionHitInfo() { DARABONBA_PTR_GET(conditionHitInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& setConditionHitInfo(const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> & conditionHitInfo) { DARABONBA_PTR_SET_VALUE(conditionHitInfo_, conditionHitInfo) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHit& setConditionHitInfo(vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> && conditionHitInfo) { DARABONBA_PTR_SET_RVALUE(conditionHitInfo_, conditionHitInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>> conditionHitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
