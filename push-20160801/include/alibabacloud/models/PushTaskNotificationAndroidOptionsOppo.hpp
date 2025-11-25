// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSOPPO_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSOPPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsOppo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsOppo& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteIntentData, deleteIntentData_);
      DARABONBA_PTR_TO_JSON(IntelligentIntent, intelligentIntent_);
      DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_TO_JSON(PrivateContentParameters, privateContentParameters_);
      DARABONBA_PTR_TO_JSON(PrivateMsgTemplateId, privateMsgTemplateId_);
      DARABONBA_PTR_TO_JSON(PrivateTitleParameters, privateTitleParameters_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsOppo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteIntentData, deleteIntentData_);
      DARABONBA_PTR_FROM_JSON(IntelligentIntent, intelligentIntent_);
      DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevel_);
      DARABONBA_PTR_FROM_JSON(PrivateContentParameters, privateContentParameters_);
      DARABONBA_PTR_FROM_JSON(PrivateMsgTemplateId, privateMsgTemplateId_);
      DARABONBA_PTR_FROM_JSON(PrivateTitleParameters, privateTitleParameters_);
    };
    PushTaskNotificationAndroidOptionsOppo() = default ;
    PushTaskNotificationAndroidOptionsOppo(const PushTaskNotificationAndroidOptionsOppo &) = default ;
    PushTaskNotificationAndroidOptionsOppo(PushTaskNotificationAndroidOptionsOppo &&) = default ;
    PushTaskNotificationAndroidOptionsOppo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsOppo() = default ;
    PushTaskNotificationAndroidOptionsOppo& operator=(const PushTaskNotificationAndroidOptionsOppo &) = default ;
    PushTaskNotificationAndroidOptionsOppo& operator=(PushTaskNotificationAndroidOptionsOppo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->deleteIntentData_ == nullptr && return this->intelligentIntent_ == nullptr && return this->notifyLevel_ == nullptr && return this->privateContentParameters_ == nullptr && return this->privateMsgTemplateId_ == nullptr
        && return this->privateTitleParameters_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteIntentData Field Functions 
    bool hasDeleteIntentData() const { return this->deleteIntentData_ != nullptr;};
    void deleteDeleteIntentData() { this->deleteIntentData_ = nullptr;};
    inline string deleteIntentData() const { DARABONBA_PTR_GET_DEFAULT(deleteIntentData_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setDeleteIntentData(string deleteIntentData) { DARABONBA_PTR_SET_VALUE(deleteIntentData_, deleteIntentData) };


    // intelligentIntent Field Functions 
    bool hasIntelligentIntent() const { return this->intelligentIntent_ != nullptr;};
    void deleteIntelligentIntent() { this->intelligentIntent_ = nullptr;};
    inline string intelligentIntent() const { DARABONBA_PTR_GET_DEFAULT(intelligentIntent_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setIntelligentIntent(string intelligentIntent) { DARABONBA_PTR_SET_VALUE(intelligentIntent_, intelligentIntent) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline int64_t notifyLevel() const { DARABONBA_PTR_GET_DEFAULT(notifyLevel_, 0L) };
    inline PushTaskNotificationAndroidOptionsOppo& setNotifyLevel(int64_t notifyLevel) { DARABONBA_PTR_SET_VALUE(notifyLevel_, notifyLevel) };


    // privateContentParameters Field Functions 
    bool hasPrivateContentParameters() const { return this->privateContentParameters_ != nullptr;};
    void deletePrivateContentParameters() { this->privateContentParameters_ = nullptr;};
    inline string privateContentParameters() const { DARABONBA_PTR_GET_DEFAULT(privateContentParameters_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setPrivateContentParameters(string privateContentParameters) { DARABONBA_PTR_SET_VALUE(privateContentParameters_, privateContentParameters) };


    // privateMsgTemplateId Field Functions 
    bool hasPrivateMsgTemplateId() const { return this->privateMsgTemplateId_ != nullptr;};
    void deletePrivateMsgTemplateId() { this->privateMsgTemplateId_ = nullptr;};
    inline string privateMsgTemplateId() const { DARABONBA_PTR_GET_DEFAULT(privateMsgTemplateId_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setPrivateMsgTemplateId(string privateMsgTemplateId) { DARABONBA_PTR_SET_VALUE(privateMsgTemplateId_, privateMsgTemplateId) };


    // privateTitleParameters Field Functions 
    bool hasPrivateTitleParameters() const { return this->privateTitleParameters_ != nullptr;};
    void deletePrivateTitleParameters() { this->privateTitleParameters_ = nullptr;};
    inline string privateTitleParameters() const { DARABONBA_PTR_GET_DEFAULT(privateTitleParameters_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setPrivateTitleParameters(string privateTitleParameters) { DARABONBA_PTR_SET_VALUE(privateTitleParameters_, privateTitleParameters) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> deleteIntentData_ = nullptr;
    std::shared_ptr<string> intelligentIntent_ = nullptr;
    std::shared_ptr<int64_t> notifyLevel_ = nullptr;
    std::shared_ptr<string> privateContentParameters_ = nullptr;
    std::shared_ptr<string> privateMsgTemplateId_ = nullptr;
    std::shared_ptr<string> privateTitleParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
