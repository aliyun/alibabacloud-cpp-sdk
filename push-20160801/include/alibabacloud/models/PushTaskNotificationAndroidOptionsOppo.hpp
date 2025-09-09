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
      DARABONBA_PTR_TO_JSON(NotifyLevel, notifyLevel_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsOppo& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(NotifyLevel, notifyLevel_);
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
    virtual bool empty() const override { this->category_ != nullptr
        && this->notifyLevel_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline PushTaskNotificationAndroidOptionsOppo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // notifyLevel Field Functions 
    bool hasNotifyLevel() const { return this->notifyLevel_ != nullptr;};
    void deleteNotifyLevel() { this->notifyLevel_ = nullptr;};
    inline int64_t notifyLevel() const { DARABONBA_PTR_GET_DEFAULT(notifyLevel_, 0L) };
    inline PushTaskNotificationAndroidOptionsOppo& setNotifyLevel(int64_t notifyLevel) { DARABONBA_PTR_SET_VALUE(notifyLevel_, notifyLevel) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<int64_t> notifyLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
