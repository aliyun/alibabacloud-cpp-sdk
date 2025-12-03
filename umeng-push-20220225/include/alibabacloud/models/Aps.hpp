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
      DARABONBA_PTR_TO_JSON(badge, badge_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(contentAvailable, contentAvailable_);
      DARABONBA_PTR_TO_JSON(interruptionLevel, interruptionLevel_);
      DARABONBA_PTR_TO_JSON(sound, sound_);
      DARABONBA_PTR_TO_JSON(threadID, threadID_);
    };
    friend void from_json(const Darabonba::Json& j, Aps& obj) { 
      DARABONBA_PTR_FROM_JSON(alert, alert_);
      DARABONBA_PTR_FROM_JSON(badge, badge_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(contentAvailable, contentAvailable_);
      DARABONBA_PTR_FROM_JSON(interruptionLevel, interruptionLevel_);
      DARABONBA_PTR_FROM_JSON(sound, sound_);
      DARABONBA_PTR_FROM_JSON(threadID, threadID_);
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
        && return this->badge_ == nullptr && return this->category_ == nullptr && return this->contentAvailable_ == nullptr && return this->interruptionLevel_ == nullptr && return this->sound_ == nullptr
        && return this->threadID_ == nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline const Alert & alert() const { DARABONBA_PTR_GET_CONST(alert_, Alert) };
    inline Alert alert() { DARABONBA_PTR_GET(alert_, Alert) };
    inline Aps& setAlert(const Alert & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
    inline Aps& setAlert(Alert && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


    // badge Field Functions 
    bool hasBadge() const { return this->badge_ != nullptr;};
    void deleteBadge() { this->badge_ = nullptr;};
    inline string badge() const { DARABONBA_PTR_GET_DEFAULT(badge_, "") };
    inline Aps& setBadge(string badge) { DARABONBA_PTR_SET_VALUE(badge_, badge) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline Aps& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contentAvailable Field Functions 
    bool hasContentAvailable() const { return this->contentAvailable_ != nullptr;};
    void deleteContentAvailable() { this->contentAvailable_ = nullptr;};
    inline int32_t contentAvailable() const { DARABONBA_PTR_GET_DEFAULT(contentAvailable_, 0) };
    inline Aps& setContentAvailable(int32_t contentAvailable) { DARABONBA_PTR_SET_VALUE(contentAvailable_, contentAvailable) };


    // interruptionLevel Field Functions 
    bool hasInterruptionLevel() const { return this->interruptionLevel_ != nullptr;};
    void deleteInterruptionLevel() { this->interruptionLevel_ = nullptr;};
    inline string interruptionLevel() const { DARABONBA_PTR_GET_DEFAULT(interruptionLevel_, "") };
    inline Aps& setInterruptionLevel(string interruptionLevel) { DARABONBA_PTR_SET_VALUE(interruptionLevel_, interruptionLevel) };


    // sound Field Functions 
    bool hasSound() const { return this->sound_ != nullptr;};
    void deleteSound() { this->sound_ = nullptr;};
    inline string sound() const { DARABONBA_PTR_GET_DEFAULT(sound_, "") };
    inline Aps& setSound(string sound) { DARABONBA_PTR_SET_VALUE(sound_, sound) };


    // threadID Field Functions 
    bool hasThreadID() const { return this->threadID_ != nullptr;};
    void deleteThreadID() { this->threadID_ = nullptr;};
    inline string threadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, "") };
    inline Aps& setThreadID(string threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


  protected:
    std::shared_ptr<Alert> alert_ = nullptr;
    std::shared_ptr<string> badge_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int32_t> contentAvailable_ = nullptr;
    std::shared_ptr<string> interruptionLevel_ = nullptr;
    std::shared_ptr<string> sound_ = nullptr;
    std::shared_ptr<string> threadID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
