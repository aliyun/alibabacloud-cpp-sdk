// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFO_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCRESPONSEBODYDATARESULTINFORULESRULEHITINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo.hpp>
#include <alibabacloud/models/UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionInfo, conditionInfo_);
      DARABONBA_PTR_TO_JSON(Hit, hit_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionInfo, conditionInfo_);
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo &&) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo() = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& operator=(const UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo &) = default ;
    UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& operator=(UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionInfo_ != nullptr
        && this->hit_ != nullptr && this->rid_ != nullptr && this->tid_ != nullptr; };
    // conditionInfo Field Functions 
    bool hasConditionInfo() const { return this->conditionInfo_ != nullptr;};
    void deleteConditionInfo() { this->conditionInfo_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo & conditionInfo() const { DARABONBA_PTR_GET_CONST(conditionInfo_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo conditionInfo() { DARABONBA_PTR_GET(conditionInfo_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setConditionInfo(const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo & conditionInfo) { DARABONBA_PTR_SET_VALUE(conditionInfo_, conditionInfo) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setConditionInfo(Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo && conditionInfo) { DARABONBA_PTR_SET_RVALUE(conditionInfo_, conditionInfo) };


    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit & hit() const { DARABONBA_PTR_GET_CONST(hit_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit) };
    inline Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit hit() { DARABONBA_PTR_GET(hit_, Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setHit(const Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setHit(Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfo& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoConditionInfo> conditionInfo_ = nullptr;
    std::shared_ptr<Models::UploadDataSyncResponseBodyDataResultInfoRulesRuleHitInfoHit> hit_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<string> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
