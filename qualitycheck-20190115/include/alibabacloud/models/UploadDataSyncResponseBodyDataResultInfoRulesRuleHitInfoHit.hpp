// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHIT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOHIT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionHitInfo, conditionHitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionHitInfo, conditionHitInfo_);
    };
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& operator=(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& operator=(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionHitInfo_ == nullptr; };
    // conditionHitInfo Field Functions 
    bool hasConditionHitInfo() const { return this->conditionHitInfo_ != nullptr;};
    void deleteConditionHitInfo() { this->conditionHitInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> & conditionHitInfo() const { DARABONBA_PTR_GET_CONST(conditionHitInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>) };
    inline vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> conditionHitInfo() { DARABONBA_PTR_GET(conditionHitInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& setConditionHitInfo(const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> & conditionHitInfo) { DARABONBA_PTR_SET_VALUE(conditionHitInfo_, conditionHitInfo) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit& setConditionHitInfo(vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo> && conditionHitInfo) { DARABONBA_PTR_SET_RVALUE(conditionHitInfo_, conditionHitInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHitConditionHitInfo>> conditionHitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
