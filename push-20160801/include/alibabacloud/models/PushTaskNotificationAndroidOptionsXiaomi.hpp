// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSXIAOMI_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATIONANDROIDOPTIONSXIAOMI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotificationAndroidOptionsXiaomi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotificationAndroidOptionsXiaomi& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotificationAndroidOptionsXiaomi& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
    };
    PushTaskNotificationAndroidOptionsXiaomi() = default ;
    PushTaskNotificationAndroidOptionsXiaomi(const PushTaskNotificationAndroidOptionsXiaomi &) = default ;
    PushTaskNotificationAndroidOptionsXiaomi(PushTaskNotificationAndroidOptionsXiaomi &&) = default ;
    PushTaskNotificationAndroidOptionsXiaomi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotificationAndroidOptionsXiaomi() = default ;
    PushTaskNotificationAndroidOptionsXiaomi& operator=(const PushTaskNotificationAndroidOptionsXiaomi &) = default ;
    PushTaskNotificationAndroidOptionsXiaomi& operator=(PushTaskNotificationAndroidOptionsXiaomi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline PushTaskNotificationAndroidOptionsXiaomi& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
