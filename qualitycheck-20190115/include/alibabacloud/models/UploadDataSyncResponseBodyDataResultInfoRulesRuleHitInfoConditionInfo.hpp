// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFOCONDITIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionBasicInfo, conditionBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionBasicInfo, conditionBasicInfo_);
    };
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& operator=(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& operator=(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionBasicInfo_ != nullptr; };
    // conditionBasicInfo Field Functions 
    bool hasConditionBasicInfo() const { return this->conditionBasicInfo_ != nullptr;};
    void deleteConditionBasicInfo() { this->conditionBasicInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> & conditionBasicInfo() const { DARABONBA_PTR_GET_CONST(conditionBasicInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>) };
    inline vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> conditionBasicInfo() { DARABONBA_PTR_GET(conditionBasicInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& setConditionBasicInfo(const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> & conditionBasicInfo) { DARABONBA_PTR_SET_VALUE(conditionBasicInfo_, conditionBasicInfo) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo& setConditionBasicInfo(vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo> && conditionBasicInfo) { DARABONBA_PTR_SET_RVALUE(conditionBasicInfo_, conditionBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfoConditionBasicInfo>> conditionBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
