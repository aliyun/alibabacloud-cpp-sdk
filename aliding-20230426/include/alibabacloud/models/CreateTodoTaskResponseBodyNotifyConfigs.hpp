// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYNOTIFYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKRESPONSEBODYNOTIFYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskResponseBodyNotifyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskResponseBodyNotifyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskResponseBodyNotifyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
    };
    CreateTodoTaskResponseBodyNotifyConfigs() = default ;
    CreateTodoTaskResponseBodyNotifyConfigs(const CreateTodoTaskResponseBodyNotifyConfigs &) = default ;
    CreateTodoTaskResponseBodyNotifyConfigs(CreateTodoTaskResponseBodyNotifyConfigs &&) = default ;
    CreateTodoTaskResponseBodyNotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskResponseBodyNotifyConfigs() = default ;
    CreateTodoTaskResponseBodyNotifyConfigs& operator=(const CreateTodoTaskResponseBodyNotifyConfigs &) = default ;
    CreateTodoTaskResponseBodyNotifyConfigs& operator=(CreateTodoTaskResponseBodyNotifyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingNotify_ != nullptr; };
    // dingNotify Field Functions 
    bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
    void deleteDingNotify() { this->dingNotify_ = nullptr;};
    inline string dingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
    inline CreateTodoTaskResponseBodyNotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


  protected:
    std::shared_ptr<string> dingNotify_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
