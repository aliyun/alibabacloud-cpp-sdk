// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLISTPHRASE_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLISTCONDITIONHITINFOLISTPHRASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(EmotionFineGrainedValue, emotionFineGrainedValue_);
      DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_TO_JSON(HourMinSec, hourMinSec_);
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RenterId, renterId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Words, words_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(EmotionFineGrainedValue, emotionFineGrainedValue_);
      DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
      DARABONBA_PTR_FROM_JSON(HourMinSec, hourMinSec_);
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RenterId, renterId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Words, words_);
    };
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase &&) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& operator=(const TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& operator=(TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->beginTime_ != nullptr && this->channelId_ != nullptr && this->emotionFineGrainedValue_ != nullptr && this->emotionValue_ != nullptr && this->end_ != nullptr
        && this->hitStatus_ != nullptr && this->hourMinSec_ != nullptr && this->identity_ != nullptr && this->pid_ != nullptr && this->renterId_ != nullptr
        && this->role_ != nullptr && this->sid_ != nullptr && this->silenceDuration_ != nullptr && this->speechRate_ != nullptr && this->uuid_ != nullptr
        && this->words_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int64_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int32_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setChannelId(int32_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // emotionFineGrainedValue Field Functions 
    bool hasEmotionFineGrainedValue() const { return this->emotionFineGrainedValue_ != nullptr;};
    void deleteEmotionFineGrainedValue() { this->emotionFineGrainedValue_ = nullptr;};
    inline int32_t emotionFineGrainedValue() const { DARABONBA_PTR_GET_DEFAULT(emotionFineGrainedValue_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setEmotionFineGrainedValue(int32_t emotionFineGrainedValue) { DARABONBA_PTR_SET_VALUE(emotionFineGrainedValue_, emotionFineGrainedValue) };


    // emotionValue Field Functions 
    bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
    void deleteEmotionValue() { this->emotionValue_ = nullptr;};
    inline int32_t emotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // hitStatus Field Functions 
    bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
    void deleteHitStatus() { this->hitStatus_ = nullptr;};
    inline int32_t hitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setHitStatus(int32_t hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


    // hourMinSec Field Functions 
    bool hasHourMinSec() const { return this->hourMinSec_ != nullptr;};
    void deleteHourMinSec() { this->hourMinSec_ = nullptr;};
    inline string hourMinSec() const { DARABONBA_PTR_GET_DEFAULT(hourMinSec_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setHourMinSec(string hourMinSec) { DARABONBA_PTR_SET_VALUE(hourMinSec_, hourMinSec) };


    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string identity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // renterId Field Functions 
    bool hasRenterId() const { return this->renterId_ != nullptr;};
    void deleteRenterId() { this->renterId_ = nullptr;};
    inline int64_t renterId() const { DARABONBA_PTR_GET_DEFAULT(renterId_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setRenterId(int64_t renterId) { DARABONBA_PTR_SET_VALUE(renterId_, renterId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline int64_t sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setSid(int64_t sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // silenceDuration Field Functions 
    bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
    void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
    inline int32_t silenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // words Field Functions 
    bool hasWords() const { return this->words_ != nullptr;};
    void deleteWords() { this->words_ = nullptr;};
    inline string words() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoListPhrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


  protected:
    std::shared_ptr<int64_t> begin_ = nullptr;
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<int32_t> channelId_ = nullptr;
    std::shared_ptr<int32_t> emotionFineGrainedValue_ = nullptr;
    std::shared_ptr<int32_t> emotionValue_ = nullptr;
    std::shared_ptr<int64_t> end_ = nullptr;
    std::shared_ptr<int32_t> hitStatus_ = nullptr;
    std::shared_ptr<string> hourMinSec_ = nullptr;
    std::shared_ptr<string> identity_ = nullptr;
    std::shared_ptr<int32_t> pid_ = nullptr;
    std::shared_ptr<int64_t> renterId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int64_t> sid_ = nullptr;
    std::shared_ptr<int32_t> silenceDuration_ = nullptr;
    std::shared_ptr<int32_t> speechRate_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> words_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
