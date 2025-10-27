// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONIOSLIVEACTIVITY_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONIOSLIVEACTIVITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationIosLiveActivity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationIosLiveActivity& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AttributesType, attributesType_);
      DARABONBA_PTR_TO_JSON(ContentState, contentState_);
      DARABONBA_PTR_TO_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(StaleDate, staleDate_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationIosLiveActivity& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AttributesType, attributesType_);
      DARABONBA_PTR_FROM_JSON(ContentState, contentState_);
      DARABONBA_PTR_FROM_JSON(DismissalDate, dismissalDate_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(StaleDate, staleDate_);
    };
    PushTaskNotificationIosLiveActivity() = default ;
    PushTaskNotificationIosLiveActivity(const PushTaskNotificationIosLiveActivity &) = default ;
    PushTaskNotificationIosLiveActivity(PushTaskNotificationIosLiveActivity &&) = default ;
    PushTaskNotificationIosLiveActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationIosLiveActivity() = default ;
    PushTaskNotificationIosLiveActivity& operator=(const PushTaskNotificationIosLiveActivity &) = default ;
    PushTaskNotificationIosLiveActivity& operator=(PushTaskNotificationIosLiveActivity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->attributesType_ == nullptr && return this->contentState_ == nullptr && return this->dismissalDate_ == nullptr && return this->event_ == nullptr && return this->id_ == nullptr
        && return this->staleDate_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline PushTaskNotificationIosLiveActivity& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // attributesType Field Functions 
    bool hasAttributesType() const { return this->attributesType_ != nullptr;};
    void deleteAttributesType() { this->attributesType_ = nullptr;};
    inline string attributesType() const { DARABONBA_PTR_GET_DEFAULT(attributesType_, "") };
    inline PushTaskNotificationIosLiveActivity& setAttributesType(string attributesType) { DARABONBA_PTR_SET_VALUE(attributesType_, attributesType) };


    // contentState Field Functions 
    bool hasContentState() const { return this->contentState_ != nullptr;};
    void deleteContentState() { this->contentState_ = nullptr;};
    inline string contentState() const { DARABONBA_PTR_GET_DEFAULT(contentState_, "") };
    inline PushTaskNotificationIosLiveActivity& setContentState(string contentState) { DARABONBA_PTR_SET_VALUE(contentState_, contentState) };


    // dismissalDate Field Functions 
    bool hasDismissalDate() const { return this->dismissalDate_ != nullptr;};
    void deleteDismissalDate() { this->dismissalDate_ = nullptr;};
    inline int64_t dismissalDate() const { DARABONBA_PTR_GET_DEFAULT(dismissalDate_, 0L) };
    inline PushTaskNotificationIosLiveActivity& setDismissalDate(int64_t dismissalDate) { DARABONBA_PTR_SET_VALUE(dismissalDate_, dismissalDate) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline PushTaskNotificationIosLiveActivity& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PushTaskNotificationIosLiveActivity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // staleDate Field Functions 
    bool hasStaleDate() const { return this->staleDate_ != nullptr;};
    void deleteStaleDate() { this->staleDate_ = nullptr;};
    inline int64_t staleDate() const { DARABONBA_PTR_GET_DEFAULT(staleDate_, 0L) };
    inline PushTaskNotificationIosLiveActivity& setStaleDate(int64_t staleDate) { DARABONBA_PTR_SET_VALUE(staleDate_, staleDate) };


  protected:
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<string> attributesType_ = nullptr;
    std::shared_ptr<string> contentState_ = nullptr;
    std::shared_ptr<int64_t> dismissalDate_ = nullptr;
    std::shared_ptr<string> event_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> staleDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
