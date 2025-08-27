// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainExceedApplyQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainExceedApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(apply_intention_info_d_o, applyIntentionInfoDO_);
      DARABONBA_PTR_TO_JSON(btrip_cause, btripCause_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_TO_JSON(exceed_type, exceedType_);
      DARABONBA_PTR_TO_JSON(origin_standard, originStandard_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(submit_time, submitTime_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, TrainExceedApplyQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(apply_intention_info_d_o, applyIntentionInfoDO_);
      DARABONBA_PTR_FROM_JSON(btrip_cause, btripCause_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
      DARABONBA_PTR_FROM_JSON(exceed_type, exceedType_);
      DARABONBA_PTR_FROM_JSON(origin_standard, originStandard_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(submit_time, submitTime_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    TrainExceedApplyQueryResponseBodyModule() = default ;
    TrainExceedApplyQueryResponseBodyModule(const TrainExceedApplyQueryResponseBodyModule &) = default ;
    TrainExceedApplyQueryResponseBodyModule(TrainExceedApplyQueryResponseBodyModule &&) = default ;
    TrainExceedApplyQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainExceedApplyQueryResponseBodyModule() = default ;
    TrainExceedApplyQueryResponseBodyModule& operator=(const TrainExceedApplyQueryResponseBodyModule &) = default ;
    TrainExceedApplyQueryResponseBodyModule& operator=(TrainExceedApplyQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->applyIntentionInfoDO_ != nullptr && this->btripCause_ != nullptr && this->corpId_ != nullptr && this->exceedReason_ != nullptr && this->exceedType_ != nullptr
        && this->originStandard_ != nullptr && this->status_ != nullptr && this->submitTime_ != nullptr && this->thirdpartApplyId_ != nullptr && this->thirdpartCorpId_ != nullptr
        && this->userId_ != nullptr && this->userName_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline int64_t applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
    inline TrainExceedApplyQueryResponseBodyModule& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // applyIntentionInfoDO Field Functions 
    bool hasApplyIntentionInfoDO() const { return this->applyIntentionInfoDO_ != nullptr;};
    void deleteApplyIntentionInfoDO() { this->applyIntentionInfoDO_ = nullptr;};
    inline const Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO & applyIntentionInfoDO() const { DARABONBA_PTR_GET_CONST(applyIntentionInfoDO_, Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO) };
    inline Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO applyIntentionInfoDO() { DARABONBA_PTR_GET(applyIntentionInfoDO_, Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO) };
    inline TrainExceedApplyQueryResponseBodyModule& setApplyIntentionInfoDO(const Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO & applyIntentionInfoDO) { DARABONBA_PTR_SET_VALUE(applyIntentionInfoDO_, applyIntentionInfoDO) };
    inline TrainExceedApplyQueryResponseBodyModule& setApplyIntentionInfoDO(Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO && applyIntentionInfoDO) { DARABONBA_PTR_SET_RVALUE(applyIntentionInfoDO_, applyIntentionInfoDO) };


    // btripCause Field Functions 
    bool hasBtripCause() const { return this->btripCause_ != nullptr;};
    void deleteBtripCause() { this->btripCause_ = nullptr;};
    inline string btripCause() const { DARABONBA_PTR_GET_DEFAULT(btripCause_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setBtripCause(string btripCause) { DARABONBA_PTR_SET_VALUE(btripCause_, btripCause) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // exceedReason Field Functions 
    bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
    void deleteExceedReason() { this->exceedReason_ = nullptr;};
    inline string exceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


    // exceedType Field Functions 
    bool hasExceedType() const { return this->exceedType_ != nullptr;};
    void deleteExceedType() { this->exceedType_ = nullptr;};
    inline int32_t exceedType() const { DARABONBA_PTR_GET_DEFAULT(exceedType_, 0) };
    inline TrainExceedApplyQueryResponseBodyModule& setExceedType(int32_t exceedType) { DARABONBA_PTR_SET_VALUE(exceedType_, exceedType) };


    // originStandard Field Functions 
    bool hasOriginStandard() const { return this->originStandard_ != nullptr;};
    void deleteOriginStandard() { this->originStandard_ = nullptr;};
    inline string originStandard() const { DARABONBA_PTR_GET_DEFAULT(originStandard_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setOriginStandard(string originStandard) { DARABONBA_PTR_SET_VALUE(originStandard_, originStandard) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TrainExceedApplyQueryResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string submitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string thirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartCorpId Field Functions 
    bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
    void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
    inline string thirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline TrainExceedApplyQueryResponseBodyModule& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> applyId_ = nullptr;
    std::shared_ptr<Models::TrainExceedApplyQueryResponseBodyModuleApplyIntentionInfoDO> applyIntentionInfoDO_ = nullptr;
    std::shared_ptr<string> btripCause_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> exceedReason_ = nullptr;
    std::shared_ptr<int32_t> exceedType_ = nullptr;
    std::shared_ptr<string> originStandard_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> submitTime_ = nullptr;
    std::shared_ptr<string> thirdpartApplyId_ = nullptr;
    std::shared_ptr<string> thirdpartCorpId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
