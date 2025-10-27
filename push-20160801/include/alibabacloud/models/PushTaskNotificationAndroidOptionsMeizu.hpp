// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSMEIZU_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSMEIZU_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsMeizu : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsMeizu& obj) { 
      DARABONBA_PTR_TO_JSON(NoticeMsgType, noticeMsgType_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsMeizu& obj) { 
      DARABONBA_PTR_FROM_JSON(NoticeMsgType, noticeMsgType_);
    };
    PushTaskNotificationAndroidOptionsMeizu() = default ;
    PushTaskNotificationAndroidOptionsMeizu(const PushTaskNotificationAndroidOptionsMeizu &) = default ;
    PushTaskNotificationAndroidOptionsMeizu(PushTaskNotificationAndroidOptionsMeizu &&) = default ;
    PushTaskNotificationAndroidOptionsMeizu(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsMeizu() = default ;
    PushTaskNotificationAndroidOptionsMeizu& operator=(const PushTaskNotificationAndroidOptionsMeizu &) = default ;
    PushTaskNotificationAndroidOptionsMeizu& operator=(PushTaskNotificationAndroidOptionsMeizu &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noticeMsgType_ == nullptr; };
    // noticeMsgType Field Functions 
    bool hasNoticeMsgType() const { return this->noticeMsgType_ != nullptr;};
    void deleteNoticeMsgType() { this->noticeMsgType_ = nullptr;};
    inline int32_t noticeMsgType() const { DARABONBA_PTR_GET_DEFAULT(noticeMsgType_, 0) };
    inline PushTaskNotificationAndroidOptionsMeizu& setNoticeMsgType(int32_t noticeMsgType) { DARABONBA_PTR_SET_VALUE(noticeMsgType_, noticeMsgType) };


  protected:
    std::shared_ptr<int32_t> noticeMsgType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
