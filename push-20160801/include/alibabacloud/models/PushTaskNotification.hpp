// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATION_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASKNOTIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTaskNotificationAndroid.hpp>
#include <alibabacloud/models/PushTaskNotificationHmos.hpp>
#include <alibabacloud/models/PushTaskNotificationIos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTaskNotification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTaskNotification& obj) { 
      DARABONBA_PTR_TO_JSON(Android, android_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Hmos, hmos_);
      DARABONBA_PTR_TO_JSON(Ios, ios_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushTaskNotification& obj) { 
      DARABONBA_PTR_FROM_JSON(Android, android_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Hmos, hmos_);
      DARABONBA_PTR_FROM_JSON(Ios, ios_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushTaskNotification() = default ;
    PushTaskNotification(const PushTaskNotification &) = default ;
    PushTaskNotification(PushTaskNotification &&) = default ;
    PushTaskNotification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTaskNotification() = default ;
    PushTaskNotification& operator=(const PushTaskNotification &) = default ;
    PushTaskNotification& operator=(PushTaskNotification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->android_ == nullptr
        && return this->body_ == nullptr && return this->hmos_ == nullptr && return this->ios_ == nullptr && return this->title_ == nullptr; };
    // android Field Functions 
    bool hasAndroid() const { return this->android_ != nullptr;};
    void deleteAndroid() { this->android_ = nullptr;};
    inline const Models::PushTaskNotificationAndroid & android() const { DARABONBA_PTR_GET_CONST(android_, Models::PushTaskNotificationAndroid) };
    inline Models::PushTaskNotificationAndroid android() { DARABONBA_PTR_GET(android_, Models::PushTaskNotificationAndroid) };
    inline PushTaskNotification& setAndroid(const Models::PushTaskNotificationAndroid & android) { DARABONBA_PTR_SET_VALUE(android_, android) };
    inline PushTaskNotification& setAndroid(Models::PushTaskNotificationAndroid && android) { DARABONBA_PTR_SET_RVALUE(android_, android) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushTaskNotification& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // hmos Field Functions 
    bool hasHmos() const { return this->hmos_ != nullptr;};
    void deleteHmos() { this->hmos_ = nullptr;};
    inline const Models::PushTaskNotificationHmos & hmos() const { DARABONBA_PTR_GET_CONST(hmos_, Models::PushTaskNotificationHmos) };
    inline Models::PushTaskNotificationHmos hmos() { DARABONBA_PTR_GET(hmos_, Models::PushTaskNotificationHmos) };
    inline PushTaskNotification& setHmos(const Models::PushTaskNotificationHmos & hmos) { DARABONBA_PTR_SET_VALUE(hmos_, hmos) };
    inline PushTaskNotification& setHmos(Models::PushTaskNotificationHmos && hmos) { DARABONBA_PTR_SET_RVALUE(hmos_, hmos) };


    // ios Field Functions 
    bool hasIos() const { return this->ios_ != nullptr;};
    void deleteIos() { this->ios_ = nullptr;};
    inline const Models::PushTaskNotificationIos & ios() const { DARABONBA_PTR_GET_CONST(ios_, Models::PushTaskNotificationIos) };
    inline Models::PushTaskNotificationIos ios() { DARABONBA_PTR_GET(ios_, Models::PushTaskNotificationIos) };
    inline PushTaskNotification& setIos(const Models::PushTaskNotificationIos & ios) { DARABONBA_PTR_SET_VALUE(ios_, ios) };
    inline PushTaskNotification& setIos(Models::PushTaskNotificationIos && ios) { DARABONBA_PTR_SET_RVALUE(ios_, ios) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushTaskNotification& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<Models::PushTaskNotificationAndroid> android_ = nullptr;
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationHmos> hmos_ = nullptr;
    std::shared_ptr<Models::PushTaskNotificationIos> ios_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
