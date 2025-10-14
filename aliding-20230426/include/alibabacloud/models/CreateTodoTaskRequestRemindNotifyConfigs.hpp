// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTREMINDNOTIFYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTREMINDNOTIFYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequestRemindNotifyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequestRemindNotifyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
      DARABONBA_PTR_TO_JSON(sendTodoApn, sendTodoApn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequestRemindNotifyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
      DARABONBA_PTR_FROM_JSON(sendTodoApn, sendTodoApn_);
    };
    CreateTodoTaskRequestRemindNotifyConfigs() = default ;
    CreateTodoTaskRequestRemindNotifyConfigs(const CreateTodoTaskRequestRemindNotifyConfigs &) = default ;
    CreateTodoTaskRequestRemindNotifyConfigs(CreateTodoTaskRequestRemindNotifyConfigs &&) = default ;
    CreateTodoTaskRequestRemindNotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequestRemindNotifyConfigs() = default ;
    CreateTodoTaskRequestRemindNotifyConfigs& operator=(const CreateTodoTaskRequestRemindNotifyConfigs &) = default ;
    CreateTodoTaskRequestRemindNotifyConfigs& operator=(CreateTodoTaskRequestRemindNotifyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingNotify_ == nullptr
        && return this->sendTodoApn_ == nullptr; };
    // dingNotify Field Functions 
    bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
    void deleteDingNotify() { this->dingNotify_ = nullptr;};
    inline string dingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
    inline CreateTodoTaskRequestRemindNotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


    // sendTodoApn Field Functions 
    bool hasSendTodoApn() const { return this->sendTodoApn_ != nullptr;};
    void deleteSendTodoApn() { this->sendTodoApn_ = nullptr;};
    inline string sendTodoApn() const { DARABONBA_PTR_GET_DEFAULT(sendTodoApn_, "") };
    inline CreateTodoTaskRequestRemindNotifyConfigs& setSendTodoApn(string sendTodoApn) { DARABONBA_PTR_SET_VALUE(sendTodoApn_, sendTodoApn) };


  protected:
    std::shared_ptr<string> dingNotify_ = nullptr;
    std::shared_ptr<string> sendTodoApn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
