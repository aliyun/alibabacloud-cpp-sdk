// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUESTNOTIFYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUESTNOTIFYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreatePersonalTodoTaskRequestNotifyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalTodoTaskRequestNotifyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DingNotify, dingNotify_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalTodoTaskRequestNotifyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DingNotify, dingNotify_);
    };
    CreatePersonalTodoTaskRequestNotifyConfigs() = default ;
    CreatePersonalTodoTaskRequestNotifyConfigs(const CreatePersonalTodoTaskRequestNotifyConfigs &) = default ;
    CreatePersonalTodoTaskRequestNotifyConfigs(CreatePersonalTodoTaskRequestNotifyConfigs &&) = default ;
    CreatePersonalTodoTaskRequestNotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalTodoTaskRequestNotifyConfigs() = default ;
    CreatePersonalTodoTaskRequestNotifyConfigs& operator=(const CreatePersonalTodoTaskRequestNotifyConfigs &) = default ;
    CreatePersonalTodoTaskRequestNotifyConfigs& operator=(CreatePersonalTodoTaskRequestNotifyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingNotify_ != nullptr; };
    // dingNotify Field Functions 
    bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
    void deleteDingNotify() { this->dingNotify_ = nullptr;};
    inline string dingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
    inline CreatePersonalTodoTaskRequestNotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


  protected:
    std::shared_ptr<string> dingNotify_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
