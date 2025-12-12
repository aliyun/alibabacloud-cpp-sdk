// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULES_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(RuleHitInfo, ruleHitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleHitInfo, ruleHitInfo_);
    };
    UploadDataSyncResponseBodyDataResultInfoRules() = default ;
    UploadDataSyncResponseBodyDataResultInfoRules(const UploadDataSyncResponseBodyDataResultInfoRules &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRules(UploadDataSyncResponseBodyDataResultInfoRules &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRules() = default ;
    UploadDataSyncResponseBodyDataResultInfoRules& operator=(const UploadDataSyncResponseBodyDataResultInfoRules &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRules& operator=(UploadDataSyncResponseBodyDataResultInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleHitInfo_ == nullptr; };
    // ruleHitInfo Field Functions 
    bool hasRuleHitInfo() const { return this->ruleHitInfo_ != nullptr;};
    void deleteRuleHitInfo() { this->ruleHitInfo_ = nullptr;};
    inline const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo> & ruleHitInfo() const { DARABONBA_PTR_GET_CONST(ruleHitInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo>) };
    inline vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo> ruleHitInfo() { DARABONBA_PTR_GET(ruleHitInfo_, vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo>) };
    inline UploadDataSyncResponseBodyDataResultInfoRules& setRuleHitInfo(const vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo> & ruleHitInfo) { DARABONBA_PTR_SET_VALUE(ruleHitInfo_, ruleHitInfo) };
    inline UploadDataSyncResponseBodyDataResultInfoRules& setRuleHitInfo(vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo> && ruleHitInfo) { DARABONBA_PTR_SET_RVALUE(ruleHitInfo_, ruleHitInfo) };


  protected:
    std::shared_ptr<vector<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo>> ruleHitInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
