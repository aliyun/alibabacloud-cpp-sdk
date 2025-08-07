// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionBasicInfo, conditionBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionBasicInfo, conditionBasicInfo_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionBasicInfo_ != nullptr; };
    // conditionBasicInfo Field Functions 
    bool hasConditionBasicInfo() const { return this->conditionBasicInfo_ != nullptr;};
    void deleteConditionBasicInfo() { this->conditionBasicInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> & conditionBasicInfo() const { DARABONBA_PTR_GET_CONST(conditionBasicInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>) };
    inline vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> conditionBasicInfo() { DARABONBA_PTR_GET(conditionBasicInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& setConditionBasicInfo(const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> & conditionBasicInfo) { DARABONBA_PTR_SET_VALUE(conditionBasicInfo_, conditionBasicInfo) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& setConditionBasicInfo(vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> && conditionBasicInfo) { DARABONBA_PTR_SET_RVALUE(conditionBasicInfo_, conditionBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>> conditionBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
