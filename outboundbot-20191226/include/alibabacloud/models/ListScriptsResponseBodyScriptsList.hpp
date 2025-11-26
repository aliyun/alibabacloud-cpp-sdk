// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSRESPONSEBODYSCRIPTSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListScriptsResponseBodyScriptsListNluProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptsResponseBodyScriptsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsResponseBodyScriptsList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(IsPreset, isPreset_);
      DARABONBA_PTR_TO_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_TO_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(NluProfile, nluProfile_);
      DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsResponseBodyScriptsList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(IsPreset, isPreset_);
      DARABONBA_PTR_FROM_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_FROM_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(NluProfile, nluProfile_);
      DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
    };
    ListScriptsResponseBodyScriptsList() = default ;
    ListScriptsResponseBodyScriptsList(const ListScriptsResponseBodyScriptsList &) = default ;
    ListScriptsResponseBodyScriptsList(ListScriptsResponseBodyScriptsList &&) = default ;
    ListScriptsResponseBodyScriptsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsResponseBodyScriptsList() = default ;
    ListScriptsResponseBodyScriptsList& operator=(const ListScriptsResponseBodyScriptsList &) = default ;
    ListScriptsResponseBodyScriptsList& operator=(ListScriptsResponseBodyScriptsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->agentLlm_ == nullptr && return this->createTime_ == nullptr && return this->debugStatus_ == nullptr && return this->emotionEnable_ == nullptr && return this->industry_ == nullptr
        && return this->isDebugDrafted_ == nullptr && return this->isDrafted_ == nullptr && return this->isPreset_ == nullptr && return this->longWaitEnable_ == nullptr && return this->miniPlaybackEnable_ == nullptr
        && return this->newBargeInEnable_ == nullptr && return this->nluAccessType_ == nullptr && return this->nluEngine_ == nullptr && return this->nluProfile_ == nullptr && return this->rejectReason_ == nullptr
        && return this->scene_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr && return this->agentId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListScriptsResponseBodyScriptsList& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentLlm Field Functions 
    bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
    void deleteAgentLlm() { this->agentLlm_ = nullptr;};
    inline bool agentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
    inline ListScriptsResponseBodyScriptsList& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListScriptsResponseBodyScriptsList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline string debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
    inline ListScriptsResponseBodyScriptsList& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // emotionEnable Field Functions 
    bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
    void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
    inline bool emotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
    inline ListScriptsResponseBodyScriptsList& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ListScriptsResponseBodyScriptsList& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDebugDrafted Field Functions 
    bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
    void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
    inline bool isDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
    inline ListScriptsResponseBodyScriptsList& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline ListScriptsResponseBodyScriptsList& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // isPreset Field Functions 
    bool hasIsPreset() const { return this->isPreset_ != nullptr;};
    void deleteIsPreset() { this->isPreset_ = nullptr;};
    inline bool isPreset() const { DARABONBA_PTR_GET_DEFAULT(isPreset_, false) };
    inline ListScriptsResponseBodyScriptsList& setIsPreset(bool isPreset) { DARABONBA_PTR_SET_VALUE(isPreset_, isPreset) };


    // longWaitEnable Field Functions 
    bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
    void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
    inline bool longWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
    inline ListScriptsResponseBodyScriptsList& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


    // miniPlaybackEnable Field Functions 
    bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
    void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
    inline bool miniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
    inline ListScriptsResponseBodyScriptsList& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


    // newBargeInEnable Field Functions 
    bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
    void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
    inline bool newBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
    inline ListScriptsResponseBodyScriptsList& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


    // nluAccessType Field Functions 
    bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
    void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
    inline string nluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
    inline ListScriptsResponseBodyScriptsList& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string nluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline ListScriptsResponseBodyScriptsList& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // nluProfile Field Functions 
    bool hasNluProfile() const { return this->nluProfile_ != nullptr;};
    void deleteNluProfile() { this->nluProfile_ = nullptr;};
    inline const Models::ListScriptsResponseBodyScriptsListNluProfile & nluProfile() const { DARABONBA_PTR_GET_CONST(nluProfile_, Models::ListScriptsResponseBodyScriptsListNluProfile) };
    inline Models::ListScriptsResponseBodyScriptsListNluProfile nluProfile() { DARABONBA_PTR_GET(nluProfile_, Models::ListScriptsResponseBodyScriptsListNluProfile) };
    inline ListScriptsResponseBodyScriptsList& setNluProfile(const Models::ListScriptsResponseBodyScriptsListNluProfile & nluProfile) { DARABONBA_PTR_SET_VALUE(nluProfile_, nluProfile) };
    inline ListScriptsResponseBodyScriptsList& setNluProfile(Models::ListScriptsResponseBodyScriptsListNluProfile && nluProfile) { DARABONBA_PTR_SET_RVALUE(nluProfile_, nluProfile) };


    // rejectReason Field Functions 
    bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
    void deleteRejectReason() { this->rejectReason_ = nullptr;};
    inline string rejectReason() const { DARABONBA_PTR_GET_DEFAULT(rejectReason_, "") };
    inline ListScriptsResponseBodyScriptsList& setRejectReason(string rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListScriptsResponseBodyScriptsList& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline ListScriptsResponseBodyScriptsList& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptsResponseBodyScriptsList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ListScriptsResponseBodyScriptsList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListScriptsResponseBodyScriptsList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListScriptsResponseBodyScriptsList& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline ListScriptsResponseBodyScriptsList& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<bool> agentLlm_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> debugStatus_ = nullptr;
    std::shared_ptr<bool> emotionEnable_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDebugDrafted_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
    std::shared_ptr<bool> isPreset_ = nullptr;
    std::shared_ptr<bool> longWaitEnable_ = nullptr;
    std::shared_ptr<bool> miniPlaybackEnable_ = nullptr;
    std::shared_ptr<bool> newBargeInEnable_ = nullptr;
    std::shared_ptr<string> nluAccessType_ = nullptr;
    std::shared_ptr<string> nluEngine_ = nullptr;
    std::shared_ptr<Models::ListScriptsResponseBodyScriptsListNluProfile> nluProfile_ = nullptr;
    std::shared_ptr<string> rejectReason_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> scriptDescription_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<int64_t> agentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
