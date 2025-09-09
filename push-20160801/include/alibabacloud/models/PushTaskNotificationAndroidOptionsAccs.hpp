// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSACCS_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSACCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsAccs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsAccs& obj) { 
      DARABONBA_PTR_TO_JSON(CustomStyle, customStyle_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(OpenActivity, openActivity_);
      DARABONBA_PTR_TO_JSON(OpenType, openType_);
      DARABONBA_PTR_TO_JSON(OpenUrl, openUrl_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsAccs& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomStyle, customStyle_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(OpenActivity, openActivity_);
      DARABONBA_PTR_FROM_JSON(OpenType, openType_);
      DARABONBA_PTR_FROM_JSON(OpenUrl, openUrl_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
    };
    PushTaskNotificationAndroidOptionsAccs() = default ;
    PushTaskNotificationAndroidOptionsAccs(const PushTaskNotificationAndroidOptionsAccs &) = default ;
    PushTaskNotificationAndroidOptionsAccs(PushTaskNotificationAndroidOptionsAccs &&) = default ;
    PushTaskNotificationAndroidOptionsAccs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsAccs() = default ;
    PushTaskNotificationAndroidOptionsAccs& operator=(const PushTaskNotificationAndroidOptionsAccs &) = default ;
    PushTaskNotificationAndroidOptionsAccs& operator=(PushTaskNotificationAndroidOptionsAccs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customStyle_ != nullptr
        && this->notifyType_ != nullptr && this->openActivity_ != nullptr && this->openType_ != nullptr && this->openUrl_ != nullptr && this->priority_ != nullptr
        && this->threadId_ != nullptr; };
    // customStyle Field Functions 
    bool hasCustomStyle() const { return this->customStyle_ != nullptr;};
    void deleteCustomStyle() { this->customStyle_ = nullptr;};
    inline int32_t customStyle() const { DARABONBA_PTR_GET_DEFAULT(customStyle_, 0) };
    inline PushTaskNotificationAndroidOptionsAccs& setCustomStyle(int32_t customStyle) { DARABONBA_PTR_SET_VALUE(customStyle_, customStyle) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline PushTaskNotificationAndroidOptionsAccs& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // openActivity Field Functions 
    bool hasOpenActivity() const { return this->openActivity_ != nullptr;};
    void deleteOpenActivity() { this->openActivity_ = nullptr;};
    inline string openActivity() const { DARABONBA_PTR_GET_DEFAULT(openActivity_, "") };
    inline PushTaskNotificationAndroidOptionsAccs& setOpenActivity(string openActivity) { DARABONBA_PTR_SET_VALUE(openActivity_, openActivity) };


    // openType Field Functions 
    bool hasOpenType() const { return this->openType_ != nullptr;};
    void deleteOpenType() { this->openType_ = nullptr;};
    inline string openType() const { DARABONBA_PTR_GET_DEFAULT(openType_, "") };
    inline PushTaskNotificationAndroidOptionsAccs& setOpenType(string openType) { DARABONBA_PTR_SET_VALUE(openType_, openType) };


    // openUrl Field Functions 
    bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
    void deleteOpenUrl() { this->openUrl_ = nullptr;};
    inline string openUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
    inline PushTaskNotificationAndroidOptionsAccs& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline PushTaskNotificationAndroidOptionsAccs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline PushTaskNotificationAndroidOptionsAccs& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<int32_t> customStyle_ = nullptr;
    std::shared_ptr<string> notifyType_ = nullptr;
    std::shared_ptr<string> openActivity_ = nullptr;
    std::shared_ptr<string> openType_ = nullptr;
    std::shared_ptr<string> openUrl_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
