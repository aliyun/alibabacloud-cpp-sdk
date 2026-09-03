// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APS_HPP_
#define ALIBABACLOUD_MODELS_APS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Alert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class Aps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Aps& obj) { 
      DARABONBA_PTR_TO_JSON(alert, alert_);
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(attributesType, attributesType_);
      DARABONBA_PTR_TO_JSON(badge, badge_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(contentAvailable, contentAvailable_);
      DARABONBA_PTR_TO_JSON(contentState, contentState_);
      DARABONBA_PTR_TO_JSON(dismissalDate, dismissalDate_);
      DARABONBA_PTR_TO_JSON(event, event_);
      DARABONBA_PTR_TO_JSON(interruptionLevel, interruptionLevel_);
      DARABONBA_PTR_TO_JSON(mutableContent, mutableContent_);
      DARABONBA_PTR_TO_JSON(sound, sound_);
      DARABONBA_PTR_TO_JSON(threadID, threadID_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, Aps& obj) { 
      DARABONBA_PTR_FROM_JSON(alert, alert_);
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(attributesType, attributesType_);
      DARABONBA_PTR_FROM_JSON(badge, badge_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(contentAvailable, contentAvailable_);
      DARABONBA_PTR_FROM_JSON(contentState, contentState_);
      DARABONBA_PTR_FROM_JSON(dismissalDate, dismissalDate_);
      DARABONBA_PTR_FROM_JSON(event, event_);
      DARABONBA_PTR_FROM_JSON(interruptionLevel, interruptionLevel_);
      DARABONBA_PTR_FROM_JSON(mutableContent, mutableContent_);
      DARABONBA_PTR_FROM_JSON(sound, sound_);
      DARABONBA_PTR_FROM_JSON(threadID, threadID_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    Aps() = default ;
    Aps(const Aps &) = default ;
    Aps(Aps &&) = default ;
    Aps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Aps() = default ;
    Aps& operator=(const Aps &) = default ;
    Aps& operator=(Aps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alert_ == nullptr
        && this->attributes_ == nullptr && this->attributesType_ == nullptr && this->badge_ == nullptr && this->category_ == nullptr && this->contentAvailable_ == nullptr
        && this->contentState_ == nullptr && this->dismissalDate_ == nullptr && this->event_ == nullptr && this->interruptionLevel_ == nullptr && this->mutableContent_ == nullptr
        && this->sound_ == nullptr && this->threadID_ == nullptr && this->timestamp_ == nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline const Alert & getAlert() const { DARABONBA_PTR_GET_CONST(alert_, Alert) };
    inline Alert getAlert() { DARABONBA_PTR_GET(alert_, Alert) };
    inline Aps& setAlert(const Alert & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
    inline Aps& setAlert(Alert && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline Aps& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // attributesType Field Functions 
    bool hasAttributesType() const { return this->attributesType_ != nullptr;};
    void deleteAttributesType() { this->attributesType_ = nullptr;};
    inline string getAttributesType() const { DARABONBA_PTR_GET_DEFAULT(attributesType_, "") };
    inline Aps& setAttributesType(string attributesType) { DARABONBA_PTR_SET_VALUE(attributesType_, attributesType) };


    // badge Field Functions 
    bool hasBadge() const { return this->badge_ != nullptr;};
    void deleteBadge() { this->badge_ = nullptr;};
    inline string getBadge() const { DARABONBA_PTR_GET_DEFAULT(badge_, "") };
    inline Aps& setBadge(string badge) { DARABONBA_PTR_SET_VALUE(badge_, badge) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline Aps& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contentAvailable Field Functions 
    bool hasContentAvailable() const { return this->contentAvailable_ != nullptr;};
    void deleteContentAvailable() { this->contentAvailable_ = nullptr;};
    inline int32_t getContentAvailable() const { DARABONBA_PTR_GET_DEFAULT(contentAvailable_, 0) };
    inline Aps& setContentAvailable(int32_t contentAvailable) { DARABONBA_PTR_SET_VALUE(contentAvailable_, contentAvailable) };


    // contentState Field Functions 
    bool hasContentState() const { return this->contentState_ != nullptr;};
    void deleteContentState() { this->contentState_ = nullptr;};
    inline string getContentState() const { DARABONBA_PTR_GET_DEFAULT(contentState_, "") };
    inline Aps& setContentState(string contentState) { DARABONBA_PTR_SET_VALUE(contentState_, contentState) };


    // dismissalDate Field Functions 
    bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
    void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
    inline int32_t getDismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0) };
    inline Aps& setDismissalDate(int32_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline Aps& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // interruptionLevel Field Functions 
    bool hasInterruptionLevel() const { return this->interruptionLevel_ != nullptr;};
    void deleteInterruptionLevel() { this->interruptionLevel_ = nullptr;};
    inline string getInterruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(interruptionLevel_, "") };
    inline Aps& setInterruptionLevel(string interruptionLevel) { DARABONBA_PTR_SET_VALUE(interruptionLevel_, interruptionLevel) };


    // mutableContent Field Functions 
    bool hasMutableContent() const { return this->mutableContent_ != nullptr;};
    void deleteMutableContent() { this->mutableContent_ = nullptr;};
    inline int32_t getMutableContent() const { DARABONBA_PTR_GET_DEFAULT(mutableContent_, 0) };
    inline Aps& setMutableContent(int32_t mutableContent) { DARABONBA_PTR_SET_VALUE(mutableContent_, mutableContent) };


    // sound Field Functions 
    bool hasSound() const { return this->sound_ != nullptr;};
    void deleteSound() { this->sound_ = nullptr;};
    inline string getSound() const { DARABONBA_PTR_GET_DEFAULT(sound_, "") };
    inline Aps& setSound(string sound) { DARABONBA_PTR_SET_VALUE(sound_, sound) };


    // threadID Field Functions 
    bool hasThreadID() const { return this->threadID_ != nullptr;};
    void deleteThreadID() { this->threadID_ = nullptr;};
    inline string getThreadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, "") };
    inline Aps& setThreadID(string threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int32_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0) };
    inline Aps& setTimestamp(int32_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<Alert> alert_ {};
    shared_ptr<string> attributes_ {};
    shared_ptr<string> attributesType_ {};
    shared_ptr<string> badge_ {};
    shared_ptr<string> category_ {};
    shared_ptr<int32_t> contentAvailable_ {};
    shared_ptr<string> contentState_ {};
    shared_ptr<int32_t> dismissalDate_ {};
    shared_ptr<string> event_ {};
    shared_ptr<string> interruptionLevel_ {};
    shared_ptr<int32_t> mutableContent_ {};
    shared_ptr<string> sound_ {};
    shared_ptr<string> threadID_ {};
    shared_ptr<int32_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
