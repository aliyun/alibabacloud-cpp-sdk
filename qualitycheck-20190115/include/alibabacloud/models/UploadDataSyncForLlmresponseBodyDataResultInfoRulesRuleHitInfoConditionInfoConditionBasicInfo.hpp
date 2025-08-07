// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFOCONDITIONBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFOCONDITIONBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionInfoCid, conditionInfoCid_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionInfoCid, conditionInfoCid_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionInfoCid_ != nullptr; };
    // conditionInfoCid Field Functions 
    bool hasConditionInfoCid() const { return this->conditionInfoCid_ != nullptr;};
    void deleteConditionInfoCid() { this->conditionInfoCid_ = nullptr;};
    inline string conditionInfoCid() const { DARABONBA_PTR_GET_DEFAULT(conditionInfoCid_, "") };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo& setConditionInfoCid(string conditionInfoCid) { DARABONBA_PTR_SET_VALUE(conditionInfoCid_, conditionInfoCid) };


  protected:
    std::shared_ptr<string> conditionInfoCid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
