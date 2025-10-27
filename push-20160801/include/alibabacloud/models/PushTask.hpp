// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHTASK_HPP_
#define ALIBABACLOUD_MODELS_PUSHTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushTaskMessage.hpp>
#include <alibabacloud/models/PushTaskNotification.hpp>
#include <alibabacloud/models/PushTaskOptions.hpp>
#include <alibabacloud/models/PushTaskTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushTask& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, PushTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    PushTask() = default ;
    PushTask(const PushTask &) = default ;
    PushTask(PushTask &&) = default ;
    PushTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushTask() = default ;
    PushTask& operator=(const PushTask &) = default ;
    PushTask& operator=(PushTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->message_ == nullptr && return this->notification_ == nullptr && return this->options_ == nullptr && return this->target_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline PushTask& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const PushTaskMessage & message() const { DARABONBA_PTR_GET_CONST(message_, PushTaskMessage) };
    inline PushTaskMessage message() { DARABONBA_PTR_GET(message_, PushTaskMessage) };
    inline PushTask& setMessage(const PushTaskMessage & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline PushTask& setMessage(PushTaskMessage && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const PushTaskNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, PushTaskNotification) };
    inline PushTaskNotification notification() { DARABONBA_PTR_GET(notification_, PushTaskNotification) };
    inline PushTask& setNotification(const PushTaskNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline PushTask& setNotification(PushTaskNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const PushTaskOptions & options() const { DARABONBA_PTR_GET_CONST(options_, PushTaskOptions) };
    inline PushTaskOptions options() { DARABONBA_PTR_GET(options_, PushTaskOptions) };
    inline PushTask& setOptions(const PushTaskOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline PushTask& setOptions(PushTaskOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const PushTaskTarget & target() const { DARABONBA_PTR_GET_CONST(target_, PushTaskTarget) };
    inline PushTaskTarget target() { DARABONBA_PTR_GET(target_, PushTaskTarget) };
    inline PushTask& setTarget(const PushTaskTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline PushTask& setTarget(PushTaskTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<PushTaskMessage> message_ = nullptr;
    std::shared_ptr<PushTaskNotification> notification_ = nullptr;
    std::shared_ptr<PushTaskOptions> options_ = nullptr;
    std::shared_ptr<PushTaskTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
