// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBRESPONSEBODYJOBSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobResponseBodyJobScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobResponseBodyJobScript& obj) { 
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackConfigEnabled, miniPlaybackConfigEnabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobResponseBodyJobScript& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackConfigEnabled, miniPlaybackConfigEnabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeJobResponseBodyJobScript() = default ;
    DescribeJobResponseBodyJobScript(const DescribeJobResponseBodyJobScript &) = default ;
    DescribeJobResponseBodyJobScript(DescribeJobResponseBodyJobScript &&) = default ;
    DescribeJobResponseBodyJobScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobResponseBodyJobScript() = default ;
    DescribeJobResponseBodyJobScript& operator=(const DescribeJobResponseBodyJobScript &) = default ;
    DescribeJobResponseBodyJobScript& operator=(DescribeJobResponseBodyJobScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrConfig_ == nullptr
        && return this->chatbotId_ == nullptr && return this->debugStatus_ == nullptr && return this->industry_ == nullptr && return this->isDebugDrafted_ == nullptr && return this->isDrafted_ == nullptr
        && return this->miniPlaybackConfigEnabled_ == nullptr && return this->name_ == nullptr && return this->scene_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr
        && return this->status_ == nullptr && return this->ttsConfig_ == nullptr && return this->updateTime_ == nullptr; };
    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline string asrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
    inline DescribeJobResponseBodyJobScript& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline DescribeJobResponseBodyJobScript& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline string debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
    inline DescribeJobResponseBodyJobScript& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline DescribeJobResponseBodyJobScript& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDebugDrafted Field Functions 
    bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
    void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
    inline bool isDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
    inline DescribeJobResponseBodyJobScript& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline DescribeJobResponseBodyJobScript& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // miniPlaybackConfigEnabled Field Functions 
    bool hasMiniPlaybackConfigEnabled() const { return this->miniPlaybackConfigEnabled_ != nullptr;};
    void deleteMiniPlaybackConfigEnabled() { this->miniPlaybackConfigEnabled_ = nullptr;};
    inline bool miniPlaybackConfigEnabled() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackConfigEnabled_, false) };
    inline DescribeJobResponseBodyJobScript& setMiniPlaybackConfigEnabled(bool miniPlaybackConfigEnabled) { DARABONBA_PTR_SET_VALUE(miniPlaybackConfigEnabled_, miniPlaybackConfigEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeJobResponseBodyJobScript& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeJobResponseBodyJobScript& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline DescribeJobResponseBodyJobScript& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeJobResponseBodyJobScript& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeJobResponseBodyJobScript& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline string ttsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
    inline DescribeJobResponseBodyJobScript& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeJobResponseBodyJobScript& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> asrConfig_ = nullptr;
    std::shared_ptr<string> chatbotId_ = nullptr;
    std::shared_ptr<string> debugStatus_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDebugDrafted_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
    std::shared_ptr<bool> miniPlaybackConfigEnabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> scriptDescription_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> ttsConfig_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
