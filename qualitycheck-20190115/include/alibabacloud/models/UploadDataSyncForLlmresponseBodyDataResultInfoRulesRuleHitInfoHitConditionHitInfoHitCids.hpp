// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOHITCIDS_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODYDATARESULTINFORULESRULEHITINFOHITCONDITIONHITINFOHITCIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& obj) { 
      DARABONBA_PTR_TO_JSON(CidItem, cidItem_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& obj) { 
      DARABONBA_PTR_FROM_JSON(CidItem, cidItem_);
    };
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids &&) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids() = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& operator=(const UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids &) = default ;
    UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& operator=(UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidItem_ != nullptr; };
    // cidItem Field Functions 
    bool hasCidItem() const { return this->cidItem_ != nullptr;};
    void deleteCidItem() { this->cidItem_ = nullptr;};
    inline const vector<string> & cidItem() const { DARABONBA_PTR_GET_CONST(cidItem_, vector<string>) };
    inline vector<string> cidItem() { DARABONBA_PTR_GET(cidItem_, vector<string>) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& setCidItem(const vector<string> & cidItem) { DARABONBA_PTR_SET_VALUE(cidItem_, cidItem) };
    inline UploadDataSyncForLLMResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfoHitCids& setCidItem(vector<string> && cidItem) { DARABONBA_PTR_SET_RVALUE(cidItem_, cidItem) };


  protected:
    std::shared_ptr<vector<string>> cidItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
