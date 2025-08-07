// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULES_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleHitInfo, ruleHitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleHitInfo, ruleHitInfo_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRules() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRules(const UploadDataSyncForLLMResponseBodyDataResultInfoRules &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRules(UploadDataSyncForLLMResponseBodyDataResultInfoRules &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRules() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRules& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRules &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRules& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleHitInfo_ != nullptr; };
    // ruleHitInfo Field Functions 
    bool hasRuleHitInfo() const { return this->ruleHitInfo_ != nullptr;};
    void deleteRuleHitInfo() { this->ruleHitInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo> & ruleHitInfo() const { DARABONBA_PTR_GET_CONST(ruleHitInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo>) };
    inline vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo> ruleHitInfo() { DARABONBA_PTR_GET(ruleHitInfo_, vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo>) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRules& setRuleHitInfo(const vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo> & ruleHitInfo) { DARABONBA_PTR_SET_VALUE(ruleHitInfo_, ruleHitInfo) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRules& setRuleHitInfo(vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo> && ruleHitInfo) { DARABONBA_PTR_SET_RVALUE(ruleHitInfo_, ruleHitInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfo>> ruleHitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
