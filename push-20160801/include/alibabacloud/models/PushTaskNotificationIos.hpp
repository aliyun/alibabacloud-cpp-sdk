// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONIOS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONIOS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTaskNotificationIosLiveActivity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationIos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationIos& obj) { 
      DARABONBA_PTR_TO_JSON(ApnsEnv, apnsEnv_);
      DARABONBA_PTR_TO_JSON(Badge, badge_);
      DARABONBA_PTR_TO_JSON(BadgeAutoIncrement, badgeAutoIncrement_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CollapseId, collapseId_);
      DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_TO_JSON(InterruptionLevel, interruptionLevel_);
      DARABONBA_PTR_TO_JSON(LiveActivity, liveActivity_);
      DARABONBA_PTR_TO_JSON(Music, music_);
      DARABONBA_PTR_TO_JSON(Mutable, mutable_);
      DARABONBA_PTR_TO_JSON(RelevanceScore, relevanceScore_);
      DARABONBA_PTR_TO_JSON(Silent, silent_);
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationIos& obj) { 
      DARABONBA_PTR_FROM_JSON(ApnsEnv, apnsEnv_);
      DARABONBA_PTR_FROM_JSON(Badge, badge_);
      DARABONBA_PTR_FROM_JSON(BadgeAutoIncrement, badgeAutoIncrement_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CollapseId, collapseId_);
      DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_FROM_JSON(InterruptionLevel, interruptionLevel_);
      DARABONBA_PTR_FROM_JSON(LiveActivity, liveActivity_);
      DARABONBA_PTR_FROM_JSON(Music, music_);
      DARABONBA_PTR_FROM_JSON(Mutable, mutable_);
      DARABONBA_PTR_FROM_JSON(RelevanceScore, relevanceScore_);
      DARABONBA_PTR_FROM_JSON(Silent, silent_);
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
    };
    PushTaskNotificationIos() = default ;
    PushTaskNotificationIos(const PushTaskNotificationIos &) = default ;
    PushTaskNotificationIos(PushTaskNotificationIos &&) = default ;
    PushTaskNotificationIos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationIos() = default ;
    PushTaskNotificationIos& operator=(const PushTaskNotificationIos &) = default ;
    PushTaskNotificationIos& operator=(PushTaskNotificationIos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apnsEnv_ != nullptr
        && this->badge_ != nullptr && this->badgeAutoIncrement_ != nullptr && this->category_ != nullptr && this->collapseId_ != nullptr && this->extParameters_ != nullptr
        && this->interruptionLevel_ != nullptr && this->liveActivity_ != nullptr && this->music_ != nullptr && this->mutable_ != nullptr && this->relevanceScore_ != nullptr
        && this->silent_ != nullptr && this->subtitle_ != nullptr && this->threadId_ != nullptr; };
    // apnsEnv Field Functions 
    bool hasApnsEnv() const { return this->apnsEnv_ != nullptr;};
    void deleteApnsEnv() { this->apnsEnv_ = nullptr;};
    inline string apnsEnv() const { DARABONBA_PTR_GET_DEFAULT(apnsEnv_, "") };
    inline PushTaskNotificationIos& setApnsEnv(string apnsEnv) { DARABONBA_PTR_SET_VALUE(apnsEnv_, apnsEnv) };


    // badge Field Functions 
    bool hasBadge() const { return this->badge_ != nullptr;};
    void deleteBadge() { this->badge_ = nullptr;};
    inline int32_t badge() const { DARABONBA_PTR_GET_DEFAULT(badge_, 0) };
    inline PushTaskNotificationIos& setBadge(int32_t badge) { DARABONBA_PTR_SET_VALUE(badge_, badge) };


    // badgeAutoIncrement Field Functions 
    bool hasBadgeAutoIncrement() const { return this->badgeAutoIncrement_ != nullptr;};
    void deleteBadgeAutoIncrement() { this->badgeAutoIncrement_ = nullptr;};
    inline bool badgeAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(badgeAutoIncrement_, false) };
    inline PushTaskNotificationIos& setBadgeAutoIncrement(bool badgeAutoIncrement) { DARABONBA_PTR_SET_VALUE(badgeAutoIncrement_, badgeAutoIncrement) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationIos& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // collapseId Field Functions 
    bool hasCollapseId() const { return this->collapseId_ != nullptr;};
    void deleteCollapseId() { this->collapseId_ = nullptr;};
    inline string collapseId() const { DARABONBA_PTR_GET_DEFAULT(collapseId_, "") };
    inline PushTaskNotificationIos& setCollapseId(string collapseId) { DARABONBA_PTR_SET_VALUE(collapseId_, collapseId) };


    // extParameters Field Functions 
    bool hasExtParameters() const { return this->extParameters_ != nullptr;};
    void deleteExtParameters() { this->extParameters_ = nullptr;};
    inline string extParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
    inline PushTaskNotificationIos& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


    // interruptionLevel Field Functions 
    bool hasInterruptionLevel() const { return this->interruptionLevel_ != nullptr;};
    void deleteInterruptionLevel() { this->interruptionLevel_ = nullptr;};
    inline string interruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(interruptionLevel_, "") };
    inline PushTaskNotificationIos& setInterruptionLevel(string interruptionLevel) { DARABONBA_PTR_SET_VALUE(interruptionLevel_, interruptionLevel) };


    // liveActivity Field Functions 
    bool hasLiveActivity() const { return this->liveActivity_ != nullptr;};
    void deleteLiveActivity() { this->liveActivity_ = nullptr;};
    inline const Models::PushTaskNotificationIosLiveActivity & liveActivity() const { DARABONBA_PTR_GET_CONST(liveActivity_, Models::PushTaskNotificationIosLiveActivity) };
    inline Models::PushTaskNotificationIosLiveActivity liveActivity() { DARABONBA_PTR_GET(liveActivity_, Models::PushTaskNotificationIosLiveActivity) };
    inline PushTaskNotificationIos& setLiveActivity(const Models::PushTaskNotificationIosLiveActivity & liveActivity) { DARABONBA_PTR_SET_VALUE(liveActivity_, liveActivity) };
    inline PushTaskNotificationIos& setLiveActivity(Models::PushTaskNotificationIosLiveActivity && liveActivity) { DARABONBA_PTR_SET_RVALUE(liveActivity_, liveActivity) };


    // music Field Functions 
    bool hasMusic() const { return this->music_ != nullptr;};
    void deleteMusic() { this->music_ = nullptr;};
    inline string music() const { DARABONBA_PTR_GET_DEFAULT(music_, "") };
    inline PushTaskNotificationIos& setMusic(string music) { DARABONBA_PTR_SET_VALUE(music_, music) };


    // mutable Field Functions 
    bool hasMutable() const { return this->mutable_ != nullptr;};
    void deleteMutable() { this->mutable_ = nullptr;};
    inline bool _mutable() const { DARABONBA_PTR_GET_DEFAULT(mutable_, false) };
    inline PushTaskNotificationIos& setMutable(bool _mutable) { DARABONBA_PTR_SET_VALUE(mutable_, _mutable) };


    // relevanceScore Field Functions 
    bool hasRelevanceScore() const { return this->relevanceScore_ != nullptr;};
    void deleteRelevanceScore() { this->relevanceScore_ = nullptr;};
    inline double relevanceScore() const { DARABONBA_PTR_GET_DEFAULT(relevanceScore_, 0.0) };
    inline PushTaskNotificationIos& setRelevanceScore(double relevanceScore) { DARABONBA_PTR_SET_VALUE(relevanceScore_, relevanceScore) };


    // silent Field Functions 
    bool hasSilent() const { return this->silent_ != nullptr;};
    void deleteSilent() { this->silent_ = nullptr;};
    inline bool silent() const { DARABONBA_PTR_GET_DEFAULT(silent_, false) };
    inline PushTaskNotificationIos& setSilent(bool silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline string subtitle() const { DARABONBA_PTR_GET_DEFAULT(subtitle_, "") };
    inline PushTaskNotificationIos& setSubtitle(string subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline PushTaskNotificationIos& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<string> apnsEnv_ = nullptr;
    std::shared_ptr<int32_t> badge_ = nullptr;
    std::shared_ptr<bool> badgeAutoIncrement_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> collapseId_ = nullptr;
    std::shared_ptr<string> extParameters_ = nullptr;
    std::shared_ptr<string> interruptionLevel_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationIosLiveActivity> liveActivity_ = nullptr;
    std::shared_ptr<string> music_ = nullptr;
    std::shared_ptr<bool> mutable_ = nullptr;
    std::shared_ptr<double> relevanceScore_ = nullptr;
    std::shared_ptr<bool> silent_ = nullptr;
    std::shared_ptr<string> subtitle_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
